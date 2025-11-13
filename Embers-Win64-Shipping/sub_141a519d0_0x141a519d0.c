// 函数: sub_141a519d0
// 地址: 0x141a519d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
int64_t* rax_1 = (*(*arg2 + 0x2e0))(arg2)
int64_t rdx = 0
int64_t* r8 = *rax_1
uint64_t rdi_1 = sx.q(rax_1[1].d) << 3 u>> 3

if (r8 u> &r8[rax_1[1]])
    rdi_1 = 0

if (rdi_1 != 0)
    do
        int64_t rax_5 = (*(*r8 + 0x90)):8.q
        int64_t arg_8 = rax_5
        
        if (rax_5.b != 2)
            char r11_1 = arg1[1].b
            int64_t* rcx_1 = &arg_8
            
            if (r11_1 != 0)
                rcx_1 = arg1
            
            char r10_1 = *rcx_1
            
            if (r10_1 != 2)
                uint32_t rax_6 = (rax_5 u>> 0x20).d
                int32_t temp0_1 = *(rcx_1 + 4)
                
                if (temp0_1 s<= rax_6)
                    if (temp0_1 s>= rax_6)
                        int64_t* rax_7 = &arg_8
                        
                        if (r10_1 == 1)
                            rax_7 = rcx_1
                        
                        rcx_1 = rax_7
                    else
                        rcx_1 = &arg_8
            
            if (rcx_1 != arg1)
                if (r11_1 != 0)
                    arg1[1].b = 0
                
                *arg1 = *rcx_1
                arg1[1].b = 1
        
        r8 = &r8[1]
        rdx += 1
    while (rdx != rdi_1)

return arg1
