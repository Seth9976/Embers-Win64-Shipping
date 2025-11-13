// 函数: sub_1403f7340
// 地址: 0x1403f7340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x14)
int32_t r11 = arg1[2].d

if (i u< arg2)
    int32_t r9_1 = *(arg1 + 0xc)
    int32_t rbx_1 = arg1[1].d
    
    do
        uint32_t rdx
        
        if (r9_1 u>= rbx_1)
            rdx = 0
        else
            int64_t rax_1 = *arg1
            r9_1 += 1
            *(arg1 + 0xc) = r9_1
            rdx = zx.d(*(zx.q(rbx_1 - r9_1) + rax_1))
        
        char rcx_2 = i.b
        i += 8
        r11 |= rdx << rcx_2
    while (i s<= 0x18)

arg1[3].d += arg2
char rcx_3 = arg2.b
*(arg1 + 0x14) = i - arg2
arg1[2].d = r11 u>> rcx_3
return zx.q((1 << rcx_3) - 1) & zx.q(r11)
