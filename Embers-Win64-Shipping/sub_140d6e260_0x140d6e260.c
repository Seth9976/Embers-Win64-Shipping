// 函数: sub_140d6e260
// 地址: 0x140d6e260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* _String_1 = nullptr
int16_t* var_20

if (&arg1[2] != &var_20)
    *(arg1 + 8) = 0
    int64_t* rbx_1 = *(arg1 + 0x10)
    
    if (rbx_1 != 0)
        *(arg1 + 0x10) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

sub_140b63b70(arg1, &var_20)
int32_t result = sub_140a32ae0(&var_20, data_1439ae1f0, 1)

if (result.b != 0)
    int64_t rbx_2 = -1
    int64_t rax_3 = -1
    
    do
        rax_3 += 1
    while ((*data_1439ae1f0)[rax_3] != 0)
    
    int16_t* const _String = &data_142d40450
    int32_t var_18
    int32_t rcx_6
    int16_t* const r8_1
    
    if (var_18 == 0)
        rcx_6 = 0
        r8_1 = &data_142d40450
    else
        r8_1 = var_20
        rcx_6 = var_18 - 1
    
    int32_t rdx_3 = rcx_6 - rax_3.d
    int32_t rax_4
    
    if (rcx_6 - rax_3.d s>= 0)
        rax_4 = rcx_6
        
        if (rdx_3 s< rcx_6)
            rax_4 = rdx_3
    else
        rax_4 = 0
    
    int32_t rdx_4 = 0
    int16_t* _String_2 = nullptr
    int32_t rax_6 = 0
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0
    int16_t* rsi_1 = &r8_1[sx.q(rcx_6) - sx.q(rax_4)]
    
    if (rsi_1 != 0 && *rsi_1 != 0)
        do
            rbx_2 += 1
        while (rsi_1[rbx_2] != 0)
        
        if (rbx_2.d + 1 s> 0)
            sub_1405947f0(&_String_2, rbx_2.d + 1)
            rax_6 = var_2c_1
            rdx_4 = var_30_1
            _String_1 = _String_2
        
        int32_t rbp_1 = rbx_2.d + 1 + rdx_4
        
        if (rbp_1 s> rax_6)
            sub_140594770(&_String_2)
            _String_1 = _String_2
        
        UnDecorator::getReferenceType(_String_1, rsi_1, (rbx_2.d + 1) * 2)
        
        if (rbp_1 != 0)
            _String = _String_1
    
    result = _wtoi(_String)
    
    if (result != 0)
        result = sub_140d45b10(sub_140d449f0(), &_String_2, 0xffffffff, result)
        int64_t* var_28
        
        if (var_28 != 0)
            var_28[1].d -= 1
            
            if (var_28[1].d == 1)
                result = (**var_28)(var_28)
                int32_t temp4_1 = *(var_28 + 0xc)
                *(var_28 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    result = (*(*var_28 + 8))(var_28, 1)
    
    if (_String_1 != 0)
        result = sub_140a74f90(_String_1)

int16_t* rcx_17 = var_20

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
