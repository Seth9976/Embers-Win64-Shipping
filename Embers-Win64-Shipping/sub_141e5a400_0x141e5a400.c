// 函数: sub_141e5a400
// 地址: 0x141e5a400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = data_143f5b298
int64_t* r15 = arg1

if (result != 0 && *(result + 0x2a8) != 0 && arg1[1].d != 0)
    void* rax = sub_141e5df80()
    int64_t* rax_1 = sub_141e5ea90(rax)
    int16_t* var_128
    __builtin_memset(&var_128, 0, 0x20)
    sub_1405947f0(&var_128, 0xb)
    int64_t var_120
    int32_t rsi_1 = var_120:4.d
    int32_t rbx_1 = var_120.d + 0xb
    var_120.d = rbx_1
    
    if (rbx_1 s> rsi_1)
        sub_140594770(&var_128)
        rsi_1 = var_120:4.d
        rbx_1 = var_120.d
    
    int16_t* r14_1 = var_128
    UnDecorator::getReferenceType(r14_1, u"digraph { ", 0x16)
    int64_t var_110
    int64_t rdi_1 = sx.q(var_110.d)
    int32_t rax_2 = (rdi_1 + 1).d
    var_110.d = rax_2
    int64_t* var_118
    
    if (rax_2 s> 0)
        sub_1405a4f90(&var_118)
    
    int16_t* const r13_1 = &data_142d40450
    int64_t* rax_5 = &var_118[rdi_1 * 2]
    *rax_5 = r14_1
    rax_5[1].d = rbx_1
    *(rax_5 + 0xc) = rsi_1
    int64_t* r12_1 = *r15
    void* rbx_4 = &r12_1[sx.q(r15[1].d) * 2]
    void* var_c8_1 = rbx_4
    int64_t var_b8
    int64_t var_a8
    int64_t arg_10
    
    if (r12_1 != rbx_4)
        int64_t arg_18 = 0
        arg_10 = 0
        int64_t rsi_2 = 0
        
        do
            bool cond:0_1 = r12_1[1].d == 0
            void* var_e8 = nullptr
            int32_t var_e0_1 = 0
            int16_t* rdx_3
            
            if (cond:0_1)
                rdx_3 = &data_142d40450
            else
                rdx_3 = *r12_1
            
            void var_78
            int64_t var_98 = *sub_140b58260(&var_78, rdx_3, 1)
            int64_t var_90_1 = 0
            int64_t var_88_1 = rsi_2
            int64_t var_80_1 = 0
            (*(*rax_1 + 0x88))(rax_1, &var_98, &var_e8, 3)
            void* rcx_8 = var_e8
            void* i = (sx.q(var_e0_1) << 5) + rcx_8
            
            if (rcx_8 != i)
                int64_t* r15_1 = rcx_8 + 0x10
                
                do
                    int64_t rax_10 = r15_1[-1]
                    var_128 = nullptr
                    int32_t var_120_1 = 0
                    int64_t rcx_12
                    
                    if (rax_10 != 0)
                        int64_t var_f8
                        
                        if (rax_10 == 0)
                            var_f8 = 0
                            int64_t var_f0_2 = 0
                        else
                            var_f8 = rax_10
                            int64_t var_f0_1 = *r15_1
                        
                        int64_t var_70
                        int64_t* rax_12 = sub_140cebfd0(&var_f8, &var_70)
                        
                        if (&var_128 == rax_12)
                            rcx_12 = var_70
                        else
                            int16_t* rcx_10 = var_128
                            
                            if (rcx_10 != 0)
                                sub_140a74f90(rcx_10)
                            
                            var_128 = *rax_12
                            *rax_12 = 0
                            var_120_1 = rax_12[1].d
                            var_120_1 = *(rax_12 + 0xc)
                            rax_12[1] = 0
                            rcx_12 = var_70
                        
                        goto label_141e5a732
                    
                    int64_t var_60
                    int64_t* rax_15 = sub_140b63b70(&r15_1[-2], &var_60)
                    
                    if (&var_128 != rax_15)
                        int16_t* rcx_14 = var_128
                        
                        if (rcx_14 != 0)
                            sub_140a74f90(rcx_14)
                        
                        var_128 = *rax_15
                        *rax_15 = 0
                        var_120_1 = rax_15[1].d
                        var_120_1 = *(rax_15 + 0xc)
                        rax_15[1] = 0
                    
                    int64_t rcx_15 = var_60
                    
                    if (rcx_15 != 0)
                        sub_140a74f90(rcx_15)
                    
                    int32_t rcx_16
                    rcx_16.b = sub_140b5b8a0(*r15_1, 0) == 0
                    
                    if ((*(r15_1 + 4) != 0 | rcx_16.b) != 0)
                        sub_140a20ba0(&var_128, &data_142d404c4, 1)
                        int64_t* rax_20 = sub_140b63b70(r15_1, &var_b8)
                        int32_t rcx_19 = rax_20[1].d
                        int32_t r8_2 = rcx_19 - 1
                        
                        if (rcx_19 == 0)
                            r8_2 = 0
                        
                        sub_140a20ba0(&var_128, *rax_20, r8_2)
                        rcx_12 = var_b8
                    label_141e5a732:
                        
                        if (rcx_12 != 0)
                            sub_140a74f90(rcx_12)
                    
                    bool rdx_9 = sub_140b5b8a0(r15_1[1].d, 0) == 0
                    
                    if ((*(r15_1 + 0xc) != 0 | rdx_9) != 0)
                        sub_140a20ba0(&var_128, &data_142d6ad1c, 2)
                        int64_t* rax_22 = sub_140b63b70(&r15_1[1], &var_a8)
                        int32_t rcx_24 = rax_22[1].d
                        int32_t r8_3 = rcx_24 - 1
                        
                        if (rcx_24 == 0)
                            r8_3 = 0
                        
                        sub_140a20ba0(&var_128, *rax_22, r8_3)
                        int64_t rcx_26 = var_a8
                        
                        if (rcx_26 != 0)
                            sub_140a74f90(rcx_26)
                    
                    if (r12_1[1].d != 0)
                        *r12_1
                    
                    int16_t* const r8_4 = &data_142d40450
                    
                    if (var_120_1 != 0)
                        r8_4 = var_128
                    
                    int64_t var_108
                    sub_140a2e390(&var_108, u"\t"%s" -> "%s";", r8_4)
                    int64_t r14_4 = sx.q(var_110.d)
                    int32_t rax_23 = (r14_4 + 1).d
                    var_110.d = rax_23
                    
                    if (rax_23 s> var_110:4.d)
                        sub_1405a4f90(&var_118)
                    
                    int64_t* rcx_31 = &var_118[r14_4 * 2]
                    *rcx_31 = 0
                    *rcx_31 = var_108
                    var_108 = 0
                    int32_t var_100
                    rcx_31[1].d = var_100
                    int32_t var_fc
                    *(rcx_31 + 0xc) = var_fc
                    int64_t rcx_32 = var_108
                    var_100.q = 0
                    
                    if (rcx_32 != 0)
                        sub_140a74f90(rcx_32)
                    
                    int16_t* rcx_33 = var_128
                    
                    if (rcx_33 != 0)
                        sub_140a74f90(rcx_33)
                    
                    r15_1 = &r15_1[4]
                while (&r15_1[-2] != i)
                
                rcx_8 = var_e8
                rsi_2 = arg_10
                rbx_4 = var_c8_1
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            r12_1 = &r12_1[2]
        while (r12_1 != rbx_4)
        
        r15 = arg1
    
    var_128 = nullptr
    int64_t var_120_2 = 0
    sub_1405947f0(&var_128, 2)
    int32_t rsi_3 = var_120_2:4.d
    int32_t rbx_5 = var_120_2.d + 2
    var_120_2.d = rbx_5
    
    if (rbx_5 s> rsi_3)
        sub_140594770(&var_128)
        rsi_3 = var_120_2:4.d
        rbx_5 = var_120_2.d
    
    int16_t* r14_5 = var_128
    UnDecorator::getReferenceType(r14_5, &(*U"{}[\nt")[1], 4)
    int64_t rdi_2 = sx.q(var_110.d)
    int32_t rax_28 = (rdi_2 + 1).d
    var_110.d = rax_28
    
    if (rax_28 s> var_110:4.d)
        sub_1405a4f90(&var_118)
    
    int16_t** rax_31 = &var_118[rdi_2 * 2]
    *rax_31 = r14_5
    rax_31[1].d = rbx_5
    *(rax_31 + 0xc) = rsi_3
    int64_t* rax_33 = sub_140b29020(sub_140b21590(&arg_10), &var_b8)
    
    if (rax_33[1].d != 0)
        *rax_33
    
    int16_t** rax_34 = *r15
    
    if (rax_34[1].d != 0)
        r13_1 = *rax_34
    
    sub_140a2e390(&var_a8, u"ReferencersForPackage%s%s.gv", r13_1)
    result = (*(*rax + 0x448))(rax, &var_a8, &var_118)
    int64_t rcx_42 = var_b8
    
    if (rcx_42 != 0)
        result = sub_140a74f90(rcx_42)
    
    int32_t i_2 = var_110.d
    int64_t* rbx_6 = var_118
    
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx_43 = *rbx_6
            
            if (rcx_43 != 0)
                result = sub_140a74f90(rcx_43)
            
            rbx_6 = &rbx_6[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        rbx_6 = var_118
    
    if (rbx_6 != 0)
        return sub_140a74f90(rbx_6)

return result
