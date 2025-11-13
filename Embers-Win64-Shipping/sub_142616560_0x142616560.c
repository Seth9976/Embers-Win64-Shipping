// 函数: sub_142616560
// 地址: 0x142616560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg11
uint64_t rbx = zx.q(*rsi)

if (rbx.d s>= arg12)
    return 

int64_t r10_1 = *(arg1 + 0x18)
int32_t* r14_1 = r10_1 + zx.q(*(arg2 + (sx.q(arg3) << 1) + 4)) * 0xc
int32_t* r15_1 =
    r10_1 + zx.q(*(arg2 + (sx.q(mods.dp.d(sx.q(arg3 + 1), zx.d(*(arg2 + 0x1e)))) << 1) + 4)) * 0xc
int128_t zmm0_1
int128_t zmm6_1
zmm0_1, zmm6_1 = sub_1426090a0(arg7, r14_1, r15_1, &arg12)

if (zmm0_1.d f> arg8)
    return 

uint32_t r12_2 = (rbx * 3).d * 2
int64_t rdi_1 = sx.q(r12_2)
*(arg9 + (rdi_1 << 2)) = *r14_1
*(arg9 + (rdi_1 << 2) + 4) = r14_1[1]
*(arg9 + (rdi_1 << 2) + 8) = r14_1[2]
*(arg9 + (rdi_1 << 2) + 0xc) = *r15_1
*(arg9 + (rdi_1 << 2) + 0x10) = r15_1[1]
*(arg9 + (rdi_1 << 2) + 0x14) = r15_1[2]
*(arg10 + (sx.q(*rsi * 2) << 3)) = arg4
*(arg10 + (sx.q(*rsi * 2) << 3) + 8) = arg5
*rsi += 1

if (arg6 == 0)
    return 

int32_t* var_98 = nullptr
arg11 = nullptr
sub_142610d20(arg6, arg5, &var_98, &arg11)
int32_t* r10_2 = arg11

if (r10_2 == 0)
    return 

int32_t i = *r10_2

if (i == 0xffffffff)
    return 

int32_t* rdx_4 = var_98
int32_t r8_3 = *(*(rdx_4 + 8) + 0x20)

do
    uint64_t rax
    
    if (i u>= r8_3)
        rax = (sx.q(i - r8_3) << 4) + *(rdx_4 + 0x80)
    else
        rax = (zx.q(i) << 4) + *(rdx_4 + 0x20)
    
    i = *(rax + 8)
    
    if (*rax == arg4)
        uint64_t rax_20 = zx.q(*(rax + 0xc))
        int64_t r9_3 = *(rdx_4 + 0x18)
        int128_t var_28_1 = zmm6_1
        zmm6_1 = *r14_1
        int128_t zmm7 = r14_1[1]
        int128_t zmm8 = r14_1[2]
        uint64_t r8_4 = zx.q(*(r10_2 + (rax_20 << 1) + 4)) * 3
        zmm0_1.d = (*(r9_3 + (r8_4 << 2))).d f- zmm6_1.d
        int128_t zmm1_1
        zmm1_1.d = (*(r9_3 + (r8_4 << 2) + 8)).d f- zmm8.d
        int128_t zmm10
        zmm10.d = (*r15_1).d f- zmm6_1.d
        int128_t zmm11
        zmm11.d = r15_1[1].d f- zmm7.d
        int128_t zmm12
        zmm12.d = r15_1[2].d f- zmm8.d
        zmm0_1.d = zmm0_1.d f* zmm10.d
        zmm1_1.d = zmm1_1.d f* zmm12.d
        float zmm3_1 = (*(r9_3 + (r8_4 << 2) + 4) f- zmm7.d) f* zmm11.d f+ zmm0_1.d
        int128_t zmm9
        zmm9.d = zmm11.d f* zmm11.d
        uint64_t rax_23 =
            zx.q(*(r10_2 + (sx.q(modu.dp.d(0:(rax_20.d + 1), zx.d(*(r10_2 + 0x1e)))) << 1) + 4)) * 3
        zmm0_1.d = zmm10.d f* zmm10.d
        zmm3_1 = zmm3_1 f+ zmm1_1.d
        zmm1_1.d = zmm12.d f* zmm12.d
        zmm9.d = zmm9.d f+ zmm0_1.d
        zmm9.d = zmm9.d f+ zmm1_1.d
        float zmm4_1
        float zmm5_1
        
        if (not(zmm3_1 > 0f))
            zmm4_1 = zmm6_1.d
            zmm5_1 = zmm7.d
            zmm3_1 = zmm8.d
        else if (zmm9.d f> zmm3_1)
            zmm3_1 = zmm3_1 f/ zmm9.d
            zmm4_1 = zmm3_1 f* zmm10.d f+ zmm6_1.d
            zmm5_1 = zmm3_1 f* zmm11.d f+ zmm7.d
            zmm3_1 = zmm3_1 f* zmm12.d f+ zmm8.d
        else
            zmm4_1 = *r15_1
            zmm5_1 = r15_1[1]
            zmm3_1 = r15_1[2]
        
        zmm0_1.d = (*(r9_3 + (rax_23 << 2))).d f- zmm6_1.d
        int128_t zmm2
        zmm2.d = (*(r9_3 + (rax_23 << 2) + 4)).d f- zmm7.d
        zmm1_1.d = (*(r9_3 + (rax_23 << 2) + 8)).d f- zmm8.d
        zmm0_1.d = zmm0_1.d f* zmm10.d
        zmm2.d = zmm2.d f* zmm11.d
        zmm1_1.d = zmm1_1.d f* zmm12.d
        zmm2.d = zmm2.d f+ zmm0_1.d
        zmm2.d = zmm2.d f+ zmm1_1.d
        
        if (not(zmm2.d f<= 0f))
            if (zmm9.d f> zmm2.d)
                zmm2.d = zmm2.d f/ zmm9.d
                zmm0_1.d = zmm2.d f* zmm10.d
                zmm1_1.d = zmm2.d f* zmm11.d
                zmm2.d = zmm2.d f* zmm12.d
                zmm0_1.d = zmm0_1.d f+ zmm6_1.d
                zmm1_1.d = zmm1_1.d f+ zmm7.d
                zmm2.d = zmm2.d f+ zmm8.d
                zmm6_1 = zmm0_1
                zmm7 = zmm1_1
                zmm8 = zmm2
            else
                zmm6_1 = *r15_1
                zmm7 = r15_1[1]
                zmm8 = r15_1[2]
        
        rax = sx.q(r12_2)
        *(arg9 + (rdi_1 << 2)) = zmm4_1
        *(arg9 + (rdi_1 << 2) + 4) = zmm5_1
        *(arg9 + (rdi_1 << 2) + 8) = zmm3_1
        *(arg9 + (rax << 2) + 0xc) = zmm6_1.d
        *(arg9 + (rax << 2) + 0x10) = zmm7.d
        *(arg9 + (rax << 2) + 0x14) = zmm8.d
        break
while (i != 0xffffffff)
