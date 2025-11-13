// 函数: sub_141dab3c0
// 地址: 0x141dab3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8 = *arg2
void* rax_1 = arg2[1]
void* var_c0 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void* result = sub_141daee30(arg1, 2, 6, &var_c8)

if (arg4 != 0)
    int64_t* rcx = *arg3
    result = (*(*rcx + 0x40))(rcx)

if (arg4 != 0 && result.d == 0xc8)
    if (arg5 != arg1[0x47].d)
        arg1[0x29].d = 0
        
        if (*(arg1 + 0x14c) != 0)
            sub_1405c5510(&arg1[0x28], 0)
        
        goto label_141dab45f
    
    int64_t var_128 = 0
    int32_t var_120_1 = 0
    sub_1405947f0(&var_128, 0xa)
    int32_t rax_5 = var_120_1 + 0xa
    var_120_1 = rax_5
    
    if (rax_5 s> 0)
        sub_140594770(&var_128)
    
    UnDecorator::getReferenceType(var_128, u"NumChunks", 0x14)
    int64_t* rcx_8 = *arg3
    int64_t var_88
    int64_t* rax_7 = (*(*rcx_8 + 0x10))(rcx_8, &var_88, &var_128)
    int16_t* const _String_3 = &data_142d40450
    int16_t* const rcx_9
    
    if (rax_7[1].d == 0)
        rcx_9 = &data_142d40450
    else
        rcx_9 = *rax_7
    
    int32_t rax_8 = sub_140a54510(rcx_9, &data_142d40450)
    int64_t rcx_10 = var_88
    int64_t r15
    r15.b = rax_8 == 0
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int64_t rcx_11 = var_128
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    if (r15.b != 0)
        sub_140669d70(arg2)
        return sub_140669db0(arg3)
    
    int64_t var_118 = 0
    int32_t var_110_1 = 0
    sub_1405947f0(&var_118, 0xa)
    int32_t rax_9 = var_110_1 + 0xa
    var_110_1 = rax_9
    
    if (rax_9 s> 0)
        sub_140594770(&var_118)
    
    UnDecorator::getReferenceType(var_118, u"NumChunks", 0x14)
    int64_t* rcx_15 = *arg3
    int64_t var_78
    int64_t* rax_11 = (*(*rcx_15 + 0x10))(rcx_15, &var_78, &var_118)
    wchar16* _String
    
    if (rax_11[1].d == 0)
        _String = &data_142d40450
    else
        _String = *rax_11
    
    int32_t rax_12 = _wtoi(_String)
    int64_t rcx_16 = var_78
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    int64_t rcx_17 = var_118
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    int64_t var_108 = 0
    int32_t var_100_1 = 0
    sub_1405947f0(&var_108, 5)
    int32_t rax_13 = var_100_1 + 5
    var_100_1 = rax_13
    
    if (rax_13 s> 0)
        sub_140594770(&var_108)
    
    UnDecorator::getReferenceType(var_108, u"Time", 0xa)
    int64_t* rcx_21 = *arg3
    int64_t var_68
    int64_t* rax_15 = (*(*rcx_21 + 0x10))(rcx_21, &var_68, &var_108)
    wchar16* _String_1
    
    if (rax_15[1].d == 0)
        _String_1 = &data_142d40450
    else
        _String_1 = *rax_15
    
    int32_t rax_16 = _wtoi(_String_1)
    int64_t rcx_22 = var_68
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    int64_t rcx_23 = var_108
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    if (rax_12 s> arg1[0x4e].d)
        arg1[0x4e].d = rax_12
    
    if (rax_16 u> *(arg1 + 0x274))
        *(arg1 + 0x274) = rax_16
    
    int64_t var_f8 = 0
    int32_t var_f0_1 = 0
    sub_1405947f0(&var_f8, 6)
    int32_t rax_17 = var_f0_1 + 6
    var_f0_1 = rax_17
    
    if (rax_17 s> 0)
        sub_140594770(&var_f8)
    
    UnDecorator::getReferenceType(var_f8, u"State", 0xc)
    int64_t* rcx_27 = *arg3
    int64_t var_58
    int64_t* rax_19 = (*(*rcx_27 + 0x10))(rcx_27, &var_58, &var_f8)
    int16_t* const rcx_28
    
    if (rax_19[1].d == 0)
        rcx_28 = &data_142d40450
    else
        rcx_28 = *rax_19
    
    int32_t rax_20 = sub_140a54510(rcx_28, u"Live")
    int64_t rcx_29 = var_58
    int32_t r15_1
    r15_1.b = rax_20 == 0
    
    if (rcx_29 != 0)
        sub_140a74f90(rcx_29)
    
    int64_t rcx_30 = var_f8
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    if (*(arg1 + 0x25d) != 0 && r15_1.b == 0)
        *(arg1 + 0x25d) = 0
    
    int64_t* rcx_31 = *arg3
    result = (*(*rcx_31 + 0x30))(rcx_31)
    
    if (*(result + 8) s> 0 || *(arg1 + 0x25d) != 0)
        int64_t* rcx_32 = *arg3
        result = (*(*rcx_32 + 0x30))(rcx_32)
        
        if (*(result + 8) s> 0)
            if (arg1[0x29].d == 0)
                int64_t var_e8 = 0
                int32_t var_e0_1 = 0
                sub_1405947f0(&var_e8, 7)
                int32_t rax_23 = var_e0_1 + 7
                var_e0_1 = rax_23
                
                if (rax_23 s> 0)
                    sub_140594770(&var_e8)
                
                UnDecorator::getReferenceType(var_e8, u"MTime1", 0xe)
                int64_t* rcx_36 = *arg3
                int64_t var_48
                int64_t* rax_25 = (*(*rcx_36 + 0x10))(rcx_36, &var_48, &var_e8)
                wchar16* _String_2
                
                if (rax_25[1].d == 0)
                    _String_2 = &data_142d40450
                else
                    _String_2 = *rax_25
                
                int32_t rax_26 = _wtoi(_String_2)
                int64_t rcx_37 = var_48
                *(arg1 + 0x27c) = rax_26
                
                if (rcx_37 != 0)
                    sub_140a74f90(rcx_37)
                
                int64_t rcx_38 = var_e8
                
                if (rcx_38 != 0)
                    sub_140a74f90(rcx_38)
            
            int64_t var_d8 = 0
            int32_t var_d0_1 = 0
            sub_1405947f0(&var_d8, 7)
            int32_t rax_27 = var_d0_1 + 7
            var_d0_1 = rax_27
            
            if (rax_27 s> 0)
                sub_140594770(&var_d8)
            
            UnDecorator::getReferenceType(var_d8, u"MTime2", 0xe)
            int64_t* rcx_42 = *arg3
            int64_t var_38
            int16_t** rax_29 = (*(*rcx_42 + 0x10))(rcx_42, &var_38, &var_d8)
            
            if (rax_29[1].d != 0)
                _String_3 = *rax_29
            
            int32_t rax_30 = _wtoi(_String_3)
            int64_t rcx_44 = var_38
            arg1[0x50].d = rax_30
            
            if (rcx_44 != 0)
                sub_140a74f90(rcx_44)
            
            int64_t rcx_45 = var_d8
            
            if (rcx_45 != 0)
                sub_140a74f90(rcx_45)
            
            int64_t var_b8 = *arg3
            void* rax_32 = arg3[1]
            void* var_b0_1 = rax_32
            
            if (rax_32 != 0)
                *(rax_32 + 8) += 1
            
            int64_t var_a8 = *arg2
            void* rax_34 = arg2[1]
            void* var_a0_1 = rax_34
            
            if (rax_34 != 0)
                *(rax_34 + 8) += 1
            
            sub_141da68b0(arg1, &var_a8, &var_b8)
            int64_t var_98 = *arg3
            void* rax_36 = arg3[1]
            void* var_90_1 = rax_36
            
            if (rax_36 != 0)
                *(rax_36 + 8) += 1
            
            result = (*(*arg1 + 0x1c8))(arg1, &var_98, &arg1[0x28])
            
            if (result.b == 0)
            label_141dab45f:
                (*(*arg1 + 0x198))(arg1)
                *(arg1 + 0x29c) = 1
                sub_140669d70(arg2)
                return sub_140669db0(arg3)
            
            arg1[0x47].d += 1
        else if (arg1[0x53].d != 0)
            arg1[0x53].d = 0
    else if (arg6 == 0)
        goto label_141dab93a
else if (*(arg1 + 0x25d) == 0)
label_141dab93a:
    arg1[0x29].d = 0
    
    if (*(arg1 + 0x14c) != 0)
        sub_1405c5510(&arg1[0x28], 0)
    
    result = (*(*arg1 + 0x198))(arg1)
    *(arg1 + 0x29c) = 1
else
    *(arg1 + 0x25d) = 0

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    result = zx.q(rbx_2[1].d)
    rbx_2[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return result
