public class SensorModuleResponse
{
    public SensorValue<float> temperature { get; set; }
    public SensorValue<float> carbon { get; set; }
    public SensorValue<float> oxygen { get; set; }
}

public class SensorValue<T>
{
    public T value { get; set; }
    public string status { get; set; }
}
