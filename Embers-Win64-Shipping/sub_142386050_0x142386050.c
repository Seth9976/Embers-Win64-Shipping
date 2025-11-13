// 函数: sub_142386050
// 地址: 0x142386050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = EnterCriticalSection(arg1 + 0x580)
int32_t i = 0

if (*(arg1 + 0x18) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t r15_1 = *(arg1 + 0x10)
        int64_t* rdi_1 = *(rsi_1 + r15_1)
        
        if (rdi_1 != 0)
            uint128_t zmm0
            zmm0.q = rdi_1[5] f- data_143dbb3b8
            int32_t temp0_1 = _mm_cvtpd_ps(zmm0)
            
            if (not(temp0_1 f< 0f))
                (*(*rdi_1 + 0x260))(rdi_1, temp0_1)
                *(rdi_1 + 0x3d) &= 0x7f
                zmm0.q = data_143dbb3b8 f- 0x3ff0000000000000
                rdi_1[5] = zmm0.q
                int64_t* rcx_2 = *(rsi_1 + r15_1)
                *(rsi_1 + r15_1 + 0x78) = -0x3810000020000000
                result = (*(*rcx_2 + 0x2e0))(rcx_2)
        
        i += 1
        rsi_1 = &rsi_1[0x1b]
    while (i s< *(arg1 + 0x18))

*(arg1 + 0x350) = 0

if (arg1 == -0x580)
    return result

return LeaveCriticalSection(arg1 + 0x580) __tailcall
