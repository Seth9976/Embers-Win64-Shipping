// 函数: sub_141b64710
// 地址: 0x141b64710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_140b5ead0(arg2.d)
void* rcx_1 = arg1[8]
void* r10 = &arg1[7]
int32_t r14 = 0
int64_t r11_1 = sx.q(arg1[9].d) - 1

if (rcx_1 != 0)
    r10 = rcx_1

int32_t rdi = *(r10 + ((sx.q(rax_1 + (arg2 u>> 0x20).d) & r11_1) << 2))

if (rdi != 0xffffffff)
    int64_t r8_1 = *arg1
    int64_t rdx_2
    
    while (true)
        rdx_2 = sx.q(rdi)
        int64_t rax_5 = rdx_2 * 5
        
        if (*(r8_1 + (rax_5 << 3)) == arg2)
            break
        
        rdi = *(r8_1 + (rax_5 << 3) + 0x20)
        
        if (rdi == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t rax_8 = rdx_2 * 5
        int64_t rax_10 = sx.q(*(r8_1 + (rax_8 << 3) + 0x24)) & r11_1
        void* rcx_2 = r10 + (rax_10 << 2)
        int32_t i = *(r10 + (rax_10 << 2))
        
        while (i != 0xffffffff)
            if (i == rdi)
                *rcx_2 = *(r8_1 + (rax_8 << 3) + 0x20)
                break
            
            int64_t i_1 = sx.q(i)
            int64_t rcx_4 = i_1 + ((i_1 + 1) << 2)
            i = *(r8_1 + (rcx_4 << 3))
            rcx_2 = r8_1 + (rcx_4 << 3)
    
    r14 = 1
    int64_t* rbx_1 = *(*arg1 + rdx_2 * 0x28 + 0x10)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rbp_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rbp_1 == 1)
                int64_t r8_2 = *rbx_1
                (*(r8_2 + 8))(rbx_1, 1, r8_2)
    
    sub_1405c3590(arg1, rdi, 1)

return zx.q(r14)
