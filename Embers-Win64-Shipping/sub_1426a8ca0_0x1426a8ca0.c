// 函数: sub_1426a8ca0
// 地址: 0x1426a8ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg3)
int32_t rbx = 0

if (r12.d == 5)
    for (int32_t i = 0; i s< 5; i += 1)
        rbx += sub_1426a8ca0(arg1, arg2, zx.q(i))
    
    return zx.q(rbx)

for (void* i_1 = *(arg1[0x17] + (r12 << 3)); i_1 != 0; i_1 = *(i_1 + 0x30))
    if (*(i_1 + 0x40) == arg2)
        sub_1426b81d0(arg1, i_1, 2)
        rbx += 1

int32_t rdi = arg1[0x1a].d
int32_t rdi_1 = rdi - 1

if (rdi - 1 s>= 0)
    int64_t r14_2 = sx.q(rdi_1) * 0x18
    int64_t r15_1 = r14_2
    int32_t temp1_1
    
    do
        int64_t r9_1 = arg1[0x19]
        
        if (*(r14_2 + r9_1 + 0xc) == r12.d && *(r14_2 + r9_1 + 8) == 5)
            void* rax_5 = *(r14_2 + r9_1)
            
            if (rax_5 != 0 && *(rax_5 + 0x40) == arg2)
                int32_t rdx_2 = arg1[0x1a].d
                int32_t rcx_4 = rdx_2 - rdi_1 - 1
                
                if (rcx_4 s>= 1)
                    rcx_4 = 1
                
                if (rcx_4 != 0)
                    memcpy(r15_1 + r9_1, r9_1 + sx.q(rdx_2 - rcx_4) * 0x18, rcx_4 * 0x18)
                    rdx_2 = arg1[0x1a].d
                
                rbx += 1
                arg1[0x1a].d = rdx_2 - 1
        
        r15_1 -= 0x18
        r14_2 -= 0x18
        temp1_1 = rdi_1
        rdi_1 -= 1
    while (temp1_1 - 1 s>= 0)

return zx.q(rbx)
