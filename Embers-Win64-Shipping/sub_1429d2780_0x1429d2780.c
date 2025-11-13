// 函数: sub_1429d2780
// 地址: 0x1429d2780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = arg1[1]
int32_t r11 = arg3 * 2
int64_t r14 = sx.q(arg2)
int64_t rbx = *(r10 + 0x90)
void* rsi = *(r10 + 0xa8) + (sx.q(*(rbx + (sx.q(r11 + 1) << 2))) << 2)
int32_t r11_1 = *(rbx + (sx.q(r11) << 2))

if (r11_1 == 1)
    return zx.q(r11_1)

int32_t rcx_1 = 0

if (r11_1 s> 0)
    int64_t rdx_1 = sx.q(*(*(arg1[4] + 0x60) + (r14 << 2))) * 2
    
    do
        rdx_1 += 2
        *(rdx_1 + arg1[5] - 2) = rcx_1.w
        rcx_1 += 1
    while (rcx_1 s< r11_1)

void* rdx_2 = arg1[3]
int32_t r10_1 = (r14 * 2).d
int64_t rcx_2 = sx.q(r10_1 + 1)
int64_t* rdx_3 = arg1[4]
int32_t* rbx_1 = *(rdx_2 + 0x120) + (sx.q(*(*(rdx_2 + 0x108) + (rcx_2 << 2))) << 2)
int64_t r8_1 = *(*rdx_3 + 0x108)
int16_t* r9_2 = rdx_3[0xf] + (sx.q(*((rcx_2 << 2) + r8_1)) << 1)
int32_t i_2 = *(r8_1 + (sx.q(r10_1) << 2))

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int32_t rax_14 = *(*(*arg1 + 0x108) + (sx.q(*rbx_1) << 2))
        
        if (r11_1 != 2)
            int32_t rcx_6 = 0
            
            if (r11_1 s> 0)
                void* rdx_5 = rsi
                
                do
                    if (rax_14 == *rdx_5)
                        *r9_2 = rcx_6.w
                    
                    rcx_6 += 1
                    rdx_5 += 4
                while (rcx_6 s< r11_1)
        else if (rax_14 == *(rsi + 4))
            *r9_2 = 1
        
        rbx_1 = &rbx_1[1]
        r9_2 = &r9_2[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(r11_1)
