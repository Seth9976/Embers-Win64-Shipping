// 函数: sub_142bbd9f0
// 地址: 0x142bbd9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t result_1 = 0
void* rcx = *arg1
int64_t* rbx = *(*(rcx + 0x3e8) + 0x10d8)
int64_t rax_3 = sub_142b922e0(*(*(rcx + 0x90) + 8), "pshinter")
int32_t result

if (rax_3 == 0 || rbx == 0)
    result = result_1
    arg1[8].d = 0xffffffff
else
    int64_t rdx_1 = *rbx
    
    if (rdx_1 == 0)
        result = result_1
        arg1[8].d = 0xffffffff
    else
        int64_t rax_4 = rdx_1(rax_3)
        
        if (rax_4 == 0)
            result = result_1
            arg1[8].d = 0xffffffff
        else
            void* rcx_4 = *arg1
            void* r15_1 = *(rcx_4 + 0x3e8)
            int64_t rax_5 = sub_142b99860(*(rcx_4 + 0x98), 0x808, &result_1)
            result = result_1
            
            if (result == 0)
                void var_f8
                InitializePGCHdr(r15_1 + 0x5e0, &var_f8)
                result = (*rax_4)(*(*arg1 + 0x98), &var_f8, rax_5)
                result_1 = result
                
                if (result == 0)
                    uint64_t rdi_1 = zx.q(*(r15_1 + 0x8b0))
                    
                    while (rdi_1.d != 0)
                        rdi_1 = zx.q(rdi_1.d - 1)
                        InitializePGCHdr(*(r15_1 + (rdi_1 << 3) + 0x8b8), &var_f8)
                        result = (*rax_4)(*(*arg1 + 0x98), &var_f8, rax_5 + 8 + (rdi_1 << 3))
                        result_1 = result
                        
                        if (result != 0)
                            goto label_142bbdb47
                    
                    *arg1[7] = rax_5
                    result = result_1
                    arg1[8].d = 0xffffffff

label_142bbdb47:
__security_check_cookie(rax_1 ^ &var_128)
return result
