// 函数: sub_1411c98a0
// 地址: 0x1411c98a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg2
int64_t* rdx = *arg1
int64_t var_190
__builtin_memset(&var_190, 0, 0x30)
int32_t rax
rax.b = arg1[6].b != 0
int32_t var_198 = rax
int32_t var_1a8 = *(arg1 + 0x24)
int32_t var_1a4 = arg1[5].d
int32_t var_19c = *(arg1 + 0x2c)
int32_t var_1a0 = arg1[4].d
int64_t var_190_1 = *(*(*rdx + 0x80) + 0x10)
int128_t var_188
var_188.q = *(rdx[1] + 0x10)
var_188:8.q = *(rdx[2] + 0x10)
int128_t var_178
var_178.q = *(rdx[3] + 0x10)
var_178:8.q = *(rdx[4] + 0x10)
int64_t var_168 = *(rdx[5] + 0x10)
int64_t* rcx_6 = data_143f0f180
int64_t* arg_20
(*(*rcx_6 + 0xf8))(rcx_6, &arg_20, &var_1a8, &data_143e773b0, 1, 1)
int64_t* rbx = arg_20

if (rbx != 0)
    rbx[1].d += 1
    int64_t* rdi_1 = arg_20
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            char rax_14
            
            if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_14 = sub_1405949a0()
            
            if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_14 != 0))
                (**rdi_1)(rdi_1, 1)
            else
                bool z_1
                
                if (0 == *(rdi_1 + 0xc))
                    *(rdi_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rdi_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, rdi_1)

void* rcx_8 = arg1[2]
void* r8_1 = *(rcx_8 + 0x15b0)
sub_1411f3290(rcx_8, 0, r8_1 + 0xdc0, r8_1 + 0xdd0)
int64_t* rcx_9 = data_143f0f180
int32_t var_210 = 1
int32_t var_218 = 1
int64_t* var_1e8
(*(*rcx_9 + 0xf8))(rcx_9, &var_1e8, *(arg1[2] + 0x15b0), &data_143f55750, 1, 1)
int64_t* rax_18 = var_1e8

if (rax_18 != 0)
    rax_18[1].d += 1
    int64_t* rdi_2 = var_1e8
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            char rax_20
            
            if (rdi_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_20 = sub_1405949a0()
            
            if (rdi_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_20 != 0))
                (**rdi_2)(rdi_2, 1)
            else
                bool z_2
                
                if (0 == *(rdi_2 + 0xc))
                    *(rdi_2 + 0xc) = 1
                    z_2 = true
                else
                    *(rdi_2 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, rdi_2)

void*** rcx_13 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm7 = zx.o(*(arg1 + 0x24))
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(arg1[5].d))
void* rax_23 = &rcx_13[5]
zmm7 = _mm_cvtepi32_ps(zmm7)

if (rax_23 u> *(r15 + 0x38))
    zmm6 = sub_140b0e3d0(r15 + 0x30, 0x30)
    rcx_13 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
    rax_23 = &rcx_13[5]

*(r15 + 0x30) = rax_23
void** rax_24 = *(r15 + 8)
*(r15 + 0x14) += 1
*rax_24 = rcx_13
*(r15 + 8) = &rcx_13[1]
rcx_13[1] = 0
*rcx_13 = &data_142d54998
*(rcx_13 + 0x1c) = zmm7.d
rcx_13[4].d = zmm6.d
rcx_13[2] = 0
rcx_13[3].d = 0
*(rcx_13 + 0x24) = 0x3f800000
int64_t rdi_3 = data_14395da00
int64_t rsi = data_14395d9e8
int64_t var_1d0
__builtin_memset(&var_1d0, 0, 0x14)
sub_141095f70(&var_1d0, 0)
int64_t** var_1f8 = nullptr
int32_t var_1f0 = 0
void var_b8
sub_14108b090(&var_b8)
void* rdx_5 = arg1[1]
int64_t r9_1 = arg1[2]
void** const var_158 = &data_142f11938
int64_t* var_150 = &var_1d0
int64_t* var_148 = &var_1f8
void* var_140 = &var_b8
void arg_8
void* var_138 = &arg_8
var_218.q = &var_158
void** var_128
sub_14125c360(&var_128, rdx_5, *(rdx_5 + 8), r9_1, var_218)
int64_t var_100 = rdi_3
int64_t var_f8 = rsi
var_128 = &data_142f369e8
int64_t* rax_26 = arg1[3]
int32_t var_f0 = 0x11
int64_t* var_e8 = rax_18
int64_t var_e0 = 0
int64_t var_d8 = 0
int64_t* var_d0 = rbx
int32_t var_c8 = 0
void* rsi_1 = *rax_26
void* rax_29 = sx.q(rax_26[1].d) * 0xe0 + rsi_1

if (rsi_1 != rax_29)
    do
        void* i = *(rsi_1 + 0x80)
        
        for (void* r15_1 = i + sx.q(*(rsi_1 + 0x88)) * 0x28; i != r15_1; i += 0x28)
            var_210 = *(rsi_1 + 0xcc)
            zmm6 = sub_1411d51f0(&var_128, *i, -1, *(i + 8), zmm6, 0xffffffff, var_210, *(i + 0x18))
        
        rsi_1 += 0xe0
    while (rsi_1 != rax_29)
    
    r15 = arg2

if (var_1f0 s> 0)
    void* rax_33 = arg1[2]
    int64_t var_1e0 = 0
    sub_1412c7690(*(rax_33 + 0x1548), &var_1f8, &var_1d0, &var_1e0, 1, var_210)
    sub_1412e4c00(&var_1f8, &var_b8, var_1e0, 0, 0, 1, r15)

var_128 = &data_142f11950
var_158 = &data_142d56fa0
int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t var_98

if (var_98 != 0)
    sub_140a74f90(var_98)

sub_14108ca30(&var_b8)
int32_t result = sub_141095f70(&var_1d0, 0)
int64_t rcx_28 = var_1d0

if (rcx_28 != 0)
    result = sub_140a74f90(rcx_28)

if (rax_18 != 0)
    result = rax_18[1].d
    rax_18[1].d -= 1
    
    if (result == 1)
        char rax_34
        
        if (rax_18[2].b == 0 && data_143f0f1d0 == 0)
            rax_34 = sub_1405949a0()
        
        if (rax_18[2].b != 0 || (data_143f0f1d0 == 0 && rax_34 != 0))
            result = (**rax_18)(rax_18, 1)
        else
            result = 0
            bool z_3
            
            if (0 == *(rax_18 + 0xc))
                *(rax_18 + 0xc) = 1
                z_3 = true
            else
                result = *(rax_18 + 0xc)
                z_3 = false
            
            if (z_3)
                result = sub_1405dcc10(&data_143f02390, rax_18)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        if (rbx[2].b != 0)
            return (**rbx)(rbx, 1)
        
        if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
            return (**rbx)(rbx, 1)
        
        result = 0
        bool z_4
        
        if (0 == *(rbx + 0xc))
            *(rbx + 0xc) = 1
            z_4 = true
        else
            result = *(rbx + 0xc)
            z_4 = false
        
        if (z_4)
            return sub_1405dcc10(&data_143f02390, rbx)

return result
