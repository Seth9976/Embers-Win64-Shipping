// 函数: sub_1413e9190
// 地址: 0x1413e9190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x3c)
int32_t rax_1
int32_t* rcx_2

if (arg1[2].d == *(arg1 + 0x3c))
label_1413e9203:
    rcx_2 = nullptr
else
    void* r9_1 = arg1[9]
    void* r11_1 = &arg1[8]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    rax_1 = *(r11_1 + (((sx.q(arg1[0xa].d) - 1) & sx.q(arg2)) << 2))
    
    if (rax_1 == 0xffffffff)
    label_1413e9203_1:
        rcx_2 = nullptr
    else
        while (true)
            rcx_2 = sx.q(rax_1) * 0xd0 + arg1[1]
            
            if (*rcx_2 == arg2)
                break
            
            rax_1 = rcx_2[0x30]
            
            if (rax_1 == 0xffffffff)
                goto label_1413e9203_2
        
        if (rax_1 == 0xffffffff)
        label_1413e9203_2:
            rcx_2 = nullptr

void* rdx = &rcx_2[4]

if (rcx_2 == 0)
    rdx = nullptr

if (rdx == 0)
    rax_1.b = 0
    return rax_1

int128_t zmm0 = *(rdx + 0x50)
*(rdx + 0x90) = *arg1
int64_t rax_3
rax_3.b = 1
*arg3 = zmm0
arg3[1] = *(rdx + 0x60)
arg3[2] = *(rdx + 0x70)
arg3[3] = *(rdx + 0x80)
return rax_3
