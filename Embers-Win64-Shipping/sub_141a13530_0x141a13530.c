// 函数: sub_141a13530
// 地址: 0x141a13530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_141a0f5f0(arg2)
void* rdx = arg1[8]
void* r10 = &arg1[7]
int32_t rbp = 0
int64_t r11_1 = sx.q(arg1[9].d) - 1

if (rdx != 0)
    r10 = rdx

int32_t rbx = *(r10 + ((sx.q(rax_1) & r11_1) << 2))

if (rbx != 0xffffffff)
    void* rdx_1 = *arg1
    int64_t* r8_1
    
    while (true)
        r8_1 = sx.q(rbx) * 0x70
        
        if (*(r8_1 + rdx_1) == *arg2)
            int32_t rcx_4 = (*(r8_1 + rdx_1 + 0x14) ^ *(arg2 + 0x14))
                | (*(r8_1 + rdx_1 + 0x10) ^ arg2[2].d) | (*(r8_1 + rdx_1 + 0xc) ^ *(arg2 + 0xc))
            
            if ((rcx_4 | (*(r8_1 + rdx_1 + 8) ^ arg2[1].d)) == 0)
                break
        
        rbx = *(r8_1 + rdx_1 + 0x68)
        
        if (rbx == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t rax_14 = sx.q(*(r8_1 + rdx_1 + 0x6c)) & r11_1
        void* rcx_6 = r10 + (rax_14 << 2)
        
        for (int32_t i = *(r10 + (rax_14 << 2)); i != 0xffffffff; i = *rcx_6)
            if (i == rbx)
                *rcx_6 = *(r8_1 + rdx_1 + 0x68)
                break
            
            rcx_6 = rdx_1 + 0x68 + sx.q(i) * 0x70
    
    sub_1405ae080(*arg1 + 0x18 + r8_1)
    rbp = 1
    sub_140ac00b0(arg1, rbx, 1)

return zx.q(rbp)
