// 函数: sub_140f90770
// 地址: 0x140f90770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t __saved_zmm6 = arg4
int64_t rsi
rsi.b = 0

if (arg1[0x74] != 0)
    int32_t zmm0_1 = sub_140e66040(data_143e29f28)
    bool rax
    
    if (not(zmm0_1 f> *(arg1 + 0x3fc)))
        rax = sub_140f4a5f0(arg1[0x76])
    
    if (not(zmm0_1 f> *(arg1 + 0x3fc)) && (rax != 0 || *(arg1 + 0x4e4) == rax))
        arg1[0x81].d
        rsi.b = 1
        double zmm6[0x2]
        rax, zmm6 = sub_140f6bc30(arg1)
        
        if (rax != 0)
            sub_140ea2280(&arg1[0x95], arg1[0x81].d, zmm6)
    else
        sub_140ede470(&arg1[0x95], arg3.d)
        arg4 = arg1[0x97].d
        
        if (not(arg4.d f== 0f))
            int512_t zmm1_2
            zmm1_2.o = arg4
            int512_t zmm2_1
            int128_t zmm6_1
            int32_t zmm7
            rax, zmm2_1, zmm6_1, zmm7 = sub_140f6bc30(arg1)
            
            if (rax == 0)
                Dbg1::Reset(&arg1[0x95])
            else
                rsi.b = 1
                zmm6_1.d = zmm6_1.d f* zmm7
                zmm2_1.o = zmm6_1
                (*(*arg1 + 0x250))(arg1, sub_140e12190(arg1), zmm2_1, zx.q(*(arg1 + 0x4e4)), arg6, 
                    arg5, __saved_zmm6)
        
        if (*(arg1 + 0x4e4) == 0)
            int32_t zmm0_2
            float zmm7_1
            int32_t zmm8
            zmm0_2, zmm7_1, zmm8 = sub_140ebf340(&arg1[0x9c], sub_140e12190(arg1))
            
            if (not(zmm0_2 f== zmm8))
                rsi.b = 1
                sub_140f89930(arg1)
            
            sub_140ede410(&arg1[0x9c], zmm7_1)
    
    arg1[0x81].d = 0

*(arg1 + 0x4dc) = rsi.b
return rsi.b != 0
