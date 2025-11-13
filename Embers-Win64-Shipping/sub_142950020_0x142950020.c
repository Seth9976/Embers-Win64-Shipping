// 函数: sub_142950020
// 地址: 0x142950020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x148)
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t rax_3 = arg3 << 7
int32_t* rbx = arg2
int64_t var_f8 = 0
int32_t zmm1[0x4] = *(rax_3 + arg2 - 0x30)
int32_t var_88[0x4] = *(rax_3 + arg2 - 0x40)
int32_t var_78[0x4] = zmm1
int64_t rax_4 = arg3 * 2
int32_t var_68[0x4] = *(rax_3 + arg2 - 0x20)
int32_t var_58[0x4] = *(rax_3 + arg2 - 0x10)

if (rax_4 != 0)
    int64_t rdx_7
    
    do
        int64_t i = 0
        int32_t zmm0[0x4]
        
        if (&var_88 u> &rbx[0xf] || &var_58[3] u< rbx)
            var_88 ^= *rbx
            var_78 ^= *(rbx + 0x10)
            var_68 ^= *(rbx + 0x20)
            zmm0 = *(rbx + 0x30)
            rbx = &rbx[0x10]
            var_58 ^= zmm0
        else
            do
                int32_t rax_6 = *rbx
                rbx = &rbx[1]
                var_88[i] ^= rax_6
                i += 1
            while (i u< 0x10)
        
        int32_t zmm4[0x4] = var_58
        zmm1 = var_88
        int32_t r14_1 = zmm4[3]
        int32_t r8 = zmm4[1]
        int32_t rdx = zmm4[0]
        int32_t var_120_1 = zmm4[2]
        int32_t rax_8 = var_68[1]
        int32_t rsi_1 = var_68[2]
        int32_t rcx = var_68[0]
        int32_t r10_1 = var_78[2]
        int32_t r13_1 = var_78[1]
        int32_t r11_1 = var_78[0]
        int32_t var_c8[0x4] = zmm1
        int32_t r9_1 = var_c8[1]
        int32_t rdi_1 = var_c8[0]
        int32_t var_124_1 = rax_8
        int32_t var_128_1 = var_78[3]
        int32_t var_12c_1 = var_c8[3]
        int32_t rbx_1 = var_68[3]
        int32_t var_130_1 = var_c8[2]
        int64_t i_2 = 4
        int32_t var_138_1 = r14_1
        int32_t var_134_1 = rsi_1
        int64_t i_1
        
        do
            int32_t r15_3 = rol.d(rdi_1 + rdx, 7) ^ r11_1
            int32_t r12_3 = rol.d(r9_1 + r13_1, 7) ^ var_124_1
            int32_t rax_14 = rol.d(r15_3 + rdi_1, 9) ^ rcx
            int32_t rcx_3 = rol.d(r15_3 + rax_14, 0xd) ^ rdx
            int32_t r11_4 = ror.d(rax_14 + rcx_3, 0xe) ^ rdi_1
            int32_t rax_17 = rol.d(r12_3 + r13_1, 9) ^ r8
            int32_t r8_3 = rol.d(r12_3 + rax_17, 0xd) ^ r9_1
            int32_t rdi_4 = ror.d(r8_3 + rax_17, 0xe) ^ r13_1
            int32_t rax_20 = rol.d(rbx_1 + r14_1, 7) ^ var_12c_1
            int32_t r13_4 = rol.d(r10_1 + rsi_1, 7) ^ var_120_1
            int32_t rdx_3 = rol.d(rax_20 + r14_1, 9) ^ var_128_1
            int32_t rcx_6 = rol.d(rsi_1 + r13_4, 9) ^ var_130_1
            int32_t r9_4 = rol.d(rcx_6 + r13_4, 0xd) ^ r10_1
            int32_t r10_4 = rol.d(rdx_3 + rax_20, 0xd) ^ rbx_1
            int32_t rbx_4 = rol.d(rax_20 + r11_4, 7) ^ r8_3
            int32_t rsi_4 = ror.d(rcx_6 + r9_4, 0xe) ^ var_134_1
            int32_t r14_4 = ror.d(rdx_3 + r10_4, 0xe) ^ var_138_1
            int32_t r8_6 = rol.d(rbx_4 + r11_4, 9) ^ rcx_6
            var_c8[1] = rbx_4
            var_130_1 = r8_6
            var_c8[2] = r8_6
            int32_t rcx_9 = rol.d(rbx_4 + r8_6, 0xd) ^ rax_20
            var_12c_1 = rcx_9
            var_c8[3] = rcx_9
            int32_t rax_23 = ror.d(r8_6 + rcx_9, 0xe) ^ r11_4
            var_c8[0] = rax_23
            int32_t rax_26 = rol.d(r15_3 + rdi_4, 7) ^ r9_4
            var_78[2] = rax_26
            int32_t rcx_12 = rol.d(rdi_4 + rax_26, 9) ^ rdx_3
            var_128_1 = rcx_12
            var_78[3] = rcx_12
            r9_1 = rbx_4
            rdx = rol.d(r14_4 + r13_4, 7) ^ rcx_3
            r11_1 = rol.d(rcx_12 + rax_26, 0xd) ^ r15_3
            rbx_1 = rol.d(rsi_4 + r12_3, 7) ^ r10_4
            r10_1 = rax_26
            int32_t rax_29 = ror.d(r11_1 + rcx_12, 0xe) ^ rdi_4
            r8 = rol.d(rdx + r14_4, 9) ^ rax_17
            rdi_1 = rax_23
            var_78[1] = rax_29
            rcx = rol.d(rsi_4 + rbx_1, 9) ^ rax_14
            int32_t rax_32 = rol.d(rcx + rbx_1, 0xd) ^ r12_3
            var_124_1 = rax_32
            var_68[1] = rax_32
            int32_t rax_35 = ror.d(rax_32 + rcx, 0xe) ^ rsi_4
            var_134_1 = rax_35
            rsi_1 = var_134_1
            var_68[2] = rax_35
            int32_t rax_38 = rol.d(rdx + r8, 0xd) ^ r13_4
            r13_1 = rax_29
            var_120_1 = rax_38
            zmm4[2] = rax_38
            int32_t rax_41 = ror.d(rax_38 + r8, 0xe) ^ r14_4
            i_1 = i_2
            i_2 -= 1
            r14_1 = rax_41
            var_138_1 = rax_41
            zmm4[3] = rax_41
        while (i_1 != 1)
        zmm0 = _mm_add_epi32(var_c8, zmm1)
        zmm4[0] = rdx
        var_68[0] = rcx
        var_88 = zmm0
        var_78[0] = r11_1
        zmm1 = _mm_add_epi32(var_78, var_78)
        var_68[3] = rbx_1
        var_78 = zmm1
        zmm0 = _mm_add_epi32(var_68, var_68)
        zmm4[1] = r8
        var_68 = zmm0
        var_58 = _mm_add_epi32(zmm4, zmm4)
        sub_1428b8960(&var_c8, 0x40)
        rdx_7 = var_f8 + 1
        int64_t rcx_19 = (zx.q(var_f8.d) & 1) * arg3 + (var_f8 u>> 1)
        var_f8 = rdx_7
        int64_t rcx_20 = rcx_19 << 6
        *(rcx_20 + arg1) = var_88
        *(rcx_20 + arg1 + 0x10) = var_78
        zmm1 = var_58
        *(rcx_20 + arg1 + 0x20) = var_68
        *(rcx_20 + arg1 + 0x30) = zmm1
    while (rdx_7 u< rax_4)

int64_t result = sub_1428b8960(&var_88, 0x40)
__security_check_cookie(rax_1 ^ &var_158)
return result
