// 函数: sub_141549b50
// 地址: 0x141549b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t rdi = arg2[1].d
void* r8 = arg1

if (rdi s> arg3[1].d - *(arg3 + 0x34))
    sub_14174efd0(arg3, rdi)
    int32_t rax_6
    
    if (rdi u< 4)
        rax_6 = 1
    else
        uint32_t rdi_1 = rdi u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rdi_1 + 8)
        int32_t rcx_1
        
        if (rdi_1 == 0xfffffff8)
            rcx_1 = 0x20
        else
            rcx_1 = 0x1f - temp0_2
        
        int32_t rcx_3 = rcx_1 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rdi_1 + 7)
        
        if (rcx_3 == 0)
            rax_6 = 1
        else
            rax_6 = 1 << ((not.d(rcx_3)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_6 = arg3[9].d
    
    if (rcx_6 == 0 || rcx_6 s< rax_6)
        arg3[9].d = rax_6
        sub_14174c590(arg3)
    
    r8 = arg1

int32_t* r14 = *arg2
int64_t rsi_1 = 0
void* result = &r14[arg2[1]]
uint64_t r15_1 = sx.q(arg2[1].d) << 2 u>> 2

if (r14 u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t rdi_3 = sx.q(*r14)
        int64_t rcx_8 = *(r8 + 0x28)
        int128_t* rax_10 = (rdi_3 << 4) + *(r8 + 0x68)
        int64_t rdx_2 = rdi_3 * 3
        int32_t var_e8 = rdi_3.d
        int64_t rax_11 = *(r8 + 0x80)
        float var_98[0x4] = *rax_10
        float zmm0[0x4] = *(rcx_8 + (rdx_2 << 2) + 4)
        float zmm3[0x4] = _mm_unpacklo_ps(*(rcx_8 + (rdx_2 << 2)), *(rcx_8 + (rdx_2 << 2) + 8))
        zmm0 = _mm_unpacklo_ps(zmm0, zx.o(0)[0].q)
        float zmm2[0x4] = data_14399f66c
        float var_88_1[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
        float var_78_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
            _mm_unpacklo_ps(zmm2, 0)[0].q)
        int64_t* rcx_9 = *(rax_11 + (rdi_3 << 3))
        (*(*rcx_9 + 0x28))(rcx_9, (zx.o(0)).q)
        int64_t var_d8
        int64_t var_c8
        int32_t var_b8
        int32_t var_ac[0x5]
        sub_14003bce0(&var_98, &var_b8, &var_ac, &var_d8, &var_c8)
        int64_t zmm6_1 = var_d8
        int64_t zmm7_1 = var_c8
        
        if (arg3[1].d == *(arg3 + 0x34))
        label_141549d87:
            result = sub_1415c5ce0(arg3, rdi_3.d, &var_e8)
        else
            void* rax_14 = arg3[8]
            void* rdx_4 = &arg3[7]
            
            if (rax_14 != 0)
                rdx_4 = rax_14
            
            int32_t rax_15 = *(rdx_4 + (((sx.q(arg3[9].d) - 1) & rdi_3) << 2))
            
            if (rax_15 == 0xffffffff)
            label_141549d87_1:
                result = sub_1415c5ce0(arg3, rdi_3.d, &var_e8)
            else
                int64_t r8_4 = *arg3
                void* rcx_15
                
                while (true)
                    int64_t rdx_5 = sx.q(rax_15) * 9
                    rcx_15 = r8_4 + (rdx_5 << 2)
                    
                    if (*(r8_4 + (rdx_5 << 2)) == rdi_3.d)
                        break
                    
                    rax_15 = *(rcx_15 + 0x1c)
                    
                    if (rax_15 == 0xffffffff)
                        goto label_141549d87_2
                
                if (rax_15 == 0xffffffff || rcx_15 == 0)
                label_141549d87_2:
                    result = sub_1415c5ce0(arg3, rdi_3.d, &var_e8)
                else
                    result = rcx_15 + 4
        
        r8 = arg1
        r14 = &r14[1]
        rsi_1 += 1
        *result = zmm6_1
        *(result + 0xc) = zmm7_1
        int32_t var_d0
        *(result + 8) = var_d0
        int32_t var_c0
        *(result + 0x14) = var_c0
    while (rsi_1 != r15_1)

__security_check_cookie(rax_1 ^ &var_118)
return result
