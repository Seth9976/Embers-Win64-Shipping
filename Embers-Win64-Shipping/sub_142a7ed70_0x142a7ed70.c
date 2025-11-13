// 函数: sub_142a7ed70
// 地址: 0x142a7ed70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0

while (true)
    char r8_1 = arg2[result]
    result += 1
    
    if (r8_1 != *(result + 0x143640e0b))
        break
    
    if (result == 4)
        if (strcmp(arg1, "zoneinfo64").d == 0)
            result.b = 1
            return result
        
        if (strcmp(arg1, "timezoneTypes").d == 0)
            result.b = 1
            return result
        
        if (strcmp(arg1, "windowsZones").d == 0)
            result.b = 1
            return result
        
        if (strcmp(arg1, "metaZones").d != 0)
            break
        
        result.b = 1
        return result

result.b = 0
return result
