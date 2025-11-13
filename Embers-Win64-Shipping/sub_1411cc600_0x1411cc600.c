// 函数: sub_1411cc600
// 地址: 0x1411cc600
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
uint128_t* rcx_4 = *arg1
int64_t var_140 = 0
uint128_t var_1b8 = *rcx_4
int128_t var_1a8 = rcx_4[1]
uint128_t var_198 = rcx_4[2]
int128_t var_188 = rcx_4[3]
uint128_t var_178 = rcx_4[4]
int32_t var_168 = rcx_4[5].d
int32_t var_164 = *(rcx_4 + 0x54)
int32_t var_160 = *(rcx_4 + 0x58)
int32_t var_15c = *(rcx_4 + 0x5c)
int32_t var_158 = rcx_4[6].d
int32_t var_154 = *(rcx_4 + 0x64)
int32_t var_150 = *(rcx_4 + 0x68)
void* rax_19 = rcx_4[7].q

if (rax_19 == 0)
    rax_19 = data_1439b7138

int64_t var_148 = *(rax_19 + 0x10)
int32_t var_240 = 1
int32_t var_248 = 1
int64_t var_140_1 = *(*(rcx_4 + 0x78) + 0x10)
int64_t* rcx_6 = data_143f0f180
int64_t* var_210
(*(*rcx_6 + 0xf8))(rcx_6, &var_210, &var_1b8, &data_143e765c0, 1, 1)
int64_t* rbx_1 = var_210

if (rbx_1 != 0)
    rbx_1[1].d += 1
    int64_t* rdi_1 = var_210
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            char rax_24
            
            if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_24 = sub_1405949a0()
            
            if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_24 != 0))
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
void* rax_28 = &rcx_10[5]
zmm6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x34)))
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax_28 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_28 = &rcx_10[5]

*(arg2 + 0x30) = rax_28
void** rax_29 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_29 = rcx_10
*(arg2 + 8) = &rcx_10[1]
rcx_10[1] = 0
*rcx_10 = &data_142d54998
rcx_10[2].d = zmm9.d
*(rcx_10 + 0x14) = zmm8.d
*(rcx_10 + 0x1c) = zmm7.d
rcx_10[4].d = zmm6.d
rcx_10[3].d = 0
*(rcx_10 + 0x24) = 0x3f800000
char rax_31 = arg1[3].b

if (rax_31 == 1)
    r15 = data_1439b62c8
    r12 = data_14395d9e8
else if (rax_31 == 0)
    r15 = data_14395da00
    r12 = data_1439b5400
else if (rax_31 == 2)
    r15 = data_14395da00
    r12 = data_14395d9e8

int64_t var_1f8
__builtin_memset(&var_1f8, 0, 0x14)
sub_141095f70(&var_1f8, 0)
int64_t** var_228 = nullptr
int32_t var_220 = 0
void var_c8
sub_14108b090(&var_c8)
void* rdx_4 = arg1[1]
int64_t r9 = arg1[2]
char rdi_2 = arg1[3].b
void** const var_1e0 = &data_142f11938
int64_t* var_1d8 = &var_1f8
int64_t*** var_1d0 = &var_228
void* var_1c8 = &var_c8
void arg_8
void* var_1c0 = &arg_8
var_248.q = &var_1e0
void** var_138
sub_14125c360(&var_138, rdx_4, *(rdx_4 + 8), r9, var_248)
int64_t var_100 = r12
var_138 = &data_142f362b0
int512_t zmm0_1
zmm0_1.o = zx.o(0)
uint64_t result_2 = result_1
int64_t* rax_33 = arg1[4]
int64_t var_108 = r15
char var_110 = rdi_2
int32_t var_f8 = 0x11
int128_t var_e8 = zx.o(0)
int64_t* var_d8 = rbx_1
int32_t var_d0 = 0
void** i = *rax_33

for (void* r15_1 = &i[sx.q(rax_33[1].d) * 5]; i != r15_1; i = &i[5])
    var_240.b = sub_1411913d0(i)
    zmm0_1 = sub_1411d5720(&var_138, *i, -1, i[1], zmm0_1, 0xffffffff, var_240.b)

if (var_220 s> 0)
    void* rax_36 = arg1[2]
    int64_t var_200 = 0
    sub_1412c7690(*(rax_36 + 0x1548), &var_228, &var_1f8, &var_200, 1, var_240)
    sub_1412e4c00(&var_228, &var_c8, var_200, 0, 0, 1, arg2)

var_138 = &data_142f11950
var_1e0 = &data_142d56fa0
int64_t var_98

if (var_98 != 0)
    sub_140a74f90(var_98)

int64_t var_a8

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_14108ca30(&var_c8)
sub_141095f70(&var_1f8, 0)
int64_t rcx_26 = var_1f8

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        char rax_38
        
        if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
            rax_38 = sub_1405949a0()
        
        if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_38 != 0))
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
