// 函数: sub_1411cb540
// 地址: 0x1411cb540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = *arg1
int64_t* r13 = arg1
int64_t var_170
__builtin_memset(&var_170, 0, 0x18)
uint128_t var_58 = arg3
uint128_t zmm7
uint128_t var_68 = zmm7
int32_t var_178 = *r9
int32_t var_1e0 = 1
int32_t var_1e8 = 1
int64_t var_170_1 = *(*(r9 + 8) + 0x10)
int128_t var_168
var_168.q = *(*(r9 + 0x10) + 0x10)
var_168:8.q = *(*(r9 + 0x18) + 0x10)
int64_t* rcx_1 = data_143f0f180
int64_t* var_1b0
(*(*rcx_1 + 0xf8))(rcx_1, &var_1b0, &var_178, &data_143e77950, 1, 1)
int64_t* rbx = var_1b0

if (rbx != 0)
    rbx[1].d += 1
    int64_t* rdi_1 = var_1b0
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            char rax_6
            
            if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_6 = sub_1405949a0()
            
            if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
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

void* rcx_5 = r13[2]
int64_t* rdi_2 = nullptr
int32_t rax_9 = r13[4].d
int64_t r14 = 0
int64_t r15 = 0
int64_t* var_1c8 = nullptr
int64_t* arg_20 = *(rcx_5 + 0x10)

if (rax_9 == 1 || rax_9 == 4 || rax_9 == 2)
    void* r8_2 = *(rcx_5 + 0x15b0)
    sub_1411f3290(rcx_5, 0, r8_2 + 0xdc0, r8_2 + 0xdd0)
    int64_t* var_188
    int64_t* rax_11 = sub_1411e03f0(&var_188, *(r13[2] + 0x15b0), 1, 1)
    
    if (&var_1c8 != rax_11)
        rdi_2 = *rax_11
        var_1c8 = rdi_2
        *rax_11 = 0
    
    int64_t* rsi_1 = var_188
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            char rax_13
            
            if (rsi_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_13 = sub_1405949a0()
            
            if (rsi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_13 != 0))
                (**rsi_1)(rsi_1, 1)
            else
                bool z_2
                
                if (0 == *(rsi_1 + 0xc))
                    *(rsi_1 + 0xc) = 1
                    z_2 = true
                else
                    *(rsi_1 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, rsi_1)
        
        rdi_2 = var_1c8
    
    rcx_5 = r13[2]
    arg_20 = rdi_2

void* rdx_6 = arg2
int64_t* rsi_2 = rdx_6 + 0x30
void*** rcx_8 = (*rsi_2 + 7) & 0xfffffffffffffff8
zmm7 = zx.o(*(rcx_5 + 0x15a0) - *(rcx_5 + 0x1598))
arg3 = _mm_cvtepi32_ps(zx.o(*(rcx_5 + 0x15a4) - *(rcx_5 + 0x159c)))
void* rax_20 = &rcx_8[5]
zmm7 = _mm_cvtepi32_ps(zmm7)

if (rax_20 u> rsi_2[1])
    arg3 = sub_140b0e3d0(rsi_2, 0x30)
    rdx_6 = arg2
    rcx_8 = (*rsi_2 + 7) & 0xfffffffffffffff8
    rax_20 = &rcx_8[5]

*rsi_2 = rax_20
void**** rax_21 = *(rdx_6 + 8)
*(rdx_6 + 0x14) += 1
*rax_21 = rcx_8
*(rdx_6 + 8) = &rcx_8[1]
rcx_8[1] = 0
*rcx_8 = &data_142d54998
*(rcx_8 + 0x1c) = zmm7.d
rcx_8[4].d = arg3.d
rcx_8[2] = 0
rcx_8[3].d = 0
*(rcx_8 + 0x24) = 0x3f800000
int32_t rax_23 = r13[4].d

if (rax_23 == 0)
    r15 = data_1439b5400
    r14 = data_14395da00
else if (rax_23 == 3)
    r15 = data_1439b5400
    r14 = data_14395da00
else if (rax_23 == 1)
    r14 = data_1439b61d0
    r15 = data_1439b53d0
else if (rax_23 == 4)
    r14 = data_1439b61e8
    r15 = data_1439b53d0
else if (rax_23 == 2)
    r15 = data_1439b53d0
    r14 = data_14395da00

int64_t var_1a0
__builtin_memset(&var_1a0, 0, 0x14)
sub_141095f70(&var_1a0, 0)
int64_t** var_1c0 = nullptr
int32_t var_1b8 = 0
void var_b8
sub_14108b090(&var_b8)
void* rdx_7 = r13[1]
int64_t r9_2 = r13[2]
int32_t rsi_3 = r13[4].d
void** const var_158 = &data_142f11938
int64_t* var_150 = &var_1a0
int64_t*** var_148 = &var_1c0
void* var_140 = &var_b8
void arg_18
void* var_138 = &arg_18
var_1e8.q = &var_158
void** var_128
sub_14125c360(&var_128, rdx_7, *(rdx_7 + 8), r9_2, var_1e8)
int32_t var_100 = rsi_3
var_128 = &data_142f36d98
int512_t zmm0
zmm0.o = zx.o(0)
int64_t* var_e0 = arg_20
int64_t* rax_25 = r13[3]
int64_t var_f8 = r14
int64_t var_f0 = r15
int32_t var_e8 = 0x11
int128_t var_d8 = zx.o(0)
int64_t* var_c8 = rbx
int32_t var_c0 = 0
void* r15_1 = *rax_25
void* rax_28 = sx.q(rax_25[1].d) * 0xe0 + r15_1

if (r15_1 != rax_28)
    do
        int64_t* i = *(r15_1 + 0x80)
        
        for (void* r13_1 = &i[sx.q(*(r15_1 + 0x88)) * 5]; i != r13_1; i = &i[5])
            void* rsi_4 = *i
            char rax_30 = sub_1411913d0(i)
            var_1e0 = *(r15_1 + 0xcc)
            zmm0 =
                sub_1411d5950(&var_128, rsi_4, -1, i[1], zmm0, 0xffffffff, var_1e0, i[3].d, rax_30)
        
        r15_1 += 0xe0
    while (r15_1 != rax_28)
    
    r13 = arg1

if (var_1b8 s> 0)
    void* rax_33 = r13[2]
    int64_t var_1a8 = 0
    sub_1412c7690(*(rax_33 + 0x1548), &var_1c0, &var_1a0, &var_1a8, 1, var_1e0)
    sub_1412e4c00(&var_1c0, &var_b8, var_1a8, 0, 0, 1, arg2)

var_128 = &data_142f11950
var_158 = &data_142d56fa0
int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t var_98

if (var_98 != 0)
    sub_140a74f90(var_98)

sub_14108ca30(&var_b8)
int32_t result = sub_141095f70(&var_1a0, 0)
int64_t rcx_24 = var_1a0

if (rcx_24 != 0)
    result = sub_140a74f90(rcx_24)

int512_t zmm6

if (rdi_2 != 0)
    result = rdi_2[1].d
    rdi_2[1].d -= 1
    
    if (result == 1)
        int64_t* rdi_3 = var_1c8
        char rax_34
        
        if (rdi_3[2].b == 0 && data_143f0f1d0 == 0)
            rax_34 = sub_1405949a0()
        
        if (rdi_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_34 != 0))
            result = (**rdi_3)(rdi_3, 1)
        else
            result = 0
            bool z_3
            
            if (0 == *(rdi_3 + 0xc))
                *(rdi_3 + 0xc) = 1
                z_3 = true
            else
                result = *(rdi_3 + 0xc)
                z_3 = false
            
            if (z_3)
                result, zmm6 = sub_1405dcc10(&data_143f02390, var_1c8)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        char rax_36
        
        if (rbx[2].b == 0 && data_143f0f1d0 == 0)
            rax_36 = sub_1405949a0()
        
        if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_36 != 0))
            result = (**rbx)(rbx, 1)
        else
            result = 0
            bool z_4
            
            if (0 == *(rbx + 0xc))
                *(rbx + 0xc) = 1
                z_4 = true
            else
                result = *(rbx + 0xc)
                z_4 = false
            
            if (z_4)
                result, zmm6 = sub_1405dcc10(&data_143f02390, rbx)

zmm6.o = var_58
return result
