// 函数: sub_14059cf80
// 地址: 0x14059cf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
char result = sub_140b1d450()

if (result != 0)
    PWSTR lpFileName_1
    sub_140b1aa20(&lpFileName_1)
    int64_t var_2d8
    sub_140a1dfc0(&lpFileName_1, &var_2d8)
    int32_t i_1
    
    if (i_1 s> 0)
        int32_t i
        
        do
            int64_t var_2e8
            sub_140b3d580(&var_2e8, &var_2d8)
            int32_t var_2e0
            int32_t rdx_3 = var_2e0
            
            if (rdx_3 != 0)
                int16_t* const var_2b8 = &data_142d404c4
                int32_t var_2b0_1 = 1
                
                if (rdx_3 != 1)
                    goto label_14059d06b
                
                if (sub_140a22710(&var_2e8, &var_2b8, 0) == 0)
                    rdx_3 = var_2e0
                else
                    rdx_3 = var_2e0
                label_14059d06b:
                    int16_t* const var_2a8 = &data_142d409b8
                    int32_t var_2a0_1 = 2
                    
                    if (rdx_3 != 2)
                        goto label_14059d09b
                    
                    if (sub_140a22710(&var_2e8, &var_2a8, 0) == 0)
                        rdx_3 = var_2e0
                    else
                        rdx_3 = var_2e0
                    label_14059d09b:
                        
                        if (rdx_3 s< 1 || *(var_2e8 + (sx.q(rdx_3 - 1) << 1)) != 0x3a)
                            int64_t i_3 = sx.q(i_1)
                            PWSTR lpFileName_2 = lpFileName_1
                            int16_t rsi_1 = lpFileName_2[i_3]
                            lpFileName_2[i_3] = 0
                            PWSTR lpFileName = &data_142d40450
                            int32_t var_2c0
                            
                            if (var_2c0 != 0)
                                lpFileName = lpFileName_1
                            
                            WIN32_FIND_DATAW findFileData
                            HANDLE hFindFile = FindFirstFileW(lpFileName, &findFileData)
                            
                            if (hFindFile != -1)
                                int64_t r8_1 = sx.q(var_2e0)
                                wchar16* _Destination = &lpFileName_1[sx.q(i_1) - r8_1]
                                int64_t rbx_1 = sx.q((r8_1 + 1).d)
                                var_25c
                                wcsncpy(_Destination, &var_25c, rbx_1 - 1)
                                _Destination[rbx_1 - 1] = 0
                                FindClose(hFindFile)
                            
                            lpFileName_1[sx.q(i_1)] = rsi_1
                            rdx_3 = var_2e0
            
            i = i_1
            int32_t rcx_13 = i - rdx_3
            
            if (rcx_13 - 1 s< 0)
                i = 0
            else if (rcx_13 s<= i)
                i = rcx_13 - 1
            
            int32_t i_2 = i
            var_2d8.o = var_2d8.o
        while (i s> 0)
    
    result = sub_140b27db0(&lpFileName_1)
    PWSTR lpFileName_3 = lpFileName_1
    
    if (lpFileName_3 != 0)
        result = sub_140a74f90(lpFileName_3)

__security_check_cookie(rax_1 ^ &var_308)
return result
