// 函数: sub_1420ca520
// 地址: 0x1420ca520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdx

if (arg3[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg3

int64_t arg_18
int128_t zmm6 = sub_140b58260(&arg_18, rdx, 1)
void* rax_1

if (arg2 != 0)
    rax_1 = sub_140d1fd20(arg2, arg_18)

if (arg2 == 0 || rax_1 == 0 || *(rax_1 + 0xb6) u<= 0)
    int128_t var_28_1 = zmm6
    int128_t zmm2_1 = arg7
    uint128_t zmm1_1
    zmm1_1.d = _mm_cvtepi32_ps(zx.o(rand())).d f* zmm2_1.d * 6.10370189e-05f
    zmm1_1.d = zmm1_1.d f- zmm2_1.d
    zmm6.d = arg6.d f+ zmm1_1.d
    
    if (arg4.d f<= 0f || not(arg4.d f+ zmm6.d f- zmm2_1.d >= 0f))
        int64_t arg_10 = 0
        sub_140d23f50(SetTimer passed a negative or zero time.  The associated timer may fail to "
        "fire!  If using InitialStartDelayVariance, b", 3)
    
    int128_t var_68
    sub_140d3a3a0(&var_68, nullptr)
    int64_t var_60_1 = 0
    sub_140d3a3a0(&var_68, arg2)
    int64_t var_60_2 = arg_18
    int128_t var_58 = var_68
    sub_1420ca6a0(arg1, &var_58, arg4, arg5, zmm6.d, 0)
    int512_t zmm6_1
    zmm6_1.o = var_28_1
else
    *arg1 = 0

int64_t rcx_5 = *arg3

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg1
