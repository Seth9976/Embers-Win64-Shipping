// 函数: sub_140da44d0
// 地址: 0x140da44d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 != 0)
    int16_t* var_68
    sub_140b63b70(arg3, &var_68)
    void* rdi_1 = nullptr
    int16_t* var_78
    int32_t var_60
    int64_t var_58
    void* var_48
    
    if (sub_140b16090(&var_68) == 0)
        int64_t* rax_2 = sub_140b63b70(arg3, &var_58)
        int64_t* rax_3 = sub_140b25050(&var_48)
        int32_t rcx_4 = rax_2[1].d
        int32_t r15_1 = 2
        int32_t rbx_1 = rcx_4 - 1
        
        if (rcx_4 == 0)
            rbx_1 = 0
        
        int32_t rcx_6
        
        if (rax_3[1].d == 0)
            rcx_6 = 2
        
        if (rax_3[1].d != 0 || rbx_1 == 0xffffffff)
            rcx_6 = 1
        
        var_78 = *rax_3
        *rax_3 = 0
        char var_70
        var_70.d = rax_3[1].d
        int32_t rax_6 = *(rax_3 + 0xc)
        rax_3[1] = 0
        int32_t rdx_5 = var_70.d + rcx_6 + rbx_1
        
        if (rdx_5 s> rax_6)
            sub_1405947f0(&var_78, rdx_5)
        
        sub_140a2cf70(&var_78, *rax_2, rbx_1)
        int16_t* rcx_9 = var_68
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        void* rcx_10 = var_48
        var_68 = var_78
        var_60 = var_70.d
        int32_t var_5c_1 = rax_6
        var_70.q = 0
        var_78 = nullptr
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = var_58
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        if (sub_140b16090(&var_68) == 0)
            int64_t* rax_11 = sub_140b63b70(arg3, &var_58)
            int64_t* rax_12 = sub_140b139e0(&var_48)
            int32_t rcx_15 = rax_11[1].d
            int32_t rbx_2 = rcx_15 - 1
            
            if (rcx_15 == 0)
                rbx_2 = 0
            
            if (rax_12[1].d != 0 || rbx_2 == 0xffffffff)
                r15_1 = 1
            
            var_78 = *rax_12
            *rax_12 = 0
            var_70.d = rax_12[1].d
            int32_t rax_15 = *(rax_12 + 0xc)
            rax_12[1] = 0
            int32_t rdx_11 = var_70.d + rbx_2 + r15_1
            
            if (rdx_11 s> rax_15)
                sub_1405947f0(&var_78, rdx_11)
            
            sub_140a2cf70(&var_78, *rax_11, rbx_2)
            int16_t* rcx_19 = var_68
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            void* rcx_20 = var_48
            var_68 = var_78
            var_60 = var_70.d
            int32_t var_5c_2 = rax_15
            var_70.q = 0
            var_78 = nullptr
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            int64_t rcx_21 = var_58
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            if (sub_140b16090(&var_68) == 0)
                int64_t* rax_20 = sub_140b63b70(arg3, &var_48)
                
                if (&var_68 != rax_20)
                    int16_t* rcx_24 = var_68
                    
                    if (rcx_24 != 0)
                        sub_140a74f90(rcx_24)
                    
                    var_68 = *rax_20
                    *rax_20 = 0
                    var_60 = rax_20[1].d
                    int32_t var_5c_3 = *(rax_20 + 0xc)
                    rax_20[1] = 0
                
                void* rcx_26 = var_48
                
                if (rcx_26 != 0)
                    sub_140a74f90(rcx_26)
    
    int16_t* const rdx_14 = &data_142d40450
    
    if (var_60 != 0)
        rdx_14 = var_68
    
    int16_t* arg_18
    sub_140b58260(&arg_18, rdx_14, 1)
    int16_t* rbx_4 = arg_18
    var_78 = rbx_4
    char var_70_1 = arg4
    void* const rcx_31
    
    if (*(arg1 + 0x28) == *(arg1 + 0x54))
    label_140da47c6:
        rcx_31 = nullptr
    else
        int32_t rax_24 = sub_140daab20(&var_78)
        void* rcx_29 = *(arg1 + 0x60)
        void* r8_2 = arg1 + 0x58
        
        if (rcx_29 != 0)
            r8_2 = rcx_29
        
        int32_t rax_26 = *(r8_2 + (((sx.q(*(arg1 + 0x68)) - 1) & sx.q(rax_24)) << 2))
        
        if (rax_26 == 0xffffffff)
        label_140da47c6_1:
            rcx_31 = nullptr
        else
            int64_t r8_3 = *(arg1 + 0x20)
            
            while (true)
                int64_t rdx_18 = sx.q(rax_26) * 5
                rcx_31 = r8_3 + (rdx_18 << 3)
                
                if (*(r8_3 + (rdx_18 << 3)) == rbx_4 && *(rcx_31 + 8) == arg4)
                    break
                
                rax_26 = *(rcx_31 + 0x20)
                
                if (rax_26 == 0xffffffff)
                    goto label_140da47c6_2
            
            if (rax_26 == 0xffffffff)
            label_140da47c6_2:
                rcx_31 = nullptr
    
    void* rdx_19 = rcx_31 + 0x10
    
    if (rcx_31 == 0)
        rdx_19 = nullptr
    
    if (rdx_19 == 0)
        void*** rax_29 = j_sub_140a82f30(0x58)
        void*** rbx_5 = rax_29
        
        if (rax_29 == 0)
            rbx_5 = nullptr
        else
            rax_29[1].d = 1
            *(rax_29 + 0xc) = 1
            *rbx_5 = &data_142ec7ab8
            int16_t* r13_3 = var_68
            arg_18 = nullptr
            var_58 = 0
            int32_t var_50_1 = var_60
            
            if (var_60 != 0)
                sub_1405a4c70(&var_58, var_60, 0)
                memcpy(var_58, r13_3, var_60 * 2)
            else
                int32_t var_4c_1 = 0
            
            sub_140d94140(&rbx_5[2], &arg_18, &var_58, arg4, 0)
        
        var_48 = &rbx_5[2]
        void* rax_30 = var_48
        
        if (rax_30 != 0)
            rdi_1 = rax_30 + 0x10
        
        if (rbx_5 != 0)
            rbx_5[1].d += 1
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t temp2_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*rbx_5)[1](rbx_5, 1)
        
        var_48 = rdi_1
        
        if (rbx_5 != 0)
            rbx_5[1].d += 1
        
        sub_140d8c070(arg1 + 0x20, &var_78, &var_48)
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp3_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*rbx_5)[1](rbx_5, 1)
        
        *arg2 = rdi_1
        arg2[1] = rbx_5
        
        if (rbx_5 != 0)
            int32_t rax_35 = rbx_5[1].d
            rbx_5[1].d = rax_35
            
            if (rax_35 == 0)
                (**rbx_5)(rbx_5)
                int32_t temp4_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*rbx_5)[1](rbx_5, 1)
    else
        *arg2 = *rdx_19
        void* rax_28 = *(rdx_19 + 8)
        arg2[1] = rax_28
        
        if (rax_28 != 0)
            *(rax_28 + 8) += 1
    
    int16_t* rcx_42 = var_68
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)
else
    *arg2 = 0
    arg2[1] = 0

return arg2
