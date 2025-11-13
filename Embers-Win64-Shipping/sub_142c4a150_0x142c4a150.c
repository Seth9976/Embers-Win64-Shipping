// 函数: sub_142c4a150
// 地址: 0x142c4a150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t var_80 = 0x20
int64_t var_78
__builtin_memset(&var_78, 0, 0x18)
int64_t var_58
__builtin_memset(&var_58, 0, 0x18)
int32_t r14 = 0
int32_t result_1 = 0
HMODULE hModule = data_14401af00
int64_t var_60 = 0x20
uint64_t result

if (hModule != 0)
label_142c4a1d8:
    
    if (data_14401af08 != 0)
        goto label_142c4a208
    
    int64_t rax_2 = GetProcAddress(hModule, "SetupDiGetClassDevsW")
    data_14401af08 = rax_2
    
    if (rax_2 == 0)
        result = 0
    else
        hModule = data_14401af00
    label_142c4a208:
        
        if (data_14401af10 != 0)
            goto label_142c4a234
        
        int64_t rax_3 = GetProcAddress(hModule, "SetupDiEnumDeviceInterfaces")
        data_14401af10 = rax_3
        
        if (rax_3 == 0)
            result = 0
        else
            hModule = data_14401af00
        label_142c4a234:
            
            if (data_14401af18 != 0)
                goto label_142c4a267
            
            int64_t rax_4 = GetProcAddress(hModule, "SetupDiGetDeviceInterfaceDetailW")
            data_14401af18 = rax_4
            
            if (rax_4 == 0)
                result = 0
            else
                hModule = data_14401af00
            label_142c4a267:
                int64_t rax_5
                
                if (data_14401a880 == 0)
                    rax_5 = GetProcAddress(hModule, "SetupDiDestroyDeviceInfoList")
                    data_14401a880 = rax_5
                
                if (data_14401a880 != 0 || rax_5 != 0)
                    int64_t rax_6 = data_14401af08(arg1, 0, 0, 0x10)
                    
                    if (rax_6 != -1)
                        var_80 = 0
                        var_80.d = 0x20
                        int64_t var_78_1
                        __builtin_memset(&var_78_1, 0, 0x18)
                        
                        while (true)
                            int64_t* var_90
                            
                            if (data_14401af10(rax_6, 0, arg1, zx.q(r14), &var_80, var_90) != 0)
                                var_90 = nullptr
                                int32_t var_88
                                int32_t* var_98_2 = &var_88
                                var_88 = 0
                                data_14401af18(rax_6, &var_80, 0, 0, var_98_2, var_90, var_88)
                                int32_t rax_8 = var_88
                                
                                if (rax_8 != 0)
                                    HLOCAL hMem = LocalAlloc(LMEM_ZEROINIT, zx.q(rax_8))
                                    
                                    if (hMem != 0)
                                        *hMem = 0
                                        *hMem = 8
                                        uint64_t r9_2 = zx.q(var_88)
                                        __builtin_memset(&var_60, 0, 0x20)
                                        var_90 = &var_60
                                        var_60.d = 0x20
                                        
                                        if (data_14401af18(rax_6, &var_80, hMem, r9_2, 0, var_90)
                                                != 0)
                                            _wcsupr(hMem + 4)
                                            result_1.b = wcsstr(hMem + 4, u"VEN_10DE") != 0
                                        
                                        LocalFree(hMem)
                                
                                r14 += 1
                                
                                if (result_1 == 0)
                                    continue
                            else if (result_1 == 0)
                                data_14401a880(rax_6)
                                break
                            
                            int128_t zmm0 = var_60.o
                            *arg2 = rax_6
                            *arg3 = zmm0
                            int64_t var_50
                            arg3[1] = var_50.o
                            break
                        
                        result = zx.q(result_1)
                    else
                        result = 0
                else
                    result = 0
else
    hModule = sub_142c4ad10(u"Setupapi.dll", 0)
    data_14401af00 = hModule
    
    if (hModule != 0)
        goto label_142c4a1d8
    
    result = 0

__security_check_cookie(rax_1 ^ &var_b8)
return result
