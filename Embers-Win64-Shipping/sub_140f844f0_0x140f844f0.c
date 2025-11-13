// 函数: sub_140f844f0
// 地址: 0x140f844f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
float var_c0
sub_140f030e0(*arg1[0x5b], &var_c0)
int128_t zmm6 = arg1[0xc6].d
float zmm1 = 1f f/ zmm6.d
int64_t var_98 = 0x3f800000
int32_t var_90 = 0
int64_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_b8 = zmm6.d
int32_t var_ac = zmm6.d
float zmm0 = zmm1 * *arg3
zmm1 = zmm1 * arg3[1]
float var_a0 = zmm0
float var_9c = zmm1
int32_t var_84[0x6]
int32_t zmm7_1 = sub_1408b8950(&var_84, &var_b8, &arg3[7])
zmm6.d = zmm6.d f* arg3[2]
int64_t var_8c = 0
int64_t* rbx_1 = nullptr
var_98:4.d = arg3[3]
float var_90_1 = arg3[4]
var_98.d = zmm6.d
char var_6c
char var_6c_1 = var_6c ^ ((arg3[0xd].b ^ var_6c) & 1)
char rax_2

if (arg8 == 0)
    rax_2 = 0
else
    if (arg1[0x34].d != 0)
        int64_t* rcx_4 = arg1[0x33]
        
        if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
            int64_t* rcx_5
            
            if (arg1[0x34].d == 0)
                rcx_5 = nullptr
            else
                rcx_5 = arg1[0x33]
            
            arg1[0x32].b = (*(*rcx_5 + 0x48))(rcx_5)
    
    if (arg1[0x32].b == 0)
        rax_2 = 0
    else
        rax_2 = 1

int32_t rax_6 = sub_140f820e0(arg1[0x5b], arg2, &var_a0, arg4, arg5, arg6, arg7, rax_2)
float var_c8
uint32_t zmm0_2[0x4] = sub_140f030e0(*arg1[0x5b], &var_c8)
float* rdx_3

if (arg1[0xb1].d != 0)
    int64_t* rcx_9 = arg1[0xb0]
    
    if (rcx_9 != 0)
        char rax_8
        rax_8, rdx_3 = (*(*rcx_9 + 0x28))(rcx_9)
        
        if (rax_8 != 0)
            int64_t* rcx_10
            
            if (arg1[0xb1].d == 0)
                rcx_10 = nullptr
            else
                rcx_10 = arg1[0xb0]
            
            (*(*rcx_10 + 0x48))(rcx_10)
            arg1[0xaf].d = zmm0_2[0]

if (not(zmm7_1 f< arg1[0xaf].d) && arg1[0xb4].d != 0)
    int64_t* rcx_11 = arg1[0xb3]
    
    if (rcx_11 != 0)
        char rax_11
        rax_11, rdx_3 = (*(*rcx_11 + 0x28))(rcx_11)
        
        if (rax_11 != 0)
            if (arg1[0xb4].d != 0)
                rbx_1 = arg1[0xb3]
            
            char rax_13
            rax_13, rdx_3 = (*(*rbx_1 + 0x48))(rbx_1)
            arg1[0xb2].b = rax_13

if (zmm7_1 f< arg1[0xaf].d || arg1[0xb2].b != 0)
    zmm0_2 = var_c8
    zmm0_2[0] = zmm0_2[0] f- var_c0
    uint32_t temp0_1[0x4] = _mm_and_ps(zmm0_2, 0x7fffffff)
    uint32_t temp0_2[0x4]
    
    if (not(temp0_1[0] f> 9.99999975e-05f))
        int32_t var_c4
        zmm0_2 = var_c4
        int32_t var_bc
        zmm0_2[0] = zmm0_2[0] f- var_bc
        temp0_2 = _mm_and_ps(zmm0_2, 0x7fffffff)
    
    if (temp0_1[0] f> 9.99999975e-05f || not(temp0_2[0] f<= 9.99999975e-05f))
        rdx_3.b = 1
        sub_140e19ef0(arg1, rdx_3.b)

__security_check_cookie(rax_1 ^ &var_108)
return zx.q(rax_6)
