// 函数: sub_142c49b00
// 地址: 0x142c49b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t var_78 = 0x20
int64_t var_70
__builtin_memset(&var_70, 0, 0x18)
HMODULE hModule = data_14401af00
HLOCAL result_1 = nullptr
int64_t var_80 = 0
HLOCAL result

if (hModule != 0)
label_142c49b6b:
    
    if (data_14401a870 != 0)
        goto label_142c49b9e
    
    int64_t rax_2 = GetProcAddress(hModule, "SetupDiGetDeviceRegistryPropertyW")
    data_14401a870 = rax_2
    
    if (rax_2 == 0)
        result = nullptr
    else
        hModule = data_14401af00
    label_142c49b9e:
        int64_t rax_3
        
        if (data_14401a880 == 0)
            rax_3 = GetProcAddress(hModule, "SetupDiDestroyDeviceInfoList")
            data_14401a880 = rax_3
        
        if (data_14401a880 != 0 || rax_3 != 0)
            if (sub_142c4a150(arg2, &var_80, &var_78) != 0)
                int32_t i = 0
                int64_t r13_1 = var_80
                int32_t var_58 = 4
                int32_t var_54_1 = 0x11
                int32_t var_50_1 = 0x12
                
                while (i u< 3)
                    int32_t var_88 = 0
                    var_80.d = 0
                    int32_t rbx_1 = 0
                    int32_t r14_1 = (&var_58)[zx.q(i)]
                    data_14401a870(r13_1, &var_78, zx.q(r14_1), &var_88, 0, 0, &var_80)
                    int32_t rcx_4 = var_80.d
                    
                    if (rcx_4 != 0)
                        int32_t rax_6 = var_88
                        
                        if (rax_6 != 0)
                            if (rax_6 u<= 2)
                                rbx_1 = 2
                            else if (rax_6 == 7)
                                rbx_1 = rax_6 - 3
                        
                        HLOCAL hMem = LocalAlloc(LMEM_ZEROINIT, zx.q(rbx_1 + rcx_4))
                        
                        if (hMem != 0)
                            if (data_14401a870(r13_1, &var_78, zx.q(r14_1), &var_88, hMem, 
                                    var_80.d, 0) != 0)
                                int32_t rax_9 = var_88
                                HLOCAL hMem_1 = hMem
                                
                                if (rax_9 == 1)
                                    result_1 = sub_142c49910(arg1, hMem)
                                else if (rax_9 == 7 && 0 != *hMem)
                                    do
                                        HLOCAL result_2 = sub_142c49910(arg1, hMem)
                                        result_1 = result_2
                                        
                                        if (result_2 != 0)
                                            break
                                        
                                        int64_t rcx_7 = -1
                                        bool cond:0_1
                                        
                                        do
                                            cond:0_1 = *(hMem_1 + (rcx_7 << 1) + 2) != 0
                                            rcx_7 += 1
                                        while (cond:0_1)
                                        hMem_1 = hMem_1 + (rcx_7 << 1) + 2
                                    while (0 != *hMem_1)
                            
                            LocalFree(hMem)
                    
                    i += 1
                    
                    if (result_1 != 0)
                        break
                
                data_14401a880(r13_1)
            
            result = result_1
        else
            result = nullptr
else
    hModule = sub_142c4ad10(u"Setupapi.dll", 0)
    data_14401af00 = hModule
    
    if (hModule != 0)
        goto label_142c49b6b
    
    result = nullptr

__security_check_cookie(rax_1 ^ &var_c8)
return result
