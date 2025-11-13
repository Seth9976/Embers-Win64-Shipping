// 函数: sub_141e56130
// 地址: 0x141e56130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_1 = arg3[1].d
int32_t r10 = 0
int32_t r9 = r9_1 - 2
int64_t rcx = 0xffffffff

if (r9_1 - 2 s>= 0)
    int64_t r11_1 = *arg3
    
    do
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r9 + r10)
        rcx = sx.q((temp2_1 - temp1_1) s>> 1)
        float zmm2 = *(r11_1 + (rcx << 2))
        int32_t zmm0 = *(r11_1 + (rcx << 2) + 4)
        
        if (not(arg2 < zmm2) && arg2 f<= zmm0)
            break
        
        if (arg2 f<= zmm0)
            if (arg2 >= zmm2)
                break
            
            r9 = (rcx - 1).d
        else
            r10 = (rcx + 1).d
    while (r10 s<= r9)

return zx.q(rcx.d)
