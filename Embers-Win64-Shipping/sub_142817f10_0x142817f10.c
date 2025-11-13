// 函数: sub_142817f10
// 地址: 0x142817f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rsi = arg6
int128_t* rbx = arg5
*arg4 = *rbx
int128_t zmm5 = *(rsi + 0xc)
int128_t zmm2 = *(rsi + 4)
int128_t zmm4 = *(rsi + 8)
int128_t zmm9 = rbx[2].d
zmm9.d = zmm9.d f+ zmm9.d
int128_t zmm6 = *(rbx + 0x24)
int128_t zmm13 = *rsi
zmm6.d = zmm6.d f+ zmm6.d
int128_t zmm8 = *(rbx + 0x28)
int128_t zmm7
zmm7.d = zmm5.d f* zmm5.d
zmm8.d = zmm8.d f+ zmm8.d
int128_t zmm0
zmm0.d = zmm2.d f* zmm6.d
zmm7.d = zmm7.d f- 0.5f
float zmm3 = zmm13.d f* zmm9.d f+ zmm0.d
int128_t zmm15
zmm15.d = zmm2.d f* zmm8.d
int128_t zmm10
zmm10.d = zmm4.d f* zmm9.d
zmm0.d = zmm4.d f* zmm6.d
zmm3 = zmm3 + zmm4.d f* zmm8.d
zmm15.d = zmm15.d f- zmm0.d
zmm0.d = zmm7.d f* zmm9.d
float zmm1 = zmm13.d * zmm3
zmm15.d = zmm15.d f* zmm5.d
zmm4.d = zmm4.d f* zmm3
zmm15.d = zmm15.d f+ zmm0.d
zmm0 = zmm13
zmm13.d = zmm13.d f* zmm6.d
zmm0.d = zmm0.d f* zmm8.d
zmm15.d = zmm15.d f+ zmm1
zmm1 = zmm2.d
zmm2.d = zmm2.d f* zmm9.d
zmm10.d = zmm10.d f- zmm0.d
zmm13.d = zmm13.d f- zmm2.d
zmm0 = zmm7
zmm7.d = zmm7.d f* zmm8.d
zmm15.d = zmm15.d f+ rsi[1].d
zmm10.d = zmm10.d f* zmm5.d
zmm13.d = zmm13.d f* zmm5.d
zmm0.d = zmm0.d f* zmm6.d
zmm13.d = zmm13.d f+ zmm7.d
float arg_8 = zmm15.d
zmm10.d = zmm10.d f+ zmm0.d
zmm13.d = zmm13.d f+ zmm4.d
zmm10.d = zmm10.d f+ zmm1 * zmm3
zmm13.d = zmm13.d f+ *(rsi + 0x18)
zmm10.d = zmm10.d f+ *(rsi + 0x14)
float arg_10 = zmm13.d
arg6.d = zmm10.d
float var_128
float* rax = sub_1417c7990(rsi, &var_128, &rbx[1])
float var_f8 = *rax
int128_t* r14 = arg7
int128_t zmm8_1 = *(rbx + 0x44)
float zmm9_1 = *(rbx + 0x3c)
zmm8_1.d = zmm8_1.d f+ zmm8_1.d
zmm9_1 = zmm9_1 + zmm9_1
float zmm3_1 = *(r14 + 4)
float zmm2_1 = *r14
float zmm6_1 = *(r14 + 0xc)
float zmm4_1 = *(r14 + 8)
int128_t zmm12 = rax[2]
int128_t zmm14 = rax[3]
float var_e4 = arg6.d
int32_t var_e8 = zmm15.d
zmm15 = rbx[4].d
zmm15.d = zmm15.d f+ zmm15.d
int32_t var_e0 = zmm13.d
zmm13.d = zmm8_1.d f* zmm3_1
float zmm7_1 = zmm6_1 * zmm6_1 - 0.5f
int32_t var_f4 = rax[1]
int32_t var_f0 = zmm12.d
int32_t var_ec = zmm14.d
float zmm5_1 = zmm9_1 * zmm2_1 + zmm15.d * zmm3_1 + zmm8_1.d * zmm4_1
zmm13.d = zmm13.d f- zmm15.d * zmm4_1
zmm13.d = zmm13.d f* zmm6_1
zmm13.d = zmm13.d f+ zmm7_1 * zmm9_1
zmm13.d = zmm13.d f+ zmm5_1 * zmm2_1
zmm13.d = zmm13.d f+ r14[1].d
float zmm0_1 = zmm7_1 f* zmm15.d
zmm15.d = zmm15.d f* zmm2_1
zmm15.d = zmm15.d f- zmm9_1 * zmm3_1
arg7.d = zmm13.d
zmm15.d = zmm15.d f* zmm6_1
arg5.d = (zmm9_1 * zmm4_1 - zmm8_1.d * zmm2_1) * zmm6_1 + zmm0_1
zmm15.d = zmm15.d f+ zmm7_1 f* zmm8_1.d
zmm15.d = zmm15.d f+ zmm5_1 * zmm4_1
zmm15.d = zmm15.d f+ *(r14 + 0x18)
arg5.d = arg5.d + zmm5_1 * zmm3_1 f+ *(r14 + 0x14)
float* rax_1
int128_t zmm10_2
int128_t zmm11_1
rax_1, zmm10_2, zmm11_1 = sub_1417c7990(r14, &var_128, rbx + 0x2c)
float zmm6_2 = arg5.d
int32_t var_108 = zmm13.d
float var_104 = zmm6_2
int32_t var_100 = zmm15.d
int128_t var_118 = *rax_1
uint8_t r13 = *(rbx + 0x74) u>> 1 & 1
int64_t rdi

if (r13 == 0 || (*(rbx + 0x64)).d f> *(rbx + 0x68))
    rdi.b = 0
else
    rdi.b = 1

int32_t* var_158 = arg1
float zmm9_2 = zmm14.d f* zmm14.d - 0.5f
zmm6_2 = (zmm6_2 f- arg6.d) * 2f
float zmm7_2 = (zmm13.d - arg_8) * 2f
float zmm5_2 = (zmm15.d - arg_10) * 2f
int128_t zmm0_2
zmm0_2.d = zmm10_2.d f* zmm7_2
float zmm4_2 = zmm11_1.d * zmm6_2 f+ zmm0_2.d
zmm0_2.d = zmm12.d f* zmm6_2
zmm4_2 = zmm4_2 + zmm12.d * zmm5_2
float zmm1_2 = zmm11_1.d * zmm5_2 f- zmm0_2.d
zmm0_2.d = zmm10_2.d f* zmm4_2
float zmm8_2 = zmm9_2 * zmm7_2 - zmm1_2 f* zmm14.d f+ zmm0_2.d
zmm0_2.d = zmm10_2.d f* zmm5_2
zmm1_2 = zmm12.d * zmm7_2 f- zmm0_2.d
var_128 = zmm8_2
zmm0_2.d = zmm11_1.d f* zmm4_2
float zmm2_2 = zmm9_2 * zmm6_2 - zmm1_2 f* zmm14.d f+ zmm0_2.d
zmm0_2.d = zmm11_1.d f* zmm7_2
zmm1_2 = zmm10_2.d * zmm6_2 f- zmm0_2.d
float var_124 = zmm2_2
zmm0_2.d = zmm12.d f* zmm4_2
zmm4_2 = arg7.d
float zmm3_2 = zmm9_2 * zmm5_2 - zmm1_2 f* zmm14.d f+ zmm0_2.d
zmm0_2.d = zmm15.d f- *(rsi + 0x18)
float var_120 = zmm3_2
zmm3_2 = arg5.d
zmm1_2 = zmm3_2 f- *(rsi + 0x14)
*arg2 = zmm4_2 f- rsi[1].d
arg2[2] = zmm0_2.d
arg2[1] = zmm1_2
zmm1_2 = arg_8 f- rsi[1].d
zmm4_2 = zmm4_2 f- r14[1].d
zmm3_2 = zmm3_2 f- *(r14 + 0x14)
zmm15.d = zmm15.d f- *(r14 + 0x18)
zmm2_2 = arg6.d f- *(rsi + 0x14)
zmm0_2.d = arg_10.d f- *(rsi + 0x18)
float var_140 = zmm0_2.d
int32_t rax_2
rax_2.b = rdi.b != 0
float var_134 = zmm15.d
int128_t zmm8_3
float zmm9_3
int128_t zmm10_3
int128_t zmm11_2
int128_t zmm12_1
float zmm13_1
float zmm14_1
zmm8_3, zmm9_3, zmm10_3, zmm11_2, zmm12_1, zmm13_1, zmm14_1 =
    sub_142810290(&var_158, &var_f8, &var_118, &var_128, rax_2 + 6, 7)
int32_t* rdx_3

if (r13 == 0 || rdi.b != 0)
    rdx_3 = arg1
else
    int128_t zmm7_3 = *(rbx + 0x64)
    float zmm1_3 = zmm10_3.d
    float zmm2_3 = zmm10_3.d * zmm13_1
    float zmm0_3 = zmm12_1.d * 0f
    int128_t zmm5_3
    zmm5_3.d = zmm11_2.d f* 0f
    zmm10_3.d = zmm10_3.d f* 0f
    zmm2_3 = zmm2_3 f+ zmm5_3.d
    int128_t zmm4_3
    zmm4_3.d = zmm12_1.d f* zmm13_1
    zmm5_3.d = zmm5_3.d f- zmm0_3
    zmm4_3.d = zmm4_3.d f- zmm10_3.d
    zmm2_3 = zmm2_3 + zmm0_3
    zmm0_3 = zmm9_3 * zmm13_1
    zmm5_3.d = zmm5_3.d f* zmm14_1
    zmm9_3 = zmm9_3 * 0f
    zmm5_3.d = zmm5_3.d f+ zmm0_3
    zmm4_3.d = zmm4_3.d f* zmm14_1
    zmm0_3 = zmm11_2.d
    zmm11_2.d = zmm11_2.d f* zmm13_1
    zmm4_3.d = zmm4_3.d f+ zmm9_3
    zmm5_3.d = zmm5_3.d f+ zmm1_3 * zmm2_3
    zmm10_3.d = zmm10_3.d f- zmm11_2.d
    zmm12_1.d = zmm12_1.d f* zmm2_3
    zmm4_3.d = zmm4_3.d f+ zmm0_3 * zmm2_3
    zmm10_3.d = zmm10_3.d f* zmm14_1
    zmm10_3.d = zmm10_3.d f+ zmm9_3
    zmm10_3.d = zmm10_3.d f+ zmm12_1.d
    
    if (0f f< *(rbx + 0x5c) || 0f f< *(rbx + 0x58))
        zmm0_3 = (zx.o(0)).d
    else
        zmm0_3 = rbx[6].d
    
    zmm11_2 = zmm3_2
    zmm12_1 = zmm4_2
    rdx_3 = arg1
    
    if (not(zmm0_3 f+ zmm8_3.d f<= zmm7_3.d))
        int32_t* rcx_3 = rdx_3
        zmm7_3.d = zmm7_3.d f- zmm8_3.d
        rdx_3 = &rdx_3[0x14]
        *(rcx_3 + 0x4e) = 0
        *rcx_3 = zmm5_3.d
        rcx_3[1] = zmm4_3.d
        rcx_3[2] = zmm10_3.d
        rcx_3[4] = zmm2_2 f* zmm10_3.d - var_140 f* zmm4_3.d
        rcx_3[5] = var_140 f* zmm5_3.d - zmm1_2 f* zmm10_3.d
        rcx_3[6] = zmm1_2 f* zmm4_3.d - zmm2_2 f* zmm5_3.d
        rcx_3[8] = zmm5_3.d
        rcx_3[9] = zmm4_3.d
        rcx_3[0xa] = zmm10_3.d
        rcx_3[0xc] = zmm11_2.d f* zmm10_3.d - var_134 f* zmm4_3.d
        rcx_3[0xd] = var_134 f* zmm5_3.d - zmm12_1.d f* zmm10_3.d
        rcx_3[0xe] = zmm12_1.d f* zmm4_3.d - zmm11_2.d f* zmm5_3.d
        int16_t r8_3 = rcx_3[0x13].w | 0x10
        rcx_3[3] = zmm7_3.d
        
        if (0f f< *(rbx + 0x5c) || 0f f< *(rbx + 0x58))
            r8_3 |= 1
            rcx_3[0x10] = *(rbx + 0x58)
            rcx_3[0x11] = *(rbx + 0x5c)
        else
            *(rcx_3 + 0x4e) = 0x401
            rcx_3[0x10] = rbx[5].d
            rcx_3[0x11] = *(rbx + 0x54)
            
            if (not(zmm7_3.d f<= 0f))
                r8_3 |= 8
            
            if (not(0f f>= rbx[5].d))
                r8_3 |= 4
        
        rcx_3[0x13].w = r8_3
        rcx_3[0xb] = 0
    
    zmm5_3 ^= 0x80000000
    zmm4_3 ^= 0x80000000
    zmm10_3 ^= 0x80000000
    zmm7_3 = *(rbx + 0x68) ^ 0x80000000
    zmm8_3 ^= 0x80000000
    
    if (0f f< *(rbx + 0x5c) || 0f f< *(rbx + 0x58))
        zmm0_3 = (zx.o(0)).d
    else
        zmm0_3 = rbx[6].d
    
    if (not(zmm0_3 f+ zmm8_3.d f<= zmm7_3.d))
        int32_t* rcx_4 = rdx_3
        zmm7_3.d = zmm7_3.d f- zmm8_3.d
        rdx_3 = &rdx_3[0x14]
        *(rcx_4 + 0x4e) = 0
        rcx_4[1] = zmm4_3.d
        *rcx_4 = zmm5_3.d
        rcx_4[2] = zmm10_3.d
        rcx_4[4] = zmm10_3.d * zmm2_2 - zmm4_3.d * var_140
        rcx_4[5] = zmm5_3.d * var_140 - zmm10_3.d * zmm1_2
        rcx_4[6] = zmm4_3.d * zmm1_2 - zmm5_3.d * zmm2_2
        rcx_4[9] = zmm4_3.d
        rcx_4[8] = zmm5_3.d
        zmm2_3 = zmm10_3.d f* zmm11_2.d - zmm4_3.d * var_134
        rcx_4[0xa] = zmm10_3.d
        zmm1_3 = zmm5_3.d * var_134
        zmm10_3.d = zmm10_3.d f* zmm12_1.d
        rcx_4[0xc] = zmm2_3
        zmm4_3.d = zmm4_3.d f* zmm12_1.d
        zmm5_3.d = zmm5_3.d f* zmm11_2.d
        zmm4_3.d = zmm4_3.d f- zmm5_3.d
        rcx_4[0xd] = zmm1_3 f- zmm10_3.d
        rcx_4[0xe] = zmm4_3.d
        int16_t r8_4 = rcx_4[0x13].w | 0x10
        rcx_4[3] = zmm7_3.d
        
        if (0f f< *(rbx + 0x5c) || 0f f< *(rbx + 0x58))
            rcx_4[0x10] = *(rbx + 0x58)
            rcx_4[0x11] = *(rbx + 0x5c)
            rcx_4[0x13].w = r8_4 | 1
            rcx_4[0xb] = 0
        else
            *(rcx_4 + 0x4e) = 0x401
            rcx_4[0x10] = rbx[5].d
            rcx_4[0x11] = *(rbx + 0x54)
            
            if (not(zmm7_3.d f<= 0f))
                r8_4 |= 8
            
            if (0f f>= rbx[5].d)
                rcx_4[0x13].w = r8_4
                rcx_4[0xb] = 0
            else
                rcx_4[0xb] = 0
                rcx_4[0x13].w = r8_4 | 4

return (rdx_3 - var_158) s/ 0x50
