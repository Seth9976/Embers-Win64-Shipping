// 函数: sub_142608ee0
// 地址: 0x142608ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
uint64_t i_1 = zx.q(arg3)

if (arg3 s> 0)
    void* r8 = arg2
    int64_t r10_1 = sx.q((i_1 - 1).d)
    int128_t zmm6
    int128_t var_28_1 = zmm6
    int64_t r11_2 = r10_1 * 0xc
    int64_t rbx_1 = r10_1 << 2
    int64_t r10_2 = 0
    uint64_t i
    
    do
        float zmm4 = arg1[2]
        zmm6 = *(r11_2 + arg2 + 8)
        float zmm5 = *(r8 + 8)
        int32_t rcx
        rcx.b = zmm6.d f> zmm4
        int32_t rax_2
        rax_2.b = zmm5 > zmm4
        
        if (rax_2 != rcx
                && not((*(r11_2 + arg2) f- *r8) * (zmm4 - zmm5) / (zmm6.d - zmm5) f+ *r8 <= *arg1))
            rsi.b = rsi.b == 0
        
        zmm5 = zmm5 f- zmm6.d
        float zmm3 = *r8 f- *(r11_2 + arg2)
        float zmm2 = zmm5 * zmm5 + zmm3 * zmm3
        zmm4 = (zmm4 f- zmm6.d) * zmm5 + (*arg1 f- *(r11_2 + arg2)) * zmm3
        *(rbx_1 + arg5) = zmm4
        
        if (not(zmm2 <= 0f))
            zmm4 = zmm4 / zmm2
            *(rbx_1 + arg5) = zmm4
        
        if (not(zmm4 >= 0f))
            *(rbx_1 + arg5) = 0
            zmm4 = (zx.o(0)).d
        else if (not(zmm4 <= 1f))
            *(rbx_1 + arg5) = 0x3f800000
            zmm4 = 1f
        
        float zmm0 = zmm4
        zmm4 = zmm4 * zmm5 f+ *(r11_2 + arg2 + 8)
        zmm0 = zmm0 * zmm3 f+ *(r11_2 + arg2)
        void* r11_3 = r8
        r8 += 0xc
        r11_2 = r11_3 - arg2
        zmm4 = zmm4 - arg1[2]
        zmm0 = zmm0 - *arg1
        *(rbx_1 + arg4) = zmm4 * zmm4 + zmm0 * zmm0
        rbx_1 = r10_2
        r10_2 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(rsi.b)
