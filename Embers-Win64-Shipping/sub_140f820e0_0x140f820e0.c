// 函数: sub_140f820e0
// 地址: 0x140f820e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x3c) == 0
int32_t zmm1 = arg1[7].d
arg1[6] = *arg3

if (not(cond:0))
    int64_t zmm0 = arg1[6].d
    
    if (not(zmm0.d f< 1f))
        if (not(zmm1 f< 1f))
            zmm0 = _mm_min_ss(zmm0.d, zmm1)
        
        zmm1 = zmm0.d

sub_140f183b0(*arg1, _mm_max_ss(zmm1, 0))
int32_t rax = sub_140f053a0(*arg1)
int128_t zmm6 = data_143dbb1f0.d
int128_t zmm7 = data_143dbb1f0:4.d
int32_t arg_8
int128_t zmm0_1

if (rax != 0)
    float* rax_1 = sub_140f030e0(*arg1, &arg_8)
    int32_t zmm1_1 = arg1[6].d
    zmm0_1 = *rax_1
    
    if (not(zmm1_1 f>= zmm0_1.d))
        if (rax == 1)
            zmm6.d = zmm0_1.d f- zmm1_1
            zmm6.d = zmm6.d f* 0.5f
        else if (rax == 2)
            zmm6.d = zmm0_1.d f- zmm1_1

void* rcx_3 = *arg1
zmm0_1 = *(rcx_3 + 0x8c)
zmm6.d = zmm6.d f* zmm0_1.d
zmm7.d = zmm7.d f* zmm0_1.d
arg_8 = zmm6.d
int32_t arg_c = zmm7.d
sub_140f18220(rcx_3, &arg1[6], &arg_8)
int64_t* rcx_4 = *arg1
(*(*rcx_4 + 8))(rcx_4)
jump(*(**arg1 + 0x40))
