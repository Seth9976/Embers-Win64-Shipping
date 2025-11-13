// 函数: sub_140cbc770
// 地址: 0x140cbc770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = not.d(arg3)
*arg2 = 0
arg2[1] = 0

if (i != 0)
    int64_t rsi
    int64_t var_28_1 = rsi
    
    do
        int32_t rdx_1 = not.d(i)
        int64_t* rcx_1
        
        if (i s>= 0)
            rcx_1 = (sx.q(i - 1) << 7) + *(arg1 + 0x18)
        else
            rcx_1 = sx.q(rdx_1) * 0x38 + *(arg1 + 8)
        
        rsi.b = 0
        int64_t var_58 = *rcx_1
        int32_t i_1 = rcx_1[1].d
        int32_t rax_3 = arg2[1].d
        int32_t rcx_4 = rax_3 - 1
        
        if (rax_3 == 0)
            rcx_4 = 0
        
        if (rcx_4 s> 0)
            int64_t arg_10
            
            if (i s< 0)
                arg_10 = *(sx.q(rdx_1) * 0x38 + *(arg1 + 8) + 0x14)
            else if (i s<= 0)
                arg_10 = 0
            else
                sub_140cbb7c0(arg1, &arg_10, i - 1)
            
            int32_t rcx_8
            rcx_8.b = sub_140b5b8a0(arg_10.d, 0xcf) == 0
            
            if ((arg_10:4.d != 0 | rcx_8.b) != 0)
                int64_t i_2 = sx.q(i_1)
                int32_t temp1_1 = i_2.d
                char rax_10
                int32_t rcx_11
                
                if (temp1_1 != 0)
                    int64_t arg_20
                    
                    if (temp1_1 s< 0)
                        arg_20 = *(*(arg1 + 8) - i_2 * 0x38 - 0x24)
                    else if (temp1_1 s<= 0)
                        arg_20 = 0
                    else
                        sub_140cbb7c0(arg1, &arg_20, i_2.d - 1)
                    
                    int32_t rbx_1 = arg_20:4.d
                    rax_10 = sub_140b5b8a0(arg_20.d, 0xcf)
                    rcx_11.b = rbx_1 == 0
                
                if (temp1_1 == 0 || (rcx_11.b & rax_10) != 0)
                    rsi.b = 1
        
        int32_t rax_11 = arg2[1].d
        int32_t rcx_12 = rax_11 - 1
        
        if (rax_11 == 0)
            rcx_12 = 0
        
        if (rcx_12 s> 0)
            uint64_t r12_1
            uint64_t rbx_3
            
            if (rsi.b == 0)
                uint64_t var_c8 = 0
                int64_t var_c0_1 = 0
                sub_1405947f0(&var_c8, 2)
                int32_t r15_2 = var_c0_1:4.d
                int32_t rbx_4 = var_c0_1.d + 2
                var_c0_1.d = rbx_4
                
                if (rbx_4 s> r15_2)
                    sub_140594770(&var_c8)
                    r15_2 = var_c0_1:4.d
                    rbx_4 = var_c0_1.d
                
                r12_1 = var_c8
                UnDecorator::getReferenceType(r12_1, &data_142d404c4, 4)
                int32_t rsi_2 = arg2[1].d
                uint64_t var_a8
                int32_t r14_5
                int32_t var_9c
                
                if (rbx_4 s> 1)
                    int32_t r14_6 = rsi_2 - 1
                    
                    if (rsi_2 == 0)
                        r14_6 = 0
                    
                    int32_t rax_13
                    
                    if (rbx_4 == 0)
                        rax_13 = 1
                    
                    if (rbx_4 != 0 || r14_6 == 0)
                        rax_13 = 0
                    
                    uint64_t var_78 = r12_1
                    int32_t rdx_14 = rax_13 + rbx_4 + r14_6
                    r12_1 = 0
                    int64_t var_c0_2 = 0
                    
                    if (rdx_14 s> r15_2)
                        sub_1405947f0(&var_78, rdx_14)
                    
                    sub_140a20ba0(&var_78, *arg2, r14_6)
                    r14_5 = r15_2
                    rbx_3 = var_78
                    rsi_2 = rbx_4
                    var_78 = 0
                    int32_t var_70_1
                    var_70_1.q = 0
                    var_9c = r14_5
                else
                    int64_t r14_4 = *arg2
                    rbx_3 = 0
                    var_a8 = 0
                    
                    if (rsi_2 != 0)
                        sub_1405a4c70(&var_a8, rsi_2, 0)
                        rbx_3 = var_a8
                        memcpy(rbx_3, r14_4, rsi_2 * 2)
                        r14_5 = var_9c
                    else
                        r14_5 = 0
                        var_9c = 0
                
                if (arg2 == &var_a8)
                label_140cbcb50:
                    
                    if (rbx_3 != 0)
                        sub_140a74f90(rbx_3)
                else
                    int64_t rcx_28 = *arg2
                    
                    if (rcx_28 != 0)
                        sub_140a74f90(rcx_28)
                    
                    *arg2 = rbx_3
                    *(arg2 + 0xc) = r14_5
                    arg2[1].d = rsi_2
                    var_a8 = 0
                    int32_t var_a0
                    var_a0.q = 0
            else
                uint64_t var_d8 = 0
                int64_t var_d0_1 = 0
                sub_1405947f0(&var_d8, 2)
                int32_t r15_1 = var_d0_1:4.d
                int32_t rbx_2 = var_d0_1.d + 2
                var_d0_1.d = rbx_2
                
                if (rbx_2 s> r15_1)
                    sub_140594770(&var_d8)
                    r15_1 = var_d0_1:4.d
                    rbx_2 = var_d0_1.d
                
                r12_1 = var_d8
                UnDecorator::getReferenceType(r12_1, &data_142d84ee0, 4)
                int32_t rsi_1 = arg2[1].d
                uint64_t var_b8
                int32_t r14_2
                int32_t var_ac
                
                if (rbx_2 s> 1)
                    int32_t r14_3 = rsi_1 - 1
                    
                    if (rsi_1 == 0)
                        r14_3 = 0
                    
                    int32_t rax_12
                    
                    if (rbx_2 == 0)
                        rax_12 = 1
                    
                    if (rbx_2 != 0 || r14_3 == 0)
                        rax_12 = 0
                    
                    uint64_t var_88 = r12_1
                    int32_t rdx_8 = rbx_2 + rax_12 + r14_3
                    r12_1 = 0
                    int64_t var_d0_2 = 0
                    
                    if (rdx_8 s> r15_1)
                        sub_1405947f0(&var_88, rdx_8)
                    
                    sub_140a20ba0(&var_88, *arg2, r14_3)
                    r14_2 = r15_1
                    rbx_3 = var_88
                    rsi_1 = rbx_2
                    var_88 = 0
                    int32_t var_80_1
                    var_80_1.q = 0
                    var_ac = r14_2
                else
                    int64_t r14_1 = *arg2
                    rbx_3 = 0
                    var_b8 = 0
                    
                    if (rsi_1 != 0)
                        sub_1405a4c70(&var_b8, rsi_1, 0)
                        rbx_3 = var_b8
                        memcpy(rbx_3, r14_1, rsi_1 * 2)
                        r14_2 = var_ac
                    else
                        r14_2 = 0
                        var_ac = 0
                
                if (arg2 == &var_b8)
                    goto label_140cbcb50
                
                int64_t rcx_20 = *arg2
                
                if (rcx_20 != 0)
                    sub_140a74f90(rcx_20)
                
                *arg2 = rbx_3
                *(arg2 + 0xc) = r14_2
                arg2[1].d = rsi_1
                var_b8 = 0
                int32_t var_b0
                var_b0.q = 0
            
            if (r12_1 != 0)
                sub_140a74f90(r12_1)
        
        int64_t var_48
        int64_t* rax_14 = sub_140b63b70(&var_58, &var_48)
        rsi = sx.q(arg2[1].d)
        int32_t rax_15 = rax_14[1].d
        uint64_t var_98
        int32_t var_90
        uint64_t rbx_5
        int32_t r14_8
        int32_t var_8c
        
        if (rax_15 s> 1)
            int32_t rbx_6 = (rsi - 1).d
            
            if (rsi.d == 0)
                rbx_6 = 0
            
            int32_t r8_10
            
            if (rax_15 == 0)
                r8_10 = rax_15 + 1
            
            if (rax_15 != 0 || rbx_6 == 0)
                r8_10 = 0
            
            uint64_t rax_16 = *rax_14
            *rax_14 = 0
            int32_t rcx_34 = rax_14[1].d
            uint64_t var_68 = rax_16
            int32_t rax_17 = *(rax_14 + 0xc)
            rax_14[1] = 0
            int32_t rdx_21 = rbx_6 + r8_10 + rcx_34
            
            if (rdx_21 s> rax_17)
                sub_1405947f0(&var_68, rdx_21)
            
            sub_140a20ba0(&var_68, *arg2, rbx_6)
            r14_8 = rax_17
            rbx_5 = var_68
            rsi = zx.q(rcx_34)
            var_68 = 0
            var_8c = r14_8
            int32_t var_60_1
            var_60_1.q = 0
        else
            int64_t r14_7 = *arg2
            rbx_5 = 0
            var_98 = 0
            var_90 = rsi.d
            
            if (rsi.d != 0)
                sub_1405a4c70(&var_98, rsi.d, 0)
                rbx_5 = var_98
                memcpy(rbx_5, r14_7, rsi.d * 2)
                r14_8 = var_8c
                rsi = zx.q(var_90)
            else
                r14_8 = 0
                var_8c = 0
        
        if (arg2 != &var_98)
            int64_t rcx_37 = *arg2
            
            if (rcx_37 != 0)
                sub_140a74f90(rcx_37)
            
            *arg2 = rbx_5
            arg2[1].d = rsi.d
            *(arg2 + 0xc) = r14_8
            var_98 = 0
            var_90.q = 0
        else if (rbx_5 != 0)
            sub_140a74f90(rbx_5)
        
        int64_t rcx_39 = var_48
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)
        
        i = i_1
    while (i != 0)

return arg2
