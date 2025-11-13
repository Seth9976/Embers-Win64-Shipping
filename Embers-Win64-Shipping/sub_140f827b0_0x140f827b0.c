// 函数: sub_140f827b0
// 地址: 0x140f827b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
float zmm12[0x4] = arg4
zmm12[0] = zmm12[0] f+ *(arg3 + 0x30)
int128_t zmm13 = *(arg3 + 0x34)
char rax_2 = *(arg6 + 0xa8)
arg4 = 0x3f800000
float var_e8
float var_d8
int32_t* rax_4
float zmm0[0x4]
int64_t zmm1

if (rax_2 u< 2)
    float (* rax_5)[0x4] = *(arg6 + 0xb0)
    
    if (rax_5 == 0)
        zmm0 = *(arg6 + 0x98)
    else
        zmm0 = *rax_5
    
    var_e8.o = zmm0
    zmm0 = var_e8
    zmm0[0] = zmm0[0] f* *arg10
    int32_t var_e0
    zmm1.d = var_e0.d f* arg10[2]
    var_d8 = zmm0[0]
    int32_t var_e4
    zmm0 = var_e4
    zmm0[0] = zmm0[0] f* arg10[1]
    int32_t var_d0_1 = zmm1.d
    float var_d4_1 = zmm0[0]
    int32_t var_dc
    zmm0 = var_dc
    zmm0[0] = zmm0[0] f* arg10[3]
    rax_4 = &var_d8
    float var_cc_1 = zmm0[0]
else
    uint32_t rcx = zx.d(rax_2)
    void* rdx = arg6 + 0x98
    
    if (rcx != 0)
        if (rcx == 1)
            rdx = *(arg6 + 0xb0)
        else if (rcx == 3)
            rdx = &arg10[8]
        else
            rdx = &arg10[4]
    
    zmm0 = data_14399f5c0.d
    zmm0[0] = zmm0[0] f- *rdx
    zmm1 = data_14399f5c0:8.d
    zmm0[0] = zmm0[0] * 0.5f
    zmm0[0] = zmm0[0] - 0.200000003f
    zmm0[0] = zmm0[0] f* *arg10
    var_e8 = zmm0[0]
    zmm0 = data_14399f5c0:4.d
    zmm0[0] = zmm0[0] f- *(rdx + 4)
    zmm0[0] = zmm0[0] * 0.5f
    zmm0[0] = zmm0[0] - 0.0500000007f
    zmm0[0] = zmm0[0] f* arg10[1]
    float var_e4_1 = zmm0[0]
    zmm1.d = zmm1.d f- *(rdx + 8)
    zmm0 = data_14399f5c0:0xc.d
    zmm1.d = zmm1.d f* 0.5f
    zmm1.d = zmm1.d f+ 0.150000006f
    zmm1.d = zmm1.d f* arg10[2]
    int32_t var_e0_1 = zmm1.d
    zmm0[0] = zmm0[0] f- *(rdx + 0xc)
    zmm0[0] = zmm0[0] * 0.5f
    zmm0[0] = zmm0[0] + 1f
    zmm0[0] = zmm0[0] f* arg10[3]
    rax_4 = &var_e8
    float var_dc_1 = zmm0[0]

int32_t rax_8 = *(arg3 + 0x4c) - *(arg3 + 0x48)
var_e8.o = *rax_4
int128_t zmm11 = *(arg7 + 8)
arg4[0] = 1f f/ zmm11.d
int128_t zmm10

if (rax_8 s> 0)
    zmm10 = zx.o(0)
else
    zmm10.d = zmm11.d f* 4f

zmm10 = __maxss_xmmss_memss(zmm10.d, arg5)
uint64_t result

if (zmm10.d f<= 0f)
    result = zx.q(arg9)
else
    if (arg11 == 0 || *(arg1 + 8) == 0)
        rax_8.b = 0x20
    else
        rax_8 = 0
    
    int128_t zmm9 = __maxss_xmmss_memss((*(arg3 + 0x40)).d, *(arg3 + 0x3c))
    float zmm4[0x4] = *(arg7 + 0x24)
    float zmm2[0x4] = *(arg7 + 0x1c)
    zmm1 = *(arg7 + 0x20)
    char r8 = *(arg7 + 0x34) & 1
    zmm12[0] = zmm12[0] * arg4[0]
    int64_t var_bc_1 = 0
    zmm13.d = zmm13.d f* arg4[0]
    char var_94
    char var_94_1 = (r8 * 2) | (var_94 & 0xfc)
    zmm9.d = zmm9.d f* arg4[0]
    zmm2[0] = zmm2[0] * zmm12[0]
    zmm4[0] = zmm4[0] f* zmm13.d
    zmm10.d = zmm10.d f* arg4[0]
    arg4 = *(arg7 + 0x28)
    zmm2[0] = zmm2[0] + zmm4[0]
    int64_t zmm5
    zmm5.d = zmm1.d f* zmm12[0]
    arg4[0] = arg4[0] f* zmm13.d
    zmm2[0] = zmm2[0] f+ *(arg7 + 0x2c)
    var_d8 = zmm2[0]
    zmm5.d = zmm5.d f+ arg4[0]
    int32_t var_d4_2 = zmm1.d
    float var_d0_2 = zmm4[0]
    float var_cc_2 = arg4[0]
    zmm5.d = zmm5.d f+ *(arg7 + 0x30)
    float var_ac_1[0x4] = var_d8.o
    zmm12[0] = zmm12[0] f* zmm11.d
    zmm0 = _mm_unpacklo_ps(zmm2, zmm5)
    int128_t zmm7
    zmm7.d = zmm13.d f* zmm11.d
    zmm12[0] = zmm12[0] f+ *(arg7 + 0xc)
    int64_t var_9c_1 = zmm0.q
    zmm7.d = zmm7.d f+ *(arg7 + 0x10)
    int32_t var_c0_1 = zmm11.d
    int128_t* var_f0_1 = &var_e8
    float var_c8 = zmm12[0]
    int32_t var_b4_1 = zmm10.d
    int32_t var_c4_1 = zmm7.d
    int32_t var_b0_1 = zmm9.d
    sub_140db3600(arg8, arg9 + 1, &var_c8, arg6 + 0xd0, rax_8.b, var_f0_1)
    result = zx.q(arg9 + 1)

__security_check_cookie(rax_1 ^ &var_118)
return result
