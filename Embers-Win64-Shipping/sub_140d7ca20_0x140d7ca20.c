// 函数: sub_140d7ca20
// 地址: 0x140d7ca20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_678
int64_t rax_1 = __security_cookie ^ &var_678
HDEVINFO DeviceInfoSet
__builtin_memset(&DeviceInfoSet, 0, 0x18)
PWSTR MachineName
int64_t Reserved
HDEVINFO DeviceInfoSet_1 = SetupDiGetClassDevsExW(&data_142ec09b8, nullptr, nullptr, 2, 
    DeviceInfoSet, MachineName, Reserved)

if (DeviceInfoSet_1 != 0)
    uint32_t MemberIndex = 0
    int64_t r15
    r15.b = 0
    
    if (GetLastError() != ERROR_NO_MORE_ITEMS)
        enum WIN32_ERROR i
        
        do
            struct SP_DEVINFO_DATA DeviceInfoData
            DeviceInfoData.cbSize = 0
            DeviceInfoData.ClassGuid.Data1 = 0
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
            
            if (SetupDiEnumDeviceInfo(DeviceInfoSet_1, MemberIndex, &DeviceInfoData) == 1)
                int16_t var_5e8[0x38]
                int32_t rax_4 = CM_Get_Device_IDW(zx.q(DeviceInfoData.DevInst), &var_5e8, 0xc8, 0, 
                    DeviceInfoSet, MachineName)
                
                if (rax_4 == 0)
                    int32_t rdx_2 = 0
                    int32_t rcx_2 = 0
                    int32_t var_630_1 = 0
                    int32_t var_62c_1 = 0
                    int16_t* var_638 = nullptr
                    
                    if (var_5e8[0] != rax_4.w)
                        int64_t rbx_1 = -1
                        
                        do
                            rbx_1 += 1
                        while (var_5e8[rbx_1] != 0)
                        
                        if (rbx_1.d + 1 s> 0)
                            sub_1405947f0(&var_638, rbx_1.d + 1)
                            rcx_2 = var_62c_1
                            rdx_2 = var_630_1
                        
                        int32_t rax_5 = rbx_1.d + 1 + rdx_2
                        var_630_1 = rax_5
                        
                        if (rax_5 s> rcx_2)
                            sub_140594770(&var_638)
                        
                        UnDecorator::getReferenceType(var_638, &var_5e8, (rbx_1.d + 1) * 2)
                    
                    DeviceInfoSet.d = 9
                    int32_t rdx_5 = 0x7fffffff
                    int32_t rax_8 = var_630_1
                    int64_t rcx_8 =
                        sx.q(sub_140a23cf0(&var_638, &(*{}[\nt")[3], 0, 0, DeviceInfoSet.d) - 8) + 8
                    
                    if (rcx_8 s<= 0x7fffffff)
                        rdx_5 = rcx_8.d
                    
                    int32_t rcx_9 = rax_8 - 1
                    
                    if (rax_8 == 0)
                        rcx_9 = 0
                    
                    int32_t r10_1
                    
                    if (rdx_5 s>= 0)
                        r10_1 = rcx_9
                        
                        if (rdx_5 s< rcx_9)
                            r10_1 = rdx_5
                    else
                        r10_1 = 0
                    
                    int32_t rcx_10 = rcx_9 - r10_1
                    int32_t rbx_3 = rax_8 - 1
                    
                    if (rax_8 == 0)
                        rbx_3 = 0
                    
                    int32_t rbx_4 = rbx_3 - r10_1
                    
                    if (rcx_10 s>= 0)
                        if (rcx_10 s< rbx_4)
                            rbx_4 = rcx_10
                        
                        if (rbx_4 != 0)
                            int32_t rcx_12 = rax_8 - rbx_4
                            
                            if (rcx_12 != r10_1)
                                int16_t* r9 = var_638
                                memmove(&r9[sx.q(r10_1)], &r9[sx.q(rbx_4 + r10_1)], 
                                    (rcx_12 - r10_1) * 2)
                                rax_8 = var_630_1
                            
                            rax_8 -= rbx_4
                            var_630_1 = rax_8
                    
                    int32_t rbx_5 = rax_8 - 1
                    
                    if (rax_8 == 0)
                        rbx_5 = 0
                    
                    if (rbx_5 s> 8)
                        rbx_5 = 8
                    
                    if (rbx_5 != 0)
                        if (rax_8 != rbx_5)
                            int16_t* rcx_18 = var_638
                            memmove(rcx_18, &rcx_18[sx.q(rbx_5)], (rax_8 - rbx_5) * 2)
                            rax_8 = var_630_1
                        
                        rax_8 -= rbx_5
                        int32_t var_630_2 = rax_8
                    
                    int16_t* rdx_8
                    
                    if (arg1[1].d == 0)
                        rdx_8 = &data_142d40450
                    else
                        rdx_8 = *arg1
                    
                    int16_t* const rcx_19 = &data_142d40450
                    
                    if (rax_8 != 0)
                        rcx_19 = var_638
                    
                    int32_t rax_12 = sub_140a54510(rcx_19, rdx_8)
                    
                    if (rax_12 == 0)
                        MachineName.d = 0x20019
                        DeviceInfoSet.d = 1
                        HKEY hKey = SetupDiOpenDevRegKey(DeviceInfoSet_1, &DeviceInfoData, 
                            rax_12 + 1, 0, DeviceInfoSet.d, MachineName.d)
                        
                        if (hKey != 0 && hKey != -1)
                            r15 = 0
                            uint32_t lpcchValueName = 0x200
                            uint32_t dwIndex = 0
                            uint32_t lpcbData = 0x400
                            enum WIN32_ERROR j
                            
                            do
                                uint32_t type
                                uint8_t data[0x15]
                                j = RegEnumValueW(hKey, dwIndex, &data_143e20750, &lpcchValueName, 
                                    nullptr, &type, &data, &lpcbData)
                                
                                if (j == NO_ERROR)
                                    for (int64_t k = 0; k != 5; )
                                        int16_t rcx_23 = *(&data_143e20750 + (k << 1))
                                        k += 1
                                        
                                        if (rcx_23 != (*u"Window Registration Failed!")[0x1b + k])
                                            goto label_140d7ce09
                                    
                                    char var_420
                                    char var_41e
                                    *arg2 = (zx.d(var_41e) & 0xfffffff0) << 4 | zx.d(var_420)
                                    char var_41d
                                    char var_41b
                                    int32_t rcx_31 =
                                        (zx.d(var_41b) & 0xfffffff0) << 4 | zx.d(var_41d)
                                    *arg3 = rcx_31
                                    char var_443
                                    char var_442
                                    int32_t rax_22
                                    
                                    if (var_443 == 0 || var_442 == 0)
                                        rax_22 = 0
                                    else
                                        int32_t temp2_1
                                        int32_t temp3_1
                                        temp2_1:temp3_1 = sx.q(int.d(2.53999877f
                                            / float.s(zx.d(var_442)) * float.s(rcx_31)) + int.d(
                                            2.53999877f / float.s(zx.d(var_443)) f* float.s(*arg2)))
                                        rax_22 = (temp3_1 - temp2_1) s>> 1
                                    
                                    r15.b = 1
                                    *arg4 = rax_22
                                    break
                                
                            label_140d7ce09:
                                dwIndex += 1
                            while (j != ERROR_NO_MORE_ITEMS)
                            RegCloseKey(hKey)
                            int16_t* rcx_36 = var_638
                            
                            if (rcx_36 != 0)
                                sub_140a74f90(rcx_36)
                            
                            break
                    
                    int16_t* rcx_21 = var_638
                    
                    if (rcx_21 != 0)
                        sub_140a74f90(rcx_21)
            
            MemberIndex += 1
            i = GetLastError()
        while (i != ERROR_NO_MORE_ITEMS)
    
    char DeviceInfoSet_2 = r15.b
    
    if (SetupDiDestroyDeviceInfoList(DeviceInfoSet_1) == 0)
        DeviceInfoSet_2 = 0
    
    DeviceInfoSet_1 = zx.q(DeviceInfoSet_2)

__security_check_cookie(rax_1 ^ &var_678)
return DeviceInfoSet_1
