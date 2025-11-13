// 函数: sub_141cfd560
// 地址: 0x141cfd560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
void*** rax_2 = sub_141d05170(arg1, nullptr)
char var_117 = 1
int32_t r12 = 0

if (arg1[0x29].b == 0)
    int64_t* var_108
    int512_t zmm1_1 = sub_141cf7120(&var_108, arg1, 1)
    void* var_f0
    int32_t i
    
    while (i s< *(var_f0 + 8))
        int64_t* var_d8
        void* rcx_12 = *var_d8
        
        if ((rcx_12.b & 1) != 0)
            rcx_12 = (rcx_12 s>> 1) + var_d8
        
        int64_t* r8_4 = *var_108 + 0x10
        void* rdx_9 = *r8_4
        
        if ((rdx_9.b & 1) != 0)
            rdx_9 = (rdx_9 s>> 1) + r8_4
        
        int32_t var_bc
        void* rbx_4 = sx.q(*((sx.q(var_bc) << 5) + rcx_12 + 0x10)) * 0x50 + rdx_9
        
        if ((*(rbx_4 + 0x48) & 2) == 0)
            void* rax_26 = sub_140a82f30(*(rbx_4 + 8), 0)
            void** r8_5 = *rax_2
            r8_5[0x2f](rax_2, *rbx_4, r8_5)
            uint64_t r8_6 = zx.q(*(arg1 + 0xa4))
            int128_t var_98 = data_14321e0d0
            int64_t var_88
            __builtin_memset(&var_88, 0, 0x1c)
            void* var_68 = nullptr
            int32_t j_2 = 0
            int64_t var_58_1 = 0
            char var_50_1 = 0
            sub_141d0f7d0(&var_98, rax_2, r8_6, zmm1_1)
            int64_t r9_1 = *(rbx_4 + 8)
            int64_t var_80
            int64_t var_78
            int32_t var_70
            int32_t j_1
            
            if (var_98:8.q == r9_1 && var_88 == *(rbx_4 + 0x10) && var_58_1:4.d == *(rbx_4 + 0x44)
                    && var_50_1 == *(rbx_4 + 0x48) && var_58_1.d == *(rbx_4 + 0x40)
                    && var_80 == *(rbx_4 + 0x18) && var_78 == *(rbx_4 + 0x20)
                    && var_70 == *(rbx_4 + 0x28))
                j_1 = j_2
            
            void* rcx_17
            
            if (var_98:8.q != r9_1 || var_88 != *(rbx_4 + 0x10) || var_58_1:4.d != *(rbx_4 + 0x44)
                || var_50_1 != *(rbx_4 + 0x48) || var_58_1.d != *(rbx_4 + 0x40)
                || var_80 != *(rbx_4 + 0x18) || var_78 != *(rbx_4 + 0x20)
                || var_70 != *(rbx_4 + 0x28) || j_1 != *(rbx_4 + 0x38))
            label_141cfd918:
                rcx_17.b = 1
            else
                rcx_17 = *(rbx_4 + 0x30)
                
                if ((rcx_17.b & 1) != 0)
                    rcx_17 = (rcx_17 s>> 1) + rbx_4 + 0x30
                
                void* rdx_13
                
                if ((var_68.b & 1) == 0)
                    rdx_13 = var_68
                else
                    rdx_13 = &var_68 + (var_68 s>> 1)
                
                if (j_1 != 0)
                    int32_t j
                    
                    do
                        if (*rdx_13 != *rcx_17)
                            goto label_141cfd918
                        
                        if (*(rdx_13 + 8) != *(rcx_17 + 8))
                            goto label_141cfd918
                        
                        rdx_13 += 0x10
                        rcx_17 += 0x10
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                rcx_17.b = 0
            
            int32_t rax_39 = r12 + 1
            
            if (rcx_17.b == 0)
                rax_39 = r12
            
            r12 = rax_39
            (*rax_2)[0x2a](rax_2, rax_26, r9_1)
            int64_t var_48
            sub_140b3f690(rax_26, *(rbx_4 + 8), &var_48)
            int64_t var_40
            int32_t var_38
            
            if (var_48 != *(rbx_4 + 0x18) || var_40 != *(rbx_4 + 0x20) || var_38 != *(rbx_4 + 0x28))
                r12 += 1
            
            sub_140a74f90(rax_26)
            sub_140a1d5c0(&var_68)
        
        zmm1_1 = sub_141cf95d0(&var_108)
    
    int64_t var_b0
    
    if (var_b0 != 0)
        sub_140a74f90(var_b0)
else
    sub_141d04dd0()
    EnterCriticalSection(&data_143f36890)
    void*** rax_3 = sub_140a84c80(0, 0x20, 0)
    
    if (rax_3 != 0)
        *rax_3 = &data_14321df68
        rax_3[1] = &var_117
        rax_3[3] = sub_140a387b0()
        *rax_3 = &data_14321dfc0
    
    int64_t rbx_1 = 0
    
    if (rax_3 != 0)
        sub_140599630(&data_143f368b8, 1)
        int64_t* rax_6 = (*rax_3)[6](rax_3, &performanceCount)
        int64_t r14_1 = sx.q(data_143f368c0.d)
        rbx_1 = *rax_6
        int32_t rax_7 = (r14_1 + 1).d
        data_143f368c0.d = rax_7
        
        if (rax_7 s> data_143f368c0:4.d)
            sub_1405a4f90(&data_143f368b8)
        
        void**** rax_10 = (r14_1 << 4) + data_143f368b8
        *rax_10 = rax_3
        rax_10[1].d = 2
    
    LeaveCriticalSection(&data_143f36890)
    int64_t rax_12 = (*rax_2)[5](rax_2)
    int64_t rdi_2 = 0
    
    if (rax_12 s> 0)
        do
            void** r8_2 = *rax_2
            r8_2[0x2f](rax_2, rdi_2, r8_2)
            int64_t* rcx_5 = rax_2[1]
            char var_118 = 0
            char* rdx_5 = *rcx_5
            
            if (&rdx_5[1] u> rcx_5[1])
                (*rax_2)[0x2a](rax_2, &var_118, 1)
            else
                var_118 = *rdx_5
                *rcx_5 += 1
            
            rdi_2 += 0x10000
        while (rdi_2 s< rax_12)
    
    if (rbx_1 != 0)
        EnterCriticalSection(&data_143f36890)
        int32_t i_1 = 0
        
        if (data_143f368c0.d s> 0)
            int64_t* rdi_3 = nullptr
            
            do
                int64_t rsi_1 = data_143f368b8
                
                if (*(rdi_3 + rsi_1 + 8) != 0)
                    int64_t* rcx_7 = *(rdi_3 + rsi_1)
                    
                    if (rcx_7 != 0 && *(*(*rcx_7 + 0x30))(rcx_7, &performanceCount) == rbx_1)
                        if (*(rdi_3 + rsi_1 + 8) != 0)
                            int64_t* rcx_8 = *(rdi_3 + rsi_1)
                            
                            if (rcx_8 != 0)
                                (*(*rcx_8 + 0x38))(rcx_8, 0)
                                int64_t rcx_9 = *(rdi_3 + rsi_1)
                                
                                if (rcx_9 != 0)
                                    *(rdi_3 + rsi_1) = sub_140a84c80(rcx_9, 0, 0)
                                
                                *(rdi_3 + rsi_1 + 8) = 0
                        
                        sub_140599630(&data_143f368b8, 0)
                        break
                
                i_1 += 1
                rdi_3 = &rdi_3[2]
            while (i_1 s< data_143f368c0.d)
        
        LeaveCriticalSection(&data_143f36890)

QueryPerformanceCounter(&performanceCount)
int64_t result
result.b = r12 == 0
__security_check_cookie(rax_1 ^ &var_138)
return result
