// 函数: sub_141347d20
// 地址: 0x141347d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_58
sub_140a2e390(&var_58, u"Visualize Screen Space Subsurface Scattering", arg3)
int16_t* const rbx = &data_142d40450
int32_t var_50

if (var_50 != 0)
    rbx = var_58

uint128_t var_48 = data_142d3f670
sub_142409910(arg2, 0x41f00000, 0x42280000, rbx, sub_1423de050(), &var_48, &data_14399f5e0)
int512_t zmm6
zmm6.o = 0x42600000
uint32_t rdi = 0
char i
int128_t zmm6_1
int128_t zmm7
int128_t zmm8
i, zmm6_1, zmm7, zmm8 = sub_1422c5c10(&data_143a2fdb0, 0, &var_58)

if (i != 0)
    int128_t var_28_1 = zmm7
    zmm7 = 0x41600000
    
    do
        int16_t* rbx_1 = &data_142d40450
        rdi += 1
        zmm6_1.d = zmm6_1.d f+ zmm7.d
        var_48 = data_142d3f670
        
        if (var_50 != 0)
            rbx_1 = var_58
        
        sub_142409910(arg2, zmm8, zmm6_1, rbx_1, sub_1423de050(), &var_48, &data_14399f5e0)
        i, zmm6_1, zmm7, zmm8 = sub_1422c5c10(&data_143a2fdb0, rdi, &var_58)
    while (i != 0)

int16_t* rcx_3 = var_58

if (rcx_3 == 0)
    return i

return sub_140a74f90(rcx_3)
