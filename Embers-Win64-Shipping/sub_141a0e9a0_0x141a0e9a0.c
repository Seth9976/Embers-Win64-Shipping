// 函数: sub_141a0e9a0
// 地址: 0x141a0e9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg4

if (arg4 != 0)
    goto label_141a0e9ec

int64_t rdx = sx.q(*(*(arg1 + 0x110) + 0x110))
void* rax_1

if (rdx.d s< 0 || rdx.d s>= *(arg2 + 0x1560))
    rax_1.b = 0
else
    rax_1.b = 1

if (rax_1.b != 0)
    rdi = *(*(arg2 + 0x1558) + (rdx << 3))
label_141a0e9ec:
    
    if (rdi != 0)
        if (*(arg2 + 0x1548) s>= 3)
            int64_t rcx_1 = *(arg1 + 0x5e8)
            int64_t rbp_1 = *(arg1 + 0x5b0)
            int64_t r15_1 = sx.q(*(rdi + 0x18))
            void* r14_1 = *(rbp_1 + (sx.q(*(r15_1 + rcx_1)) << 3))
            
            if (r14_1 == 0)
                goto label_141a0ea6a
            
            void* rax_3 = sub_141a225c0()
            void* rdx_1 = *(r14_1 + 0x10)
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                rcx_1 = *(arg1 + 0x5e8)
                rbp_1 = *(arg1 + 0x5b0)
            label_141a0ea6a:
                void* rbp_2 = *(rbp_1 + (sx.q(*(r15_1 + rcx_1)) << 3))
                
                if (rbp_2 != 0)
                    void* rax_7 = sub_142542e20()
                    void* rdx_2 = *(rbp_2 + 0x10)
                    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                    
                    if (rax_8.d s<= *(rdx_2 + 0x38)
                            && *(*(rdx_2 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30
                            && *(rbp_2 + 0xd0) != 0)
                        sub_141a225c0()
        
        if (*(arg1 + 0x49c) s<= 1 || *(rdi + 1) != 0)
            return 1 << (sx.q(*(rdi + 0x10)) u% 0x40)
        
        int64_t result = 1 << (sx.q(*(rdi + 0x10)) u% 0x40) | 1 << (sx.q(*(rdi + 0x30)) u% 0x40)
            | 1 << (sx.q(*(rdi + 0x50)) u% 0x40) | 1 << (sx.q(*(rdi + 0x70)) u% 0x40)
        return result

return 0
