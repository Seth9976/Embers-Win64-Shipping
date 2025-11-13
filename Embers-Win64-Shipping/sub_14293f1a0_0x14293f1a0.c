// 函数: sub_14293f1a0
// 地址: 0x14293f1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x130)
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t var_138[0x10]
sub_14296e1e0(&var_138, arg3, &data_14353dfd0)
sub_14296e7c0(&var_138, &var_138)
int32_t i_1 = 0x12
char var_f8[0x10]
int32_t i

do
    if (i_1 != 0x12)
        sub_14293fc50(arg1, arg1, 0)
    
    for (int32_t j = 0; j u< 5; j += 1)
        int32_t r8 = 0
        int32_t r9_2 = j * 0x5a + i_1
        
        if (r9_2 - 1 u< 0x1be)
            r8 = var_138[zx.q(r9_2 - 1) u>> 5] u>> ((r9_2 - 1).b & 0x1f) & 1
        
        if (r9_2 + 0x11 u< 0x1be)
            r8 |= (var_138[zx.q(r9_2 + 0x11) u>> 5] u>> ((r9_2 + 0x11).b & 0x1f) & 1) * 2
        
        if (r9_2 + 0x23 u< 0x1be)
            r8 |= (var_138[zx.q(r9_2 + 0x23) u>> 5] u>> ((r9_2 + 0x23).b & 0x1f) & 1) << 2
        
        if (r9_2 + 0x35 u< 0x1be)
            r8 |= (var_138[zx.q(r9_2 + 0x35) u>> 5] u>> ((r9_2 + 0x35).b & 0x1f) & 1) << 3
        
        if (r9_2 + 0x47 u< 0x1be)
            r8 |= (var_138[zx.q(r9_2 + 0x47) u>> 5] u>> ((r9_2 + 0x47).b & 0x1f) & 1) << 4
        
        uint32_t rax_14 = r8 u>> 4
        uint64_t rdi_3 = (zx.q(rax_14 - 1) ^ zx.q(r8)) & 0xf
        char* rbx_3 = zx.q(j << 4) * 0xc0 + arg2
        memset(&var_f8, 0, 0xc0)
        int64_t r8_3 = rdi_3 - 1
        int64_t k_1 = 0x10
        int64_t k
        
        do
            int64_t rcx_13 = 0
            uint8_t rdx_22 = neg.b((not.q(rdi_3) u>> 0x3f).b & (r8_3 u>> 0x3f).b)
            uint128_t zmm2_1 = zx.o(sx.d(rdx_22))
            zmm2_1 = _mm_unpacklo_epi8(zmm2_1, zmm2_1.q)
            zmm2_1 = _mm_shuffle_epi32(_mm_unpacklo_epi16(zmm2_1, zmm2_1.q), 0)
            void var_39
            
            if (&var_f8 u> &rbx_3[0xbf] || &var_39 u< rbx_3)
                do
                    int128_t zmm0_1 = *(rbx_3 + 0x10)
                    *(&var_f8 + rcx_13) |= zmm2_1 & *rbx_3
                    uint128_t zmm1_1 = zmm2_1 & zmm0_1
                    zmm0_1 = *(rbx_3 + 0x20)
                    void var_e8
                    *(&var_e8 + rcx_13) |= zmm1_1
                    zmm1_1 = zmm2_1 & zmm0_1
                    zmm0_1 = *(rbx_3 + 0x30)
                    rbx_3 = &rbx_3[0x40]
                    void var_d8
                    *(&var_d8 + rcx_13) |= zmm1_1
                    void var_c8
                    *(&var_c8 + rcx_13) |= zmm2_1 & zmm0_1
                    rcx_13 += 0x40
                while (rcx_13 u< 0xc0)
            else
                do
                    char rax_21 = *rbx_3
                    rbx_3 = &rbx_3[1]
                    var_f8[rcx_13] |= rax_21 & rdx_22
                    rcx_13 += 1
                while (rcx_13 u< 0xc0)
            
            rdi_3 -= 1
            r8_3 -= 1
            k = k_1
            k_1 -= 1
        while (k != 1)
        void var_b8
        sub_14293f820(&var_f8, &var_b8, rax_14 - 1)
        void var_78
        sub_14293f6b0(&var_78, rax_14 - 1)
        
        if (i_1 != 0x12 || j != 0)
            int32_t r8_8
            
            if (j != 4 || i_1 == 1)
                r8_8 = 0
            else
                r8_8 = j - 3
            
            sub_14293e1b0(arg1, &var_f8, r8_8)
        else
            sub_14296c9a0(arg1 + 0x40, &var_b8, &var_f8)
            sub_14296dba0(arg1, &var_b8, &var_f8)
            sub_14296dcf0(arg1 + 0xc0, arg1 + 0x40, arg1)
            *(arg1 + 0x80) = data_14353de90
            __builtin_memset(arg1 + 0x90, 0, 0x30)
    
    i = i_1
    i_1 -= 1
while (i != 1)
sub_1428b8960(&var_f8, 0xc0)
int64_t result = sub_1428b8960(&var_138, zx.q(i_1 + 0x38))
__security_check_cookie(rax_1 ^ &var_158)
return result
