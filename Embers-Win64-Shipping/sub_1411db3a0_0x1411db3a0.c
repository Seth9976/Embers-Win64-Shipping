// 函数: sub_1411db3a0
// 地址: 0x1411db3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t zmm5 = *arg2
int64_t var_d8
int64_t* rbx = &var_d8
int32_t zmm3 = arg2[1]
int32_t zmm4 = arg2[5]
int32_t zmm2 = arg2[4]
int64_t i_1 = 8
int32_t zmm1 = arg2[2]
int32_t rax_2 = arg2[2]
int128_t zmm6 = 0x7f7fffff
int128_t zmm7 = 0xff7fffff
int128_t zmm8 = 0x7f7fffff
var_d8 = *arg2
int128_t zmm9 = 0xff7fffff
int64_t zmm0 = arg2[3]
int32_t var_b4 = zmm0.d
int32_t var_a8 = zmm0.d
int32_t var_9c = zmm0.d
int32_t var_d0 = rax_2
int64_t var_84 = *(arg2 + 0xc)
int32_t var_cc = zmm5
int32_t var_c8 = zmm3
int32_t var_c4 = zmm4
int32_t var_c0 = zmm5
int32_t var_bc = zmm2
int32_t var_b8 = zmm1
int32_t var_b0 = zmm3
int32_t var_ac = zmm1
int32_t var_a4 = zmm2
int32_t var_a0 = zmm1
int32_t var_98 = zmm3
int32_t var_94 = zmm4
int32_t var_90 = zmm5
int32_t var_8c = zmm2
int32_t var_88 = zmm4
int32_t var_7c = arg2[5]
int128_t zmm0_1
int64_t i

do
    int32_t var_e8
    
    if (sub_1422f9aa0(arg3, rbx, &var_e8) != 0)
        zmm0_1 = var_e8
        
        if (not(zmm6.d f<= zmm0_1.d))
            zmm6 = zmm0_1
        
        int32_t var_e4
        int128_t zmm1_1 = var_e4
        
        if (not(zmm8.d f<= zmm1_1.d))
            zmm8 = zmm1_1
        
        if (not(zmm7.d f>= zmm0_1.d))
            zmm7 = zmm0_1
        
        if (not(zmm9.d f>= zmm1_1.d))
            zmm9 = zmm1_1
    
    rbx += 0xc
    i = i_1
    i_1 -= 1
while (i != 1)
zmm6.d = zmm6.d f+ zmm6.d
zmm8.d = zmm8.d f+ zmm8.d
zmm7.d = zmm7.d f+ zmm7.d
zmm9.d = zmm9.d f+ zmm9.d
zmm6.d = zmm6.d f- 0.5f
zmm8.d = zmm8.d f- 0.5f
zmm0_1.d = -0.5f f- zmm7.d
*arg1 = int.d(zmm6.d) s>> 1
arg1[1] = int.d(zmm8.d) s>> 1
arg1[2] = neg.d(int.d(zmm0_1.d) s>> 1)
arg1[3] = neg.d(int.d(-0.5f f- zmm9.d) s>> 1)
int32_t rax_10 = *(arg3 + 0x1598)
int32_t rcx_6 = *arg1
int32_t rdx_1 = arg1[2]

if (rax_10 s>= rcx_6)
    rcx_6 = rax_10

*arg1 = rcx_6
int32_t rax_11 = *(arg3 + 0x159c)
int32_t rcx_7 = arg1[1]

if (rax_11 s>= rcx_7)
    rcx_7 = rax_11

arg1[1] = rcx_7
int32_t rcx_8 = *(arg3 + 0x15a0)

if (rcx_8 s<= rdx_1)
    rdx_1 = rcx_8

arg1[2] = rdx_1
int32_t rdx_2 = arg1[3]
int32_t rcx_9 = *(arg3 + 0x15a4)

if (rcx_9 s<= rdx_2)
    rdx_2 = rcx_9

arg1[3] = rdx_2
__security_check_cookie(rax_1 ^ &var_108)
return arg1
