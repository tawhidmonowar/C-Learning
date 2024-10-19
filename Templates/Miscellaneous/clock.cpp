vector<string> time_24hr_format;

void time_24() 
{
    for (int hour = 0; hour < 24; ++hour)
    {
        for (int minute = 0; minute < 60; ++minute)
        {
            string formatted_hour = (hour < 10 ? "0" : "") + to_string(hour);
            string formatted_minute = (minute < 10 ? "0" : "") + to_string(minute);
            time_24hr_format.push_back(formatted_hour + ":" + formatted_minute);
        }
    }
}


vector<string> time_12hr_format;

void time_12() 
{
    for (int hour = 0; hour < 24; ++hour)
    {
        for (int minute = 0; minute < 60; ++minute)
        {
            int hour_in_12hr = hour % 12 == 0 ? 12 : hour % 12;
            string formatted_hour = (hour_in_12hr < 10 ? "0" : "") + to_string(hour_in_12hr);
            string formatted_minute = (minute < 10 ? "0" : "") + to_string(minute);
            string period = hour < 12 ? "AM" : "PM";
            time_12hr_format.push_back(formatted_hour + ":" + formatted_minute + " " + period);
        }
    }
}


