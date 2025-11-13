// 函数: sub_1427c7c20
// 地址: 0x1427c7c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4b8
int64_t rax_1 = __security_cookie ^ &var_4b8
HMODULE result = LoadLibraryW(u"igdmd64.dll")
HMODULE result_1 = result

if (result == 0)
    int128_t zmm0 = data_1434cc158
    GUID ClassGuid
    ClassGuid.Data1 = zmm0.d
    ClassGuid.Data2 = zmm0:4.w
    ClassGuid.Data3 = zmm0:6.w
    ClassGuid.Data4[0] = zmm0:8.b
    ClassGuid.Data4[1] = zmm0:9.b
    ClassGuid.Data4[2] = zmm0:0xa.b
    ClassGuid.Data4[3] = zmm0:0xb.b
    ClassGuid.Data4[4] = zmm0:0xc.b
    ClassGuid.Data4[5] = zmm0:0xd.b
    ClassGuid.Data4[6] = zmm0:0xe.b
    ClassGuid.Data4[7] = zmm0:0xf.b
    HDEVINFO DeviceInfoSet = SetupDiGetClassDevsA(&ClassGuid, nullptr, nullptr, (result + 0x12).d)
    
    if (DeviceInfoSet != -1)
        struct SP_DEVINFO_DATA DeviceInfoData
        __builtin_memset(&DeviceInfoData, 0, 0x20)
        uint32_t MemberIndex = 0
        DeviceInfoData.cbSize = 0x20
        
        if (SetupDiEnumDeviceInfo(DeviceInfoSet, 0, &DeviceInfoData) != 0)
            BOOL i
            
            do
                enum DEVPROPTYPE PropertyType = DEVPROP_TYPE_EMPTY
                void var_228
                memset(&var_228, 0, 0x208)
                
                if (SetupDiGetDevicePropertyW(DeviceInfoSet, &DeviceInfoData, &data_1434cc128, 
                        &PropertyType, &var_228, 0x208, nullptr, 0) == 0)
                    break
                
                if (wcsncmp(&var_228, u"PCI\VEN_8086&DEV_", 0x11) == 0)
                    void var_438
                    memset(&var_438, 0, 0x208)
                    
                    if (SetupDiGetDevicePropertyW(DeviceInfoSet, &DeviceInfoData, &data_1434cc140, 
                            &PropertyType, &var_438, 0x208, nullptr, 0) != 0)
                        uint32_t RequiredSize
                        RequiredSize.q = 0
                        uint8_t* var_498_2
                        var_498_2.d = 0x104
                        
                        if (SetupGetInfDriverStoreLocationW(&var_438, nullptr, nullptr, &var_438, 
                                var_498_2.d, RequiredSize) != 0)
                            PathRemoveFileSpecW(&var_438)
                            
                            if (PathAppendW(&var_438, u"igdmd64.dll") == 1)
                                result_1 = LoadLibraryW(&var_438)
                    
                    break
                
                DeviceInfoData.cbSize = 0
                DeviceInfoData.ClassGuid.Data1 = 0
                MemberIndex += 1
                DeviceInfoData.cbSize = 0x20
                DeviceInfoData.ClassGuid.Data2 = 0
                DeviceInfoData.ClassGuid.Data3 = 0
                DeviceInfoData.ClassGuid.Data4[0] = 0
                DeviceInfoData.ClassGuid.Data4[1] = 0
                DeviceInfoData.ClassGuid.Data4[2] = 0
                DeviceInfoData.ClassGuid.Data4[3] = 0
                DeviceInfoData.ClassGuid.Data4[4] = 0
                DeviceInfoData.ClassGuid.Data4[5] = 0
                DeviceInfoData.ClassGuid.Data4[6] = 0
                DeviceInfoData.ClassGuid.Data4[7] = 0
                DeviceInfoData.DevInst = 0
                DeviceInfoData.Reserved = 0
                i = SetupDiEnumDeviceInfo(DeviceInfoSet, MemberIndex, &DeviceInfoData)
            while (i != 0)
        
        SetupDiDestroyDeviceInfoList(DeviceInfoSet)
        result = result_1
    else
        result = nullptr

__security_check_cookie(rax_1 ^ &var_4b8)
return result
