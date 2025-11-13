// 函数: sub_140a11ac0
// 地址: 0x140a11ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *arg2
uint64_t result = &r15[sx.q(arg2[1].d) * 2]
uint64_t result_1 = result

if (r15 != result)
    do
        if (arg1[7].d != 0)
            result = sub_140a116b0(arg1, r15)
        else
            int64_t* rax_2 = *r15
            result = opus_decode(arg1[6], *rax_2, zx.q(rax_2[1].d), arg1[3], *(arg1 + 0x3c), 0)
        
        int32_t r12_1 = result.d
        
        if (result.d s> 0)
            int64_t* rbp_1 = *arg1
            void*** rbx_1 = nullptr
            CRITICAL_SECTION* lpCriticalSection = *rbp_1
            EnterCriticalSection(lpCriticalSection)
            
            if (lpCriticalSection->__offset(0x30).d s> 0)
                int64_t rcx_3 = sx.q(lpCriticalSection->__offset(0x30).d)
                rbx_1 = *(lpCriticalSection->__offset(0x28).q + (rcx_3 << 3) - 8)
                lpCriticalSection->__offset(0x30).d = (rcx_3 - 1).d
            else if (*lpCriticalSection->__offset(0x48).q != 0)
                rbx_1 = *(*lpCriticalSection->__offset(0x48).q + 8)
                
                if (rbx_1[1][2](&rbx_1[1]) == 0)
                    rbx_1 = nullptr
                else
                    void* rdx_2 = *lpCriticalSection->__offset(0x48).q
                    
                    if (rdx_2 != 0)
                        int64_t rcx_6 = lpCriticalSection->__offset(0x48).q
                        lpCriticalSection->__offset(0x48).q = rdx_2
                        *(rdx_2 + 8) = 0
                        j_sub_140a74f90(rcx_6)
                    
                    rbx_1[1][1](&rbx_1[1])
            
            LeaveCriticalSection(lpCriticalSection)
            
            if (rbx_1 == 0)
                void*** rax_11 = j_sub_140a82f30(zx.q((&rbx_1[8]).d))
                rbx_1 = rax_11
                
                if (rax_11 == 0)
                    rbx_1 = nullptr
                else
                    *rax_11 = &data_142e4d0b0
                    rbx_1[1] = &data_142e4d0f8
                    __builtin_memset(&rbx_1[2], 0, 0x14)
                    rbx_1[5] = 0
                    rbx_1[6].d = 0
                    rbx_1[7] = 0
            
            (*rbx_1[1])(&rbx_1[1])
            int64_t* rdi_1 = rbp_1[1]
            int64_t rsi_1 = *rbp_1
            
            if (rdi_1 != 0)
                *(rdi_1 + 0xc) += 1
            
            void*** rax_13 = j_sub_140a82f30(0x28)
            
            if (rax_13 == 0)
                rax_13 = nullptr
            else
                rax_13[2] = rsi_1
                rax_13[3] = rdi_1
                rdi_1 = nullptr
                rax_13[1].d = 1
                *(rax_13 + 0xc) = 1
                *rax_13 = &data_142e4d5b0
                rax_13[4] = rbx_1
            
            int64_t* var_50_1 = rax_13
            
            if (rdi_1 != 0)
                int32_t rax_14 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_14 == 1 && rdi_1 != 0)
                    (*(*rdi_1 + 8))(rdi_1, 1)
            
            int64_t rax_16 = arg1[3]
            int64_t rcx_12 = sx.q(arg1[8].d)
            int64_t rdi_3 = *(*r15 + 0x10)
            int32_t rax_21 = *(arg1 + 0x44)
            rbx_1[3].d = 0
            uint32_t count = rax_21 * r12_1 * 2
            
            if (count s> *(rbx_1 + 0x1c))
                sub_1405c5510(&rbx_1[2], count)
            
            int64_t r12_2 = sx.q(rbx_1[3].d)
            int32_t rax_22 = r12_2.d + count
            rbx_1[3].d = rax_22
            
            if (rax_22 s> *(rbx_1 + 0x1c))
                sub_1405daba0(&rbx_1[2])
            
            memcpy(r12_2 + rbx_1[2], rax_16, count)
            rbx_1[4].d = rax_21
            rbx_1[6].d = rcx_12.d
            rbx_1[5] = divs.dp.q(sx.o(sx.q(r12_1) * 0x989680), rcx_12)
            rbx_1[7] = rdi_3
            uint128_t zmm0_1 = rbx_1.o
            uint128_t var_48 = zmm0_1
            void* rax_25 = _mm_bsrli_si128(zmm0_1, 8).q
            
            if (rax_25 != 0)
                *(rax_25 + 8) += 1
            
            int64_t* rcx_17 = arg1[5]
            result = (*(*rcx_17 + 8))(rcx_17, &var_48)
            
            if (var_50_1 != 0)
                result = zx.q(var_50_1[1].d)
                var_50_1[1].d -= 1
                
                if (result.d == 1)
                    (**var_50_1)(var_50_1)
                    result = zx.q(*(var_50_1 + 0xc))
                    *(var_50_1 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*var_50_1 + 8))(var_50_1, 1)
        
        r15 = &r15[2]
    while (r15 != result_1)

return result
