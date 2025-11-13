// 函数: sub_142253670
// 地址: 0x142253670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg4
int32_t rax = *(arg1 + 0x20c4)
int32_t r14 = 1
uint128_t zmm3
zmm3.d = _mm_cvtepi32_ps(zx.o(rsi)).d f* arg3
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rax))
zmm3 = _mm_min_ss(zmm3.d, arg2.d)
arg2 = arg1[0x418].d
uint128_t zmm6
zmm6.d = zmm3.d f- arg2.d
zmm6.d = zmm6.d f/ zmm0.d
zmm6.d = zmm6.d f+ arg2.d
zmm6 = _mm_min_ss(zmm6.d, arg3)
zmm3.d = zmm3.d f/ zmm6.d
arg1[0x418].d = zmm6.d
int32_t rcx = arg1[0x419].d
zmm3.d = zmm3.d f+ zmm3.d

if (rax + 1 s<= rcx)
    rcx = rax + 1

*(arg1 + 0x20c4) = rcx
zmm3.d = zmm3.d f+ 0.5f
int32_t rax_3 = int.d(zmm3.d) s>> 1

if (rax_3 s< 1)
    rsi = 1
else if (rax_3 s< rsi)
    rsi = rax_3

arg2 = data_143f51548

if (not(arg2.d f<= 0f))
    zmm6 = arg2

int32_t rax_4 = data_143f5154c

if (rax_4 s> 0)
    rsi = rax_4

uint128_t* rax_5 = sub_14059bf50(&arg1[0x64])
bool cond:0 = data_143a2f164 != 0
uint128_t var_78 = *rax_5
uint128_t var_68 = rax_5[1]
uint128_t var_58 = rax_5[2]
uint128_t var_48 = rax_5[3]
uint128_t var_38 = rax_5[4]
var_58.b = cond:0
uint64_t var_28 = rax_5[5].q
bool var_57 = data_143a2f168 != 0
var_78:0xc.d = data_143a2f15c.d
bool var_56 = data_143a2f16c != 0
var_78:8.d = data_143a2f158.d
var_68:4.d = data_143a2f174.d
var_68.d = data_143a2f160.d
var_68:0xc.d = data_143f51518.d
var_68:8.d = data_143a2f178.d
int32_t var_50 = data_143f514f0.d
int32_t var_54 = data_143f514ec.d
var_38.d = data_143f514f4.d
int32_t var_4c = data_143a2f170.d
var_38:0xc.d = data_143f514fc.d
var_38:8.d = data_143f514f8.d
var_28:4.d = data_143f51504.d
var_28.d = data_143f51500.d
var_48:4.d = data_143f5150c.d
var_48.d = data_143f51508.d
var_48:0xc.d = data_143f51514.d
var_48:8.d = data_143f51510.d
sub_14177fe10(&arg1[0x64], &var_78)
*(arg1 + 0x524) = data_143f51554.d
rax_5.b = data_143a2f1c4 != 0
*(arg1 + 0x529) = rax_5.b
arg1[0x3d4].d = data_143a2f1d0
arg1[0xa4].d = data_143a2f1d4.d
arg1[0xb9].d = data_143a2f1d4.d
arg1[0x3dd].d = data_143f51550.d

if (data_143a2f17c == 0)
    int32_t r10_1 = data_143a2f1bc
    int32_t rax_8 = data_143a2f1cc
    int32_t r8_1 = data_143a2f154
    int32_t rcx_4 = data_143a2f1c0
    int32_t rdx_1 = data_143a2f1c8
    int32_t r9 = data_143a2f150
    
    if (r10_1 s>= 0)
        arg1[0x3dc].d = r10_1
    
    if (rcx_4 s>= 0)
        *(arg1 + 0x1ee4) = rcx_4
    
    if (r9 s>= 0)
        arg1[0x65].d = r9
    
    if (r8_1 s>= 0)
        *(arg1 + 0x32c) = r8_1
    
    if (rdx_1 s>= 0)
        arg1[0xa3].d = rdx_1
    
    if (rax_8 s>= 0)
        *(arg1 + 0x51c) = rax_8
else
    int32_t rcx_3 = data_143a2f180
    int32_t rax_7 = data_143a2f184
    
    if (rcx_3 s>= 0)
        arg1[0x3dc].d = rcx_3
    
    *(arg1 + 0x1ee4) = 0
    
    if (rax_7 s>= 0)
        arg1[0x65].d = rax_7
    
    *(arg1 + 0x32c) = 0
    
    if (rax_7 s>= 0)
        arg1[0xa3].d = rax_7
    
    *(arg1 + 0x51c) = 0
    r14 = 2

*(arg1 + 0x52c) = r14

if (*(arg1 + 0x20cd) != 0)
    sub_1422429d0(arg1)
    *(arg1 + 0x20cd) = 0

if (*(arg1 + 0x20cc) != 0)
    sub_1422549e0(arg1)
    *(arg1 + 0x20cc) = 0

*(arg1 + 0x1eec) = *arg5
*(arg1 + 0x1ef4) = arg5[1].d
return sub_14172f980(&arg1[0x3d6], zmm6, rsi) __tailcall
