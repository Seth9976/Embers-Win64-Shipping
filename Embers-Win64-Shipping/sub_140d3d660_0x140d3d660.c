// 函数: sub_140d3d660
// 地址: 0x140d3d660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t rbx = *(arg1 + 0x18)
int32_t rcx
rcx.b = sub_140b5b8a0(rbx.d, 0) == 0
int32_t* result
result.b = (rbx u>> 0x20).d != 0
result.b |= rcx.b

if (result.b != 0)
    sub_140d3c660()
    void* lpCriticalSection = nullptr
    bool z_1
    
    if (0 == data_143e1adfc)
        data_143e1adfc = 0
        z_1 = true
    else
        data_143e1adfc
        z_1 = false
    
    if (z_1)
        lpCriticalSection = &data_143e1dad0
        EnterCriticalSection(&data_143e1dad0)
    else if (data_143de5480 != 0 && GetCurrentThreadId() != data_143de5470)
        lpCriticalSection = &data_143e1dad0
        EnterCriticalSection(&data_143e1dad0)
    
    int32_t rax_4 = sub_140b5ead0(rbx.d)
    int32_t r12_1 = rbx:4.d
    void* const rsi_1 = arg_8
    int32_t rax_5 = rax_4 + r12_1
    int32_t arg_18 = rax_5
    int32_t arg_20 = rax_5
    void* rax_6 = sub_140d39240(&data_143e1daf8, rax_5, &arg_20)
    void* const var_138 = rsi_1
    int64_t* rax_7 = *(rax_6 + 8)
    int64_t rcx_3 = *rax_6
    
    if (rax_7 != 0)
        if (rcx_3 != 0)
            goto label_140d3d777
        
        void var_120
        sub_140d38ca0(rax_7, &var_120, &var_138, nullptr)
    else if (rcx_3 == 0)
        *rax_6 = rsi_1
    else
    label_140d3d777:
        
        if (rax_7 == 0)
            *(rax_6 + 8) = rsi_1
        else
            int64_t* rax_8 = j_sub_140a82f30(0x50)
            int64_t* r14_1 = rax_8
            
            if (rax_8 == 0)
                r14_1 = nullptr
            else
                void* rdx_3 = &r14_1[2]
                *r14_1 = 0
                r14_1[1] = 0
                *(rdx_3 + 0x10) = 0
                *(rdx_3 + 0x18) = 0
                *(rdx_3 + 0x1c) = 0x80
                void* rcx_5 = *(rdx_3 + 0x10)
                
                if (rcx_5 != 0)
                    rdx_3 = rcx_5
                
                *rdx_3 = 0
                *(rdx_3 + 8) = 0
                r14_1[6].d = 0xffffffff
                *(r14_1 + 0x34) = 0
                r14_1[8] = 0
                r14_1[9].d = 0
            
            int64_t rsi_2 = *rax_6
            int32_t var_c0
            sub_140d3a650(r14_1, &var_c0)
            uint32_t rdx_6 = (rsi_2 u>> 4).d
            int32_t r8_4 = (0x9e3779b9 - rdx_6) ^ rdx_6 << 8
            int64_t* var_b8
            *var_b8 = rsi_2
            var_b8[1].d = 0xffffffff
            int32_t rcx_9 = neg.d(rdx_6 + r8_4) ^ r8_4 u>> 0xd
            int32_t rdx_9 = (rdx_6 - r8_4 - rcx_9) ^ rcx_9 u>> 0xc
            int32_t r8_7 = (r8_4 - rdx_9 - rcx_9) ^ rdx_9 << 0x10
            int32_t rcx_12 = (rcx_9 - r8_7 - rdx_9) ^ r8_7 u>> 5
            int32_t rdx_12 = (rdx_9 - r8_7 - rcx_12) ^ rcx_12 u>> 3
            int32_t r8_10 = (r8_7 - rdx_12 - rcx_12) ^ rdx_12 << 0xa
            void var_11c
            sub_14095bb80(r14_1, &var_11c, r8_10 u>> 0xf ^ (rcx_12 - (r8_10 + rdx_12)), var_b8, 
                var_c0, nullptr)
            int64_t rsi_3 = *(rax_6 + 8)
            int32_t var_b0
            sub_140d3a650(r14_1, &var_b0)
            uint32_t rdx_16 = (rsi_3 u>> 4).d
            int32_t r8_14 = (0x9e3779b9 - rdx_16) ^ rdx_16 << 8
            int64_t* var_a8
            *var_a8 = rsi_3
            var_a8[1].d = 0xffffffff
            int32_t rcx_18 = neg.d(rdx_16 + r8_14) ^ r8_14 u>> 0xd
            int32_t rdx_19 = (rdx_16 - r8_14 - rcx_18) ^ rcx_18 u>> 0xc
            int32_t r8_17 = (r8_14 - rdx_19 - rcx_18) ^ rdx_19 << 0x10
            int32_t rcx_21 = (rcx_18 - r8_17 - rdx_19) ^ r8_17 u>> 5
            int32_t rdx_22 = (rdx_19 - r8_17 - rcx_21) ^ rcx_21 u>> 3
            int32_t r8_20 = (r8_17 - rdx_22 - rcx_21) ^ rdx_22 << 0xa
            void var_118
            sub_14095bb80(r14_1, &var_118, r8_20 u>> 0xf ^ (rcx_21 - (r8_20 + rdx_22)), var_a8, 
                var_b0, nullptr)
            void var_114
            sub_140d38ca0(r14_1, &var_114, &var_138, nullptr)
            *(rax_6 + 8) = r14_1
            *rax_6 = nullptr
    
    int64_t rsi_4 = *(arg_8 + 0x20)
    
    if (rsi_4 != 0)
        arg_18 = (rsi_4 s>> 6).d + sub_140b5ead0(rbx.d) + r12_1
        int32_t* var_a0 = &arg_18
        void** var_98_1 = &arg_8
        int32_t var_110
        sub_140d38d90(&data_143e1db48, &var_110, &var_a0, nullptr)
        void* rbx_1 = arg_8
        int64_t r10_1 = *(rbx_1 + 0x20)
        int64_t var_e0 = r10_1
        uint32_t rcx_27 = (r10_1 u>> 4).d
        int32_t rdx_27 = (0x9e3779b9 - rcx_27) ^ rcx_27 << 8
        int32_t r9_5 = neg.d(rcx_27 + rdx_27) ^ rdx_27 u>> 0xd
        int32_t rcx_30 = (rcx_27 - rdx_27 - r9_5) ^ r9_5 u>> 0xc
        int32_t rdx_30 = (rdx_27 - rcx_30 - r9_5) ^ rcx_30 << 0x10
        int32_t r9_8 = (r9_5 - rdx_30 - rcx_30) ^ rdx_30 u>> 5
        int32_t rcx_33 = (rcx_30 - rdx_30 - r9_8) ^ r9_8 u>> 3
        int32_t rdx_33 = (rdx_30 - rcx_33 - r9_8) ^ rcx_33 << 0xa
        int32_t r9_11 = (r9_8 - rdx_33 - rcx_33) ^ rdx_33 u>> 0xf
        int64_t* r14_2
        
        if (data_143e1dba0 == data_143e1dbcc)
        label_140d3da86:
            r14_2 = sub_140d39130(&data_143e1db98, r9_11, &var_e0)
        else
            void* rcx_34 = data_143e1dbd8
            void* r8_25 = &data_143e1dbd0
            
            if (rcx_34 != 0)
                r8_25 = rcx_34
            
            int32_t rax_60 = *(r8_25 + (((sx.q(data_143e1dbe0) - 1) & sx.q(r9_11)) << 2))
            
            if (rax_60 == 0xffffffff)
            label_140d3da86_1:
                r14_2 = sub_140d39130(&data_143e1db98, r9_11, &var_e0)
            else
                int64_t* rdx_40
                
                while (true)
                    rdx_40 = (sx.q(rax_60) << 5) + data_143e1db98
                    
                    if (*rdx_40 == r10_1)
                        break
                    
                    rax_60 = rdx_40[3].d
                    
                    if (rax_60 == 0xffffffff)
                        goto label_140d3da86_2
                
                if (rax_60 == 0xffffffff || rdx_40 == 0)
                label_140d3da86_2:
                    r14_2 = sub_140d39130(&data_143e1db98, r9_11, &var_e0)
                else
                    r14_2 = &rdx_40[1]
        
        int64_t* rax_62 = r14_2[1]
        int64_t rcx_35 = *r14_2
        void* var_130 = rbx_1
        
        if (rax_62 != 0)
            if (rcx_35 != 0)
                goto label_140d3dadb
            
            void var_10c
            sub_140d38ca0(rax_62, &var_10c, &var_130, nullptr)
        else if (rcx_35 == 0)
            *r14_2 = rbx_1
        else
        label_140d3dadb:
            
            if (rax_62 == 0)
                r14_2[1] = rbx_1
            else
                int64_t* rax_63 = j_sub_140a82f30(0x50)
                int64_t* rsi_7 = rax_63
                
                if (rax_63 == 0)
                    rsi_7 = nullptr
                else
                    void* rdx_43 = &rsi_7[2]
                    *rsi_7 = 0
                    rsi_7[1] = 0
                    *(rdx_43 + 0x10) = 0
                    *(rdx_43 + 0x18) = 0
                    *(rdx_43 + 0x1c) = 0x80
                    void* rcx_37 = *(rdx_43 + 0x10)
                    
                    if (rcx_37 != 0)
                        rdx_43 = rcx_37
                    
                    *rdx_43 = 0
                    *(rdx_43 + 8) = 0
                    rsi_7[6].d = 0xffffffff
                    *(rsi_7 + 0x34) = 0
                    rsi_7[8] = 0
                    rsi_7[9].d = 0
                
                int64_t rbx_2 = *r14_2
                int32_t var_90
                sub_140d3a650(rsi_7, &var_90)
                uint32_t rdx_46 = (rbx_2 u>> 4).d
                int32_t r8_30 = (0x9e3779b9 - rdx_46) ^ rdx_46 << 8
                int64_t* var_88
                *var_88 = rbx_2
                var_88[1].d = 0xffffffff
                int32_t rcx_41 = neg.d(rdx_46 + r8_30) ^ r8_30 u>> 0xd
                int32_t rdx_49 = (rdx_46 - r8_30 - rcx_41) ^ rcx_41 u>> 0xc
                int32_t r8_33 = (r8_30 - rdx_49 - rcx_41) ^ rdx_49 << 0x10
                int32_t rcx_44 = (rcx_41 - r8_33 - rdx_49) ^ r8_33 u>> 5
                int32_t rdx_52 = (rdx_49 - r8_33 - rcx_44) ^ rcx_44 u>> 3
                int32_t r8_36 = (r8_33 - rdx_52 - rcx_44) ^ rdx_52 << 0xa
                void var_108
                sub_14095bb80(rsi_7, &var_108, r8_36 u>> 0xf ^ (rcx_44 - (r8_36 + rdx_52)), var_88, 
                    var_90, nullptr)
                int64_t rbx_3 = r14_2[1]
                int32_t var_80
                sub_140d3a650(rsi_7, &var_80)
                uint32_t rdx_56 = (rbx_3 u>> 4).d
                int32_t r8_41 = rdx_56 << 8 ^ (0x9e3779b9 - rdx_56)
                int64_t* var_78
                *var_78 = rbx_3
                var_78[1].d = 0xffffffff
                int32_t rcx_50 = neg.d(rdx_56 + r8_41) ^ r8_41 u>> 0xd
                int32_t rdx_59 = (rdx_56 - r8_41 - rcx_50) ^ rcx_50 u>> 0xc
                int32_t r8_44 = (r8_41 - rdx_59 - rcx_50) ^ rdx_59 << 0x10
                int32_t rcx_53 = (rcx_50 - r8_44 - rdx_59) ^ r8_44 u>> 5
                int32_t rdx_62 = (rdx_59 - r8_44 - rcx_53) ^ rcx_53 u>> 3
                int32_t r8_47 = (r8_44 - rdx_62 - rcx_53) ^ rdx_62 << 0xa
                void var_104
                sub_14095bb80(rsi_7, &var_104, r8_47 u>> 0xf ^ (rcx_53 - (r8_47 + rdx_62)), var_78, 
                    var_80, nullptr)
                void var_100
                sub_140d38ca0(rsi_7, &var_100, &var_130, nullptr)
                *r14_2 = 0
                r14_2[1] = rsi_7
    
    void* r14_3 = arg_8
    int64_t r10_2 = *(r14_3 + 0x10)
    int64_t var_d8 = r10_2
    uint32_t rcx_58 = (r10_2 u>> 4).d
    int32_t rdx_67 = rcx_58 << 8 ^ (0x9e3779b9 - rcx_58)
    int32_t r9_16 = neg.d(rcx_58 + rdx_67) ^ rdx_67 u>> 0xd
    int32_t rcx_61 = (rcx_58 - rdx_67 - r9_16) ^ r9_16 u>> 0xc
    int32_t rdx_70 = (rdx_67 - rcx_61 - r9_16) ^ rcx_61 << 0x10
    int32_t r9_19 = (r9_16 - rdx_70 - rcx_61) ^ rdx_70 u>> 5
    int32_t rcx_64 = (rcx_61 - rdx_70 - r9_19) ^ r9_19 u>> 3
    int32_t rdx_73 = (rdx_70 - rcx_64 - r9_19) ^ rcx_64 << 0xa
    int32_t r9_22 = (r9_19 - rdx_73 - rcx_64) ^ rdx_73 u>> 0xf
    void* r15_2
    
    if (data_143e1dbf0 == data_143e1dc1c)
    label_140d3dda6:
        r15_2 = sub_140d39130(&data_143e1dbe8, r9_22, &var_d8)
    else
        void* rcx_65 = data_143e1dc28
        void* r8_51 = &data_143e1dc20
        
        if (rcx_65 != 0)
            r8_51 = rcx_65
        
        int32_t rax_110 = *(r8_51 + (((sx.q(data_143e1dc30) - 1) & sx.q(r9_22)) << 2))
        
        if (rax_110 == 0xffffffff)
        label_140d3dda6_1:
            r15_2 = sub_140d39130(&data_143e1dbe8, r9_22, &var_d8)
        else
            int64_t* rdx_80
            
            while (true)
                rdx_80 = (sx.q(rax_110) << 5) + data_143e1dbe8
                
                if (*rdx_80 == r10_2)
                    break
                
                rax_110 = rdx_80[3].d
                
                if (rax_110 == 0xffffffff)
                    goto label_140d3dda6_2
            
            if (rax_110 == 0xffffffff || rdx_80 == 0)
            label_140d3dda6_2:
                r15_2 = sub_140d39130(&data_143e1dbe8, r9_22, &var_d8)
            else
                r15_2 = &rdx_80[1]
    
    int64_t* rax_112 = *(r15_2 + 8)
    int64_t rcx_66 = *r15_2
    void* var_128 = r14_3
    
    if (rax_112 != 0)
        if (rcx_66 != 0)
            goto label_140d3ddf2
        
        void var_fc
        sub_140d38ca0(rax_112, &var_fc, &var_128, nullptr)
    else if (rcx_66 == 0)
        *r15_2 = r14_3
    else
    label_140d3ddf2:
        
        if (rax_112 == 0)
            *(r15_2 + 8) = r14_3
        else
            int64_t* rax_113 = j_sub_140a82f30(0x50)
            int64_t* rsi_8 = rax_113
            
            if (rax_113 == 0)
                rsi_8 = nullptr
            else
                *rax_113 = 0
                void* rdx_83 = &rax_113[2]
                rax_113[1] = 0
                *(rdx_83 + 0x10) = 0
                *(rdx_83 + 0x18) = 0
                *(rdx_83 + 0x1c) = 0x80
                void* rcx_68 = *(rdx_83 + 0x10)
                
                if (rcx_68 != 0)
                    rdx_83 = rcx_68
                
                *rdx_83 = 0
                *(rdx_83 + 8) = 0
                rax_113[6].d = 0xffffffff
                *(rax_113 + 0x34) = 0
                rax_113[8] = 0
                rax_113[9].d = 0
            
            int64_t rbx_4 = *r15_2
            int32_t var_70
            sub_140d3a650(rsi_8, &var_70)
            uint32_t rdx_86 = (rbx_4 u>> 4).d
            int32_t r8_57 = rdx_86 << 8 ^ (0x9e3779b9 - rdx_86)
            int64_t* var_68
            *var_68 = rbx_4
            var_68[1].d = 0xffffffff
            int32_t rcx_72 = neg.d(rdx_86 + r8_57) ^ r8_57 u>> 0xd
            int32_t rdx_89 = (rdx_86 - r8_57 - rcx_72) ^ rcx_72 u>> 0xc
            int32_t r8_60 = (r8_57 - rdx_89 - rcx_72) ^ rdx_89 << 0x10
            int32_t rcx_75 = (rcx_72 - r8_60 - rdx_89) ^ r8_60 u>> 5
            int32_t rdx_92 = (rdx_89 - r8_60 - rcx_75) ^ rcx_75 u>> 3
            int32_t r8_63 = (r8_60 - rdx_92 - rcx_75) ^ rdx_92 << 0xa
            void var_f8
            sub_14095bb80(rsi_8, &var_f8, r8_63 u>> 0xf ^ (rcx_75 - (r8_63 + rdx_92)), var_68, 
                var_70, nullptr)
            int64_t rbx_5 = *(r15_2 + 8)
            int32_t var_60
            sub_140d3a650(rsi_8, &var_60)
            uint32_t rdx_96 = (rbx_5 u>> 4).d
            int32_t r8_68 = rdx_96 << 8 ^ (0x9e3779b9 - rdx_96)
            int64_t* var_58
            *var_58 = rbx_5
            var_58[1].d = 0xffffffff
            int32_t rcx_81 = neg.d(rdx_96 + r8_68) ^ r8_68 u>> 0xd
            int32_t rdx_99 = (rdx_96 - r8_68 - rcx_81) ^ rcx_81 u>> 0xc
            int32_t r8_71 = (r8_68 - rdx_99 - rcx_81) ^ rdx_99 << 0x10
            int32_t rcx_84 = (rcx_81 - r8_71 - rdx_99) ^ r8_71 u>> 5
            int32_t rdx_102 = (rdx_99 - r8_71 - rcx_84) ^ rcx_84 u>> 3
            int32_t r8_74 = (r8_71 - rdx_102 - rcx_84) ^ rdx_102 << 0xa
            void var_f4
            sub_14095bb80(rsi_8, &var_f4, r8_74 u>> 0xf ^ (rcx_84 - (r8_74 + rdx_102)), var_58, 
                var_60, nullptr)
            void var_f0
            sub_140d38ca0(rsi_8, &var_f0, &var_128, nullptr)
            *r15_2 = 0
            *(r15_2 + 8) = rsi_8
    
    void* rax_143 = sub_140bdf2e0()
    void* rdx_105 = *(r14_3 + 0x10)
    result = sx.q(*(rax_143 + 0x38))
    
    if (result.d s<= *(rdx_105 + 0x38))
        int32_t* result_1 = result
        result = *(rdx_105 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_143 + 0x30)
            int64_t rcx_88 = *(r14_3 + 0x40)
            void* var_c8 = r14_3
            int64_t var_d0 = rcx_88
            void var_ec
            char arg_10
            
            if (rcx_88 != 0)
                result = sub_140ca9be0(
                    sub_140d392d0(&data_143e1dc38, sub_140d3d5e0(rcx_88), &var_d0), &var_ec, 
                    &var_c8, &arg_10)
    
    if (lpCriticalSection != 0)
        return LeaveCriticalSection(lpCriticalSection)

return result
