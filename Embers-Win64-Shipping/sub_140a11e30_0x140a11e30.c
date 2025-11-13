// 函数: sub_140a11e30
// 地址: 0x140a11e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = *arg2
void* i = &r12[sx.q(arg2[1].d) * 2]
void* i_1 = i

if (r12 != i)
    do
        int64_t* rax_2 = *r12
        int32_t var_138_1 = 0
        i = sub_1429da1d0(arg1, *rax_2, rax_2[1].d, 0)
        
        if (i.d != 0)
            break
        
        int64_t var_f8 = 0
        i = sub_1429da230(arg1, &var_f8)
        void* i_2 = i
        
        while (i != 0)
            if (*(arg1 + 0x68) == 0)
                *(arg1 + 0x68) = 1
                void* var_d8 = arg1
                void* i_3 = i_2
                
                if (sub_140a80f40() == 0)
                    uint32_t rax_4
                    
                    if (data_143f138f4 == 0 && data_143de5480 != 0)
                        rax_4.b = GetCurrentThreadId() == data_143de5470
                    
                    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_4.b == 0))
                        void var_68
                        int64_t* rax_5 = sub_140a10f90(&var_68, nullptr, 0xff)
                        *(*rax_5 + 0x10) = var_d8.o
                        void* rcx_6 = *rax_5
                        int32_t r8_2 = rax_5[2].d
                        int64_t* rdx_4 = rax_5[1]
                        int64_t* rbx_1 = *(rcx_6 + 0x28)
                        int64_t* arg_18 = rbx_1
                        int32_t* rdi_1 = &rbx_1[9]
                        
                        if (rbx_1 != 0)
                            *rdi_1 += 1
                            rbx_1 = arg_18
                        
                        sub_1405e48c0(rcx_6, rdx_4, r8_2, 1)
                        
                        if (rbx_1 != 0)
                            int32_t rax_6 = *rdi_1
                            *rdi_1 -= 1
                            
                            if (rax_6 == 1)
                                sub_140a2f6e0(arg_18)
                    else
                        int128_t var_78 = var_d8.o
                        sub_140a0f380(&var_78)
                else
                    sub_140a0f380(&var_d8)
            
            int64_t* r14_1 = *(arg1 + 0x38)
            void* const rbx_2 = nullptr
            CRITICAL_SECTION* lpCriticalSection = *r14_1
            EnterCriticalSection(lpCriticalSection)
            
            if (lpCriticalSection->__offset(0x30).d s> 0)
                int64_t rcx_9 = sx.q(lpCriticalSection->__offset(0x30).d)
                rbx_2 = *(lpCriticalSection->__offset(0x28).q + (rcx_9 << 3) - 8)
                lpCriticalSection->__offset(0x30).d = (rcx_9 - 1).d
            else if (*lpCriticalSection->__offset(0x48).q != 0)
                rbx_2 = *(*lpCriticalSection->__offset(0x48).q + 8)
                
                if ((*(*(rbx_2 + 8) + 0x10))(rbx_2 + 8) == 0)
                    rbx_2 = nullptr
                else
                    void* rdx_5 = *lpCriticalSection->__offset(0x48).q
                    
                    if (rdx_5 != 0)
                        int64_t rcx_12 = lpCriticalSection->__offset(0x48).q
                        lpCriticalSection->__offset(0x48).q = rdx_5
                        *(rdx_5 + 8) = 0
                        j_sub_140a74f90(rcx_12)
                    
                    (*(*(rbx_2 + 8) + 8))(rbx_2 + 8)
            
            LeaveCriticalSection(lpCriticalSection)
            
            if (rbx_2 == 0)
                void*** rax_14 = j_sub_140a82f30(zx.q((rbx_2 + 0x38).d))
                rbx_2 = rax_14
                
                if (rax_14 == 0)
                    rbx_2 = nullptr
                else
                    *rax_14 = &data_142e4d348
                    *(rbx_2 + 8) = &data_142e4d3d0
                    *(rbx_2 + 0x10) = 0
                    *(rbx_2 + 0x18) = 0
            
            (**(rbx_2 + 8))(rbx_2 + 8)
            int64_t* rdi_2 = r14_1[1]
            int64_t rsi_1 = *r14_1
            
            if (rdi_2 != 0)
                *(rdi_2 + 0xc) += 1
            
            void*** rax_16 = j_sub_140a82f30(0x28)
            
            if (rax_16 != 0)
                rax_16[2] = rsi_1
                rax_16[3] = rdi_2
                rdi_2 = nullptr
                rax_16[1].d = 1
                *(rax_16 + 0xc) = 1
                *rax_16 = &data_142e4d5a0
                rax_16[4] = rbx_2
            
            if (rdi_2 != 0)
                int32_t rax_17 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (rax_17 == 1 && rdi_2 != 0)
                    (*(*rdi_2 + 8))(rdi_2, 1)
            
            void* rcx_18 = *r12
            int32_t r9_2 = *(i_2 + 0x18)
            int32_t r8_3 = *(i_2 + 0x1c)
            int64_t rax_19 = *(rcx_18 + 0x18)
            *(rbx_2 + 0x18) = *(rcx_18 + 0x10)
            *(rbx_2 + 0x30) = r9_2
            *(rbx_2 + 0x34) = r8_3
            *(rbx_2 + 0x28) = r9_2
            *(rbx_2 + 0x2c) = r8_3
            *(rbx_2 + 0x20) = rax_19
            uint128_t zmm0_3 = rbx_2.o
            uint128_t var_108 = zmm0_3
            void* rax_20 = _mm_bsrli_si128(zmm0_3, 8).q
            int64_t* var_120 = nullptr
            
            if (rax_20 != 0)
                *(rax_20 + 8) += 1
            
            int64_t rax_21 = var_108.q
            var_108.q = 0
            sub_1405aeff0(&var_120, &var_108:8)
            void* rcx_21 = var_108:8.q
            
            if (rcx_21 != 0)
                int32_t rax_22 = *(rcx_21 + 8)
                *(rcx_21 + 8) -= 1
                
                if (rax_22 == 1)
                    int64_t* rbx_5 = var_108:8.q
                    (**rbx_5)(rbx_5)
                    int32_t rax_24 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (rax_24 == 1)
                        int64_t* rcx_23 = var_108:8.q
                        (*(*rcx_23 + 8))(rcx_23, 1)
            
            int64_t* rdi_3 = var_120
            int64_t rbx_6 = rax_21
            void* var_c0_1 = arg1
            int64_t var_b8 = rbx_6
            int64_t* var_b0_1 = rdi_3
            
            if (rdi_3 != 0)
                rdi_3[1].d += 1
                rdi_3 = var_120
                rbx_6 = rax_21
            
            void* i_4 = i_2
            float zmm7[0x4]
            
            if (sub_140a80f40() == 0)
                uint32_t rax_31
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_31.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_31.b == 0))
                    void var_50
                    void** rax_36 = sub_140a10e40(&var_50, nullptr, 0xff)
                    void* rcx_33 = *rax_36
                    *(rcx_33 + 0x10) = arg1
                    *(rcx_33 + 0x18) = rbx_6
                    *(rcx_33 + 0x20) = rdi_3
                    *(rcx_33 + 0x28) = i_2
                    void* rcx_34 = *rax_36
                    int32_t r8_4 = rax_36[2].d
                    int64_t* rdx_12 = rax_36[1]
                    int64_t* rbx_9 = *(rcx_34 + 0x38)
                    int64_t* arg_20 = rbx_9
                    int32_t* rsi_2 = &rbx_9[9]
                    
                    if (rbx_9 != 0)
                        *rsi_2 += 1
                        rdi_3 = var_120
                        rbx_9 = arg_20
                    
                    sub_1407c96b0(rcx_34, rdx_12, r8_4, 1)
                    
                    if (rbx_9 != 0)
                        int32_t rax_37 = *rsi_2
                        *rsi_2 -= 1
                        
                        if (rax_37 == 1)
                            sub_140a2f6e0(arg_20)
                        
                        rdi_3 = var_120
                else
                    void* var_a0_1 = arg1
                    int64_t var_98 = rbx_6
                    void* i_5 = i_2
                    arg3, zmm7 = sub_140a10410(arg1, &var_98, arg3, zmm7)
                    
                    if (rdi_3 != 0)
                        rdi_3[1].d -= 1
                        
                        if (rdi_3[1].d == 1)
                            (**rdi_3)(rdi_3)
                            int32_t rax_34 = *(rdi_3 + 0xc)
                            *(rdi_3 + 0xc) -= 1
                            
                            if (rax_34 == 1)
                                (*(*rdi_3 + 8))(rdi_3, 1)
                        
                        rdi_3 = var_120
            else
                arg3, zmm7 = sub_140a10410(arg1, &var_b8, arg3, zmm7)
                
                if (var_b0_1 != 0)
                    var_b0_1[1].d -= 1
                    
                    if (var_b0_1[1].d == 1)
                        (**var_b0_1)(var_b0_1)
                        int32_t rax_29 = *(var_b0_1 + 0xc)
                        *(var_b0_1 + 0xc) -= 1
                        
                        if (rax_29 == 1)
                            (*(*var_b0_1 + 8))(var_b0_1, 1)
                    
                    rdi_3 = var_120
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    int64_t* rbx_10 = var_120
                    (**rbx_10)(rbx_10)
                    int32_t rax_40 = *(rbx_10 + 0xc)
                    *(rbx_10 + 0xc) -= 1
                    
                    if (rax_40 == 1)
                        int64_t* rcx_37 = var_120
                        (*(*rcx_37 + 8))(rcx_37, 1)
            
            if (rax_16 != 0)
                rax_16[1].d -= 1
                
                if (rax_16[1].d == 1)
                    (**rax_16)(rax_16)
                    int32_t rax_44 = *(rax_16 + 0xc)
                    *(rax_16 + 0xc) -= 1
                    
                    if (rax_44 == 1)
                        (*rax_16)[1](rax_16, 1)
            
            i = sub_1429da230(arg1, &var_f8)
            i_2 = i
        
        r12 = &r12[2]
    while (r12 != i_1)

return i
