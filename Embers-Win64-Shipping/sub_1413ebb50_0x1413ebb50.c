// 函数: sub_1413ebb50
// 地址: 0x1413ebb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_60 = data_142d3f660
int64_t var_50 = 0
sub_14243ec20(&var_60)
int32_t rsi = 0
void** rdi = *(arg1 + 0x1c58)
int128_t zmm6 = zx.o(0)
int64_t rbx_1 = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x1c60)) << 3 u>> 3

if (rdi u> &rdi[sx.q(*(arg1 + 0x1c60))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int128_t zmm0 = data_142d3f660
        void* rcx_1 = *rdi
        float arg_8 = 0f
        int128_t var_78 = zmm0
        int64_t var_68_1 = 0
        char rax_2
        rax_2, zmm6 = sub_142437ce0(rcx_1, arg2, &var_78, &arg_8)
        
        if (rax_2 != 0)
            sub_14242cfd0(&var_60, &var_78, arg_8)
            zmm6.d = zmm6.d f+ arg_8
            rsi += 1
        
        rdi = &rdi[1]
        rbx_1 += 1
    while (rbx_1 != r14_1)

int64_t zmm7_1 = sub_14243c820(&var_60, zmm6.d)
int32_t rax_3
int64_t zmm2_2

if (rsi != 0)
    rax_3 = var_50:4.d
    zmm2_2 = var_60:0xc.q
else
    rax_3 = rsi
    zmm2_2 = _mm_unpacklo_ps(0x3f800000, zmm7_1)
    int32_t var_70_1 = rsi

int32_t zmm0_1 = var_60.d
int32_t zmm1_1 = var_60:4.d
*arg3 = zmm2_2
arg3[1].d = rax_3
*arg4 = zmm0_1
zmm0_1 = var_60:8.d
*arg5 = zmm1_1
*arg6 = zmm0_1
return arg6
