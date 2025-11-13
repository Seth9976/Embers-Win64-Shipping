// 函数: sub_1403861c0
// 地址: 0x1403861c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_2 = sx.q(arg6)

if (arg4 == 0)
    if (i_2 s> 0)
        int16_t* rcx_1 = arg1 + (sx.q(arg3) << 1)
        int64_t i
        
        do
            *rcx_1 = 0
            rcx_1 = &rcx_1[sx.q(arg2)]
            i = i_2
            i_2 -= 1
        while (i != 1)
else if (i_2 s> 0)
    int16_t* rcx = arg1 + (sx.q(arg3) << 1)
    int64_t i_1
    
    do
        float zmm0 = *arg4 * 32768f
        
        if (not(zmm0 > -32768f))
            zmm0 = -32768f
        else if (not(32767f > zmm0))
            zmm0 = 32767f
        
        arg4 = &arg4[sx.q(arg5)]
        *rcx = (int.d(zmm0)).w
        rcx = &rcx[sx.q(arg2)]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
