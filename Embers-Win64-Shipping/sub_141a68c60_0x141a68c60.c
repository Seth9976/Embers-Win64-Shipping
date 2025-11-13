// 函数: sub_141a68c60
// 地址: 0x141a68c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *arg3
int64_t result = arg1 + 8
int32_t i_2 = arg2[1].d
int64_t r13 = *arg2
int64_t result_1 = result
void* var_40 = arg1 + 0x30
char** var_38 = arg1 + 0x20

if (i_2 s> 0)
    void* r13_1 = r13 - rdi
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        if (arg1 != -0x30)
            result = sub_141f893b0(arg1 + 0x30, *(rdi + r13_1))
            int64_t rbx_1 = sx.q(result.d)
            
            if (rbx_1.d != 0xffffffff)
                result = sub_141a58b60(&result_1, rbx_1.d, *rdi)
                char* r14_1 = sx.q(result.d)
                
                if (r14_1.d != rbx_1.d)
                    char* rax = *(arg1 + 0x20)
                    int32_t rbp_1 = *(arg1 + 0x28)
                    char rcx_2 = rax[rbx_1]
                    int32_t rcx_4 = rbp_1 - rbx_1.d
                    
                    if (rcx_4 != 1)
                        memmove(&rax[rbx_1], &rax[sx.q(rbx_1.d + 1)], rcx_4 - 1)
                        rbp_1 = *(arg1 + 0x28)
                    
                    *(arg1 + 0x28) = rbp_1
                    
                    if (rbp_1 s> *(arg1 + 0x2c))
                        sub_140679a80(arg1 + 0x20)
                    
                    int64_t rdx_6 = *(arg1 + 0x20) + r14_1
                    memmove(rdx_6 + 1, rdx_6, rbp_1 - 1 - r14_1.d)
                    result = *(arg1 + 0x20)
                    r14_1[result] = rcx_2
        
        rdi = &rdi[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
