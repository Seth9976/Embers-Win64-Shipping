// 函数: sub_140b71990
// 地址: 0x140b71990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HKEY arg_8 = arg1
int64_t rbx
rbx.b = 0
int32_t r14 = 0
PWSTR lpSubKey = arg2
int32_t r13 = 0
PWSTR lpValueName = arg3

while (rbx.b == 0)
    int32_t r9 = 0x100
    HKEY hKey_1 = nullptr
    
    if (r13 == 0)
        r9 = 0x200
    
    if (RegOpenKeyExW(arg1, lpSubKey, 0, r9 | 0x20019, &hKey_1) == NO_ERROR)
        HKEY hKey = hKey_1
        uint32_t lpcbData = 0
        
        if (RegQueryValueExW(hKey, lpValueName, nullptr, nullptr, nullptr, &lpcbData) == NO_ERROR)
            uint32_t lpcbData_1 = lpcbData
            
            if (lpcbData_1 != 0)
                int16_t* lpData = j_sub_140a82f30(zx.q(lpcbData_1))
                enum WIN32_ERROR rax_2 =
                    RegQueryValueExW(hKey_1, lpValueName, nullptr, nullptr, lpData, &lpcbData)
                
                if (rax_2 == NO_ERROR)
                    rbx = 0
                    uint64_t rsi_2 = zx.q(lpcbData u>> 1)
                    int32_t rdi = 0
                    int64_t var_48 = 0
                    int64_t var_40_1 = 0
                    
                    if (lpData != 0 && *lpData != rax_2.w && rsi_2.d u> 1)
                        if (rsi_2.d != 0)
                            sub_1405947f0(&var_48, rsi_2.d)
                            r14 = var_40_1:4.d
                            rdi = var_40_1.d
                            rbx = var_48
                        
                        rdi += rsi_2.d
                        var_40_1.d = rdi
                        
                        if (rdi s> r14)
                            sub_140594770(&var_48)
                            r14 = var_40_1:4.d
                            rdi = var_40_1.d
                            rbx = var_48
                        
                        UnDecorator::getReferenceType(rbx, lpData, (rsi_2 << 1).d - 2)
                        *(rbx + (sx.q(rdi) << 1) - 2) = 0
                    
                    if (arg4 == &var_48)
                        if (rbx != 0)
                            sub_140a74f90(rbx)
                        
                        r14 = 0
                    else
                        int64_t rcx_5 = *arg4
                        
                        if (rcx_5 != 0)
                            sub_140a74f90(rcx_5)
                        
                        *arg4 = rbx
                        *(arg4 + 0xc) = r14
                        r14 = 0
                        int64_t var_40_2 = 0
                        var_48 = 0
                        arg4[1].d = rdi
                    
                    lpValueName = arg3
                    rbx.b = 1
                
                j_sub_140a74f90(lpData)
        
        RegCloseKey(hKey_1)
    
    lpSubKey = arg2
    r13 += 1
    arg1 = arg_8
    
    if (r13 s>= 2)
        break

return zx.q(rbx.b)
