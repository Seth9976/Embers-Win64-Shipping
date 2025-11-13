// 函数: sub_142a33460
// 地址: 0x142a33460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int32_t r10 = sx.d(*(arg1 + 0x64d0))
int32_t r11 = sx.d(*(arg1 + 0x64d4))
int32_t rsi = r10
uint128_t zmm13 = zx.o(*(arg1 + 0x6490))
char zmm14[0x10] = zx.o(*(arg1 + 0x6494))
int64_t r8 = sx.q(arg5 * *(arg2 + 0x420))
void* rdx_3 = arg2 + 0x160 + (r8 << 3)
int16_t var_182 = *(arg1 + 0x64cc)
int32_t rax_5 = r11.w.d
int32_t i_2 = *(arg2 + 0x424) - arg5
int16_t rdx_6 = arg9[1] s>> 3
int16_t r8_1 = *arg9 s>> 3
int16_t var_186 = rdx_6
int16_t var_182_1 = *(arg1 + 0x64c8)
int32_t rcx_1 = r10.w.d
int32_t rdx_7 = sx.d(*arg3)
uint128_t zmm10 = __vpshufd_xmmdq_xmmdq_immb(zx.o(rax_5), 0)
uint128_t zmm11 = __vpshufd_xmmdq_xmmdq_immb(zx.o(rcx_1), 0)
uint128_t zmm12 = __vpshufd_xmmdq_xmmdq_immb(zx.o(arg6), 0)
zmm13 = __vpshufd_xmmdq_xmmdq_immb(zmm13, 0)
zmm14 = __vpshufd_xmmdq_xmmdq_immb(zmm14, 0)
uint128_t zmm15 = __vpshufd_xmmdq_xmmdq_immb(zx.o(r8_1.d), 0)

if (rdx_7 s>= r10)
    rsi = rdx_7
    
    if (rdx_7 s> r11)
        rsi = r11

int32_t rdx_8 = sx.d((rax_5 u>> 0x10).w)
int32_t rax_7 = sx.d(arg3[1])
int32_t rdi = sx.d((rcx_1 u>> 0x10).w)

if (rax_7 s>= rdi)
    rdi = rax_7
    
    if (rax_7 s> rdx_8)
        rdi = rdx_8

int32_t rdx_9 = *(arg1 + 0x6178)
int64_t r11_1 = *(arg1 + 0x2018)
int32_t r10_1 = *(arg1 + 0x2020)
int16_t var_186_1 = rdi.w
int32_t rbx_1 = rsi.w.d
int64_t rcx_5 = sx.q(rdx_9 * rsi) + *(arg1 + 0x6170) + sx.q(rdi)
int64_t r15 = rcx_5
uint128_t zmm9 = zx.o(rcx_5)
int16_t zmm8[0x8] = __vpshufd_xmmdq_xmmdq_immb(zx.o(rbx_1), 0)
zmm9 = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm9, zmm9)
int32_t rax_12 = (*arg8)(r11_1, zx.q(r10_1), rcx_5, zx.q(rdx_9))
rsi.w -= r8_1
rdi.w -= rdx_6
int16_t var_186_2 = rdi.w
int32_t rcx_7 = rsi.w.d
int64_t rax_13
rax_13.b = rcx_7 != 0
int32_t rsi_1 = 0
int32_t r9_3 = *(*(arg1 + 0x64a8) + (sx.q((rcx_7 u>> 0x10).w) << 2))
    + *(arg1 + (rax_13 << 2) + 0x6490) + *(*(arg1 + 0x64a0) + (sx.q(rsi.w) << 2))
int32_t* rcx_9 = arg7
uint64_t i_1 = zx.q(i_2)
*rcx_9 = 0
int32_t r14_2 = rax_12 + ((r9_3 * arg6 + 0x100) u>> 9)

if (i_1.d s> 0)
    uint16_t zmm6[0x8]
    uint16_t var_48_1[0x8] = zmm6
    int64_t rdx_14 = r15
    uint32_t zmm7[0x4]
    uint32_t var_58_1[0x4] = zmm7
    int32_t var_178
    var_178.q = i_1
    uint64_t i
    
    do
        int32_t j = 0
        
        if (*(arg2 + 0x420) s> 0)
            do
                int64_t rax_15 = sx.q(rsi_1)
                int16_t temp0_8[0x8] =
                    __vpaddw_xmmdq_xmmdq_memdq(zmm8, *(arg2 + (r8 << 2) + (rax_15 << 2)))
                int32_t zmm2[0x4] =
                    __vpmaxsw_xmmdq_xmmdq_xmmdq(__vpminsw_xmmdq_xmmdq_xmmdq(temp0_8, zmm10), zmm11)
                uint32_t temp0_11[0x4] = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm2, temp0_8)
                int16_t var_118[0x8] = temp0_8
                
                if (not(temp0_11 == zx.o(0) ? 1 : 0))
                    uint16_t temp0_13[0x8] =
                        __vpabsw_xmmdq_xmmdq(__vpsubw_xmmdq_xmmdq_xmmdq(zmm2, zmm15))
                    zmm2 = __vpaddq_xmmdq_xmmdq_xmmdq(
                        *(rdx_3 + (rax_15 << 3)) & __vpmovsxdq_xmmdq_xmmq(temp0_11[0].q), zmm9)
                    char zmm0[0x10] = __vpunpckhdq_xmmdq_xmmdq_xmmdq(temp0_11, temp0_11)
                    int32_t var_128[0x4]
                    int128_t* var_198_1 = &var_128
                    int16_t zmm1[0x8] = *(rdx_3 + (sx.q(rsi_1 + 2) << 3)) & zmm0
                    int32_t var_108[0x4] = zmm2
                    int32_t var_f8_1[0x4] = __vpaddq_xmmdq_xmmdq_xmmdq(zmm1, zmm9)
                    (*(arg8 + 0x38))(r11_1, zx.q(r10_1), &var_108, zx.q(rdx_9), var_198_1)
                    int64_t rdx_17 = sx.q(__vpextrw_gpr32d_xmmdq_immb_c5(temp0_13, 3))
                    int32_t temp0_19 = __vpextrw_gpr32d_xmmdq_immb_c5(temp0_13, 2)
                    int64_t r9_8 = *(arg1 + 0x64a0)
                    int32_t temp0_20 = __vpextrw_gpr32d_xmmdq_immb_c5(temp0_13, 1)
                    uint32_t r8_6 = *(r9_8 + (rdx_17 << 2)) + *(r9_8 + (sx.q(temp0_19) << 2))
                    int64_t rcx_13 = sx.q(__vpextrw_gpr32d_xmmdq_immb_c5(temp0_13, 0))
                    zmm2 = __vpinsrd_xmmdq_xmmdq_gpr32d_immb(
                        zx.o(*(r9_8 + (sx.q(temp0_20) << 2)) + *(r9_8 + (rcx_13 << 2))), r8_6, 1)
                    int64_t rdx_19 = sx.q(__vpextrw_gpr32d_xmmdq_immb_c5(temp0_13, 7))
                    int64_t rcx_14 = sx.q(__vpextrw_gpr32d_xmmdq_immb_c5(temp0_13, 6))
                    int32_t temp0_25 = __vpextrw_gpr32d_xmmdq_immb_c5(temp0_13, 5)
                    uint32_t r8_8 = *(r9_8 + (rdx_19 << 2)) + *(r9_8 + (rcx_14 << 2))
                    int64_t rcx_15 = sx.q(__vpextrw_gpr32d_xmmdq_immb_c5(temp0_13, 4))
                    char zmm4_1[0x10] = __vpaddd_xmmdq_xmmdq_memdq(
                        __vpsrad_xmmdq_xmmdq_immb(
                            __vpaddd_xmmdq_xmmdq_memdq(
                                __vpmulld_xmmdq_xmmdq_xmmdq(
                                    __vpaddd_xmmdq_xmmdq_xmmdq(
                                        __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm2, 
                                            __vpinsrd_xmmdq_xmmdq_gpr32d_immb(
                                                zx.o(*(r9_8 + (sx.q(temp0_25) << 2))
                                                    + *(r9_8 + (rcx_15 << 2))), 
                                                r8_8, 1)), 
                                        __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(zmm14, zmm13, 
                                        __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_13, zx.o(0)))), 
                                    zmm12), 
                                data_14360a1d0), 
                            9), 
                        var_128)
                    uint64_t zmm3[0x2] =
                        zmm4_1 | __vpsrld_xmmdq_xmmdq_immb(temp0_11 ^ data_142d3f800, 1)
                    zmm1 = __vphminposuw_xmmdq_xmmdq(__vpackusdw_xmmdq_xmmdq_xmmdq(zmm3, zmm3))
                    int32_t rcx_16 = __vpextrw_gpr32d_xmmdq_immb_c5(zmm1, 0)
                    var_128 = zmm3
                    int32_t rax_30 = __vpextrw_gpr32d_xmmdq_immb_c5(zmm1, 1)
                    
                    if (rcx_16 == 0xffff)
                        zmm2 = data_142e11d00
                        zmm1 = __vpsrldq_xmmdq_xmmdq_immb(zmm3, 8)
                        zmm0 = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3, zmm1)
                        zmm3 = __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(zmm3, zmm1, zmm0)
                        char temp0_45[0x10] = __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(zmm2, 
                            __vpsrldq_xmmdq_xmmdq_immb(zmm2, 8), zmm0)
                        zmm2 = __vpsrldq_xmmdq_xmmdq_immb(zmm3, 4)
                        zmm0 = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm3, zmm2)
                        zmm1 = __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(zmm3, zmm2, zmm0)
                        zmm2 = __vpsrldq_xmmdq_xmmdq_immb(temp0_45, 4)
                        rcx_16 = __vpextrd_gpr32d_xmmdq_immb(zmm1, 0)
                        rax_30 = __vpextrd_gpr32d_xmmdq_immb(
                            __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(temp0_45, zmm2, zmm0), 0)
                    
                    if (rcx_16 u< r14_2)
                        uint64_t rax_31 = zx.q(rax_30)
                        r14_2 = rcx_16
                        rbx_1 = *(&var_118 + (rax_31 << 2))
                        r15 = *(&var_108 + (rax_31 << 3))
                
                j += 4
                rsi_1 += 4
            while (j s< *(arg2 + 0x420))
            
            i_1 = var_178.q
            rcx_9 = arg7
            rdx_14 = rcx_5
        
        zmm9 = zx.o(r15)
        zmm8 = __vpshufd_xmmdq_xmmdq_immb(zx.o(rbx_1), 0)
        zmm9 = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm9, zmm9)
        
        if (r15 == rdx_14)
            *rcx_9 += 1
        
        i = i_1
        i_1 -= 1
        var_178.q = i_1
    while (i != 1)

*arg4 = rbx_1
__security_check_cookie(rax_1 ^ &var_1b8)
return zx.q(r14_2)
