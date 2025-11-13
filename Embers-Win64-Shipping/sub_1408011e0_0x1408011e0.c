// 函数: sub_1408011e0
// 地址: 0x1408011e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r11 = *arg1
int64_t* r8 = r11
void* r10 = &r11[sx.q(arg1[1].d) * 5]

if (r11 != r10)
    do
        if (*r8 == *arg2 && r8[1] == arg2[1] && r8[2].w == arg2[2].w)
            int32_t rdx_2 = ((r8 - r11) s/ 0x28).d
            
            if (rdx_2 == 0xffffffff)
                break
            
            return arg1[2] + sx.q(rdx_2) * 0x48
        
        r8 = &r8[5]
    while (r8 != r10)

return 0
