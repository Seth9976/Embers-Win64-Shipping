// 函数: sub_142c4a510
// 地址: 0x142c4a510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
HMODULE hModule = data_14401aab0
data_14401aae0 = 0
HLOCAL hMem = nullptr

if (hModule != 0)
label_142c4a581:
    int64_t rdx_1 = data_14401aac8
    
    if (rdx_1 != 0)
        goto label_142c4a5b7
    
    int64_t rax_2 = GetProcAddress(hModule, "D3DKMTEnumAdapters2")
    data_14401aac8 = rax_2
    rdx_1 = rax_2
    
    if (rax_2 != 0)
        hModule = data_14401aab0
    label_142c4a5b7:
        
        if (data_14401aad0 != 0)
            goto label_142c4a5ee
        
        int64_t rax_3 = GetProcAddress(hModule, "D3DKMTQueryAdapterInfo")
        data_14401aad0 = rax_3
        
        if (rax_3 != 0)
            rdx_1 = data_14401aac8
        label_142c4a5ee:
            int64_t var_260 = 0
            int64_t var_258_1 = 0
            
            if (rdx_1(&var_260) == 0)
                HLOCAL hMem_1 = LocalAlloc(LMEM_ZEROINIT, zx.q(var_260.d) * 0x14)
                hMem = hMem_1
                
                if (hMem_1 != 0 && data_14401aac8(&var_260) == 0)
                    int32_t i = 0
                    
                    if (var_260.d u> 0)
                        do
                            int64_t var_278 = 0
                            int64_t var_268_1 = 0
                            int64_t var_250
                            __builtin_memset(&var_250, 0, 0x1c)
                            int64_t* var_270_1 = &var_250
                            var_278:4.d = 0x1f
                            var_268_1.d = 0x1c
                            var_278.d = *(hMem_1 + zx.q(i) * 0x14)
                            
                            if (data_14401aad0(&var_278) != 0)
                                break
                            
                            if (var_250:4.d == 0x10de)
                                int32_t rbx_1 = *(hMem_1 + zx.q(i) * 0x14)
                                
                                if (rbx_1 != 0)
                                    void var_228
                                    memset(&var_228, 0, 0x20c)
                                    var_278 = 0
                                    int64_t var_268_2 = 0
                                    void* var_270_2 = &var_228
                                    var_278:4.d = 1
                                    var_268_2.d = 0x20c
                                    var_278.d = rbx_1
                                    int32_t rax_13 = data_14401aad0(&var_278)
                                    wchar16 string[0x46]
                                    
                                    if (rax_13 == 0 && string[0] != 0)
                                        wchar16* rax_14 = wcsrchr(&string, rax_13.w + 0x5c)
                                        void* rax_15
                                        
                                        if (rax_14 == 0)
                                            rax_15 = &string
                                        else
                                            rax_15 = &rax_14[1]
                                        
                                        int64_t rbx_2 = ((rax_15 - &string) s>> 1) * 2
                                        memcpy(&data_14401aae0, &string, rbx_2.d)
                                        
                                        if (rbx_2 u>= 0x20a)
                                            __report_rangecheckfailure()
                                            noreturn
                                        
                                        (&data_14401aae0)[(rax_15 - &string) s>> 1] = 0
                                
                                break
                            
                            i += 1
                        while (i u< var_260.d)
else
    hModule = sub_142c4ad10(u"gdi32.dll", 0)
    data_14401aab0 = hModule
    
    if (hModule != 0)
        goto label_142c4a581

LocalFree(hMem)
__security_check_cookie(rax_1 ^ &var_298)
return &data_14401aae0
