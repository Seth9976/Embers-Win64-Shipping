// 函数: sub_1416f9c90
// 地址: 0x1416f9c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t r10 = arg2
int64_t rcx = sx.q(arg3[1])
int64_t r8 = rcx * 3
int64_t rcx_1 = sx.q(arg3[2])
int32_t zmm5 = *(r10 + (r8 << 2))
int128_t zmm7 = *(r10 + (r8 << 2) + 8)
int64_t rdx = rcx_1 * 3
int64_t rcx_2 = sx.q(arg3[3])
int128_t zmm11 = *(r10 + (rdx << 2) + 4)
int128_t zmm12 = *(r10 + (rdx << 2))
int64_t rax_3 = sx.q(arg3[4])
int128_t zmm9 = *(r10 + (rdx << 2) + 8)
int64_t rcx_3 = rcx_2 * 3
int128_t zmm15 = *(r10 + (rcx_3 << 2) + 4)
int128_t zmm13 = *(r10 + (rcx_3 << 2) + 8)
int128_t zmm14 = *(r10 + (rcx_3 << 2))
int64_t rax_4 = rax_3 * 3
int128_t zmm8 = *(r10 + (rax_4 << 2) + 8)
int128_t zmm6 = *(r10 + (rax_4 << 2))
int128_t zmm10 = *(r10 + (rax_4 << 2) + 4)
uint64_t zmm0
zmm0.d = zmm13.q.d f* zmm10.d
uint64_t zmm3
zmm3.d = zmm15.q.d f* zmm8.d
int128_t zmm1
zmm1.d = zmm6.d f* zmm13.d
zmm3.d = zmm3.d f- zmm0.d
int128_t zmm2
zmm2.d = zmm14.d f* zmm10.d
zmm0.d = zmm14.q.d f* zmm8.d
zmm1.d = zmm1.d f- zmm0.d
zmm0.d = zmm6.q.d f* zmm15.d
zmm2.d = zmm2.d f- zmm0.d
int32_t var_224 = zmm1.d
zmm0.d = zmm3.d f* zmm12.d
zmm3.d = zmm3.d f* zmm5
int128_t zmm4
zmm4.d = zmm1.d f* zmm11.d
zmm1.d = zmm2.d f* zmm9.d
zmm4.d = zmm4.d f+ zmm0.d
zmm2.d = zmm2.d f* zmm7.d
zmm4.d = zmm4.d f+ zmm1.d
zmm1.d = zmm9.d f* zmm10.d
zmm4 ^= data_142d3f780
int32_t var_220 = zmm4.d
int32_t var_1c8 = zmm4.d
zmm4 = *(r10 + (r8 << 2) + 4)
zmm0.d = var_224.d f* zmm4.d
zmm0.d = zmm0.d f+ zmm3.d
zmm3.d = zmm12.q.d f* zmm8.d
zmm0.d = zmm0.d f+ zmm2.d
zmm2.d = zmm11.d f* zmm6.d
int32_t var_224_1 = zmm0.d
int32_t var_1c4 = zmm0.d
zmm0.d = zmm9.q.d f* zmm6.d
zmm3.d = zmm3.d f- zmm0.d
zmm0.d = zmm11.q.d f* zmm8.d
zmm1.d = zmm1.d f- zmm0.d
zmm3.d = zmm3.d f* zmm4.d
zmm1.d = zmm1.d f* zmm5
zmm3.d = zmm3.d f+ zmm1.d
zmm0.d = zmm12.q.d f* zmm10.d
int32_t* rsi = &var_220
int32_t var_1d8 = 1
void var_128
void* rbx = &var_128
int32_t var_1d4 = 2
int32_t* r14 = &var_1c8
int32_t var_1b8
int32_t* r15 = &var_1b8
zmm2.d = zmm2.d f- zmm0.d
int64_t var_1b4 = var_1d8.q
int32_t var_1d4_1 = 2
zmm0.d = zmm12.q.d f* zmm13.d
int32_t var_168[0x8]
int32_t (* r12)[0x8] = &var_168
var_1b8 = 3
zmm12.d = zmm12.d f* zmm15.d
var_1d8 = 0
int32_t i = 0
zmm10.d = zmm9.d f* zmm14.d
zmm6 = zx.o(0)
int32_t i_1 = -1
zmm2.d = zmm2.d f* zmm7.d
int64_t var_1a0 = var_1d8.q
zmm10.d = zmm10.d f- zmm0.d
var_1d8 = 0
int32_t var_1d4_2 = 1
zmm3.d = zmm3.d f+ zmm2.d
zmm0.d = zmm11.q.d f* zmm13.d
int64_t var_18c = var_1d8.q
zmm10.d = zmm10.d f* zmm4.d
var_1d8 = 0
zmm9.d = zmm9.d f* zmm15.d
int32_t var_1d4_3 = 1
zmm11.d = zmm11.d f* zmm14.d
uint64_t var_178 = var_1d8.q
uint64_t rax_8
rax_8.b = 1
zmm0.d = zmm0.d f- zmm9.d
int32_t var_21c = zmm3.d
zmm9 = var_224_1
zmm12.d = zmm12.d f- zmm11.d
int32_t var_1c0 = zmm3.d
zmm11 = var_220
int64_t var_1ac = 3
zmm0.d = zmm0.d f* zmm5
int32_t var_1a4 = 3
zmm12.d = zmm12.d f* zmm7.d
int64_t var_198 = 3
zmm7.d = zmm9.d f+ zmm11.d
int32_t var_190 = 3
zmm10.d = zmm10.d f+ zmm0.d
int64_t var_184 = 3
int32_t var_17c = 3
int64_t var_170 = 2
char var_228 = 1
zmm10.d = zmm10.d f+ zmm12.d
int32_t var_1bc = zmm10.d
zmm0.d = zmm10.q.d f+ zmm3.d
zmm7.d = zmm7.d f+ zmm0.d

do
    zmm7.d f- zmm6.d
    bool cond:0_1 = zmm7.d f>= zmm6.d
    zmm0 = *r14
    
    if (zmm7.d f<= zmm6.d)
        goto label_1416f9fe4
    
    if (zmm0.d f> zmm6.d)
        rax_8.b = 1
    else
        cond:0_1 = zmm7.d f>= zmm6.d
    label_1416f9fe4:
        
        if (cond:0_1 || zmm0.d f>= zmm6.d)
            rax_8.b = 0
        else
            rax_8.b = 1
    
    if (rax_8.b == 0)
        var_228 = rax_8.b
        uint64_t* rax_9
        float zmm8_1
        rax_9, zmm6, zmm7, zmm8_1, zmm9, zmm10, zmm11 = sub_1416fa750(&var_1d8, r10, r15, r12)
        rax_8 = zx.q(rax_9[1].d)
        *rbx = *rax_9
        *(rbx + 8) = rax_8.d
        float zmm2_1 = *(rbx + 4)
        zmm0 = *rbx
        zmm1 = *(rbx + 8)
        zmm0.d = zmm0.d f* zmm0.d
        zmm1.d = zmm1.d f* zmm1.d
        
        if (i_1 == 0xffffffff || not(zmm2_1 * zmm2_1 f+ zmm0.d f+ zmm1.d >= zmm8_1))
            i_1 = i
        
        r10 = arg2
    
    i += 1
    r12 = &(*r12)[4]
    r15 = &r15[5]
    r14 = &r14[1]
    rsi += 1
    rbx += 0xc
while (i s< 4)

uint64_t* result

if (var_228 == 0)
    int64_t i_2 = sx.q(i_1)
    int64_t rcx_5 = i_2 * 5
    *arg3 = (&var_1b8)[rcx_5]
    arg3[1] = *(&var_1b4 + (rcx_5 << 2))
    arg3[2] = *(&var_1b4:4 + (rcx_5 << 2))
    arg3[3] = *(&var_1ac + (rcx_5 << 2))
    arg3[4] = *(&var_1ac:4 + (rcx_5 << 2))
    *(arg4 + (rcx << 2)) = var_168[rcx + (i_2 << 2)]
    *(arg4 + (rcx_1 << 2)) = var_168[rcx_1 + (i_2 << 2)]
    *(arg4 + (rcx_2 << 2)) = var_168[rcx_2 + (i_2 << 2)]
    int64_t rax_20 = i_2 * 3
    zmm0 = *(&var_128 + (rax_20 << 2))
    int32_t var_120[0xa]
    int32_t rax_21 = var_120[rax_20]
    *(arg4 + (rax_3 << 2)) = var_168[rax_3 + (i_2 << 2)]
    *arg1 = zmm0
    arg1[1].d = rax_21
    result = arg1
else
    zmm0.d = 1f f/ zmm7.d
    zmm11.d = zmm11.d f* zmm0.d
    zmm9.d = zmm9.d f* zmm0.d
    *(arg4 + (rcx << 2)) = zmm11.d
    zmm1.d = var_21c.d f* zmm0.d
    zmm10.d = zmm10.d f* zmm0.d
    *(arg4 + (rcx_1 << 2)) = zmm9.d
    *(arg4 + (rcx_2 << 2)) = zmm1.d
    *(arg4 + (rax_3 << 2)) = zmm10.d
    result = arg1
    *result = 0
    result[1].d = 0

__security_check_cookie(rax_1 ^ &var_248)
return result
