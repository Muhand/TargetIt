using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Assets.Scripts.Enums
{
    public static class Settings
    {
        public enum SettingsNames
        {
            Music,
            HighestScore,
            SelectedPinSkin,
            SelectedCollectorSkin,
			Ads
        }
        public enum Music
        {
            On = 0,
            Off = 1
        }
		public enum Ads
		{
			Show =0,
			Hide = 1
		}
        
    }
}
