// 函数: sub_141eafee0
// 地址: 0x141eafee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg4
int64_t i_2 = sx.q(arg3)
int32_t rdx_1 = arg8[1].d + i_2.d

if (rdx_1 s> *(arg8 + 0xc))
    sub_1405a5390(arg8, rdx_1)

int32_t r12 = 0
int64_t r15
r15.b = 0
float zmm6[0x4] = *arg10
float zmm7[0x4] = *(arg10 + 4)
zmm6[0] = zmm6[0] f- *arg9
zmm7[0] = zmm7[0] f- arg9[1]
uint128_t zmm8
zmm8.d = (*(arg10 + 8)).d f- arg9[2]
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm7[0] = zmm7[0] + zmm6[0]
zmm7[0] = zmm7[0] + zmm8.d f* zmm8.d

if (zmm7[0] == 1f)
    goto label_141eb002e

float var_78

if (zmm7[0] >= 9.99999994e-09f)
    uint128_t zmm3 = zmm7
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm7[0], zmm3.d)
    float zmm2[0x4] = 0x3f000000
    zmm3.d = zmm3.d f* 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm2[0] = 0.5f - zmm3.d * temp0_1[0]
    temp0_1[0] = temp0_1[0] * zmm2[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    zmm3.d = zmm3.d f* temp0_1[0] * temp0_1[0]
    temp0_1[0] = temp0_1[0] * (0.5f f- zmm3.d)
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    arg5 = temp0_1[0].b
    zmm6[0] = zmm6[0] * temp0_1[0]
    zmm7[0] = zmm7[0] * temp0_1[0]
    zmm8.d = zmm8.d f* temp0_1[0]
label_141eb002e:
    int32_t var_70_1 = zmm8.d
    float var_74_1 = zmm7[0]
    var_78 = zmm6[0]
else
    float zmm1 = data_143dbb1fc
    var_78 = data_143dbb1f8[0]
    float var_70 = data_143dbb200[0]
    float var_74 = zmm1

int64_t i_1 = i_2

if (i_2.d s> 0)
    zmm6 = arg13
    zmm7 = zx.o(0)
    zmm8 = arg6
    int64_t i
    
    do
        float zmm0[0x4] = *(rbp + 0x34)
        
        if (not(zmm0[0] > zmm6[0]))
            if (not(zmm0[0] <= zmm7[0]))
                int32_t rax_1
                rax_1, zmm8 = sub_1417c9220(rbp, &var_78)
                rbp[2].d = rax_1
            
            int64_t rbx = sx.q(arg8[1].d)
            int32_t rax_2 = (rbx + 1).d
            arg8[1].d = rax_2
            
            if (rax_2 s> *(arg8 + 0xc))
                sub_1405c5340(arg8)
            
            int64_t rdi_1 = rbx * 0x88
            void* rbx_2 = *arg8 + rdi_1
            *(rbx_2 + 0x64) = 0
            *(rbx_2 + 0x6c) = 0
            *(rbx_2 + 0x74) = 0
            *(rbx_2 + 0x7c) = 0
            *(rbx_2 + 0x84) = 0
            memset(rbx_2, 0, 0x88)
            *(rbx_2 + 8) = 0x3f800000
            char* rbx_4 = *arg8 + rdi_1
            int32_t rax_9
            rax_9, zmm6, zmm7, zmm8 =
                sub_141ebeee0(arg2, rbp, rbx_4, zmm8, arg7, arg9, arg10, arg11, arg12, arg14, arg15)
            
            if (rax_9 != 0)
                arg8[1].d -= 1
                r12 = 1
            else
                r15.b |= *rbx_4 & 1
        
        rbp = &rbp[8]
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_141eb1fb0(*arg8, arg8[1].d, arg5)
*arg1 = r15.b
return zx.q(r12)
