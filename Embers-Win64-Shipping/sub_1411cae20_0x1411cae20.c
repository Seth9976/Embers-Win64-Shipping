// 函数: sub_1411cae20
// 地址: 0x1411cae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(*(arg1[2] + 0x15b0) + 0xdc0) = *(arg1 + 0x40)
*(*(arg1[2] + 0x15b0) + 0xdd0) = arg1[0xa].d
void* rcx = *(arg1[2] + 0x15b0)
uint128_t zmm6 = zx.o(*(rcx + 0x3c0))
int32_t rdi = *(rcx + 0x3c8)
*(rcx + 0x3c0) = *(arg1 + 0x54)
*(rcx + 0x3c8) = *(arg1 + 0x5c)
int64_t* rcx_1 = data_143f0f180
int64_t* result_4
(*(*rcx_1 + 0xf8))(rcx_1, &result_4, *(arg1[2] + 0x15b0), &data_143f55750, 1, 1)
int64_t* result_3 = result_4
uint64_t result_1 = result_3

if (result_3 != 0)
    result_3[1].d += 1
    int64_t* result_5 = result_4
    
    if (result_5 != 0)
        result_5[1].d -= 1
        
        if (result_5[1].d == 1)
            char rax_7
            
            if (result_5[2].b == 0 && data_143f0f1d0 == 0)
                rax_7 = sub_1405949a0()
            
            if (result_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_7 != 0))
                (**result_5)(result_5, 1)
            else
                bool z_1
                
                if (0 == *(result_5 + 0xc))
                    *(result_5 + 0xc) = 1
                    z_1 = true
                else
                    *(result_5 + 0xc)
                    z_1 = false
                
                if (z_1)
                    zmm6 = sub_1405dcc10(&data_143f02390, result_5)

int64_t r12 = 0
void* rcx_3 = *(arg1[2] + 0x15b0)
*(rcx_3 + 0x3c0) = zmm6.q
*(rcx_3 + 0x3c8) = rdi
int32_t* rdx_2 = *arg1
int128_t var_1f8
__builtin_memset(&var_1f8, 0, 0x28)
int64_t var_150 = 0
int64_t var_148 = 0
int32_t var_238 = *rdx_2
int32_t var_234 = rdx_2[1]
int32_t var_230 = rdx_2[2]
int32_t var_22c = rdx_2[3].d
int32_t var_228 = rdx_2[4]
int32_t var_224 = rdx_2[5]
int32_t var_220 = rdx_2[6]
int32_t var_21c = rdx_2[7]
int32_t var_218 = rdx_2[8]
int32_t var_214 = rdx_2[9]
int32_t var_210 = rdx_2[0xa]
int32_t var_20c = rdx_2[0xb]
int32_t var_208 = rdx_2[0xc].d
int32_t var_204 = rdx_2[0xd].d
int32_t var_200 = rdx_2[0xe].d
int32_t var_1fc = rdx_2[0xf].d
var_1f8.q = *(rdx_2 + 0x40)
var_1f8:8.q = *(rdx_2 + 0x48)
int128_t var_1e8
var_1e8.q = *(rdx_2 + 0x50)
var_1e8:8.q = *(rdx_2 + 0x58)
int64_t var_1d8 = *(rdx_2 + 0x60)
uint128_t var_1c8 = *(rdx_2 + 0x70)
int128_t var_1b8 = *(rdx_2 + 0x80)
uint128_t var_1a8 = *(rdx_2 + 0x90)
int128_t var_198 = *(rdx_2 + 0xa0)
uint64_t var_188 = *(rdx_2 + 0xb0)
int32_t var_180 = rdx_2[0x2e]
uint64_t var_178 = *(rdx_2 + 0xc0)
int32_t var_170 = rdx_2[0x32]
int32_t var_168 = rdx_2[0x34]
int32_t var_164 = rdx_2[0x35]
int32_t var_160 = rdx_2[0x36]
int32_t var_15c = rdx_2[0x37]
int32_t var_158 = rdx_2[0x38]
int32_t var_154 = rdx_2[0x39]
int32_t var_2c0 = 1
int32_t var_2c8 = 1
int64_t var_150_1 = *(*(rdx_2 + 0xe8) + 0x10)
int64_t var_148_1 = *(*(rdx_2 + 0xf0) + 0x10)
int64_t* rcx_6 = data_143f0f180
int64_t* var_290
(*(*rcx_6 + 0xf8))(rcx_6, &var_290, &var_238, &data_143e76660, 1, 1)
int64_t* rbx_1 = var_290

if (rbx_1 != 0)
    rbx_1[1].d += 1
    int64_t* rdi_1 = var_290
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            char rax_40
            
            if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_40 = sub_1405949a0()
            
            if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_40 != 0))
                (**rdi_1)(rdi_1, 1)
            else
                bool z_2
                
                if (0 == *(rdi_1 + 0xc))
                    *(rdi_1 + 0xc) = 1
                    z_2 = true
                else
                    *(rdi_1 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, rdi_1)

int64_t r15 = 0
uint128_t zmm7 = zx.o(arg1[6].d)
void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm8 = zx.o(*(arg1 + 0x2c))
uint128_t zmm9 = zx.o(arg1[5].d)
void* rax_44 = &rcx_10[5]
zmm6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax_44 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_44 = &rcx_10[5]

*(arg2 + 0x30) = rax_44
void** rax_45 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_45 = rcx_10
*(arg2 + 8) = &rcx_10[1]
rcx_10[1] = 0
*rcx_10 = &data_142d54998
rcx_10[2].d = zmm9.d
*(rcx_10 + 0x14) = zmm8.d
*(rcx_10 + 0x1c) = zmm7.d
rcx_10[4].d = zmm6.d
rcx_10[3].d = 0
*(rcx_10 + 0x24) = 0x3f800000
char rax_47 = arg1[3].b

if (rax_47 == 1)
    r15 = data_1439b62c8
    r12 = data_14395d9e8
else if (rax_47 == 0)
    r15 = data_14395da00
    r12 = data_1439b5400
else if (rax_47 == 2)
    r15 = data_14395da00
    r12 = data_14395d9e8

int64_t var_278
__builtin_memset(&var_278, 0, 0x14)
sub_141095f70(&var_278, 0)
int64_t** var_2a8 = nullptr
int32_t var_2a0 = 0
void var_c8
sub_14108b090(&var_c8)
void* rdx_5 = arg1[1]
int64_t r9 = arg1[2]
char rdi_2 = arg1[3].b
void** const var_260 = &data_142f11938
int64_t* var_258 = &var_278
int64_t*** var_250 = &var_2a8
void* var_248 = &var_c8
void arg_8
void* var_240 = &arg_8
var_2c8.q = &var_260
void** var_138
sub_14125c360(&var_138, rdx_5, *(rdx_5 + 8), r9, var_2c8)
int64_t var_100 = r12
var_138 = &data_142f362b0
int512_t zmm0_1
zmm0_1.o = zx.o(0)
uint64_t result_2 = result_1
int64_t* rax_49 = arg1[4]
int64_t var_108 = r15
char var_110 = rdi_2
int32_t var_f8 = 0x11
int128_t var_e8 = zx.o(0)
int64_t* var_d8 = rbx_1
int32_t var_d0 = 0
void** i = *rax_49

for (void* r15_1 = &i[sx.q(rax_49[1].d) * 5]; i != r15_1; i = &i[5])
    var_2c0.b = sub_1411913d0(i)
    zmm0_1 = sub_1411d5720(&var_138, *i, -1, i[1], zmm0_1, 0xffffffff, var_2c0.b)

if (var_2a0 s> 0)
    void* rax_52 = arg1[2]
    int64_t var_280 = 0
    sub_1412c7690(*(rax_52 + 0x1548), &var_2a8, &var_278, &var_280, 1, var_2c0)
    sub_1412e4c00(&var_2a8, &var_c8, var_280, 0, 0, 1, arg2)

var_138 = &data_142f11950
var_260 = &data_142d56fa0
int64_t var_98

if (var_98 != 0)
    sub_140a74f90(var_98)

int64_t var_a8

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_14108ca30(&var_c8)
sub_141095f70(&var_278, 0)
int64_t rcx_26 = var_278

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        char rax_54
        
        if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
            rax_54 = sub_1405949a0()
        
        if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_54 != 0))
            (**rbx_1)(rbx_1, 1)
        else
            bool z_3
            
            if (0 == *(rbx_1 + 0xc))
                *(rbx_1 + 0xc) = 1
                z_3 = true
            else
                *(rbx_1 + 0xc)
                z_3 = false
            
            if (z_3)
                sub_1405dcc10(&data_143f02390, rbx_1)

uint64_t result = result_1

if (result != 0)
    int32_t rsi_1 = *(result + 8)
    *(result + 8) -= 1
    
    if (rsi_1 == 1)
        if (*(result_1 + 0x10) != 0)
            return (**result_1)(result_1, 1)
        
        if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
            return (**result_1)(result_1, 1)
        
        result = 0
        bool z_4
        
        if (0 == *(result_1 + 0xc))
            *(result_1 + 0xc) = 1
            z_4 = true
        else
            result = zx.q(*(result_1 + 0xc))
            z_4 = false
        
        if (z_4)
            return sub_1405dcc10(&data_143f02390, result_1)

return result
