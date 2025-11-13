// 函数: sub_141a614d0
// 地址: 0x141a614d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_1405be780(arg2)
void* rdx = arg1[8]
void* r10 = &arg1[7]
int32_t rbp = 0
int64_t r11_1 = sx.q(arg1[9].d) - 1

if (rdx != 0)
    r10 = rdx

int32_t rbx = *(r10 + ((sx.q(rax_1) & r11_1) << 2))

if (rbx != 0xffffffff)
    int64_t rdx_1 = *arg1
    int64_t r8_1
    
    while (true)
        r8_1 = sx.q(rbx) * 0x28
        
        if (*(r8_1 + rdx_1) == *arg2 && *(r8_1 + rdx_1 + 0x14) == arg2[5] && ((
                *(r8_1 + rdx_1 + 0x10) ^ arg2[4]) | (*(r8_1 + rdx_1 + 0xc) ^ arg2[3])
                | (*(r8_1 + rdx_1 + 8) ^ arg2[2]) | (*(r8_1 + rdx_1 + 4) ^ arg2[1])) == 0)
            break
        
        rbx = *(r8_1 + rdx_1 + 0x20)
        
        if (rbx == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t rax_15 = sx.q(*(r8_1 + rdx_1 + 0x24)) & r11_1
        void* rcx_7 = r10 + (rax_15 << 2)
        int32_t i = *(r10 + (rax_15 << 2))
        
        while (i != 0xffffffff)
            if (i == rbx)
                *rcx_7 = *(r8_1 + rdx_1 + 0x20)
                break
            
            int64_t i_1 = sx.q(i)
            i = *(rdx_1 + ((i_1 * 5 + 4) << 3))
            rcx_7 = rdx_1 + ((i_1 * 5 + 4) << 3)
    
    rbp = 1
    int64_t* rcx_10 = *(r8_1 + *arg1 + 0x18)
    
    if (rcx_10 != 0)
        int64_t r8_2 = *rcx_10
        (*r8_2)(rcx_10, 1, r8_2)
    
    sub_1405c3590(arg1, rbx, 1)

return zx.q(rbp)
