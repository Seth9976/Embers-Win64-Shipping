// 函数: sub_14219f840
// 地址: 0x14219f840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t arg_18 = arg3

if ((*(arg2 + 0xe0) & 0x100) == 0)
    return 

int64_t* rcx = *(arg2 + 0x1d0)
int32_t arg_10 = *(arg2 + 0x30)
uint64_t* var_78
__builtin_memset(&var_78, 0, 0x50)
int64_t var_70
int64_t var_68
int64_t var_60
int64_t var_58
int64_t var_50
int64_t var_48
int64_t var_40
int64_t var_38
int64_t var_30
(*(*rcx + 0x388))(rcx, arg2, arg5, &arg_10, &var_78, &var_30, &var_38, &var_40, &var_48, &var_50, 
    &var_58, &var_60, &var_70, &var_68, var_78, var_70, var_68, var_60, var_58, var_50, var_48, 
    var_40, var_38, var_30)
int64_t var_b0_2 = var_70
int64_t* var_b8_1
var_b8_1.b = 1
int64_t* var_c0_1
var_c0_1.d = *(arg2 + 0x118)
sub_142199c00(arg1, arg2, var_78, arg5, arg4, &arg_18, var_c0_1.d, var_b8_1.b)
uint64_t* rcx_2 = var_78
float zmm1[0x4] = *rcx_2
int64_t zmm2_1 = *(rcx_2 + 4)
float zmm0_1 = rcx_2[1].d
zmm1[0] = zmm1[0] f- *(arg2 + 0x1a8)
zmm2_1.d = zmm2_1.d f- *(arg2 + 0x1ac)
zmm0_1 = zmm0_1 f- *(arg2 + 0x1b0)
*(arg5 + 0x10) = (_mm_unpacklo_ps(zmm1, zmm2_1)).q
*(arg5 + 0x18) = zmm0_1
rcx_2[7].d = 0
*(var_78 + 0x4c) = 0
var_78[0xa].d = 0
*(var_78 + 0x54) = 0
var_78[0xb].d = 0
