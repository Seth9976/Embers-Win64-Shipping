// 函数: sub_1426bed10
// 地址: 0x1426bed10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_10 = arg2
int32_t r14 = 0
int64_t rbx
rbx.b = 0
int32_t i = 0

if (*(arg1 + 0x118) s<= 0)
    return 

int64_t rsi_1 = 0
uint64_t rax

do
    void** rcx_1 = *(arg1 + 0x110) + rsi_1
    
    if (sub_1426bee70(*rcx_1, rcx_1, arg1, &arg_10, arg4, arg3) != 0 || rbx.b != 0)
        rbx.b = 1
    
    rax = zx.q(*(arg1 + 0x118))
    i += 1
    rsi_1 += 0x58
while (i s< rax.d)

if (rbx.b == 0)
    return 

int32_t i_1 = 0

if (rax.d s<= 0)
    return 

int64_t rdi = 0

do
    rax = *(arg1 + 0x110)
    
    if (*(rdi + rax + 0x41) == 1)
        void* j = *(rdi + rax + 8)
        
        if (j != 0)
            void* rax_2 = sub_142738d10()
            void* rdx_1 = *(j + 0x10)
            rax = sx.q(*(rax_2 + 0x38))
            
            if (rax.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax << 3)) == rax_2 + 0x30
                    && *(j + 0x70) == arg_10)
                void* r10_1 = *(j + 0x48)
                int64_t rdx_2 = sx.q(*(r10_1 + 0x60))
                
                if (rdx_2.d s<= 0)
                label_1426bee2a:
                    r14 = -2
                else
                    void* rax_3 = *(r10_1 + 0x58)
                    int64_t rcx_4 = 0
                    
                    while (*rax_3 != j)
                        if (*(rax_3 + 8) == j)
                            break
                        
                        r14 += 1
                        rcx_4 += 1
                        rax_3 += 0x30
                        
                        if (rcx_4 s>= rdx_2)
                            goto label_1426bee2a
                
                char var_28_1 = 1
                int64_t var_38_1
                var_38_1.d = r14
                sub_1426bcb00(arg1, r10_1, i_1, j, var_38_1.d, 2)
                break
    
    i_1 += 1
    rdi += 0x58
while (i_1 s< *(arg1 + 0x118))
