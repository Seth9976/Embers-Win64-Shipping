// 函数: sub_14180a9c0
// 地址: 0x14180a9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3[1].d == 0)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t* rcx = *arg3
    
    if (rcx == 0)
        *arg2 = 0
        arg2[1] = 0
    else if ((*(*rcx + 0x28))(rcx) == 0)
        *arg2 = 0
        arg2[1] = 0
    else
        char var_37_1 = 1
        int16_t* var_78 = nullptr
        int64_t var_68_1 = 0
        int64_t var_58
        __builtin_memset(&var_58, 0, 0x18)
        int64_t var_30
        __builtin_memset(&var_30, 0, 0x20)
        int64_t var_98 = 0
        int32_t var_90_1 = 0
        sub_1405947f0(&var_98, 9)
        int32_t rax_3 = var_90_1 + 9
        var_90_1 = rax_3
        
        if (rax_3 s> 0)
            sub_140594770(&var_98)
        
        UnDecorator::getReferenceType(var_98, u"APIKeyET", 0x12)
        int64_t* rcx_4
        
        if (arg3[1].d == 0)
            rcx_4 = nullptr
        else
            rcx_4 = *arg3
        
        int64_t r9_1
        r9_1.b = 1
        int16_t* var_88
        (*(*rcx_4 + 0x48))(rcx_4, &var_88, &var_98, r9_1)
        int16_t* rcx_5 = var_78
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = var_98
        var_78 = var_88
        int32_t var_80
        int32_t var_70_1 = var_80
        int32_t var_7c
        int32_t var_6c_1 = var_7c
        var_80.q = 0
        var_88 = nullptr
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        var_98 = 0
        int32_t var_90_2 = 0
        sub_1405947f0(&var_98, 0xc)
        int32_t rax_8 = var_90_2 + 0xc
        var_90_2 = rax_8
        
        if (rax_8 s> 0)
            sub_140594770(&var_98)
        
        UnDecorator::getReferenceType(var_98, u"APIServerET", 0x18)
        int64_t* rcx_10
        
        if (arg3[1].d == 0)
            rcx_10 = nullptr
        else
            rcx_10 = *arg3
        
        int64_t r9_2
        r9_2.b = 1
        (*(*rcx_10 + 0x48))(rcx_10, &var_88, &var_98, r9_2)
        
        if (var_68_1 != 0)
            sub_140a74f90(var_68_1)
        
        int64_t rcx_12 = var_98
        int16_t* var_68_2 = var_88
        int32_t var_60_1 = var_80
        int32_t var_5c_1 = var_7c
        var_80.q = 0
        var_88 = nullptr
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        var_98 = 0
        int32_t var_90_3 = 0
        sub_1405947f0(&var_98, 0xd)
        int32_t rax_13 = var_90_3 + 0xd
        var_90_3 = rax_13
        
        if (rax_13 s> 0)
            sub_140594770(&var_98)
        
        UnDecorator::getReferenceType(var_98, u"AppVersionET", 0x1a)
        int64_t* rcx_16
        
        if (arg3[1].d == 0)
            rcx_16 = nullptr
        else
            rcx_16 = *arg3
        
        (*(*rcx_16 + 0x48))(rcx_16, &var_88, &var_98, 0)
        int64_t var_48
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        int64_t rcx_18 = var_98
        int16_t* var_48_1 = var_88
        int32_t var_40_1 = var_80
        int32_t var_3c_1 = var_7c
        var_80.q = 0
        var_88 = nullptr
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        var_98 = 0
        int32_t var_90_4 = 0
        sub_1405947f0(&var_98, 0x12)
        int32_t rax_18 = var_90_4 + 0x12
        var_90_4 = rax_18
        
        if (rax_18 s> 0)
            sub_140594770(&var_98)
        
        UnDecorator::getReferenceType(var_98, u"UseLegacyProtocol", 0x24)
        int64_t* rcx_22
        
        if (arg3[1].d == 0)
            rcx_22 = nullptr
        else
            rcx_22 = *arg3
        
        (*(*rcx_22 + 0x48))(rcx_22, &var_88, &var_98, 0)
        int16_t* const rcx_23 = &data_142d40450
        
        if (var_80 != 0)
            rcx_23 = var_88
        
        char rax_20 = sub_140b16cc0(rcx_23)
        int16_t* rcx_24 = var_88
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        int64_t rcx_25 = var_98
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        if (rax_20 == 0)
            var_98 = 0
            int32_t var_90_5 = 0
            sub_1405947f0(&var_98, 0xf)
            int32_t rax_21 = var_90_5 + 0xf
            var_90_5 = rax_21
            
            if (rax_21 s> 0)
                sub_140594770(&var_98)
            
            UnDecorator::getReferenceType(var_98, u"AppEnvironment", 0x1e)
            int64_t* rcx_29
            
            if (arg3[1].d == 0)
                rcx_29 = nullptr
            else
                rcx_29 = *arg3
            
            int64_t r9_3
            r9_3.b = 1
            (*(*rcx_29 + 0x48))(rcx_29, &var_88, &var_98, r9_3)
            int64_t rcx_30 = var_30
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
            
            int64_t rcx_31 = var_98
            int16_t* var_30_1 = var_88
            int64_t var_28
            var_28.d = var_80
            var_28:4.d = var_7c
            var_80.q = 0
            var_88 = nullptr
            
            if (rcx_31 != 0)
                sub_140a74f90(rcx_31)
            
            var_98 = 0
            int32_t var_90_6 = 0
            sub_1405947f0(&var_98, 0xb)
            int32_t rax_26 = var_90_6 + 0xb
            var_90_6 = rax_26
            
            if (rax_26 s> 0)
                sub_140594770(&var_98)
            
            UnDecorator::getReferenceType(var_98, u"UploadType", 0x16)
            int64_t* rcx_35
            
            if (arg3[1].d == 0)
                rcx_35 = nullptr
            else
                rcx_35 = *arg3
            
            int64_t r9_4
            r9_4.b = 1
            (*(*rcx_35 + 0x48))(rcx_35, &var_88, &var_98, r9_4)
            int64_t var_20
            
            if (var_20 != 0)
                sub_140a74f90(var_20)
            
            int64_t rcx_37 = var_98
            int16_t* var_20_1 = var_88
            int64_t var_18
            var_18.d = var_80
            var_18:4.d = var_7c
            var_80.q = 0
            var_88 = nullptr
            
            if (rcx_37 != 0)
                sub_140a74f90(rcx_37)
        
        int64_t* rax_32 = (*(*arg1 + 0x48))(arg1, &var_88, &var_78)
        *arg2 = *rax_32
        void* rcx_40 = rax_32[1]
        arg2[1] = rcx_40
        
        if (rcx_40 != 0)
            *(rcx_40 + 8) += 1
        
        int64_t* rbx_1 = var_80.q
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        sub_14180c270(&var_78)

return arg2
