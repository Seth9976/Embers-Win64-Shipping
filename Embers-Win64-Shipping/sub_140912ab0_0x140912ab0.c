// 函数: sub_140912ab0
// 地址: 0x140912ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int32_t r15 = 0

if (*(arg1 + 0xa8) != 0)
    int64_t r12
    int64_t var_28_1 = r12
    
    do
        char rax_1
        float zmm6_1
        rax_1, zmm6_1 = sub_1409131e0(arg1)
        
        if (rax_1 == 0)
        label_140912b31:
            
            if (*(arg1 + 0xa8) != 0)
                if (*(arg1 + 0xac) s<= 0)
                    *(arg1 + 0xa8) = 0
                else
                    r12.b = 0
                    EnterCriticalSection(arg1 + 0xc8)
                    int64_t* rcx_4 = *(arg1 + 0x88)
                    (*(*rcx_4 + 0x10))(rcx_4)
                    int64_t* rax_7 = sub_140fc6160(sub_140b58260(&arg_8, u"WINDOWS", 1))
                    int64_t r8_1 = *rax_7
                    (*(r8_1 + 0x38))(rax_7, *(arg1 + 0x88), r8_1)
                    uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xac)))
                    *(arg1 + 0x88) = 0
                    sub_140b73230(zmm0_2)
                    int64_t var_128 = 0
                    int32_t var_120_1 = 0
                    sub_1405947f0(&var_128, 0x26)
                    int32_t rsi_1 = var_120_1 + 0x26
                    
                    if (rsi_1 s> 0)
                        sub_140594770(&var_128)
                    
                    int64_t r14_1 = var_128
                    UnDecorator::getReferenceType(r14_1, FTcpMessageTransport.RemoteConnection", 
                        0x4c)
                    int32_t rax_8 = data_143e2b8a0
                    char rcx_11 = 0
                    char rdx_3 = 0
                    int16_t var_118_1 = 0
                    int16_t var_110_1 = 0
                    int64_t var_108 = 0
                    int32_t var_100_1 = rsi_1
                    
                    if (rsi_1 != 0)
                        sub_1405a4c70(&var_108, rsi_1, 0)
                        memcpy(var_108, r14_1, rsi_1 * 2)
                        rdx_3 = var_118_1:1.b
                        rcx_11 = var_118_1.b
                    else
                        int32_t var_fc_1 = 0
                    
                    char var_f8_1 = 0
                    int32_t var_f4_1 = 0
                    char var_f0_1 = 0
                    int32_t var_e8_1 = 0
                    char var_e4_1 = 0
                    int32_t var_e0_1 = 0x200000
                    int64_t var_c8
                    sub_140596d10(&var_c8, &var_108)
                    char var_88 = rcx_11
                    char var_87_1 = rdx_3
                    int64_t var_84_1 = rax_8.q
                    int32_t var_a8_1 = 0x200000
                    int64_t var_78
                    sub_140596d10(&var_78, &var_c8)
                    char var_68_1 = var_f8_1
                    int32_t var_64_1 = var_f4_1
                    char var_60_1 = var_f0_1
                    int32_t var_ec
                    int32_t var_5c_1 = var_ec
                    int32_t var_58_1 = var_a8_1
                    char var_54_1 = var_e4_1
                    int32_t var_50_1 = var_e0_1
                    int64_t* rax_26
                    rax_26, zmm6_1 = sub_14090ec00(&var_88)
                    int64_t rcx_17 = var_78
                    *(arg1 + 0x88) = rax_26
                    
                    if (rcx_17 != 0)
                        sub_140a74f90(rcx_17)
                    
                    int64_t rcx_18 = var_c8
                    
                    if (rcx_18 != 0)
                        sub_140a74f90(rcx_18)
                    
                    int64_t rcx_19 = var_108
                    
                    if (rcx_19 != 0)
                        sub_140a74f90(rcx_19)
                    
                    if (r14_1 != 0)
                        sub_140a74f90(r14_1)
                    
                    char rax_31
                    
                    if (*(arg1 + 0x88) != 0)
                        int64_t* rcx_21 = data_143e2b898
                        r15 |= 1
                        int64_t* var_98
                        (*(*rcx_21 + 0x90))(rcx_21, &var_98)
                        int64_t* rcx_22 = var_98
                        (*(*rcx_22 + 0x18))(rcx_22, zx.q(*(arg1 + 0x58)))
                        int64_t* rcx_23 = var_98
                        (*(*rcx_23 + 0x28))(rcx_23, zx.q(*(arg1 + 0x5c)))
                        int64_t* rcx_24 = *(arg1 + 0x88)
                        rax_31 = (*(*rcx_24 + 0x20))(rcx_24, var_98)
                    
                    if (*(arg1 + 0x88) == 0 || rax_31 == 0)
                        r14_1.b = 0
                    else
                        r14_1.b = 1
                    
                    if ((r15.b & 1) != 0)
                        r15 &= 0xfffffffe
                        int64_t* var_90
                        
                        if (var_90 != 0)
                            var_90[1].d -= 1
                            
                            if (var_90[1].d == 1)
                                (**var_90)(var_90)
                                int32_t temp1_1 = *(var_90 + 0xc)
                                *(var_90 + 0xc) -= 1
                                
                                if (temp1_1 == 1)
                                    (*(*var_90 + 8))(var_90, 1)
                    
                    if (r14_1.b == 0)
                        if (*(arg1 + 0x88) != 0)
                            void arg_10
                            int64_t* rax_34
                            rax_34, zmm6_1 = sub_140b58260(&arg_10, u"WINDOWS", 1)
                            int64_t* rax_35 = sub_140fc6160(rax_34)
                            int64_t r8_4 = *rax_35
                            (*(r8_4 + 0x38))(rax_35, *(arg1 + 0x88), r8_4)
                            *(arg1 + 0x88) = 0
                        
                        *(arg1 + 0xa8) = 0
                    else
                        r12.b = 1
                        *(arg1 + 0x28) = 2
                        __builtin_memset(arg1 + 0x70, 0, 0x12)
                    
                    if (arg1 != -0xc8)
                        LeaveCriticalSection(arg1 + 0xc8)
                    
                    if (r12.b != 0 && *(arg1 + 0x20) != 0)
                        int64_t* rcx_31 = *(arg1 + 0x18)
                        
                        if (rcx_31 != 0 && (*(*rcx_31 + 0x28))(rcx_31) != 0)
                            if (*(arg1 + 0x20) == 0)
                                (*(*nullptr + 0x50))(0)
                            else
                                int64_t* rcx_32 = *(arg1 + 0x18)
                                (*(*rcx_32 + 0x50))(rcx_32)
        else
            char rax_2
            rax_2, zmm6_1 = sub_140911200(arg1)
            
            if (rax_2 == 0)
                goto label_140912b31
            
            int64_t* rcx_2 = *(arg1 + 0x88)
            
            if ((*(*rcx_2 + 0x80))(rcx_2) == 2)
                goto label_140912b31
        
        sub_140b732d0(zmm6_1)
    while (*(arg1 + 0xa8) != 0)

EnterCriticalSection(arg1 + 0xc8)
*(arg1 + 0x28) = 3

if (arg1 != -0xc8)
    LeaveCriticalSection(arg1 + 0xc8)

if (*(arg1 + 0x20) != 0)
    int64_t* rcx_35 = *(arg1 + 0x18)
    
    if (rcx_35 != 0 && (*(*rcx_35 + 0x28))(rcx_35) != 0)
        int64_t* rcx_36
        
        if (*(arg1 + 0x20) == 0)
            rcx_36 = nullptr
        else
            rcx_36 = *(arg1 + 0x18)
        
        (*(*rcx_36 + 0x50))(rcx_36)

*(arg1 + 0x78) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x30) = *sub_140b29d90(&arg_8)

if (*(arg1 + 0x20) != 0)
    int64_t* rcx_39 = *(arg1 + 0x18)
    
    if (rcx_39 != 0)
        (*(*rcx_39 + 0x38))(rcx_39, 0)
        int64_t rcx_40 = *(arg1 + 0x18)
        
        if (rcx_40 != 0)
            *(arg1 + 0x18) = sub_140a84c80(rcx_40, 0, 0)
        
        *(arg1 + 0x20) = 0

return 0
