// 函数: sub_1427ec740
// 地址: 0x1427ec740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x60)
int64_t* var_148
int64_t* var_120
(*(*rcx + 0x30))(rcx, &var_120, &var_148)
float var_118
sub_1427ec150(arg1, &var_118, var_120)
int32_t var_e8
sub_1427ec150(arg1, &var_e8, var_148)
int64_t* rbx = var_120
int64_t* rdi = nullptr
int32_t zmm0 = (zx.o(0)).d
int32_t var_13c = 0
int64_t* rax_1

if (rbx != 0)
    rax_1 = nullptr
    
    if (rbx[1].w == 7)
        rax_1 = rbx

float var_130
int32_t var_12c
float var_128
void var_f8
float arg_8
float arg_10
float arg_18

if (rbx == 0 || rax_1 != 0)
    arg_18 = 0f
    arg_8 = 0f
    arg_10 = 0f
    var_130 = 0f
    var_12c = 0
    var_128 = 0f
else
    int128_t* rax_3 = (*(*rbx + 0x128))(rbx, &var_f8)
    var_130 = (*rax_3).d
    var_12c = (*(rax_3 + 4)).d
    var_128 = (*(rax_3 + 8)).d
    int32_t* rax_5 = (*(*rbx + 0x138))(rbx, &var_f8)
    zmm0 = (zx.o(0)).d
    arg_18 = *rax_5
    arg_8 = rax_5[1]
    arg_10 = rax_5[2]

int64_t* rbx_1 = var_148

if (rbx_1 != 0 && rbx_1[1].w == 7)
    rdi = rbx_1

int32_t var_140
int32_t var_138
int32_t var_134
int32_t arg_20

if (rbx_1 == 0 || rdi != 0)
    var_140 = zmm0
    arg_20 = zmm0
    var_138 = zmm0
    var_134 = zmm0
else
    int32_t* rax_7 = (*(*rbx_1 + 0x128))(rbx_1, &var_f8)
    var_13c = *rax_7
    var_138 = rax_7[1]
    var_134 = rax_7[2]
    int32_t* rax_9 = (*(*rbx_1 + 0x138))(rbx_1, &var_f8)
    arg_20 = rax_9[1]
    zmm0 = rax_9[2]
    var_140 = *rax_9

int32_t var_114
int128_t zmm6_1 = var_114
float var_110
int32_t zmm7 = var_110
int128_t zmm13 = var_118
float zmm5 = *(arg1 + 0x38)
float zmm3 = *(arg1 + 0x3c)
zmm5 = zmm5 + zmm5
float zmm4 = *(arg1 + 0x40)
zmm3 = zmm3 + zmm3
int128_t zmm12 = var_e8
zmm4 = zmm4 + zmm4
var_148.d = zmm0
float var_10c
float zmm9 = var_10c * var_10c - 0.5f
int128_t zmm2
zmm2.d = zmm6_1.d f* zmm3
var_120.d = zmm9
zmm2.d = zmm2.d f+ zmm13.d f* zmm5
zmm2.d = zmm2.d f+ zmm7 f* zmm4
int32_t zmm1_1 = zmm13.d f* zmm2.d
zmm0 = zmm13.d f* zmm4
zmm13.d = zmm13.d f* zmm3
int32_t zmm15 = zmm7 f* zmm5 f- zmm0
float zmm14 = (zmm6_1.d * zmm4 f- zmm7 f* zmm3) * var_10c f+ zmm9 f* zmm5 f+ zmm1_1
zmm1_1 = zmm6_1.d f* zmm2.d
zmm0 = zmm6_1.d
zmm6_1 = *(arg1 + 0x58)
zmm6_1.d = zmm6_1.d f+ zmm6_1.d
zmm15 = zmm15 f* var_10c f+ zmm9 f* zmm3 f+ zmm1_1
zmm13.d = zmm13.d f- zmm0 f* zmm5
zmm1_1 = zmm7 f* zmm2.d
int32_t var_e4
zmm2 = var_e4
zmm0 = zmm9
zmm9 = *(arg1 + 0x54)
zmm9 = zmm9 + zmm9
zmm13.d = zmm13.d f* var_10c
float zmm8 = *(arg1 + 0x5c)
zmm8 = zmm8 + zmm8
zmm13.d = zmm13.d f+ zmm0 f* zmm4
float var_dc
zmm7 = var_dc f* var_dc f- 0.5f
zmm13.d = zmm13.d f+ zmm1_1
int128_t zmm11
zmm11.d = zmm2.d f* zmm8
float var_e0
zmm4 = zmm2.d f* zmm6_1.d f+ zmm12.d f* zmm9 f+ var_e0 f* zmm8
zmm1_1 = zmm12.d f* zmm4
zmm11.d = zmm11.d f- var_e0 f* zmm6_1.d
zmm11.d = zmm11.d f* var_dc
zmm11.d = zmm11.d f+ zmm7 f* zmm9
zmm0 = zmm12.d f* zmm8
zmm12.d = zmm12.d f* zmm6_1.d
float zmm10 = var_e0 * zmm9 f- zmm0
zmm0 = zmm7 f* zmm6_1.d
zmm11.d = zmm11.d f+ zmm1_1
zmm6_1.d = zmm13.d f* arg_8
zmm13.d = zmm13.d f* arg_18
zmm1_1 = zmm2.d f* zmm4
zmm2.d = zmm2.d f* zmm9
zmm9 = var_118
zmm12.d = zmm12.d f- zmm2.d
zmm10 = zmm10 * var_dc f+ zmm0 f+ zmm1_1
zmm1_1 = zmm11.d f* var_148.d
zmm6_1.d = zmm6_1.d f- zmm15 f* arg_10
zmm11.d = zmm11.d f* arg_20
zmm12.d = zmm12.d f* var_dc
zmm12.d = zmm12.d f+ zmm7 f* zmm8
zmm12.d = zmm12.d f+ var_e0 * zmm4
zmm2 = zmm12
zmm12.d = zmm12.d f* var_140
zmm2.d = zmm2.d f* arg_20
zmm2.d = zmm2.d f- zmm10 f* var_148.d
zmm0 = var_13c f- zmm2.d
zmm2.d = var_138.d f- (zmm1_1 f- zmm12.d)
zmm2.d = zmm2.d f- var_12c
zmm6_1.d = zmm6_1.d f+ zmm0 f- var_130
int32_t var_108
zmm6_1.d = zmm6_1.d f- var_108
zmm6_1.d = zmm6_1.d f* 2f
float var_104
zmm5 = (zmm14 * arg_10 f- zmm13.d f+ zmm2.d - var_104) * 2f
float var_100
zmm15 = (zmm15 f* arg_18 f- zmm14
    * arg_8 f+ var_134 f- (zmm10 f* var_140 f- zmm11.d) f- var_128 f- var_100) f* 2f
zmm11 = var_120.d
zmm3 = zmm11.d
zmm4 = var_114 * zmm5 f+ zmm9 f* zmm6_1.d f+ var_110 f* zmm15
zmm2.d = zmm11.d f* zmm6_1.d
zmm11.d = zmm11.d f* zmm15
zmm2.d = zmm2.d f- (var_114 f* zmm15 f- var_110 f* zmm5) f* var_10c
zmm2.d = zmm2.d f+ zmm9 f* zmm4
*arg2 = zmm2.d
zmm11.d = zmm11.d f- (zmm9 * zmm5 f- var_114 f* zmm6_1.d) * var_10c
zmm11.d = zmm11.d f+ var_110 * zmm4
arg2[1] = zmm3 * zmm5 f- (var_110 f* zmm6_1.d f- zmm9 f* zmm15) f* var_10c f+ var_114 f* zmm4
arg2[2] = zmm11.d
return arg2
