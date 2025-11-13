// 函数: sub_1422508c0
// 地址: 0x1422508c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e88
int64_t rax_1 = __security_cookie ^ &var_e88
int128_t zmm9 = 0x3f800000
void* r13 = arg1 + 0x270
int32_t r14 = 0
int32_t rax_2 = 1 - *(r13 + 0x28)
int128_t zmm6 = arg2
int64_t rcx_1 = sx.q(rax_2) * 2
*(r13 + 0x28) = rax_2
int128_t zmm8
zmm8.d = 1f f/ zmm6.d
int64_t i = *(r13 + (rcx_1 << 3) + 0x10)

if (i != 0)
    do
        *(i + 0x10010) = 0
        i = *(i + 0x10000)
    while (i != 0)
    
    i = *(r13 + (rcx_1 << 3) + 0x10)

*(r13 + (rcx_1 << 3) + 8) = i
int32_t i_1 = 0
int32_t i_4 = 0
int128_t var_e28
int128_t zmm7

if (*(arg1 + 0x150) u> 0)
    do
        int64_t rax_3 = *(arg1 + 0x128)
        int64_t i_7 = sx.q(i_1)
        *(rax_3 + (i_7 << 3) + 6) = 1
        int32_t* r15_1 = rax_3 + (i_7 << 3)
        void var_808
        memset(&var_808, 0, 0x780)
        void var_7cc
        void* rax_4 = &var_7cc
        int64_t j_2 = 0x18
        int64_t j
        
        do
            *(rax_4 - 0x10) = 0xff7fffff
            *rax_4 = 0x7f7fffff
            rax_4 += 0x50
            j = j_2
            j_2 -= 1
        while (j != 1)
        int32_t j_1 = 0
        int32_t var_e58
        void var_ac8
        
        if (0 u< r15_1[1].w)
            do
                int64_t r10_1 = sx.q(*r15_1 + j_1)
                int64_t rdi_1 = zx.q(j_1) * 0xb0
                int64_t* r9_3 = r10_1 * 0x30 + *(arg1 + 0x118)
                void var_ab0
                *(&var_ab0 + rdi_1) = *r9_3
                void var_aa8
                *(&var_aa8 + rdi_1) = r9_3[1]
                void* r8_2 = sx.q(*(r9_3 + 0x14)) * 0x70 + *(arg1 + 0x60)
                void var_aa0
                *(&var_aa0 + rdi_1) = r8_2
                void var_a98
                *(&var_a98 + rdi_1) = sx.q(r9_3[3].d) * 0x70 + *(arg1 + 0x60)
                *(&var_e88 + rdi_1 + 0x3f8) = *(r8_2 + 0x50)
                *(&var_e88 + rdi_1 + 0x3fc) = *(r8_2 + 0x54)
                *(&var_e88 + rdi_1 + 0x400) = *(r8_2 + 0x58)
                *(&var_e88 + rdi_1 + 0x404) = *(r8_2 + 0x5c)
                *(&var_e88 + rdi_1 + 0x408) = *(r8_2 + 0x60)
                *(&var_e88 + rdi_1 + 0x40c) = *(r8_2 + 0x64)
                *(&var_e88 + rdi_1 + 0x410) = *(r8_2 + 0x68)
                void* rcx_5 = *(&var_a98 + rdi_1)
                *(&var_e88 + rdi_1 + 0x414) = *(rcx_5 + 0x50)
                *(&var_e88 + rdi_1 + 0x418) = *(rcx_5 + 0x54)
                *(&var_e88 + rdi_1 + 0x41c) = *(rcx_5 + 0x58)
                *(&var_e88 + rdi_1 + 0x420) = *(rcx_5 + 0x5c)
                *(&var_e88 + rdi_1 + 0x424) = *(rcx_5 + 0x60)
                *(&var_e88 + rdi_1 + 0x428) = *(rcx_5 + 0x64)
                *(&var_e88 + rdi_1 + 0x42c) = *(rcx_5 + 0x68)
                void var_a58
                *(&var_a58 + rdi_1) = (j_2 + 1).d
                int32_t rax_26
                
                if (*(&var_aa8 + rdi_1) != 0)
                    int32_t rax_27 = *(arg1 + 0x168)
                    rax_26 = sbb.d(rax_27, rax_27, r9_3[3].d u< rax_27) + 2
                else
                    rax_26 = 2
                
                void var_a54
                *(&var_a54 + rdi_1) = rax_26
                var_e58.q = &var_e88 + rdi_1 + 0x414
                int32_t var_e60
                var_e60.q = &var_e88 + rdi_1 + 0x3f8
                void var_ab8
                *(&var_ab8 + rdi_1) = r9_3
                __builtin_memcpy(&var_ac8 + rdi_1, 
                    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 0x10)
                void* rbx_1 = &var_808 + sx.q(r14) * 0x50
                int32_t var_e68
                var_e68.q = r10_1 * 0x1e0 + *(arg1 + 0x138)
                void var_a30
                *(&var_a30 + rdi_1) = 0
                void var_a3c
                __builtin_memcpy(&var_a3c + rdi_1, 
                    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\x00\x00\x00\x00", 0xc)
                void var_a28
                *(&var_a28 + rdi_1) = 0x100
                void var_a26
                *(&var_a26 + rdi_1) = 0
                int32_t var_e40[0x6]
                int32_t rax_32
                rax_32, zmm6, zmm7, zmm8, zmm9 =
                    sub_142244cb0(rbx_1, &var_e40, 0, &var_e28, var_e68, var_e60, var_e58)
                r14 += rax_32
                *(&var_ac8 + rdi_1) = var_e28
                void var_a40
                *(&var_a40 + rdi_1) = rax_32
                j_1 += 1
                void var_a48
                *(&var_a48 + rdi_1) = rbx_1
            while (j_1 u< zx.d(r15_1[1].w))
            
            i_1 = i_4
            r13 = arg1 + 0x270
        
        i = PxCreateJointConstraints(r15_1, 1, &var_ac8, r13, zmm6.d, zmm8.d, var_e58)
        i_1 += 1
        i_4 = i_1
        r14 = 0
    while (i_1 u< *(arg1 + 0x150))

int32_t rdi_2 = *(arg1 + 0x150)
int32_t rbp_2 = *(arg1 + 0x14c) + rdi_2
*(arg1 + 0x148) = 0
int32_t var_e48 = rdi_2
int32_t var_e44 = rbp_2

if (rdi_2 u< rbp_2)
    int128_t var_58_1 = zmm7
    
    do
        int32_t i_2 = 0
        int32_t* rbx_2 = *(arg1 + 0x128) + (sx.q(rdi_2) << 3)
        *rbx_2 += *(arg1 + 0x154)
        void var_d68
        void var_d60
        
        if (0 u< rbx_2[1].w)
            int64_t r14_1 = *(arg1 + 0x118)
            int64_t rbp_3 = *(arg1 + 0x60)
            int64_t r15_2 = *(arg1 + 0x90)
            int64_t r12_1 = *(arg1 + 0x100)
            int32_t r13_1 = *(arg1 + 0x168)
            
            do
                uint64_t i_5 = zx.q(i_2)
                int64_t r9_6 = i_5 * 0xd0
                int64_t* r10_4 = sx.q(*rbx_2 + i_2) * 0x30 + r14_1
                void* r8_5 = r10_4[4]
                *(&var_e28 + (i_5 << 3)) = r8_5
                void var_df0
                *(&var_df0 + r9_6) = *r10_4
                void var_de8
                *(&var_de8 + r9_6) = r10_4[1]
                void* rdx_4 = sx.q(*(r10_4 + 0x14)) * 0x70 + rbp_3
                void var_de0
                *(&var_de0 + r9_6) = rdx_4
                void var_dd8
                *(&var_dd8 + r9_6) = sx.q(r10_4[3].d) * 0x70 + rbp_3
                void var_dd0
                *(&var_dd0 + r9_6) = *(rdx_4 + 0x50)
                void var_dcc
                *(&var_dcc + r9_6) = *(rdx_4 + 0x54)
                void var_dc8
                *(&var_dc8 + r9_6) = *(rdx_4 + 0x58)
                void var_dc4
                *(&var_dc4 + r9_6) = *(rdx_4 + 0x5c)
                void var_dc0
                *(&var_dc0 + r9_6) = *(rdx_4 + 0x60)
                void var_dbc
                *(&var_dbc + r9_6) = *(rdx_4 + 0x64)
                void var_db8
                *(&var_db8 + r9_6) = *(rdx_4 + 0x68)
                void* rcx_13 = *(&var_dd8 + r9_6)
                void var_db4
                *(&var_db4 + r9_6) = *(rcx_13 + 0x50)
                void var_db0
                *(&var_db0 + r9_6) = *(rcx_13 + 0x54)
                void var_dac
                *(&var_dac + r9_6) = *(rcx_13 + 0x58)
                void var_da8
                *(&var_da8 + r9_6) = *(rcx_13 + 0x5c)
                void var_da4
                *(&var_da4 + r9_6) = *(rcx_13 + 0x60)
                void var_da0
                *(&var_da0 + r9_6) = *(rcx_13 + 0x64)
                void var_d9c
                *(&var_d9c + r9_6) = *(rcx_13 + 0x68)
                void var_d58
                *(&var_d58 + r9_6) = 0
                void var_d80
                *(&var_d80 + r9_6) = (sx.q(*(r8_5 + 8)) << 6) + r15_2
                void var_d78
                *(&var_d78 + r9_6) = *(r8_5 + 0xc)
                int64_t rcx_15 = sx.q(*(r8_5 + 0x10)) << 5
                *(&var_d68 + r9_6) = *(rcx_15 + r12_1 + 0x10)
                uint32_t rax_62 = zx.d(*(rcx_15 + r12_1 + 0x18))
                *(&var_d60 + r9_6) = rax_62.b
                void var_d74
                *(&var_d74 + r9_6) = 0
                void var_d72
                *(&var_d72 + r9_6) = 0
                void var_d88
                *(&var_d88 + r9_6) = 0
                void var_d70
                *(&var_d70 + r9_6) = 0
                void var_d6c
                *(&var_d6c + r9_6) = 0x7f7fffff
                void var_d98
                *(&var_d98 + r9_6) = 1
                bool c_2 = *(r8_5 + 4) u< r13_1
                void var_df8
                *(&var_df8 + r9_6) = r10_4
                void var_e00
                *(&var_e00 + r9_6) = 0x3f800000
                void var_e08
                *(&var_e08 + r9_6) = 0x3f800000
                void var_d94
                *(&var_d94 + r9_6) = sbb.d(rax_62, rax_62, c_2) + 2
                i_2 += 1
                void var_dfc
                *(&var_dfc + r9_6) = 0x3f800000
                void var_e04
                *(&var_e04 + r9_6) = 0x3f800000
            while (i_2 u< zx.d(rbx_2[1].w))
            
            rdi_2 = var_e48
            rbp_2 = var_e44
        
        int32_t var_e50_1 = zmm9.d
        int32_t var_e58_1 = 0x40800000
        int32_t var_e60_1 = 0xc3480000
        int32_t var_e68_1 = zmm8.d
        i = PxCreateContactConstraints(rbx_2)
        int32_t i_3 = 0
        
        if (0 u< rbx_2[1].w)
            do
                uint64_t i_6 = zx.q(i_3)
                i_3 += 1
                int64_t rdx_5 = i_6 * 0xd0
                void* rcx_19 = (sx.q(*(*(&var_e28 + (i_6 << 3)) + 0x10)) << 5) + *(arg1 + 0x100)
                *(rcx_19 + 0x10) = *(&var_d68 + rdx_5)
                *(rcx_19 + 0x18) = zx.d(*(&var_d60 + rdx_5))
                i = zx.q(rbx_2[1].w)
            while (i_3 u< i.d)
        
        rdi_2 += 1
        var_e48 = rdi_2
    while (rdi_2 u< rbp_2)

__security_check_cookie(rax_1 ^ &var_e88)
return i
