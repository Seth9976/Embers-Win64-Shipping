// 函数: sub_141a69030
// 地址: 0x141a69030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *arg3
int64_t result = arg1 + 8
int32_t i_2 = arg2[1].d
int64_t r13 = *arg2
int64_t result_1 = result
void* var_40 = arg1 + 0x30
int64_t* var_38 = arg1 + 0x20

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
                int64_t r15_1 = sx.q(result.d)
                
                if (r15_1.d != rbx_1.d)
                    int32_t* r9_1 = *(arg1 + 0x20)
                    int32_t rbp_1 = *(arg1 + 0x28)
                    int32_t rcx_3 = rbp_1 - rbx_1.d
                    int32_t rax = r9_1[rbx_1]
                    
                    if (rcx_3 != 1)
                        memmove(&r9_1[rbx_1], &r9_1[sx.q((rbx_1 + 1).d)], (rcx_3 - 1) << 2)
                        rbp_1 = *(arg1 + 0x28)
                    
                    *(arg1 + 0x28) = rbp_1
                    
                    if (rbp_1 s> *(arg1 + 0x2c))
                        sub_1405a4cf0(arg1 + 0x20)
                    
                    int32_t* rbx_2 = r15_1 << 2
                    void* rdx_5 = *(arg1 + 0x20) + rbx_2
                    memmove(rdx_5 + 4, rdx_5, (rbp_1 - 1 - r15_1.d) << 2)
                    result = *(arg1 + 0x20)
                    *(rbx_2 + result) = rax
        
        rdi = &rdi[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
