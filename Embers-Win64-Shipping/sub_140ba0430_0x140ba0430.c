// 函数: sub_140ba0430
// 地址: 0x140ba0430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(arg2)
void* r14_2 = (r13 << 7) + *(arg1 + 0x18)
uint64_t rax

if (sub_140bbd8c0().b != 0)
    int512_t zmm0_1
    int512_t zmm1_1
    double zmm2_1[0x2]
    rax, zmm0_1, zmm1_1, zmm2_1 = sub_140bac880()
    
    if (rax.b == 0 && *(r14_2 + 0x40) == 0)
        rax = sub_140cbbb40(arg1, r13.d, zmm2_1, zmm0_1, zmm1_1)
        uint64_t rbx_1 = rax
        
        if (rax != 0)
            void* rax_1
            int64_t rax_2
            void* rdx_1
            
            if (arg3 != 0)
                rax_1 = sub_140cddbd0()
                rdx_1 = *(arg3 + 0x10)
                rax_2 = sx.q(*(rax_1 + 0x38))
            
            int16_t* var_68
            int16_t* var_58
            int32_t var_50
            uint64_t arg_8
            int16_t* rcx_11
            
            if (arg3 != 0 && rax_2.d s<= *(rdx_1 + 0x38)
                    && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
                var_68 = *(rbx_1 + 0x18)
                sub_140b63b70(&var_68, &var_58)
                int16_t* const rsi_1 = &data_142d40450
                int16_t* const r8_1 = &data_142d40450
                
                if (var_50 != 0)
                    r8_1 = var_58
                
                sub_140a2e390(&var_68, u"PLACEHOLDER-INST_of_%s", r8_1)
                int32_t var_60
                
                if (var_60 != 0)
                    rsi_1 = var_68
                
                sub_140b58260(&arg_8, rsi_1, 1)
                int16_t* rcx_5 = var_68
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                int64_t* rax_5 = sub_140cddbd0()
                uint64_t r8_3 = *sub_140d25240(&var_68, arg3, rax_5, arg_8)
                arg_8 = r8_3
                void* rax_7 = sub_140596910(arg3, rax_5, r8_3, 0x41, 0, 0, 0)
                sub_140d3e8d0(rax_7, arg1, r13.d, 0)
                *(rax_7 + 0x30) = (r13 + 1).d
                *(r14_2 + 0x40) = rax_7
                sub_140ce9fa0(arg3 + 0x28, rax_7)
                rcx_11 = var_58
                goto label_140ba05a3
            
            if (((*(rbx_1 + 0xcc) u>> 7).b & 1) == 0)
                void* rax_10 = sub_140cddb10()
                void* rdx_8 = *(rbx_1 + 0x10)
                int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                uint64_t rsi_2
                
                if (rax_11.d s> *(rdx_8 + 0x38)
                        || *(*(rdx_8 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
                    rsi_2 = nullptr
                else
                    rsi_2 = rbx_1
                
                rax = sub_140d3cb50(rbx_1)
                
                if (rsi_2 != 0)
                label_140ba0650:
                    int32_t rcx_16 = *(arg1 + 0x290)
                    
                    if (not(test_bit(rcx_16, 0x14)))
                        if (*(arg1 + 0x34c) != 0xffffffff || *(arg1 + 0x348) != 0)
                            rax.b = 1
                        else
                            rax.b = 0
                        
                        if (rax.b == 0 || (rcx_16.b & 8) != 0)
                            goto label_140ba083a
                        
                        goto label_140ba0685
                    
                    if ((rcx_16.b & 8) == 0)
                    label_140ba0685:
                        void* r15_1 = *(arg1 + 0xa0)
                        int16_t* rax_14 = sub_140cddbd0()
                        arg_8 = *(rbx_1 + 0x18)
                        var_68 = rax_14
                        int16_t* var_48
                        sub_140b63b70(&arg_8, &var_48)
                        int16_t* rsi_3 = &data_142d40450
                        int16_t* r8_6 = &data_142d40450
                        int32_t var_40
                        
                        if (var_40 != 0)
                            r8_6 = var_48
                        
                        sub_140a2e390(&var_58, u"PLACEHOLDER-INST_of_%s", r8_6)
                        
                        if (var_50 != 0)
                            rsi_3 = var_58
                        
                        uint64_t arg_20
                        sub_140b58260(&arg_20, rsi_3, 1)
                        int16_t* rcx_21 = var_58
                        
                        if (rcx_21 != 0)
                            sub_140a74f90(rcx_21)
                        
                        int64_t* rax_15 = sub_140d25240(&arg_8, r15_1, var_68, arg_20)
                        int16_t* rdx_12 = var_68
                        uint64_t r8_8 = *rax_15
                        arg_20 = r8_8
                        void* rax_16 = sub_140596910(r15_1, rdx_12, r8_8, 0x41, 0, 0, 0)
                        *(rax_16 + 0x30) = (r13 + 1).d
                        sub_140d3e8d0(rax_16, arg1, r13.d, 0)
                        char arg_10 = 0
                        var_50.q = &arg_10
                        arg_8 = rbx_1
                        var_58 = j_sub_140b99600
                        uint32_t rbx_4 = (rbx_1 u>> 4).d
                        int32_t r8_11 = (0x9e3779b9 - rbx_4) ^ rbx_4 << 8
                        int32_t rdx_16 = neg.d(rbx_4 + r8_11) ^ r8_11 u>> 0xd
                        int32_t rbx_7 = (rbx_4 - r8_11 - rdx_16) ^ rdx_16 u>> 0xc
                        int32_t r8_14 = (r8_11 - rbx_7 - rdx_16) ^ rbx_7 << 0x10
                        int32_t rdx_19 = (rdx_16 - r8_14 - rbx_7) ^ r8_14 u>> 5
                        int32_t rbx_10 = (rbx_7 - r8_14 - rdx_19) ^ rdx_19 u>> 3
                        int32_t r8_17 = (r8_14 - rbx_10 - rdx_19) ^ rbx_10 << 0xa
                        void* rax_28 = sub_140b930d0(
                            sub_140a756e0(&var_58, &data_1439a98a0) + 0x60, 
                            (rdx_19 - r8_17 - rbx_10) ^ r8_17 u>> 0xf, &arg_8)
                        int64_t rdi_1 = sx.q(*(rax_28 + 8))
                        int32_t rcx_32 = (rdi_1 + 1).d
                        *(rax_28 + 8) = rcx_32
                        
                        if (rcx_32 s> *(rax_28 + 0xc))
                            sub_1405a4d70(rax_28)
                        
                        *(*rax_28 + (rdi_1 << 3)) = rax_16
                        *(r14_2 + 0x40) = rax_16
                        rcx_11 = var_48
                    label_140ba05a3:
                        
                        if (rcx_11 != 0)
                            sub_140a74f90(rcx_11)
                        
                        int64_t rax_8
                        rax_8.b = 1
                        return rax_8
                    
                label_140ba083a:
                    sub_140b96420(&var_58, arg1, r13.d)
                    sub_140ba92c0(arg1, rbx_1)
                    sub_140b97a30(&var_58)
                else
                    if (rax != 0)
                        if (*(rax + 0x34c) != 0xffffffff || *(rax + 0x348) != rsi_2.b)
                            rax.b = 1
                        else
                            rax.b = 0
                        
                        if (rax.b != 0)
                            goto label_140ba0650
                    
                    rax = *(rbx_1 + 0x118)
                    
                    if (rax != 0)
                        int32_t rcx_14 = *(rax + 8)
                        
                        if (((rcx_14 u>> 0x15).b & 1) == 0 && ((rcx_14 u>> 0x13).b & 1) != 0)
                            goto label_140ba0650

rax.b = 0
return rax
