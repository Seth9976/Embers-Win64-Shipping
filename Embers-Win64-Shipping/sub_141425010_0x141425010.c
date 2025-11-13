// 函数: sub_141425010
// 地址: 0x141425010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = sx.q(arg5)
int128_t zmm4 = arg2
int128_t zmm5 = arg1

while (i s<= sx.q(arg6))
    int64_t r9_1 = *(arg7 + (i << 3))
    
    if (r9_1 != -1)
        arg2.d = zmm5.d f+ zmm5.d
        arg2.d = arg2.d f+ 0.5f
        int32_t r8_2 = int.d(arg2.d) s>> 1
        arg2.d = zmm4.d f+ zmm4.d
        int32_t r8_3 = r8_2 - arg8
        arg2.d = arg2.d f+ 0.5f
        int32_t rcx_3 = (int.d(arg2.d) s>> 1) - arg8
        
        if (r8_3 s< 0x40 && rcx_3 s>= 0)
            if (r8_3 s<= 0)
                r8_3 = 0
            
            if (rcx_3 s>= 0x3f)
                rcx_3 = 0x3f
            
            if (rcx_3 - r8_3 != 0x3f)
                int64_t rax = ((1 << (rcx_3 - r8_3 + 1).b) - 1) << r8_3.b
                
                if (rax != 0)
                    *(arg7 + (i << 3)) = rax | r9_1
            else
                *(arg7 + (i << 3)) = -1 | r9_1
    
    i += 1
    zmm5.d = zmm5.d f+ arg3
    zmm4.d = zmm4.d f+ arg4
