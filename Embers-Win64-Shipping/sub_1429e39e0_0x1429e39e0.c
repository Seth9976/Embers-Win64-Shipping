// 函数: sub_1429e39e0
// 地址: 0x1429e39e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
void* arg_8 = arg1
int64_t i_3 = sx.q(arg5)
void* rdi = arg2
int32_t rdx = 0
int64_t i_2 = i_3
int32_t var_44 = 0
int64_t i_1 = i_3

if (i_3.d s> 0)
    void* r8_1 = arg6 + 8
    void* var_38_1 = r8_1
    int64_t i
    
    do
        int32_t rsi_1 = 0
        
        if (arg4 s> 0)
            result = (i_3 - 1).d
            void* r14_1 = r8_1
            int32_t result_1 = result
            int32_t* r12_1 = arg1 + 0x270
            
            do
                int32_t rax_1
                
                if (rdx != result || rsi_1 != arg4 - 1)
                    rax_1 = 0
                else
                    rax_1 = 1
                
                *(r14_1 + 8) = rsi_1
                int64_t r15_1 = *(arg1 + 0x4eb0)
                int64_t rbx_1 = *(arg1 + 0x4ea8)
                uint64_t rbx_12
                
                if (rax_1 != 0)
                    rbx_12 = arg3 - rdi
                else
                    if (arg3 - rdi u< 4)
                        i_1 =
                            sub_1429da010(r12_1, 7, "Truncated packet or corrupt tile length", i_1)
                    
                    uint64_t rax_6
                    uint64_t rbx_6
                    
                    if (rbx_1 == 0)
                        rbx_6 = (zx.q(*rdi) << 8 | zx.q(*(rdi + 1))) << 8 | zx.q(*(rdi + 2))
                        rax_6 = zx.q(*(rdi + 3))
                    else
                        char var_48
                        i_1 = rbx_1(r15_1, rdi, &var_48, 4)
                        char var_47
                        char var_46
                        rbx_6 = (zx.q(var_48) << 8 | zx.q(var_47)) << 8 | zx.q(var_46)
                        char var_45
                        rax_6 = zx.q(var_45)
                    
                    rdi += 4
                    rbx_12 = rbx_6 << 8 | rax_6
                    
                    if (rbx_12 u> arg3 - rdi)
                        i_1 = sub_1429da010(r12_1, 7, "Truncated packet or corrupt tile size", i_1)
                    
                    rdx = var_44
                    arg1 = arg_8
                
                result = result_1
                rsi_1 += 1
                *(r14_1 - 8) = rdi
                rdi += rbx_12
                *r14_1 = rbx_12
                r14_1 += 0x18
            while (rsi_1 s< arg4)
            
            r8_1 = var_38_1
            i_1 = i_2
            i_3 = zx.q(arg5)
        
        rdx += 1
        r8_1 += 0x600
        i = i_1
        i_1 -= 1
        var_44 = rdx
        i_2 = i_1
        var_38_1 = r8_1
    while (i != 1)

return result
