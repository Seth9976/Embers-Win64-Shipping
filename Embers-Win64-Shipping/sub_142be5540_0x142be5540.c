// 函数: sub_142be5540
// 地址: 0x142be5540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x10)
int32_t r15 = -1

if (rax s< 0)
    return 0

if (rax u< 0xffffffff)
    r15 = rax

int32_t rdi = 0

if (r15 != 0)
    int16_t* r14_1 = nullptr
    
    do
        if (rdi u< zx.d(*(arg1 + 0x174)))
            int64_t rbp_1 = *(arg1 + 0x2d8)
            
            if (rbp_1 != 0)
                int64_t rsi_1 = (*(rbp_1 + 0x20))(0)
                int32_t rax_4 = *(arg1 + 0x270)
                
                if (rax_4 != 0x10000)
                    if (rax_4 == 0x20000)
                        int32_t rax_5
                        
                        if (*(arg1 + 0x350) == 0)
                            rax_5, arg3 = sub_142be78c0(arg1, arg3)
                        
                        if ((*(arg1 + 0x350) != 0 || rax_5 == 0) && rdi u< zx.d(*(arg1 + 0x358)))
                            int16_t rcx_2 = *(r14_1 + *(arg1 + 0x360))
                            
                            if (rcx_2 u>= 0x102)
                                rsi_1 = *(*(arg1 + 0x368) + (sx.q(zx.d(rcx_2) - 0x102) << 3))
                            else
                                rsi_1 = (*(rbp_1 + 0x20))(zx.q(rcx_2))
                    else if (rax_4 == 0x25000)
                        int32_t rax_11
                        
                        if (*(arg1 + 0x350) == 0)
                            rax_11, arg3 = sub_142be78c0(arg1, arg3)
                        
                        if ((*(arg1 + 0x350) != 0 || rax_11 == 0) && rdi u< zx.d(*(arg1 + 0x358)))
                            rsi_1 =
                                (*(rbp_1 + 0x20))(zx.q(sx.d(*(*(arg1 + 0x360) + zx.q(rdi))) + rdi))
                else if (rdi u< 0x102)
                    rsi_1 = (*(rbp_1 + 0x20))(zx.q(rdi))
                
                char* rax_15 = arg2
                uint32_t i
                uint32_t rdx
                
                do
                    rdx = zx.d(*rax_15)
                    i = zx.d(*(rax_15 + rsi_1 - arg2))
                    
                    if (rdx != i)
                        break
                    
                    rax_15 = &rax_15[1]
                while (i != 0)
                
                if (rdx - i == 0)
                    return zx.q(rdi)
        
        rdi += 1
        r14_1 = &r14_1[1]
    while (rdi u< r15)

return 0
