// 函数: sub_142b5e860
// 地址: 0x142b5e860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
int32_t* r15 = arg4
int64_t* rbx = arg3
int64_t* arg_18 = rbx

if (*arg4 s<= 0)
    int64_t* rax = sub_142b77560(arg2)
    int32_t r12_1 = rax.d
    
    if (rax.d s>= 0xffffffff)
        int32_t rsi_1 = 0
        
        while (true)
            int32_t rdi_1 = rsi_1
            
            if (rsi_1 != 0)
                int64_t rcx_2 = sx.q(rsi_1) * 2
                int64_t rax_1 = *(arg1 + 0x280)
                
                if (*(rax_1 + (rcx_2 << 3) + 0xc) s>= rsi_1)
                    rdi_1 = *(rax_1 + (rcx_2 << 3) + 0xc)
            
            int32_t rdi_2 = rdi_1 + 1
            int64_t r8 = *(arg1 + 0x280)
            rax = sx.q(rdi_2) << 4
            int32_t i = *(rax + r8)
            
            if (i != 5)
                while (i != 1)
                    rdi_2 += 1
                    rax = &rax[2]
                    i = *(rax + r8)
                    
                    if (i == 5)
                        goto label_142b5e90f
                
                break
            
        label_142b5e90f:
            rsi_1 = rdi_2
            
            if (rdi_2 s< 0)
                break
            
            if (*r15 s> 0)
                break
            
            int32_t* rdx_2 = (sx.q(rdi_2 + 1) << 4) + r8
            bool cond:0_1
            
            if (*rdx_2 != 8)
                cond:0_1 = sx.d(*(rdx_2 + 0xa)) == r12_1
            else
                cond:0_1 = sub_142b5f280(arg1 + 0x238, rdx_2[1], zx.d(rdx_2[2].w), arg2) == 0
            
            if (cond:0_1 != 0)
                if (rbx != 0)
                    rax = rbx
                    rbx = nullptr
                    arg_18 = nullptr
                else if (arg3 != 0)
                    rax = (*(*arg3 + 0x18))(arg3)
                    
                    if (rax == 0)
                        *r15 = 7
                        break
                else
                    rax = nullptr
                
                sub_142b61f40(arg1, rdi_2, rax, r15)
    else
        *r15 = 1

if (rbx != 0)
    (**rbx)(rbx, 1)
