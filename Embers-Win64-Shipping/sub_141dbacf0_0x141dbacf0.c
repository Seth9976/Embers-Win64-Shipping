// 函数: sub_141dbacf0
// 地址: 0x141dbacf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm3 = *arg4
int32_t r10 = 0
int32_t r11 = arg4[1].d
int64_t rcx = sx.q(arg5)
int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm7
int128_t var_28 = zmm7
int32_t i = 0
int128_t zmm8
int128_t var_38 = zmm8
int128_t zmm9
int128_t var_48 = zmm9
int128_t zmm13
int128_t var_88 = zmm13
int128_t zmm14
int128_t var_98 = zmm14

if (rcx.d s> 0)
    int64_t r8 = *arg2
    zmm7 = r11
    zmm8 = zmm3:4.d
    zmm9 = zmm3.d
    
    do
        int128_t* rax_3 = (sx.q(i) << 5) + r8
        zmm13 = *(rax_3 + 4)
        zmm6 = *rax_3
        zmm14 = *(rax_3 + 8)
        int64_t zmm0
        zmm0.d = zmm13.q.d f* zmm8.d
        float zmm4 = zmm6.d f* zmm9.d f+ zmm0.d
        zmm0.d = rax_3[1].d.d f* zmm9.d
        zmm4 = zmm4 + zmm14.d f* zmm7.d f- *(rax_3 + 0xc)
        float zmm2 =
            *(rax_3 + 0x14) f* zmm8.d f+ zmm0.d + *(rax_3 + 0x18) f* zmm7.d f- *(rax_3 + 0x1c)
        
        if (not(zmm4 <= 0f) && zmm2 > 0f)
            int128_t zmm10 = *arg3
            zmm6.d = zmm6.d f* zmm10.d
            zmm3.d = zmm10.q.d f* rax_3[1].d
            int128_t zmm11 = *(arg3 + 4)
            zmm13.d = zmm13.d f* zmm11.d
            zmm0.d = zmm11.q.d f* *(rax_3 + 0x14)
            zmm6.d = zmm6.d f+ zmm13.d
            int128_t zmm12 = *(arg3 + 8)
            zmm3.d = zmm3.d f+ zmm0.d
            zmm14.d = zmm14.d f* zmm12.d
            zmm6.d = zmm6.d f+ zmm14.d
            zmm3.d = zmm3.d f+ zmm12.d f* *(rax_3 + 0x18)
            zmm6.d = zmm6.d f- *(rax_3 + 0xc)
            zmm3.d = zmm3.d f- *(rax_3 + 0x1c)
            int32_t arg_10
            int32_t arg_14
            
            if (zmm6.d f> 0f)
                if (zmm3.d f> 0f)
                    *arg1 = *arg3
                    arg1[1].d = *(arg3 + 8)
                    return arg1
                
                r10 = 1
                zmm0.d = zmm3.d f- zmm2
                zmm3.d = zmm3.d f/ zmm0.d
                arg_14 = zmm3.d
            else
                zmm0.d = zmm6.q.d f- zmm4
                zmm6.d = zmm6.d f/ zmm0.d
                arg_10 = zmm6.d
                
                if (not(zmm3.d f> 0f))
                    zmm0.d = zmm3.d f- zmm2
                    zmm3.d = zmm3.d f/ zmm0.d
                    r10.b = zmm3.d f> zmm6.d
                    arg_14 = zmm3.d
            int32_t rsi_1 = (rcx - 1).d
            float zmm1 = (&arg_10)[zx.q(r10)]
            zmm9.d = zmm9.d f* zmm1
            zmm0.d = 1f - zmm1
            zmm8.d = zmm8.d f* zmm1
            zmm7.d = zmm7.d f* zmm1
            zmm10.d = zmm10.d f* zmm0.d
            zmm11.d = zmm11.d f* zmm0.d
            zmm12.d = zmm12.d f* zmm0.d
            zmm10.d = zmm10.d f+ zmm9.d
            zmm11.d = zmm11.d f+ zmm8.d
            zmm12.d = zmm12.d f+ zmm7.d
            int64_t var_a8
            var_a8.d = zmm10.d
            var_a8:4.d = zmm11.d
            int32_t var_a0_1 = zmm12.d
            
            if (i != rsi_1)
                sub_140a4bff0((sx.q(i) << 5) + r8, (rcx << 5) - 0x20 + r8, 0x20)
            
            sub_141dbacf0(arg1, arg2, arg3, zmm3, rsi_1)
            return arg1
        
        i += 1
    while (i s< rcx.d)

*arg1 = zmm3
arg1[1].d = r11
return arg1
