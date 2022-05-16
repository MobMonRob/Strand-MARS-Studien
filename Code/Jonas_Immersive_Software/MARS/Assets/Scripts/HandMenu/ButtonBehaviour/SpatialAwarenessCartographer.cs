using Microsoft.MixedReality.SceneUnderstanding;
using System;
using System.Collections;
using System.IO;
using System.Text;
using UnityEngine;

/*
#if WINDOWS_UWP
    using WindowsStorage = global::Windows.Storage;
#endif*/


public class SpatialAwarenessCartographer : MonoBehaviour
{
    /*[Header("Data Loader Mode")]
    [Tooltip("When enabled, the scene will be queried from a device (e.g Hololens). Otherwise, a previously saved, serialized scene will be loaded and served from your PC.")]*/
    public bool QuerySceneFromDevice = true;
    private byte[] SceneUnderstandingData = null;

    /*[Header("Render Colors")]
    [Tooltip("Colors for the Scene Understanding Background objects")]
    public Color ColorForBackgroundObjects = new Color(0.953f, 0.475f, 0.875f, 1.0f);
    [Tooltip("Colors for the Scene Understanding Wall objects")]
    public Color ColorForWallObjects = new Color(0.953f, 0.494f, 0.475f, 1.0f);
    [Tooltip("Colors for the Scene Understanding Floor objects")]
    public Color ColorForFloorObjects = new Color(0.733f, 0.953f, 0.475f, 1.0f);
    [Tooltip("Colors for the Scene Understanding Ceiling objects")]
    public Color ColorForCeilingObjects = new Color(0.475f, 0.596f, 0.953f, 1.0f);
    [Tooltip("Colors for the Scene Understanding Platform objects")]
    public Color ColorForPlatformsObjects = new Color(0.204f, 0.792f, 0.714f, 1.0f);
    [Tooltip("Colors for the Scene Understanding Unknown objects")]
    public Color ColorForUnknownObjects = new Color(1.0f, 1.0f, 1.0f, 1.0f);
    [Tooltip("Colors for the Scene Understanding Inferred objects")]
    public Color ColorForInferredObjects = new Color(0.5f, 0.5f, 0.5f, 1.0f);
    [Tooltip("Colors for the World mesh")]
    public Color ColorForWorldObjects = new Color(0.0f, 1.0f, 1.0f, 1.0f);*/


    /*IEnumerator Start()
    {
        if (Application.isEditor)
        {
            Debug.LogError("SceneUnderstandingManager.Start: Running in editor while quering scene from a device is not supported.\n" +
                           "To run on editor disable the 'QuerySceneFromDevice' Flag in the SceneUnderstandingManager Component");
            yield break;
        }

        if (!SceneObserver.IsSupported())
        {
            Debug.LogError("SceneUnderstandingManager.Start: Scene Understanding not supported.");
            yield break;
        }

        SceneObserverAccessStatus access = SceneObserver.RequestAccessAsync().GetAwaiter().GetResult();
        if (access != SceneObserverAccessStatus.Allowed)
        {
            Debug.LogError("SceneUnderstandingManager.Start: Access to Scene Understanding has been denied.\n" +
                           "Reason: " + access);
            yield break;
        }

        while (this.isActiveAndEnabled)
        {
            yield return new WaitForSeconds(1.25f);
            this.ComputeSceneUnderstandingData();
        }
    }*/

    public void SaveOperationAreaMesh()
    {
        try
        {
            //this.SaveBytesToDiskAsync();
            Debug.LogWarning("Error: Not Implemented.");
        }
        catch (Exception ex)
        {
            Debug.LogException(ex);
            Debug.LogError(ex.StackTrace);
            throw ex;
        }

        /*try
        {

            // Query Settings
            SceneQuerySettings querySettings;

            querySettings.EnableSceneObjectQuads = true;                                       // Requests that the scene updates quads.
            querySettings.EnableSceneObjectMeshes = true;                                      // Requests that the scene updates watertight mesh data.
            querySettings.EnableOnlyObservedSceneObjects = false;                              // Do not explicitly turn off quad inference.
            querySettings.EnableWorldMesh = true;                                              // Requests a static version of the spatial mapping mesh.
            querySettings.RequestedMeshLevelOfDetail = SceneMeshLevelOfDetail.Unlimited;

            // Compute scene serialized in an byte array
            SceneBuffer newSceneBuffer = SceneObserver.ComputeSerializedAsync(querySettings, 10.0f).GetAwaiter().GetResult();

            // If we want to use it immediately we can de-serialize the scene ourselves
            byte[] newSceneData = new byte[newSceneBuffer.Size];
            newSceneBuffer.GetData(newSceneData);
            Scene mySceneDeSerialized = Scene.Deserialize(newSceneData);

            this.SaveObjsToDiskAsync(mySceneDeSerialized).Start();
        } catch (Exception ex)
        {
            Debug.LogException(ex);
        }*/
        /*// Get the first Mesh Observer available, generally we have only one registered
        var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();

        // Loop through all known Meshes
        foreach (SpatialAwarenessMeshObject meshObject in observer.Meshes.Values)
        {
            Mesh mesh = meshObject.Filter.mesh;
            // Do something with the Mesh object
        }*/

        //SceneBuffer serializedScene = SceneUnterstanding.SceneObserver.ComputeSerializedAsync(querySettings, boundingSphereRadiusInMeters).GetAwaiter().GetResult();
    }

    /*
    private Color? GetColor(SceneObjectKind kind)
    {
        switch (kind)
        {
            case SceneObjectKind.Background:
                return ColorForBackgroundObjects;
            case SceneObjectKind.Wall:
                return ColorForWallObjects;
            case SceneObjectKind.Floor:
                return ColorForFloorObjects;
            case SceneObjectKind.Ceiling:
                return ColorForCeilingObjects;
            case SceneObjectKind.Platform:
                return ColorForPlatformsObjects;
            case SceneObjectKind.Unknown:
                return ColorForUnknownObjects;
            case SceneObjectKind.CompletelyInferred:
                return ColorForInferredObjects;
            case SceneObjectKind.World:
                return ColorForWorldObjects;
            default:
                return null;
        }
    }

    */

    private void ComputeSceneUnderstandingData()
    {

        try
        {
            // Query Settings
            SceneQuerySettings querySettings;

            querySettings.EnableSceneObjectQuads = true;                                       // Requests that the scene updates quads.
            querySettings.EnableSceneObjectMeshes = true;                                      // Requests that the scene updates watertight mesh data.
            querySettings.EnableOnlyObservedSceneObjects = false;                              // Do not explicitly turn off quad inference.
            querySettings.EnableWorldMesh = true;                                              // Requests a static version of the spatial mapping mesh.
            querySettings.RequestedMeshLevelOfDetail = SceneMeshLevelOfDetail.Unlimited;

            // Compute scene serialized in an byte array
            SceneBuffer newSceneBuffer = SceneObserver.ComputeSerializedAsync(querySettings, 10.0f).GetAwaiter().GetResult();

            // If we want to use it immediately we can de-serialize the scene ourselves
            SceneUnderstandingData = new byte[newSceneBuffer.Size];
            newSceneBuffer.GetData(SceneUnderstandingData);
        }
        catch (Exception e)
        {
            Debug.LogError(e.Message);
        }
    }

    private byte[] GetLatestSceneBytes()
    {
        byte[] sceneBytes = null;

        if (SceneUnderstandingData != null)
        {
            int sceneLength = SceneUnderstandingData.Length;
            sceneBytes = new byte[sceneLength];

            Array.Copy(SceneUnderstandingData, sceneBytes, sceneLength);
        }

        return sceneBytes;
    }
/*
#pragma warning disable CS1998
    public async void SaveBytesToDiskAsync()
#pragma warning restore CS1998
    {
        DateTime currentDate = DateTime.Now;
        int year = currentDate.Year;
        int month = currentDate.Month;
        int day = currentDate.Day;
        int hour = currentDate.Hour;
        int min = currentDate.Minute;
        int sec = currentDate.Second;

        if (QuerySceneFromDevice)
        {
            string fileName = string.Format("SU_{0}-{1}-{2}_{3}-{4}-{5}.bytes",
            year, month, day, hour, min, sec);

            byte[] OnDeviceBytes = this.GetLatestSceneBytes();

#if WINDOWS_UWP
            var folder = WindowsStorage.ApplicationData.Current.LocalFolder;
            var file = await folder.CreateFileAsync(fileName, WindowsStorage.CreationCollisionOption.GenerateUniqueName);
            await WindowsStorage.FileIO.WriteBytesAsync(file, OnDeviceBytes);
#else
            Debug.LogWarning("Only available in Universal Windows Applications (UWP).");
#endif
            /*string path = Path.Combine(Application.persistentDataPath, fileName);
            using (var file = new FileStream(path, FileMode.Create, FileAccess.Write, FileShare.Write))
            {
                using (var writer = new StreamWriter(file, Encoding.UTF8))
                {
                    writer.Write(SceneUnderstandingData);
                }
            }*//*
        }
    }*/

    /*
    public async Task SaveObjsToDiskAsync()
    {
        DateTime currentDate = DateTime.Now;
        int year = currentDate.Year;
        int month = currentDate.Month;
        int day = currentDate.Day;
        int hour = currentDate.Hour;
        int min = currentDate.Minute;
        int sec = currentDate.Second;

        // List of all SceneObjectKind enum values.
        List<SceneObjectKind> sceneObjectKinds = new List<SceneObjectKind>();
        sceneObjectKinds.Add(SceneObjectKind.Background);
        sceneObjectKinds.Add(SceneObjectKind.Ceiling);
        sceneObjectKinds.Add(SceneObjectKind.CompletelyInferred);
        sceneObjectKinds.Add(SceneObjectKind.Floor);
        sceneObjectKinds.Add(SceneObjectKind.Platform);
        sceneObjectKinds.Add(SceneObjectKind.Unknown);
        sceneObjectKinds.Add(SceneObjectKind.Wall);
        sceneObjectKinds.Add(SceneObjectKind.World);

        List<Task> tasks = new List<Task>();

        byte[] newSceneData = GetLatestSceneBytes();
        Scene scene = Scene.Deserialize(newSceneData);



        if (scene == null)
        {
            Debug.LogWarning("SceneUnderstandingManager.SaveObjsToDiskAsync: Scene is null");
            return;
        }

        foreach (SceneObjectKind soKind in sceneObjectKinds)
        {
            List<SceneObject> allObjectsOfAKind = new List<SceneObject>();
            foreach (SceneObject sceneObject in scene.SceneObjects)
            {
                if (sceneObject.Kind == soKind)
                {
                    allObjectsOfAKind.Add(sceneObject);
                }
            }

            string fileName = string.Format("SU_{0}_{1}-{2}-{3}_{4}-{5}-{6}.obj",
            soKind.ToString(), year, month, day, hour, min, sec);

            if (allObjectsOfAKind.Count > 0)
            {
                tasks.Add(SaveAllSceneObjectsOfAKindAsOneObj(allObjectsOfAKind, GetColor(soKind), fileName));
            }
        }
        await Task.WhenAll(tasks);
    }

    private async Task SaveAllSceneObjectsOfAKindAsOneObj(List<SceneObject> sceneObjects, Color? color, string fileName)
    {
        if (sceneObjects == null)
        {
            return;
        }

        List<System.Numerics.Vector3> combinedMeshVertices = new List<System.Numerics.Vector3>();
        List<uint> combinedMeshIndices = new List<uint>();

        // Go through each scene object, retrieve its meshes and add them to the combined lists, defined above.
        foreach (SceneObject so in sceneObjects)
        {
            if (so == null)
            {
                continue;
            }

            IEnumerable<SceneMesh> meshes = so.Meshes;
            if (meshes == null)
            {
                continue;
            }

            foreach (SceneMesh mesh in meshes)
            {
                // Get the mesh vertices.
                var mvList = new System.Numerics.Vector3[mesh.VertexCount];
                mesh.GetVertexPositions(mvList);

                // Transform the vertices using the transformation matrix.
                TransformVertices(so.GetLocationAsMatrix(), mvList);

                // Store the current set of vertices in the combined list. As we add indices, we'll offset it by this value.
                uint indexOffset = (uint)combinedMeshVertices.Count;

                // Add the new set of mesh vertices to the existing set.
                combinedMeshVertices.AddRange(mvList);

                // Get the mesh indices.
                uint[] mi = new uint[mesh.TriangleIndexCount];
                mesh.GetTriangleIndices(mi);

                // Add the new set of mesh indices to the existing set.
                for (int i = 0; i < mi.Length; ++i)
                {
                    combinedMeshIndices.Add((uint)(mi[i] + indexOffset));
                }
            }
        }

        // Write as string to file.
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < combinedMeshVertices.Count; ++i)
        {
            sb.Append(string.Format("v {0} {1} {2} {3} {4} {5}\n", combinedMeshVertices[i].X, combinedMeshVertices[i].Y, combinedMeshVertices[i].Z, color.Value.r, color.Value.g, color.Value.b));
        }

        for (int i = 0; i < combinedMeshIndices.Count; i += 3)
        {
            // Indices start at index 1 (as opposed to 0) in objs.
            sb.Append(string.Format("f {0} {1} {2}\n", combinedMeshIndices[i] + 1, combinedMeshIndices[i + 1] + 1, combinedMeshIndices[i + 2] + 1));
        }

        await SaveStringToDiskAsync(sb.ToString(), fileName);
    }
    */

    /// <summary>
    /// Save a string to disk
    /// this string is the obj file that represents the SU Geometry
    /// </summary>
    // Await is conditionally compiled out based on platform but needs to be awaitable
    private void SaveStringToDisk(string data, string fileName)
    {
        if (string.IsNullOrEmpty(data))
        {
            Debug.LogWarning("SceneUnderstandingManager.SaveStringToDiskAsync: Nothing to save.");
            return;
        }

        if (QuerySceneFromDevice)
        {
            string path = Path.Combine(Application.persistentDataPath, fileName);
            using (var file = new FileStream(path, FileMode.Create, FileAccess.Write, FileShare.Write))
            {
                using (var writer = new StreamWriter(file, Encoding.UTF8))
                {
                    writer.Write(data);
                }
            }
        }
        else
        {
            Debug.Log("SpatialAwarenessCartographer.SaveStringToDiskAsync: Save only supported on Device");
            return;
        }
    }

    /*
    private void TransformVertices(System.Numerics.Matrix4x4 transformationMatrix, System.Numerics.Vector3[] vertices)
    {
        for (int i = 0; i < vertices.Length; ++i)
        {
            vertices[i] = System.Numerics.Vector3.Transform(vertices[i], transformationMatrix);
        }
    }


    /*private static int faceCount;

    // Save the mesh the hololens recorded during runtime
    public void SaveOperationAreaMesh()
    {
        Debug.Log("Save Operation Area Mesh Clicked");
        var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();

        // If no observer is active, we can't save mesh
        if (observer == null)
            return;

        List<Mesh> recordedMesh = new List<Mesh>();

        // Get all mesh objects
        foreach (SpatialAwarenessMeshObject mesh in observer.Meshes.Values)
            recordedMesh.Add(mesh.Filter.mesh);

        Debug.Log(recordedMesh);
        WriteMeshObjectsToFile("OperationAreaMesh.obj", recordedMesh);
    }

    // 
    private static void WriteMeshObjectsToFile(string fileName, IEnumerable<Mesh> meshObjects)
    {
        string path = Path.Combine(Application.persistentDataPath, fileName);
        using (var file = new FileStream(path, FileMode.Create, FileAccess.Write, FileShare.Write))
        {
            faceCount = 0;
            using (var writer = new StreamWriter(file, Encoding.UTF8))
            {
                int o = 0;
                foreach (Mesh mesh in meshObjects)
                {
                    o++;
                    writer.WriteLine("o Object." + o);
                    writer.Write(MeshToString(mesh, faceCount));
                    writer.WriteLine("");
                }
            }
        }
    }

    private static string MeshToString(Mesh mesh, int lastFaceIndex)
    {
        StringBuilder sb = new StringBuilder();

        foreach (Vector3 v in mesh.vertices)
        {
            sb.Append(string.Format("v {0} {1} {2}\n", v.x, v.y, v.z));
        }
        sb.Append("\n");
        foreach (Vector3 v in mesh.normals)
        {
            sb.Append(string.Format("vn {0} {1} {2}\n", v.x, v.y, v.z));
        }
        sb.Append("\n");
        foreach (Vector3 v in mesh.uv)
        {
            sb.Append(string.Format("vt {0} {1}\n", v.x, v.y));
        }
        for (int material = 0; material < mesh.subMeshCount; material++)
        {
            int[] triangles = mesh.GetTriangles(material);
            for (int i = 0; i < triangles.Length; i += 3)
            {
                faceCount += 3;
                sb.Append(string.Format("f {0}/{0}/{0} {1}/{1}/{1} {2}/{2}/{2}\n",
                    triangles[i] + 1 + lastFaceIndex, triangles[i + 1] + 1 + lastFaceIndex, triangles[i + 2] + 1 + lastFaceIndex));
            }
        }

        return sb.ToString();

    }*/
}
