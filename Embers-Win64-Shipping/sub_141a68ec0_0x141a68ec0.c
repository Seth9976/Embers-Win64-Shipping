// 函数: sub_141a68ec0
// 地址: 0x141a68ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *arg3
int64_t result = arg1 + 0x10
int32_t i_2 = arg2[1].d
int64_t r13 = *arg2
int64_t result_1 = result
void* var_50 = arg1 + 0x38
int64_t* var_48 = arg1 + 0x20

if (i_2 s> 0)
    void* r13_1 = r13 - rdi
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        if (arg1 != -0x38)
            result = sub_141f893b0(arg1 + 0x38, *(rdi + r13_1))
            int64_t rbx_1 = sx.q(result.d)
            
            if (rbx_1.d != 0xffffffff)
                result = sub_141a58b60(&result_1, rbx_1.d, *rdi)
                int64_t r12_1 = sx.q(result.d)
                
                if (r12_1.d != rbx_1.d)
                    int128_t* rcx_2 = *(arg1 + 0x20)
                    int32_t rbp_1 = *(arg1 + 0x28)
                    int64_t r9_1 = rbx_1 * 0x1c
                    int32_t rax = *(rcx_2 + r9_1 + 0x18)
                    uint128_t var_68_1 = *(rcx_2 + r9_1)
                    int32_t rax_2 = rbp_1 - rbx_1.d
                    uint64_t arg_10 = *(rcx_2 + r9_1 + 0x10)
                    
                    if (rax_2 != 1)
                        memmove(rcx_2 + r9_1, sx.q((rbx_1 + 1).d) * 0x1c + rcx_2, 
                            (rax_2 - 1) * 0x1c)
                        rbp_1 = *(arg1 + 0x28)
                    
                    *(arg1 + 0x28) = rbp_1
                    
                    if (rbp_1 s> *(arg1 + 0x2c))
                        sub_1405c50f0(arg1 + 0x20)
                    
                    uint128_t* rbx_2 = r12_1 * 0x1c
                    void* rdx_6 = *(arg1 + 0x20) + rbx_2
                    memmove(rdx_6 + 0x1c, rdx_6, (rbp_1 - 1 - r12_1.d) * 0x1c)
                    result = *(arg1 + 0x20)
                    *(rbx_2 + result) = var_68_1
                    *(rbx_2 + result + 0x10) = arg_10
                    *(rbx_2 + result + 0x18) = rax
        
        rdi = &rdi[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
