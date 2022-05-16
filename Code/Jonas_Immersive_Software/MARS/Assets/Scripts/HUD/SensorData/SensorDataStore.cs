using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class SensorDataStore
{
    private List<double> temperatureStore = new List<double>();
    private List<double> oxygenDataStore = new List<double>();
    private List<double> carbonMonoxideStore = new List<double>();

    public void addTemperatureValue(double temperatureValue) => this.temperatureStore.Add(temperatureValue);
    public void addOxygenValue(double oxygenValue) => this.oxygenDataStore.Add(oxygenValue);
    public void addCarbonMonoxideValue(double carbonMonoxideValue) => this.carbonMonoxideStore.Add(carbonMonoxideValue);

    public List<double> TemperatureStore {
        get
        {
            return this.temperatureStore;
        }
    }

    public List<double> OxygenDataStore
    {
        get
        {
            return this.oxygenDataStore;
        }
    }

    public List<double> CarbonMonoxideDataStore
    {
        get
        {
            return this.carbonMonoxideStore;
        }
    }

}
