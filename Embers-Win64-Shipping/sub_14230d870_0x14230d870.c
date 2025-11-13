// 函数: sub_14230d870
// 地址: 0x14230d870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg2[0x26]
void* arg_8

if (*(arg1 + 0x30) s> 0)
    int64_t* i = *(arg1 + 0x28)
    void* rbx_1 = &i[sx.q(*(arg1 + 0x30))]
    arg_8 = rbx_1
    
    for (; i != rbx_1; i = &i[1])
        void* rsi_1 = *i
        
        if (rsi_1 != 0 && (rsi_1 != *(arg1 + 0x48) || r12 == 0))
            void* rbp_1 = nullptr
            int32_t rcx
            rcx.b = sub_140b5b8a0(*(rsi_1 + 0x88), 0) == 0
            
            if ((*(rsi_1 + 0x8c) != 0 | rcx.b) != 0)
                void* rax_2 = arg2[2]
                
                if (*(rsi_1 + 0x98) == 0)
                    int64_t rbx_2 = *(rsi_1 + 0x88)
                    
                    if (rbx_2 != 0)
                        void* var_50 = rax_2
                        void* const j_4
                        
                        if (rax_2 == 0)
                            j_4 = nullptr
                        else
                            j_4 = *(rax_2 + 0x50)
                        
                        int32_t var_40_1 = 0xffffffff
                        int16_t var_3c_1 = 0x101
                        char var_3a_1 = 0
                        sub_141bb9450(&var_50)
                        int64_t* j_2
                        
                        for (int64_t* j = j_4; j != 0; j = j_2)
                            int64_t rax_3 = j[5]
                            int64_t var_58_1 = rax_3
                            
                            if (rax_3 == rbx_2)
                                if (j != 0)
                                    void* rax_5 = (*(*j + 0x140))()
                                    rbp_1 = rax_5
                                    void* rax_6
                                    void* rcx_5
                                    int64_t rdx_2
                                    
                                    if (rax_5 != 0)
                                        rax_6 = sub_1425881f0()
                                        rcx_5 = *(rbp_1 + 0x10)
                                        rdx_2 = sx.q(*(rax_6 + 0x38))
                                    
                                    if (rax_5 == 0 || rdx_2.d s> *(rcx_5 + 0x38)
                                            || *(*(rcx_5 + 0x30) + (rdx_2 << 3)) != rax_6 + 0x30)
                                        rbp_1 = nullptr
                                
                                break
                            
                            j_2 = j[4]
                            sub_141bb9450(&var_50)
                    
                    rbx_1 = arg_8
                else
                    void* j_1 = arg3
                    void* j_3 = *(arg3 + 0xc0)
                    
                    if (j_3 != 0)
                        j_1 = j_3
                    
                    for (void* rdx_1 = j_1 + (sx.q(*(arg3 + 0xc8)) << 3); j_1 != rdx_1; j_1 += 8)
                        void* rcx_2 = *j_1
                        
                        if (*(rcx_2 + 0x18) == *(rsi_1 + 0x88))
                            rbp_1 = rcx_2
                            break
            
            void* r8_1 = r12
            
            if (rbp_1 != 0)
                r8_1 = rbp_1
            
            int32_t var_88
            var_88.q = arg5
            sub_1422e2e00(rsi_1, arg2, r8_1, arg4, var_88, arg6)
else if (r12 == 0)
    sub_140d19010(arg2, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    arg_8 = nullptr
    void* rax_11 = sub_140d2dfc0(sub_1425881f0(), arg2, 0, 0, 0, 0, 0, 0, 0)
    int64_t* rbx_3 = rax_11
    *(rax_11 + 8) |= 8
    *(rax_11 + 0x8c) = 1
    
    if (arg5 != 0)
        sub_141f48e30(rax_11, arg5)
    
    sub_141f4a580(rbx_3, arg4, 0, 0, 0)
    sub_141dd9010(arg2, rbx_3)
    sub_141ef1390(rbx_3)
