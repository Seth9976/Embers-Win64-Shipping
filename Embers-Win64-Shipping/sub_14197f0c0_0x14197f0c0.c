// 函数: sub_14197f0c0
// 地址: 0x14197f0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f180 == 0)
    sub_141975630()
    
    if (data_143f02b88 != 0 || (data_1439c7a0e == 0 && data_143f01c92 != 0))
        data_143f02b89 = 0
    else
        data_143f02b89 = sub_140b011d0()
    
    TEB* gsbase
    
    if (data_143cd80cc
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            _Init_thread_footer(&data_143cd80cc)
    
    if (data_143de5426 == 0)
        if (data_143cd80c8 != 0)
            sub_141974920()
            return sub_14197dfb0() __tailcall
    else if (data_143de5427 == 0 || data_143cd80c8 != 0)
        sub_141974920()
        return sub_14197dfb0() __tailcall
    
    int64_t* rbx_1 = nullptr
    int32_t arg_10
    wchar16* arg_18
    int64_t* rax_5 = sub_1419771c0(&arg_10, &arg_18)
    
    if (rax_5 != 0)
        rbx_1 = (*(*rax_5 + 0x48))(rax_5, zx.q(arg_10))
        data_143f0f128 = arg_18
    
    data_143f0f180 = rbx_1
    
    if (rbx_1 != 0)
        int64_t rdx_4 = *rbx_1
        (*(rdx_4 + 8))(rbx_1, rdx_4)
        int32_t rdi_1 = data_1439c7a38
        int32_t r14_1 = 0
        uint64_t i_3 = zx.q(divu.dp.d(0:data_1439c7a34, rdi_1))
        
        if (rdi_1 != 0)
            int32_t rbx_2 = 1
            
            do
                int64_t rsi_1 = sx.q(data_1439c7ab8)
                int32_t rcx_8 = (rsi_1 + 1).d
                bool cond:1_1 = rcx_8 s<= data_1439c7abc
                data_1439c7ab8 = rcx_8
                
                if (not(cond:1_1))
                    sub_141983490(&data_1439c7aa8)
                
                int64_t rdx_7 = rsi_1 << 2
                *(rdx_7 + &data_1439c7aa8) = rbx_2
                
                if (i_3.d u> 1)
                    int32_t rcx_9 = r14_1 + rdi_1
                    uint64_t i_2 = zx.q((i_3 - 1).d)
                    uint64_t i
                    
                    do
                        int32_t rax_10 = 1 << rcx_9.b
                        rcx_9 += rdi_1
                        *(rdx_7 + &data_1439c7aa8) |= rax_10
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                
                r14_1 += 1
                rbx_2 = rol.d(rbx_2, 1)
            while (r14_1 u< rdi_1)
        
        if (i_3.d != 0)
            int32_t rsi_2 = 0
            uint64_t i_1
            
            do
                int64_t r14_2 = sx.q(data_1439c7ad0)
                int32_t rax_11 = (r14_2 + 1).d
                bool cond:2_1 = rax_11 s<= data_1439c7ad4
                data_1439c7ad0 = rax_11
                
                if (not(cond:2_1))
                    sub_141983490(&data_1439c7ac0)
                
                int32_t rax_12 = 1
                int64_t r8_2 = r14_2 << 2
                *(r8_2 + &data_1439c7ac0) = 1 << rsi_2.b
                
                if (rdi_1 u> 1)
                    do
                        int32_t rdx_9 = 1 << (rsi_2.b + rax_12.b)
                        rax_12 += 1
                        *(r8_2 + &data_1439c7ac0) |= rdx_9
                    while (rax_12 u< rdi_1)
                
                rsi_2 += rdi_1
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        int64_t rax_13 = sx.q(data_1439c7a08)
        uint64_t var_f8 = 0
        int32_t var_f0_1 = 0
        
        if (rax_13.d u>= 4)
            sub_1405947f0(&var_f8, 0x14)
            int32_t rax_14 = var_f0_1 + 0x14
            var_f0_1 = rax_14
            
            if (rax_14 s> 0)
                sub_140594770(&var_f8)
            
            uint64_t rax_15 = var_f8
            __builtin_memcpy(rax_15, u"InvalidFeatureLe", 0x20)
            *(rax_15 + 0x20) = 0x6c00650076
        else
            sub_140b63e00((rax_13 << 3) + &data_143f02508, &var_f8)
        
        int64_t rbx_4 = -1
        
        if (arg1 != 0)
            int64_t rax_16 = sx.q(data_1439c7a08)
            
            if (rax_16.d s< 3)
                void arg_20
                sub_1419882c0(&arg_20, (*U"1111")[rax_16])
                int64_t var_78
                sub_140b63b70(&arg_20, &var_78)
                uint64_t r8_3 = &data_142d40450
                
                if (var_f0_1 != 0)
                    r8_3 = var_f8
                
                int64_t var_68
                sub_140a2e390(&var_68, 
                    A Feature Level 5 video card is required to run the editor.\nAvailableFeatureLevel = "
                ", ShaderPlatform ", r8_3)
                void var_58
                sub_140b21610(0, sub_140aae420(&var_58, &var_68), nullptr)
                int64_t* var_50
                
                if (var_50 != 0)
                    var_50[1].d -= 1
                    
                    if (var_50[1].d == 1)
                        (**var_50)(var_50)
                        int32_t rax_20 = *(var_50 + 0xc)
                        *(var_50 + 0xc) -= 1
                        
                        if (rax_20 == 1)
                            (*(*var_50 + 8))(var_50, 1)
                
                sub_140b721f0(1)
                int64_t rcx_23 = var_68
                
                if (rcx_23 != 0)
                    sub_140a74f90(rcx_23)
                
                int64_t rcx_24 = var_78
                
                if (rcx_24 != 0)
                    sub_140a74f90(rcx_24)
        
        int64_t* rcx_25 = data_143f0f180
        int16_t* rdi_3
        
        if (rcx_25 == 0)
            rdi_3 = u"Unknown"
        else
            rdi_3 = (*(*rcx_25 + 0x20))(rcx_25)
        
        int64_t var_d8 = 0
        int32_t rdx_16 = 0
        int32_t var_d0_1 = 0
        int32_t rcx_26 = 0
        int32_t var_cc_1 = 0
        
        if (rdi_3 != 0 && *rdi_3 != 0)
            do
                rbx_4 += 1
            while (rdi_3[rbx_4] != 0)
            
            if (rbx_4.d + 1 s> 0)
                sub_1405947f0(&var_d8, rbx_4.d + 1)
                rcx_26 = var_cc_1
                rdx_16 = var_d0_1
            
            int32_t rax_24 = rdx_16 + rbx_4.d + 1
            int32_t var_d0_2 = rax_24
            
            if (rax_24 s> rcx_26)
                sub_140594770(&var_d8)
            
            UnDecorator::getReferenceType(var_d8, rdi_3, (rbx_4.d + 1) * 2)
        
        int64_t var_e8 = 0
        int32_t var_e0_1 = 0
        sub_1405947f0(&var_e8, 0xc)
        int32_t rax_25 = var_e0_1 + 0xc
        var_e0_1 = rax_25
        
        if (rax_25 s> 0)
            sub_140594770(&var_e8)
        
        UnDecorator::getReferenceType(var_e8, u"RHI.RHIName", 0x18)
        sub_140a53700(&var_e8, &var_d8)
        int64_t rcx_34 = var_e8
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
        
        int64_t rcx_35 = var_d8
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
        
        int64_t var_c8 = 0
        int32_t var_c0_1 = 0
        sub_1405947f0(&var_c8, 0x10)
        int32_t rax_26 = var_c0_1 + 0x10
        var_c0_1 = rax_26
        
        if (rax_26 s> 0)
            sub_140594770(&var_c8)
        
        UnDecorator::getReferenceType(var_c8, u"RHI.AdapterName", 0x20)
        sub_140a53700(&var_c8, &data_143f024b8)
        int64_t rcx_40 = var_c8
        
        if (rcx_40 != 0)
            sub_140a74f90(rcx_40)
        
        int64_t var_b8 = 0
        int32_t var_b0_1 = 0
        sub_1405947f0(&var_b8, 0x16)
        int32_t rax_27 = var_b0_1 + 0x16
        var_b0_1 = rax_27
        
        if (rax_27 s> 0)
            sub_140594770(&var_b8)
        
        UnDecorator::getReferenceType(var_b8, u"RHI.UserDriverVersion", 0x2c)
        sub_140a53700(&var_b8, &data_143f024d8)
        int64_t rcx_45 = var_b8
        
        if (rcx_45 != 0)
            sub_140a74f90(rcx_45)
        
        int64_t var_a8 = 0
        int32_t var_a0_1 = 0
        sub_1405947f0(&var_a8, 0x1a)
        int32_t rax_28 = var_a0_1 + 0x1a
        var_a0_1 = rax_28
        
        if (rax_28 s> 0)
            sub_140594770(&var_a8)
        
        UnDecorator::getReferenceType(var_a8, u"RHI.InternalDriverVersion", 0x34)
        sub_140a53700(&var_a8, &data_143f024c8)
        int64_t rcx_50 = var_a8
        
        if (rcx_50 != 0)
            sub_140a74f90(rcx_50)
        
        int64_t var_98 = 0
        int32_t var_90_1 = 0
        sub_1405947f0(&var_98, 0xf)
        int32_t rax_29 = var_90_1 + 0xf
        var_90_1 = rax_29
        
        if (rax_29 s> 0)
            sub_140594770(&var_98)
        
        UnDecorator::getReferenceType(var_98, u"RHI.DriverDate", 0x1e)
        sub_140a53700(&var_98, &data_143f024e8)
        int64_t rcx_55 = var_98
        
        if (rcx_55 != 0)
            sub_140a74f90(rcx_55)
        
        int64_t var_88 = 0
        int32_t var_80_1 = 0
        sub_1405947f0(&var_88, 0x11)
        int32_t rax_30 = var_80_1 + 0x11
        var_80_1 = rax_30
        
        if (rax_30 s> 0)
            sub_140594770(&var_88)
        
        UnDecorator::getReferenceType(var_88, u"RHI.FeatureLevel", 0x22)
        sub_140a53700(&var_88, &var_f8)
        int64_t rcx_60 = var_88
        
        if (rcx_60 != 0)
            sub_140a74f90(rcx_60)
        
        uint64_t rcx_61 = var_f8
        
        if (rcx_61 != 0)
            sub_140a74f90(rcx_61)

return sub_14197dfb0() __tailcall
