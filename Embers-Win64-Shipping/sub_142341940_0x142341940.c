// 函数: sub_142341940
// 地址: 0x142341940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_b4
int32_t var_b4_1 = var_b4 & 0xffffff00
int64_t var_160 = 0
int64_t var_158 = 0
char var_148 = 0
int64_t var_140
__builtin_memset(&var_140, 0, 0x88)
char var_168 = 1
int32_t var_b8 = 0x20702
sub_1405979f0(arg1 + 0x10, &var_168)
sub_140597700(&var_168)
int128_t zmm6
int128_t zmm8
int128_t zmm9
int128_t zmm10
int128_t zmm11
zmm6, zmm8, zmm9, zmm10, zmm11 = sub_142348be0(arg1 - 0xd0, arg3, arg4)
sub_140d96150(arg1 + 0x120, arg3)
int64_t* r13 = *(arg1 - 0x98)

if (r13 != 0)
    int32_t rdi_1 = *(arg4 + 0x50)
    int128_t var_48_1 = zmm6
    zmm6 = *(arg4 + 0x58)
    int128_t var_68_1 = zmm8
    int128_t var_78_1 = zmm9
    zmm9 = *(arg3 + 0x1c)
    int128_t var_88_1 = zmm10
    zmm10 = arg3[2].d
    int128_t var_98_1 = zmm11
    zmm11 = *(arg4 + 0x18)
    float zmm2_1 = zmm11.d f- *(arg3 + 0x2c)
    int128_t zmm12 = *(arg4 + 0x1c)
    zmm11.d = zmm11.d f- *(arg3 + 0x2c)
    zmm8.d = 1f / (zmm9.d f* *(arg3 + 0x28) - zmm10.d f* *(arg3 + 0x24))
    float zmm1_1 = zmm12.d
    zmm12.d = zmm12.d f- arg3[3].d
    float zmm0_1 = zmm8.d f* zmm9.d
    zmm2_1 = zmm2_1 * zmm8.d f* *(arg3 + 0x28) - (zmm1_1 f- arg3[3].d) * zmm8.d f* *(arg3 + 0x24)
    zmm8.d = zmm8.d f* zmm10.d
    zmm12.d = zmm12.d f* zmm0_1
    zmm11.d = zmm11.d f* zmm8.d
    zmm12.d = zmm12.d f- zmm11.d
    float arg_8 = zmm2_1 f* *(arg3 + 8)
    zmm12.d = zmm12.d f* *(arg3 + 8)
    int32_t rbx_1 = *(arg4 + 0x54)
    int32_t rsi_1 = *(arg4 + 0xc)
    int32_t arg_c = zmm12.d
    void arg_10
    int64_t* rax_1 = sub_140b21590(&arg_10)
    void* rdx_3 = arg1 - 0xc8
    
    if (arg1 == 0xd0)
        rdx_3 = nullptr
    
    if ((*(*r13 + 0x60))(*(arg1 - 0x98), rdx_3, zx.q(rsi_1), zx.q(rdi_1), 3, &arg_8, zmm6.d, 
            *rax_1, rbx_1) == 0)
        int32_t var_b4_2 = var_b4_1 & 0xffffff00
        var_168 = 0
        int64_t var_160_1 = 0
        int64_t var_158_1 = 0
        char var_148_1 = 0
        int64_t var_140_1
        __builtin_memset(&var_140_1, 0, 0x88)
        int32_t var_b8_1 = 0x20702
        sub_1405979f0(arg1 + 0x10, &var_168)
        sub_140597700(&var_168)

sub_140596b00(arg2, arg1 + 0x10)
return arg2
