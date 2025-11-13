// 函数: sub_141a6a820
// 地址: 0x141a6a820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a2f010(arg2, arg1)
uint64_t var_60
sub_141a34710(arg2 + 0x28, sub_141a35680(&var_60, arg2 + 0x28, arg3))
int64_t var_50

if (var_50 != 0)
    sub_140a74f90(var_50)

*(arg2 + 0x18) = arg4
int64_t* rax_1
int128_t zmm6
rax_1, zmm6 = sub_141a6af80(arg3, &var_60, arg1)
*arg2 = *rax_1
arg2[1].q = rax_1[2]

if (*(arg3 + 0x18) s> 0)
    int32_t rax_2 = *(arg2 + 0x14)
    int64_t r11_1 = arg3[1].q
    int64_t rax_3 = sx.q(*(arg3 + 0x18))
    var_60 = *(arg2 + 0xc)
    int64_t r10_1 = rax_3 * 5
    
    if (var_60.b != 2)
        int32_t r8_2 = *(r11_1 + (r10_1 << 2) - 4)
        int32_t rax_4 = *(r11_1 + (r10_1 << 2) - 8)
        
        if (r8_2 s> rax_4)
            uint64_t rcx_5 = var_60
            int32_t r9_1 = r8_2 - rax_4
            int32_t arg_14 = 0
            int32_t arg_10
            arg_10.q = r8_2.q
            int128_t var_38_1 = zmm6
            int32_t rax_6
            int64_t zmm1
            
            while (true)
                rax_6 = var_60:4.d
                
                if (rax_6 s<= r8_2)
                    if (rax_6 != r8_2)
                        break
                    
                    if (rcx_5:4.d.d f<= 0f)
                        break
                
                arg5 = 0
                int64_t zmm2_1
                zmm2_1.d = rcx_5:4.d.d f- r9_1.q:4.d
                zmm1.d = zmm2_1.d f+ zmm2_1.d
                zmm1.d = zmm1.d f- 0.5f
                int32_t rcx_7 = int.d(zmm1.d) s>> 1
                int32_t rax_8 = rax_6 - r9_1 + rcx_7
                zmm2_1.d = zmm2_1.d f- _mm_cvtepi32_ps(zx.o(rcx_7)).d
                
                if (not(zmm2_1.d f>= 0f))
                    arg_14 = 0
                    rcx_5 = rax_8.q
                    var_60 = rcx_5
                else if (zmm2_1.d f>= 0.99999994f)
                    arg_14 = 0x3f7fffff
                    rcx_5 = rax_8.q
                    var_60 = rcx_5
                else
                    arg_14 = zmm2_1.d
                    rcx_5 = rax_8.q
                    var_60 = rcx_5
            
            zmm1 = *arg2
            
            if (zmm1.b != 2)
                int32_t arg_18
                arg_18.q = zmm1
                arg_10.q = rcx_5
                int32_t temp0_2 = zmm1:4.d
                
                if (rax_6 s< temp0_2)
                    arg_14 = 0
                    zmm1 = (*(r11_1 + (r10_1 << 2) - 8)).q
                else if (rax_6 == temp0_2 && not(arg_14.d f>= arg5))
                    arg_14 = 0
                    zmm1 = (*(r11_1 + (r10_1 << 2) - 8)).q
            
            uint64_t var_6c_1 = var_60
            int32_t var_70_2 = *(arg2 + 8)
            int32_t var_64_1 = rax_2
            uint128_t zmm0
            zmm0.q = zmm1
            *arg2 = zmm0
            arg2[1].q = var_6c_1

return arg2
