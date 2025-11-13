// 函数: sub_1405d9c20
// 地址: 0x1405d9c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = 0
int64_t* rsi = arg1
uint64_t result = 0
bool z

if (0 == *(arg1 + 0xfa))
    *(arg1 + 0xfa) = 0
    z = true
else
    result.b = *(arg1 + 0xfa)
    z = false

if (z)
    result = sub_1419a21e0(0)

if (rsi[0xa] != 0)
    if ((*(*rsi + 0x260))(rsi) == 0)
        sub_1405db200(rsi, 0)
    
    char rax_3 = (*(*rsi + 0x260))(rsi)
    
    if (rax_3 != 1)
        result = (*(*rsi + 0x260))(rsi)
    
    if (rax_3 == 1 || result.b == 3)
        if (*(rsi + 0xdd) != 0)
            result = sub_140db2ee0(sub_140da2c00())
        
        if (*(rsi + 0xdd) == 0 || result.b != 0)
            int32_t temp1_1 = mods.dp.d(sx.q(rsi[0xd].d + 1), *(rsi + 0x6c))
            rsi[0xd].d = temp1_1
            int64_t* arg_20 = (sx.q(mods.dp.d(sx.q(temp1_1 + 1), *(rsi + 0x6c))) << 6) + rsi[0xb]
            int64_t* r13_3
            
            if ((*(*rsi + 0x260))(rsi) == 3)
                r13_3 = nullptr
            else
                r13_3 = (sx.q(rsi[0xd].d) << 6) + rsi[0xb]
            
            if ((*(*rsi + 0x260))(rsi) == 3)
                int32_t rax_18 = 0
                
                if (0 == rsi[0x20].d)
                    rsi[0x20].d = 0
                else
                    rax_18 = rsi[0x20].d
                
                if (rax_18 s<= 0)
                    return sub_1405db200(rsi, 0)
            
            if (r13_3 != 0)
                bool z_1
                
                if (0 == *(r13_3 + 0x2c))
                    *(r13_3 + 0x2c) = 0
                    z_1 = true
                else
                    int64_t rax_19
                    rax_19.b = *(r13_3 + 0x2c)
                    z_1 = false
                
                if (not(z_1))
                    sub_1419a21e0(0)
                
                void var_80
                int32_t* rax_20 = sub_140af61f0(&var_80)
                *(r13_3 + 8) = *rax_20
                r13_3[3].d = rax_20[4]
                void var_a8
                *(r13_3 + 0x1c) = *sub_140af6280(&var_a8)
                *(r13_3 + 0x24) = data_14399fa50
                rsi[0xe].d += 1
                r13_3[5].d = rsi[0xe].d
                void var_a0
                int64_t* rax_26 = (*(*rsi + 0x2a0))(rsi, &var_a0)
                
                if (&r13_3[6] != rax_26)
                    r13_3[6] = *rax_26
                    *rax_26 = 0
                    sub_1405aeff0(&r13_3[7], &rax_26[1])
                
                int64_t* var_98
                
                if (var_98 != 0)
                    var_98[1].d -= 1
                    
                    if (var_98[1].d == 1)
                        (**var_98)(var_98)
                        int32_t rax_29 = *(var_98 + 0xc)
                        *(var_98 + 0xc) -= 1
                        
                        if (rax_29 == 1)
                            (*(*var_98 + 8))(var_98, 1)
            
            CRITICAL_SECTION* lpCriticalSection = &rsi[0x12]
            EnterCriticalSection(lpCriticalSection)
            int64_t* r14_1 = rsi[0x11]
            
            if (r14_1 != 0)
                int32_t rax_31 = r14_1[1].d
                
                if (rax_31 == 0)
                    r14_1 = nullptr
                else
                    r14_1[1].d = rax_31 + 1
            
            void* const arg_18 = nullptr
            
            if (r14_1 != 0)
                arg_18 = rsi[0x10]
            
            void* rcx_17 = rsi[0xf]
            int64_t* arg_10
            
            if (rcx_17 == 0)
                arg_10 = nullptr
            else
                arg_10 = sub_140cbe180(rcx_17)
            
            int32_t rax_35 = rsi[6].d
            int64_t rcx_18 = rsi[5]
            int64_t rbx_2 = rsi[0x17]
            uint64_t result_1 = 0
            uint64_t result_3
            
            if (rax_35 != 0)
                sub_1405a4be0(&result_1, rax_35, 0)
                uint64_t result_2 = result_1
                result_3 = result_2
                memcpy(result_2, rcx_18, rax_35 << 4)
            else
                result_3 = 0
            
            if (arg_18 != 0 || arg_10 != 0)
                *(rsi + 0xfc) += 1
                int64_t* var_110_1 = arg_10
                int64_t* var_130_1 = rsi
                int64_t* var_128_1 = r13_3
                int64_t* var_120_1 = arg_20
                void* const var_118_1 = arg_18
                int64_t var_108_1 = rbx_2
                int64_t var_100 = 0
                int32_t arg_8 = rax_35
                int32_t var_f4
                
                if (rax_35 != 0)
                    sub_1405a4be0(&var_100, rax_35, 0)
                    r15 = var_100
                    memcpy(r15, result_3, rax_35 << 4)
                    rbx_2 = var_108_1
                    r13_3 = var_128_1
                    rsi = var_130_1
                    arg_8 = rax_35
                    arg_10 = var_110_1
                    arg_18 = var_118_1
                    arg_20 = var_120_1
                else
                    var_f4 = 0
                
                if (sub_140a80f40() == 0)
                    uint32_t rax_43
                    
                    if (data_143f138f4 == 0 && data_143de5480 != 0)
                        rax_43.b = GetCurrentThreadId() == data_143de5470
                    
                    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_43.b == 0))
                        void var_68
                        void** rax_46 = sub_1405d8d20(&var_68, nullptr, 0xff)
                        void* rcx_34 = *rax_46
                        *(rcx_34 + 0x20) = arg_20
                        *(rcx_34 + 0x28) = arg_18
                        *(rcx_34 + 0x30) = arg_10
                        *(rcx_34 + 0x10) = rsi
                        *(rcx_34 + 0x18) = r13_3
                        *(rcx_34 + 0x38) = rbx_2
                        *(rcx_34 + 0x40) = r15
                        *(rcx_34 + 0x48) = arg_8
                        *(rcx_34 + 0x4c) = var_f4
                        void* rcx_35 = *rax_46
                        int32_t r8_7 = rax_46[2].d
                        int64_t* rdx_21 = rax_46[1]
                        int64_t* rbx_3 = *(rcx_35 + 0x58)
                        int64_t* var_f0_1 = rbx_3
                        int32_t* rsi_1 = &rbx_3[9]
                        
                        if (rbx_3 != 0)
                            *rsi_1 += 1
                            rbx_3 = var_f0_1
                        
                        sub_1405dafa0(rcx_35, rdx_21, r8_7, 1)
                        
                        if (rbx_3 != 0)
                            int32_t r12_1 = *rsi_1
                            *rsi_1 -= 1
                            
                            if (r12_1 == 1)
                                sub_140a2f6e0(var_f0_1)
                    else
                        void* const var_d0_1 = arg_18
                        int64_t* var_d8_1 = arg_20
                        int32_t var_b0_1 = arg_8
                        int32_t var_ac_1 = var_f4
                        int64_t* var_e8 = rsi
                        int64_t* var_e0_1 = r13_3
                        int64_t* var_c8_1 = arg_10
                        int64_t var_c0_1 = rbx_2
                        sub_1405d5930(&var_e8, &data_143f02b98)
                        
                        if (r15 != 0)
                            sub_140a74f90(r15)
                else
                    void var_90
                    sub_1405d5180(&var_90, &var_100)
                    sub_1405d7500(var_130_1, &data_143f02b98, var_130_1, var_128_1, var_120_1, 
                        var_118_1, var_110_1, var_108_1, &var_90)
                    int64_t rcx_30 = var_100
                    
                    if (rcx_30 != 0)
                        sub_140a74f90(rcx_30)
            
            result = result_1
            
            if (result != 0)
                result = sub_140a74f90(result)
            
            if (r14_1 != 0)
                r14_1[1].d -= 1
                
                if (r14_1[1].d == 1)
                    result = (**r14_1)(r14_1)
                    int32_t temp15_1 = *(r14_1 + 0xc)
                    *(r14_1 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        result = (*(*r14_1 + 8))(r14_1, 1)
            
            if (lpCriticalSection != 0)
                return LeaveCriticalSection(lpCriticalSection)

return result
