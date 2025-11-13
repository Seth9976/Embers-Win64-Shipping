// 函数: sub_141eaa740
// 地址: 0x141eaa740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x50)
int32_t rdi_1 = rdi - 1

if (rdi - 1 s< 0)
    return 

int64_t r14_2 = sx.q(rdi_1) << 4
int64_t rbp_1 = r14_2
int64_t r12_2 = sx.q(rdi_1 + 1) << 4
int32_t temp1_1

do
    int64_t* rsi_1 = *(r14_2 + *(arg1 + 0x48))
    
    if (rsi_1 != 0 && arg2 != 0)
        int64_t rax = sub_142484770()
        
        if (rax != 0)
            int64_t r8 = rax + 0x30
            rax = sx.q(*(rax + 0x38))
            
            if (rax.d s<= *(arg2 + 0x38) && *(*(arg2 + 0x30) + (rax << 3)) == r8)
                rax = rsi_1[2]
                int64_t rcx_1 = sx.q(*(arg2 + 0x38))
                
                if (rcx_1.d s<= *(rax + 0x38) && *(*(rax + 0x30) + (rcx_1 << 3)) == arg2 + 0x30)
                    (*(*rsi_1 + 0x280))(rsi_1, zx.q(arg3))
                    
                    if (arg3 != 0)
                        int32_t rax_3 = *(arg1 + 0x50)
                        int32_t rcx_4 = rax_3 - rdi_1
                        
                        if (rcx_4 != 1)
                            int64_t rax_4 = *(arg1 + 0x48)
                            memmove(rax_4 + rbp_1, r12_2 + rax_4, (rcx_4 - 1) << 4)
                            rax_3 = *(arg1 + 0x50)
                        
                        *(arg1 + 0x50) = rax_3 - 1
                        sub_1405a5010(arg1 + 0x48)
                        sub_141eac150(arg1, rsi_1)
    
    r12_2 -= 0x10
    rbp_1 -= 0x10
    r14_2 -= 0x10
    temp1_1 = rdi_1
    rdi_1 -= 1
while (temp1_1 - 1 s>= 0)
