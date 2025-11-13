// 函数: sub_141e9ee40
// 地址: 0x141e9ee40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_18 = arg3
void* r13 = arg1
void* r14 = nullptr

if (*(arg1 + 0x278) != 0)
    void* rax_1 = sub_14252d950()
    int64_t rcx
    
    if (rax_1 != 0)
        rcx = sx.q(*(rax_1 + 0x38))
    
    if (rax_1 == 0 || rcx.d s> *(r13 + 0x38) || *(*(r13 + 0x30) + (rcx << 3)) != rax_1 + 0x30)
        int32_t arg_c = 0
        uint64_t rbx = arg_18.d.q
        void* rax_40
        int64_t rax_41
        void* rdx_20
        
        do
            uint64_t rdi_1 = *(r13 + 0x278)
            void* rax_7
            
            if (rdi_1 != 0)
                if (((*(rdi_1 + 8) u>> 0xa).b & 1) != 0)
                    sub_14231a0a0(rdi_1)
                
                rax_7 = sub_142310c00(rdi_1, arg_18)
            
            if (rdi_1 != 0 && rax_7 != 0)
                void* rdx_2 = *(rax_7 + 0x30)
                
                if (rdx_2 != 0)
                    void* rax_8 = *(rdx_2 + 0x10)
                    int64_t rcx_4 = sx.q(*(arg2 + 0x38))
                    
                    if (rcx_4.d s<= *(rax_8 + 0x38)
                            && *(*(rax_8 + 0x30) + (rcx_4 << 3)) == arg2 + 0x30)
                        r14 = rdx_2
                
                goto label_141e9f449
            
            uint64_t rax_10 = sub_141ea2ff0(r13, 0)
            
            if (rax_10 == 0)
            label_141e9f449:
                
                if (r14 != 0)
                    break
            else
                if (data_143de5452 != 0 && ((*(rax_10 + 8) u>> 0xa).b & 1) != 0)
                    int64_t var_58
                    int64_t* rax_11 = sub_140b63b70(&arg_18, &var_58)
                    int16_t* const rsi_1
                    
                    if (rax_11[1].d == 0)
                        rsi_1 = &data_142d40450
                    else
                        rsi_1 = *rax_11
                    
                    int16_t* var_a8
                    int32_t var_a0
                    
                    if (arg2 == 0 || *(arg2 + 0x10) == 0)
                        var_a8 = nullptr
                        var_a0 = 0
                        sub_1405947f0(&var_a8, 5)
                        int32_t rax_12 = var_a0 + 5
                        var_a0 = rax_12
                        
                        if (rax_12 s> 0)
                            sub_140594770(&var_a8)
                        
                        UnDecorator::getReferenceType(var_a8, u"None", 0xa)
                    else
                        sub_140d21830(arg2, &var_a8, 0, 0)
                    
                    int16_t* const rdi_2 = &data_142d40450
                    
                    if (var_a0 != 0)
                        rdi_2 = var_a8
                    
                    int16_t* var_b8
                    int32_t var_b0
                    
                    if (*(rax_10 + 0x10) == 0)
                        var_b8 = nullptr
                        var_b0 = 0
                        sub_1405947f0(&var_b8, 5)
                        int32_t rax_13 = var_b0 + 5
                        var_b0 = rax_13
                        
                        if (rax_13 s> 0)
                            sub_140594770(&var_b8)
                        
                        UnDecorator::getReferenceType(var_b8, u"None", 0xa)
                    else
                        sub_140d21830(rax_10, &var_b8, 0, 0)
                    
                    int16_t* const r9_1 = &data_142d40450
                    int16_t* const var_e0_1 = rsi_1
                    
                    if (var_b0 != 0)
                        r9_1 = var_b8
                    
                    int16_t* const var_e8_1 = rdi_2
                    sub_140af98a0("Unknown", 0x341, 
                        %s had RF_NeedLoad when searching for an archetype of %s named %s", r9_1)
                    int16_t* rcx_17 = var_b8
                    
                    if (rcx_17 != 0)
                        sub_140a74f90(rcx_17)
                    
                    int16_t* rcx_18 = var_a8
                    
                    if (rcx_18 != 0)
                        sub_140a74f90(rcx_18)
                    
                    int64_t rcx_19 = var_58
                    
                    if (rcx_19 != 0)
                        sub_140a74f90(rcx_19)
                    
                    sub_140afbb40()
                
                int128_t* var_d8
                sub_14208b100(rax_10, &var_d8, arg_18)
                int32_t var_d0
                int32_t var_cc
                int32_t var_c8
                int32_t var_c4
                int32_t var_c0
                int32_t var_bc
                int128_t* rax_14
                
                if (var_d8 == 0 || (var_c8 | var_c4 | var_c0 | var_bc) == 0)
                    rax_14.b = 0
                else
                    int32_t rcx_21
                    rcx_21.b = sub_140b5b8a0(var_d0, 0).b == 0
                    rax_14.b = var_cc != 0
                    rax_14.b |= rcx_21.b
                    
                    if (rax_14.b == 0 || (var_c8 | var_c4 | var_c0 | var_bc) == 0)
                        rax_14.b = 0
                    else
                        rax_14.b = 1
                    
                    if (rax_14.b == 0)
                        rax_14.b = 1
                    else
                        int32_t rcx_22
                        rcx_22.b = sub_140b5b8a0(var_d0, 0).b == 0
                        rax_14.b = var_cc != 0
                        rax_14.b |= rcx_22.b
                        
                        if (rax_14.b == 0)
                            rax_14.b = 0
                        else
                            rax_14.b = 1
                
                if (rax_14.b == 0 && arg_18 != rbx)
                    int64_t var_78
                    int128_t* rax_21 = sub_14208b100(rax_10, &var_78, rbx)
                    int128_t zmm1_1 = *rax_21
                    var_d8.o = zmm1_1
                    int128_t zmm0_1 = rax_21[1]
                    rax_14 = zmm1_1.q
                    var_d8 = rax_14
                    var_c8.o = zmm0_1
                    
                    if (rax_14 == 0)
                        rax_14.b = 0
                    else
                        int64_t rdx_10 = var_c0.q
                        int64_t r8_3 = var_c8.q
                        
                        if (((rdx_10 u>> 0x20).d | (r8_3 u>> 0x20).d | r8_3.d | rdx_10.d) == 0)
                            rax_14.b = 0
                        else
                            int32_t rcx_29
                            rcx_29.b = sub_140b5b8a0(var_d0, 0).b == 0
                            rax_14.b = var_cc != 0
                            rax_14.b |= rcx_29.b
                            
                            if (rax_14.b == 0 || (var_c8 | var_c4 | var_c0 | var_bc) == 0)
                                rax_14.b = 0
                            else
                                rax_14.b = 1
                            
                            if (rax_14.b == 0)
                                rax_14.b = 1
                            else
                                int32_t rcx_30
                                rcx_30.b = sub_140b5b8a0(var_d0, 0).b == 0
                                rax_14.b = var_cc != 0
                                rax_14.b |= rcx_30.b
                                
                                if (rax_14.b == 0)
                                    rax_14.b = 0
                                else
                                    rax_14.b = 1
                    
                    if (rax_14.b != 0)
                        int32_t rcx_31
                        rcx_31.b = sub_140b5b8a0(var_d0, 0).b == 0
                        rax_14.b = var_cc != 0
                        rax_14.b |= rcx_31.b
                        
                        if (rax_14.b == 0 || (var_c8 | var_c4 | var_c0 | var_bc) == 0)
                            rax_14.b = 0
                        else
                            rax_14.b = 1
                        
                        if (rax_14.b != 0)
                            __builtin_memset(&var_78, 0, 0x20)
                            var_d8.o = var_78.o
                            int64_t var_68
                            var_c8.o = var_68.o
                
                if (var_d8 == 0)
                    rax_14.b = 0
                else
                    int64_t rdx_11 = var_c0.q
                    int64_t r8_4 = var_c8.q
                    
                    if (((rdx_11 u>> 0x20).d | (r8_4 u>> 0x20).d | r8_4.d | rdx_11.d) == 0)
                        rax_14.b = 0
                    else
                        int32_t rcx_37
                        rcx_37.b = sub_140b5b8a0(var_d0, 0).b == 0
                        rax_14.b = var_cc != 0
                        rax_14.b |= rcx_37.b
                        
                        if (rax_14.b == 0 || (var_c8 | var_c4 | var_c0 | var_bc) == 0)
                            rax_14.b = 0
                        else
                            rax_14.b = 1
                        
                        if (rax_14.b == 0)
                            rax_14.b = 1
                        else
                            int32_t rcx_38
                            rcx_38.b = sub_140b5b8a0(var_d0, 0).b == 0
                            rax_14.b = var_cc != 0
                            rax_14.b |= rcx_38.b
                            
                            if (rax_14.b == 0)
                                rax_14.b = 0
                            else
                                rax_14.b = 1
                
                if (rax_14.b == 0)
                    goto label_141e9f449
                
                void* rax_33 = sub_142094c50(rax_10, &var_d8)
                r14 = rax_33
                
                if (data_143de5452 == 0)
                    goto label_141e9f449
                
                if (rax_33 != 0)
                    if (((*(rax_33 + 8) u>> 0xa).b & 1) != 0)
                        int64_t var_48
                        int64_t* rax_36 = sub_140b63b70(&arg_18, &var_48)
                        int16_t* const rsi_2
                        
                        if (rax_36[1].d == 0)
                            rsi_2 = &data_142d40450
                        else
                            rsi_2 = *rax_36
                        
                        int16_t* var_88
                        int32_t var_80
                        
                        if (arg2 == 0 || *(arg2 + 0x10) == 0)
                            var_88 = nullptr
                            var_80 = 0
                            sub_1405947f0(&var_88, 5)
                            int32_t rax_37 = var_80 + 5
                            var_80 = rax_37
                            
                            if (rax_37 s> 0)
                                sub_140594770(&var_88)
                            
                            UnDecorator::getReferenceType(var_88, u"None", 0xa)
                        else
                            sub_140d21830(arg2, &var_88, 0, 0)
                        
                        int16_t* const rdi_3 = &data_142d40450
                        
                        if (var_80 != 0)
                            rdi_3 = var_88
                        
                        int16_t* var_98
                        int32_t var_90
                        
                        if (*(r14 + 0x10) == 0)
                            var_98 = nullptr
                            var_90 = 0
                            sub_1405947f0(&var_98, 5)
                            int32_t rax_38 = var_90 + 5
                            var_90 = rax_38
                            
                            if (rax_38 s> 0)
                                sub_140594770(&var_98)
                            
                            UnDecorator::getReferenceType(var_98, u"None", 0xa)
                        else
                            sub_140d21830(r14, &var_98, 0, 0)
                        
                        int16_t* const r9_2 = &data_142d40450
                        int16_t* const var_e0_2 = rsi_2
                        
                        if (var_90 != 0)
                            r9_2 = var_98
                        
                        int16_t* const var_e8_2 = rdi_3
                        sub_140af98a0("Unknown", 0x361, 
                            %s had RF_NeedLoad when searching for an archetype of %s named %s", r9_2)
                        int16_t* rcx_49 = var_98
                        
                        if (rcx_49 != 0)
                            sub_140a74f90(rcx_49)
                        
                        int16_t* rcx_50 = var_88
                        
                        if (rcx_50 != 0)
                            sub_140a74f90(rcx_50)
                        
                        int64_t rcx_51 = var_48
                        
                        if (rcx_51 != 0)
                            sub_140a74f90(rcx_51)
                        
                        sub_140afbb40()
                    
                    goto label_141e9f449
            
            void* rax_39 = sub_140d3b5d0(r13, arg2, rbx)
            r14 = rax_39
            
            if (rax_39 != 0)
                return rax_39
            
            uint64_t r8_6 = arg_18
            
            if (r8_6 != rbx)
                rax_39 = sub_140d3b5d0(r13, arg2, r8_6)
                r14 = rax_39
                
                if (rax_39 != 0)
                    return rax_39
            
            r13 = *(r13 + 0x40)
            
            if (r13 == 0)
                break
            
            rax_40 = sub_14247bf70()
            rdx_20 = *(r13 + 0x10)
            rax_41 = sx.q(*(rax_40 + 0x38))
            
            if (rax_41.d s> *(rdx_20 + 0x38))
                break
        while (*(*(rdx_20 + 0x30) + (rax_41 << 3)) == rax_40 + 0x30)
        return r14

return 0
