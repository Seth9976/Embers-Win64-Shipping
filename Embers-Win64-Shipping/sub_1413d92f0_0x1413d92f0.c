// 函数: sub_1413d92f0
// 地址: 0x1413d92f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18

if (arg3 != 0 && data_1439b6b0c != 0 && *(arg1 + 8) s>= 3 && *(arg2 + 0x24) u<= 0)
    void* rax_1 = *(arg2 + 8)
    
    if (*(rax_1 + 0x32) == 2 || (*(rax_1 + 0x38) & 0x20) == 0)
        int64_t* rcx_1 = *(arg1 + 0x65b8) + 8
        void* arg_20 = arg2
        return sub_141113900(rcx_1, &arg_18, &arg_20, nullptr)

int32_t var_160 = &arg_18
void*** (* var_168)() = j_sub_140597fc0
arg_18 = 0
int64_t* rax_4 = sub_140a756e0(&var_168, &data_143958018) + 0x10
int64_t* var_158 = rax_4
int64_t rcx_3 = *rax_4
int64_t rcx_4 = rax_4[2]
char var_140 = 0
uint64_t result_1 = rax_4[3]
rax_4[3] = &var_158
int64_t* rax_5 = var_158
rax_5[4].d += 1
int128_t* rbx_1 = *(arg2 + 8) + 0xc0
void var_88
sub_141385200(&var_88, arg2)
float zmm8[0x4] = *rbx_1
int64_t rdi_1 = 0
float zmm3 = zmm8[0]
zmm8[0] = zmm8[0] f+ *(rbx_1 + 0xc)
int128_t zmm6 = *(rbx_1 + 8)
int128_t zmm7 = *(rbx_1 + 4)
float zmm5 = zmm6.d
zmm6.d = zmm6.d f+ *(rbx_1 + 0x14)
zmm5 = zmm5 f- *(rbx_1 + 0x14)
zmm3 = zmm3 f- *(rbx_1 + 0xc)
float zmm4 = zmm7.d
int32_t var_11c = 0
zmm7.d = zmm7.d f+ rbx_1[1].d
zmm4 = zmm4 f- rbx_1[1].d
zmm6.d = zmm6.d f- zmm5
int32_t var_10c = 0
zmm8[0] = zmm8[0] - zmm3
int64_t var_a8 = 0
zmm7.d = zmm7.d f- zmm4
zmm6.d = zmm6.d f* 0.5f
zmm8[0] = zmm8[0] * 0.5f
zmm7.d = zmm7.d f* 0.5f
var_160 = zmm6.d
zmm6.d = zmm6.d f+ zmm5
int32_t var_110 = var_160
zmm8[0] = zmm8[0] + zmm3
float temp0[0x4] = _mm_unpacklo_ps(zmm8, zmm7.q)
zmm7.d = zmm7.d f+ zmm4
int32_t var_120 = zmm6.d
float var_128[0x4]
var_128[0].q = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
float var_108[0x4] = var_128
float var_118[0x4]
var_118[0].q = temp0.q
float var_f8[0x4] = var_118
float var_d8[0x4] = *(arg1 + 0x20d0)
float var_c8[0x4] = *(arg1 + 0x20e0)
float var_b8[0x4] = *(arg1 + 0x20f0)
int64_t var_a0 = 0
int32_t var_90 = 0
sub_1413efe00(&var_108)
float zmm2_1[0x4]
float zmm3_1[0x4]
zmm2_1, zmm3_1 = sub_1413ceb60(&var_108)

while (arg1 != -0x1d60)
    void* rcx_8 = arg1 + 0x1d60
    int64_t rbx_2 = sx.q(var_90)
    void* rax_9 = *(rcx_8 + 0x300)
    
    if (rax_9 != 0)
        rcx_8 = rax_9
    
    void* rcx_9 = rcx_8 + rbx_2 * 0x30
    sub_141223450(*(rcx_9 + 0x20), rcx_9, &var_88, zmm3_1, zmm2_1)
    var_90 = rbx_2.d + 1
    zmm2_1, zmm3_1 = sub_1413ceb60(&var_108)

int32_t* rbx_4 = *(arg1 + 0x2110)
uint64_t result = &rbx_4[sx.q(*(arg1 + 0x2118))]
uint64_t rsi_1 = sx.q(*(arg1 + 0x2118)) << 2 u>> 2

if (rbx_4 u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int128_t* rcx_14 = sx.q(*rbx_4) * 0x30 + *(arg1 + 0xee8)
        result, zmm2_1, zmm3_1 = sub_141223450(rcx_14[2].q, rcx_14, &var_88, zmm3_1, zmm2_1)
        rdi_1 += 1
        rbx_4 = &rbx_4[1]
    while (rdi_1 != rsi_1)

if (var_140 == 0)
    int64_t* rax_12 = var_158
    char var_140_1 = 1
    rax_12[4].d -= 1
    int64_t* rcx_16 = var_158
    
    if (rcx_4 != rcx_16[2])
        sub_140b16b40(rcx_16, rcx_4)
        rcx_16 = var_158
    
    *rcx_16 = rcx_3
    result = result_1
    var_158[3] = result

return result
