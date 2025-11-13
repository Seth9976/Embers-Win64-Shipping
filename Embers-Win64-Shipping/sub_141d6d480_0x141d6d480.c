// 函数: sub_141d6d480
// 地址: 0x141d6d480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x460) != 0)
    void* rbx_1 = *(arg1 + 0x7d4)
    int64_t var_90
    sub_1408ec700(&var_90, rbx_1, *(arg1 + 0x7c0), *(arg1 + 0x7c8))
    arg2[0x13] = *(arg1 + 0x8c4)
    arg2[0x14].d = *(arg1 + 0x8cc)
    int64_t var_d0_1 = *(arg1 + 0x7c0)
    void* var_d8 = rbx_1
    *(arg2 + 0x10) = var_d8.o
    int64_t var_98 = *(*(arg1 + 0x460) + 0x18)
    uint64_t result_4
    sub_140b63b70(&var_98, &result_4)
    int32_t var_c0
    
    if (arg2 == &result_4)
        uint64_t result_7 = result_4
        
        if (result_7 != 0)
            sub_140a74f90(result_7)
    else
        int64_t rcx_3 = *arg2
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        *arg2 = result_4
        arg2[1].d = var_c0
        int32_t var_bc
        *(arg2 + 0xc) = var_bc
    
    sub_140597df0(&arg2[6], arg2)
    int64_t rax_6 = *(arg1 + 0x7c0)
    var_d8 = rbx_1
    *(arg2 + 0x40) = var_d8.o
    void* const r15_1 = nullptr
    void* const rdi_1
    
    if (sub_140d3e110(arg1 + 0x8d8) == 0)
        rdi_1 = nullptr
    else
        rdi_1 = sub_140d3c6e0(arg1 + 0x8d8)
    
    if (rdi_1 == 0)
        arg2[0xe].d = 0xffffffff
        *(arg2 + 0x74) = 0
        arg2[0x10] = 0
        int64_t arg_20 = 0
        arg2[0x12].d = 0
        
        if (*(arg2 + 0x94) s<= 0xffffffff)
            sub_1405947f0(&arg2[0x11], 0)
        
        int16_t* rax_11 = arg2[0x11]
        
        if (rax_11 != 0)
            *rax_11 = 0
        
        arg2[0xf].d = 0
    else
        void var_50
        sub_140b97b00(&arg2[0x10], sub_140d21d60(&var_50, rdi_1))
        int64_t var_48
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        sub_140d3a3a0(&arg2[0xe], rdi_1)
        int32_t rax_10 = 0
        
        if (0 == data_1439aaa30)
            data_1439aaa30 = 0
        else
            rax_10 = data_1439aaa30
        
        arg2[0xf].d = rax_10
    
    arg2[0x16].d = data_143a2899c
    void* const rbx_2 = *(arg1 + 0x460)
    void* rax_13
    int64_t rax_14
    void* rdx_6
    
    if (rbx_2 != 0)
        rax_13 = sub_141d6f080()
        rdx_6 = *(rbx_2 + 0x10)
        rax_14 = sx.q(*(rax_13 + 0x38))
    
    if (rbx_2 == 0 || rax_14.d s> *(rdx_6 + 0x38)
            || *(*(rdx_6 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
        rbx_2 = nullptr
    
    arg2[0x15] = rbx_2
    int64_t* rcx_13 = *(arg1 + 0x460)
    result = sub_141a4b440((*(*rcx_13 + 0x280))(rcx_13), sub_141b3b620())
    void* const* result_3 = result
    
    if (result != 0)
        void* rax_19 = sub_141b3b620()
        void* rcx_15 = result_3[2]
        result = rax_19 + 0x30
        int64_t rdx_8 = sx.q(result[1].d)
        
        if (rdx_8.d s<= *(rcx_15 + 0x38) && *(*(rcx_15 + 0x30) + (rdx_8 << 3)) == result)
            int64_t* rax_21
            uint64_t result_2
            rax_21, result_2 = (*(*result_3 + 0x2e0))(result_3, rdx_8)
            int64_t* rsi_1 = *rax_21
            result = sx.q(rax_21[1].d)
            void* r13_1 = &rsi_1[result]
            
            if (rsi_1 != r13_1)
                int64_t rbx_4 = var_90
                
                do
                    void* rdi_2 = *rsi_1
                    
                    if (rdi_2 != 0)
                        int128_t zmm0_3 = *(rdi_2 + 0x90)
                        
                        if ((*(rdi_2 + 0xb0) & 1) != 0)
                            result = zmm0_3.q
                            
                            if (result.b == 2)
                                result_2.b = 1
                            else
                                uint32_t rdx_10 = (result u>> 0x20).d
                                
                                if (rdx_10 s< rbx_4.d)
                                    result_2 = zx.q(zmm0_3:4.d)
                                label_141d6d77d:
                                    
                                    if (result_2.d == rdx_10)
                                        result_2.b = 1
                                    else
                                        result_2.b = 0
                                else if (rdx_10 s> rbx_4.d)
                                    if (result.b == 1)
                                        result_2 = zx.q(rbx_4.d)
                                        goto label_141d6d77d
                                    
                                    result_2.b = 0
                                else
                                    if (result.b == 1)
                                        result_2 = zx.q(zmm0_3:4.d)
                                        goto label_141d6d77d
                                    
                                    result_2.b = 0
                            
                            if (result_2.b == 0)
                                result_2.b = 0
                            else
                                result_2 = zmm0_3:8.q
                                
                                if (result_2.b == 2)
                                    result_2.b = 1
                                else
                                    uint32_t rdx_12 = (result_2 u>> 0x20).d
                                    
                                    if (rdx_12 s> rbx_4.d)
                                        result_2 = zx.q(zmm0_3:0xc.d)
                                    label_141d6d7b7:
                                        
                                        if (result_2.d == rdx_12)
                                            result_2.b = 1
                                        else
                                            result_2.b = 0
                                    else if (rdx_12 s< rbx_4.d)
                                        if (result_2.b == 1)
                                            result_2 = zx.q(rbx_4.d)
                                            goto label_141d6d7b7
                                        
                                        result_2.b = 0
                                    else
                                        if (result_2.b == 1)
                                            result_2 = zx.q(zmm0_3:0xc.d)
                                            goto label_141d6d7b7
                                        
                                        result_2.b = 0
                                
                                if (result_2.b == 0)
                                    result_2.b = 0
                                else
                                    result_2.b = 1
                            
                            if (result_2.b != 0)
                                if (r15_1 == 0)
                                label_141d6d84f:
                                    void* rax_22
                                    rax_22, result_2 = sub_141b3b330()
                                    void* rdx_16 = *(rdi_2 + 0x10)
                                    result = sx.q(*(rax_22 + 0x38))
                                    
                                    if (result.d s> *(rdx_16 + 0x38))
                                        r15_1 = nullptr
                                    else
                                        result_2 = result
                                        result = *(rdx_16 + 0x30)
                                        
                                        if (result[result_2] != rax_22 + 0x30)
                                            r15_1 = nullptr
                                        else
                                            r15_1 = rdi_2
                                else
                                    result_2 = zx.q(*(rdi_2 + 0xa8))
                                    int32_t temp0_1 = *(r15_1 + 0xa8)
                                    
                                    if (result_2.d s< temp0_1)
                                        goto label_141d6d84f
                                    
                                    if (result_2.d == temp0_1)
                                        void* const* result_1 = result
                                        result_4.o = *(r15_1 + 0x90)
                                        result_2 = result_4
                                        uint64_t result_5 = result_2
                                        char* rdx_13
                                        
                                        if (result.b == 2)
                                        label_141d6d839:
                                            rdx_13 = &result_5
                                            
                                            if (result_2.b == result.b)
                                                goto label_141d6d841
                                        else
                                            if (result_2.b != 2)
                                                uint32_t rdx_15 = (result u>> 0x20).d
                                                uint32_t r8_4 = (result_2 u>> 0x20).d
                                                
                                                if (rdx_15 s> r8_4)
                                                    rdx_13 = &result_1
                                                    goto label_141d6d841
                                                
                                                if (rdx_15 s< r8_4 || result.b != 0)
                                                    goto label_141d6d839
                                                
                                                rdx_13 = &result_1
                                                goto label_141d6d841
                                            
                                            rdx_13 = &result_1
                                        label_141d6d841:
                                            
                                            if (*rdx_13 == 2)
                                                goto label_141d6d84f
                                            
                                            result u>>= 0x20
                                            
                                            if (*(rdx_13 + 4) == result.d)
                                                goto label_141d6d84f
                    
                    rsi_1 = &rsi_1[1]
                while (rsi_1 != r13_1)
                
                if (r15_1 != 0)
                    void var_70
                    sub_141a5a760(r15_1, &var_70)
                    int64_t* rax_23 = sub_141a52990(r15_1)
                    int64_t rsi_2
                    int64_t r14_1
                    
                    if (rax_23 == 0)
                        rsi_2 = *(arg1 + 0x7c8)
                        r14_1 = *(arg1 + 0x7c0)
                    else
                        int64_t rdx_18 = *rax_23
                        void* rax_24 = (*(rdx_18 + 0x280))(rax_23, rdx_18)
                        int64_t rdx_19 = *rax_23
                        rsi_2 = *(rax_24 + 0x108)
                        r14_1 = *((*(rdx_19 + 0x280))(rax_23, rdx_19) + 0x110)
                    
                    uint64_t result_6
                    void var_78
                    sub_1408ec700(&result_6, *sub_141a34d30(&var_78, rbx_4, &var_70), rsi_2, r14_1)
                    int32_t rdi_4 = *(r15_1 + 0x160)
                    uint64_t rbx_5 = 0
                    int64_t rsi_3 = *(r15_1 + 0x158)
                    uint64_t var_a8 = 0
                    int32_t rsi_4
                    
                    if (rdi_4 != 0)
                        sub_1405a4c70(&var_a8, rdi_4, 0)
                        rbx_5 = var_a8
                        memcpy(rbx_5, rsi_3, rdi_4 * 2)
                        int32_t var_9c
                        rsi_4 = var_9c
                    else
                        rsi_4 = 0
                    
                    if (&arg2[6] != &var_a8)
                        int64_t rcx_26 = arg2[6]
                        
                        if (rcx_26 != 0)
                            sub_140a74f90(rcx_26)
                        
                        arg2[6] = rbx_5
                        arg2[7].d = rdi_4
                        *(arg2 + 0x3c) = rsi_4
                    else if (rbx_5 != 0)
                        sub_140a74f90(rbx_5)
                    
                    result_4 = result_6
                    var_c0.q = r14_1
                    *(arg2 + 0x40) = result_4.o
                    void arg_8
                    arg2[0x16].d = *sub_141a529c0(r15_1, &arg_8)
                    void* rax_29 = sub_141a52990(r15_1)
                    void* const rbx_6 = rax_29
                    void* rax_30
                    void* rcx_30
                    int64_t rdx_26
                    
                    if (rax_29 != 0)
                        rax_30 = sub_141d6f080()
                        rcx_30 = *(rbx_6 + 0x10)
                        rdx_26 = sx.q(*(rax_30 + 0x38))
                    
                    if (rax_29 == 0 || rdx_26.d s> *(rcx_30 + 0x38)
                            || *(*(rcx_30 + 0x30) + (rdx_26 << 3)) != rax_30 + 0x30)
                        rbx_6 = nullptr
                    
                    int32_t var_e8_1 = 0
                    int32_t var_f0_1 = 0
                    int32_t var_f8_1 = 0
                    arg2[0x15] = rbx_6
                    sub_140a2e390(&var_d8, u"%s%02d:%02d:%02d:%02d", &data_142d40450)
                    result = &var_d8
                    
                    if (&arg2[0xc] == &var_d8)
                        void* rcx_34 = var_d8
                        
                        if (rcx_34 != 0)
                            result = sub_140a74f90(rcx_34)
                    else
                        int64_t rcx_33 = arg2[0xc]
                        
                        if (rcx_33 != 0)
                            sub_140a74f90(rcx_33)
                        
                        arg2[0xc] = var_d8
                        arg2[0xd].d = rax_6.d
                        result = zx.q(rax_6:4.d)
                        *(arg2 + 0x6c) = result.d
                    
                    int64_t var_60
                    
                    if (var_60 != 0)
                        return sub_140a74f90(var_60)

return result
