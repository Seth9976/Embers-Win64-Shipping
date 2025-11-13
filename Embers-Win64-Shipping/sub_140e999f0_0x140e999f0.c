// 函数: sub_140e999f0
// 地址: 0x140e999f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int64_t i_2 = sx.q(arg2[1].d)
sub_140a720d0(arg1, i_2.d)
int32_t rax = arg1[1].d + i_2.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4df0(arg1)

void* rsi = &arg1[2]
arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)

if (rsi != &arg2[2])
    sub_14059a8e0(rsi, arg2[5].d)
    int32_t rax_3 = arg2[5].d
    *(rsi + 0x18) = rax_3
    
    if (rax_3 != 0)
        void* r9_1 = arg2[4]
        void* r10_1 = *(rsi + 0x10)
        void* rdx_3 = &arg2[2]
        
        if (r9_1 != 0)
            rdx_3 = r9_1
        
        if (r10_1 != 0)
            rsi = r10_1
        
        memcpy(rsi, rdx_3, (zx.q(rax_3 + 0x1f) u>> 5 << 2).d)

int64_t i_1 = i_2
void* rcx_3 = *arg2
int32_t r8_4 = 0

if (i_1 s> 0)
    int32_t rdx_4 = 1
    int64_t* r11_1 = *arg1 - rcx_3
    int64_t* rax_4 = rcx_3 + 8
    int64_t i
    
    do
        void* rcx_4 = arg2[4]
        void* r9_2 = &arg2[2]
        
        if (rcx_4 != 0)
            r9_2 = rcx_4
        
        int32_t rcx_5 = r8_4
        
        if (r8_4 s< 0)
            rcx_5 = r8_4 + 0x1f
        
        if ((*(r9_2 + (sx.q(rcx_5 s>> 5) << 2)) & rdx_4) == 0)
            *(r11_1 + rax_4 - 8) = rax_4[-1].d
            *(r11_1 + rax_4 - 4) = *(rax_4 - 4)
        else
            *(r11_1 + rax_4 - 8) = rax_4[-1]
            void* rcx_9 = *rax_4
            *(r11_1 + rax_4) = rcx_9
            
            if (rcx_9 != 0)
                *(rcx_9 + 8) += 1
            
            *(r11_1 + rax_4 + 8) = rax_4[1].d
            *(r11_1 + rax_4 + 0xc) = *(rax_4 + 0xc)
        
        r8_4 += 1
        rdx_4 = rol.d(rdx_4, 1)
        rax_4 = &rax_4[3]
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1
