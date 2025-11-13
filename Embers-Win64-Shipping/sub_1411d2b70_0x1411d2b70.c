// 函数: sub_1411d2b70
// 地址: 0x1411d2b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg8

if (*result == 0)
    return result

*arg1
int64_t var_38_1 = arg5
int32_t rdx = *(arg2 + 0x1548)
int128_t var_188
__builtin_memset(&var_188, 0, 0x120)
sub_1413aab70(&data_143ec4c60, rdx, 0xf, &var_188)
int32_t r13

if (sub_1419767d0() == 0)
    r13 = sbb.d(arg5.d, arg5.d, sub_1419767f0() != 0) + 2
else
    r13 = 0

int32_t rax_2 = data_1439b60d0
uint64_t r12_1

if (rax_2 + 1 s>= 0)
    r12_1 = 3
    
    if (rax_2 + 1 s< 3)
        r12_1 = zx.q(rax_2 + 1)
else
    r12_1 = 0

int32_t* rax_4 = sub_14081d830(0x40, arg1[1], 1, 0)
int32_t* rsi_1 = rax_4

if (rax_4 == 0)
    rsi_1 = nullptr
else
    __builtin_memset(&rax_4[2], 0, 0x30)

__builtin_memset(rsi_1, 0, 0x40)
int64_t* rcx_1 = data_143f0f180
int64_t* var_220
(*(*rcx_1 + 0xf8))(rcx_1, &var_220, &var_188, &data_143ec50d0, 0, 1)
int64_t* rax_6 = var_220
int64_t* var_210 = rax_6

if (rax_6 != 0)
    rax_6[1].d += 1
    int64_t* rdi_1 = var_220
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            char rax_8
            
            if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_8 = sub_1405949a0()
            
            if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_8 != 0))
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
    
    rax_6 = var_210

if (&rsi_1[0xc] != &var_210)
    int64_t* rdi_2 = *(rsi_1 + 0x30)
    *(rsi_1 + 0x30) = rax_6
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            char rax_11
            
            if (rdi_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_11 = sub_1405949a0()
            
            if (rdi_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_11 != 0))
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
else if (rax_6 != 0)
    rax_6[1].d -= 1
    
    if (rax_6[1].d == 1)
        int64_t* rbx_3 = var_210
        char rax_14
        
        if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
            rax_14 = sub_1405949a0()
        
        if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_14 != 0))
            (**rbx_3)(rbx_3, 1)
        else
            bool z_3
            
            if (0 == *(rbx_3 + 0xc))
                *(rbx_3 + 0xc) = 1
                z_3 = true
            else
                *(rbx_3 + 0xc)
                z_3 = false
            
            if (z_3)
                sub_1405dcc10(&data_143f02390, var_210)

sub_1405d16e0(&rsi_1[0xa], *(arg2 + 0x10))
*(rsi_1 + 8) = *arg4
int64_t* rbx_4 = *arg6
var_220 = rbx_4
int64_t var_218_1 = 1
int32_t r14_1 = 4

if ((rbx_4[7].d & 0x100) != 0)
    var_218_1.d = 4
    var_218_1:4.d = 0x1c

void*** rax_18 = sub_14081d830(0x28, arg1[1], 1, 0)

if (rax_18 == 0)
    rax_18 = nullptr
else
    int128_t zmm0_1 = var_220.o
    rax_18[1] = rbx_4[1]
    *rax_18 = &data_142f285c0
    rax_18[2] = 0
    *(rax_18 + 0x18) = zmm0_1

*(rsi_1 + 0x18) = rax_18
*(rsi_1 + 0x10) = sub_141188b30(arg1, *arg7, 0xe)
int64_t* rdx_10 = arg1[1]
var_218_1.w = 0
int64_t* rbx_5 = *arg8
var_220 = rbx_5
void*** rax_21 = sub_14081d830(0x28, rdx_10, 1, 0)

if (rax_21 == 0)
    rax_21 = nullptr
else
    uint128_t zmm0_2 = var_220.o
    rax_21[1] = rbx_5[1]
    *rax_21 = &data_142f285c0
    rax_21[2] = 0
    *(rax_21 + 0x18) = zmm0_2

*(rsi_1 + 0x20) = rax_21
int32_t var_1f8
sub_1411dc520(&var_1f8, arg2 + 0x1598, arg3)
int32_t rcx_11

if (sub_1419767d0() == 0)
    rcx_11 = sbb.d(&var_1f8, &var_1f8, sub_1419767f0() != 0) + 2
else
    rcx_11 = 0

if (rcx_11 == 0 || rcx_11 != 1)
    r14_1 = 8

uint128_t zmm1_1
zmm1_1.d = _mm_cvtepi32_ps(zx.o(var_1f8)).d f* 0.125f
zmm1_1.d = zmm1_1.d f+ zmm1_1.d
float zmm3 = 1f f/ _mm_cvtepi32_ps(zx.o(r14_1)).d
zmm1_1.d = zmm1_1.d f- 0.5f
int32_t rbx_6 = int.d(zmm1_1.d)
int32_t var_1f0
uint128_t zmm6_1
zmm6_1.d = _mm_cvtepi32_ps(zx.o(var_1f0)).d f* 0.125f
int32_t var_1f4
zmm1_1 = _mm_cvtepi32_ps(zx.o(var_1f4))
int32_t rbx_8 = rbx_6 s>> 1 << 3
*rsi_1 = rbx_8
zmm1_1.d = zmm1_1.d f* zmm3
int32_t var_1ec
uint128_t zmm7
zmm7.d = _mm_cvtepi32_ps(zx.o(var_1ec)).d f* zmm3
zmm1_1.d = zmm1_1.d f+ zmm1_1.d
zmm1_1.d = zmm1_1.d f- 0.5f
int32_t rdi_5 = (int.d(zmm1_1.d) s>> 1) * r14_1
rsi_1[1] = rdi_5
int128_t var_1b8
sub_1419a2ec0(*(arg2 + 0x5150), &var_1b8, &data_143e77720, (r12_1 << 1).d + r13 + r12_1.d)
zmm6_1.d = zmm6_1.d f+ zmm6_1.d
int128_t zmm8 = var_1b8
zmm7.d = zmm7.d f+ zmm7.d
int32_t temp6_1
int32_t temp7_1
temp6_1:temp7_1 = sx.q(7 - (int.d(-0.5f f- zmm6_1.d) s>> 1 << 3) - rbx_8)
var_220.d = (temp7_1 + (temp6_1 & 7)) s>> 3
int32_t rcx_19 = int.d(-0.5f f- zmm7.d) s>> 1
var_220:4.d = divs.dp.d(sx.q((1 - rcx_19) * r14_1 - rdi_5 - 1), r14_1)
int128_t var_1a8_1 = sub_1411e2fb0(rcx_19.b)
sub_141998c50(zmm8.q, &data_143e7c240, rsi_1)
int64_t* var_1d0_1 = var_220
int32_t var_1c8_1 = 1
void*** rax_36
char rcx_21
rax_36, rcx_21 = sub_14081d830(0x60, arg1[1], 1, 0)
void*** rbx_9 = rax_36

if (rax_36 == 0)
    rbx_9 = nullptr
else
    var_1f8.q = rsi_1
    sub_1411e2fb0(rcx_21)
    var_1f0.q = &data_143e7c270
    int128_t var_198 = var_1f8.o
    void var_228
    sub_141992bd0(rbx_9, &var_228, &var_198, 2)
    *rbx_9 = &data_142f38a28
    *(rbx_9 + 0x38) = rsi_1.o
    *(rbx_9 + 0x48) = zmm8
    rbx_9[0xb] = var_1c8_1.q

return sub_1419968d0(arg1, rbx_9)
