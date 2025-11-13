// 函数: sub_14269b4c0
// 地址: 0x14269b4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
uint64_t result = __security_cookie ^ &var_e8
uint64_t result_1 = result
int32_t i = 0

if (*(arg1 + 0x50) s> 0)
    int128_t zmm6 = zx.o(0)
    
    do
        void* r9_1
        
        if (*(arg1 + 0x30) == 0)
            r9_1 = nullptr
        else
            void* rax_1 = sub_14269ce80()
            
            if (rax_1 == 0)
                r9_1 = nullptr
            else
                r9_1 = *(arg1 + 0x30)
                int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                
                if (rax_2.d s> *(r9_1 + 0x38) || *(*(r9_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                    r9_1 = nullptr
        
        uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(data_143f71980, data_143f71990)
        char rbx_1 = *(arg1 + 0x44)
        int32_t* rdx_3 = sx.q(i) * 0x30 + *(arg1 + 0x48)
        int128_t var_78 = *(rdx_3 + 0x20)
        int128_t var_68_1 = zmm6
        uint32_t var_58_1[0x4] = temp0_1
        void var_c8
        int32_t* rax_5
        rax_5, zmm6 = sub_141db6dd0(&var_c8, rdx_3, &var_78, r9_1)
        *(rax_5 + 0x4a) &= 0xfe
        *(rax_5 + 0x4a) |= rbx_1 & 1
        int64_t rbx_2 = sx.q(*(arg2 + 0x90))
        int32_t rcx_2 = (rbx_2 + 1).d
        *(arg2 + 0x90) = rcx_2
        
        if (rcx_2 s> *(arg2 + 0x94))
            sub_1405c5060(arg2 + 0x88)
        
        sub_141db6cf0(rbx_2 * 0x50 + *(arg2 + 0x88), rax_5)
        int32_t rax_6 = *(arg2 + 0x70)
        int32_t rax_7 = *(arg2 + 0xb8)
        *(arg2 + 0x70) = (((*rax_5 | rax_6) ^ rax_6) & 1) ^ rax_6
        int32_t rcx_17 = ((((zx.d(*(rax_5 + 0x4a)) * 2) | rax_7) ^ rax_7) & 2) ^ rax_7
        *(arg2 + 0xb8) = rcx_17
        result =
            (((zx.q(zx.d(*(rax_5 + 0x4a)) * 2) | zx.q(rcx_17)) ^ zx.q(rcx_17)) & 4) ^ zx.q(rcx_17)
        *(arg2 + 0xb8) = result.d
        int64_t var_90
        
        if (var_90 != 0)
            result = sub_140a74f90(var_90)
        
        i += 1
    while (i s< *(arg1 + 0x50))

__security_check_cookie(result_1 ^ &var_e8)
return result
