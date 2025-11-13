// 函数: sub_1425fdb70
// 地址: 0x1425fdb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r15 = zx.q(data_143f711b8)
void*** rax = j_sub_140a82f30(0x90)
void*** rsi = rax

if (rax == 0)
    rsi = nullptr
else
    sub_140378da0(rax, &data_143b4fe60, &rax[0xc], 8, 0)
    float zmm0_1 = float.s(r15)
    *rsi = &data_14344ccf8
    rsi[6] = &data_14344cd78
    rsi[0xc] = &data_143209588
    rsi[0xd] = &data_143209588
    rsi[0xe] = &data_143209588
    int128_t zmm8
    zmm8.d = 1f / zmm0_1
    *(rsi + 0x8c) = zmm0_1
    int128_t zmm6
    zmm6.d = zmm8.d f* 628.318542f
    int128_t zmm0_2 = tanf(zmm6.d - 1f)
    zmm6.d = zmm6.d f+ zmm6.d
    zmm6.d = zmm6.d f+ 1f
    float zmm0_3 = tanf(zmm6.d)
    zmm8.d = zmm8.d f* 12566.3711f
    data_143f7127c = 0
    int128_t zmm7
    zmm7.d = zmm0_2.d f/ zmm0_3
    int128_t zmm2
    zmm2.d = zmm7.d f+ 1f
    data_143f71278 = zmm2.d
    data_143f71280 = (zmm2 ^ data_142d3f780).d
    float zmm0_4 = cosf(zmm8.d)
    int128_t zmm9
    zmm9.d = 1f f- zmm7.d
    data_143f71288 = zmm7.d
    data_143f71294.q = 0
    data_143f7128c.q = 0
    void** const arg_8 = &data_143209588
    data_143f71284 = zmm0_4 f* zmm9.d
    sub_1403781b0(&rsi[6], &arg_8, 8)

(*rsi)[6](rsi, 0, 0)
*(arg1 + 0x248) = rsi
void*** var_68
void** var_74 = &var_68
int64_t* rax_2 = *(arg1 + 0x230)
var_68 = rsi
int32_t var_60 = 1
int32_t var_5c = 6
int32_t var_78 = 1
int64_t* rcx_4 = *(rax_2[0xf6] + 8)
int32_t var_98 = 0

if ((*(*rax_2 + 0xa8))(rax_2, CreateSubmixVoice (Radio)", 
        zx.q((*(*rcx_4 + 0x48))(rcx_4, arg1 + 0x268, 6, zx.q(r15.d), 0, 2, 0, &var_78, var_78))) != 0)
    int16_t rax_6 = data_143f711b6
    uint32_t r9_1 = 6
    
    if (rax_6 u<= 6)
        r9_1 = zx.d(rax_6)
    
    int32_t r8_3 = data_143f711c8
    void* const r10_1 = &data_14344c238
    data_143f70da0 = &data_14344c238
    
    if (rax_6 u> 6)
        r8_3 = 0x3f
    
    int32_t i = 0
    void* rcx_6 = &data_143b4fda4
    
    do
        if (r9_1 == *(rcx_6 - 4) && (r8_3 & *rcx_6) == r8_3)
            r10_1 = (&data_143b4fda8)[sx.q(i) * 2]
            data_143f70da0 = r10_1
            break
        
        i += 1
        rcx_6 += 0x10
    while (i u< 0xc)
    
    int64_t* rcx_7 = *(arg1 + 0x268)
    int64_t* rbx_1 = *(arg1 + 0x230)
    int32_t var_90_1 = 0
    var_98.q = r10_1
    
    if ((*(*rbx_1 + 0xa8))(rbx_1, SetOutputMatrix (Radio)", zx.q((*(*rcx_7 + 0x80))(rcx_7, 0, 6)))
            != 0)
        return 1

return 0
