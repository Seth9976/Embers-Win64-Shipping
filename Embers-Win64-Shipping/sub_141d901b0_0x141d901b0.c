// 函数: sub_141d901b0
// 地址: 0x141d901b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const var_98 = &data_142fc8f88
int64_t r15 = sx.q(arg4)
int32_t var_90 = 6
int64_t var_88 = -1
int32_t var_80 = 0xfffffffe
int32_t var_7c = 0xfffffffe
int64_t* result
int64_t* rsi

if (arg2 != 0xffffffff)
    uint64_t var_38
    sub_141d8f980(&var_38, arg1 + 0x30, zx.q(arg2))
    sub_140a464c0()
    int16_t* const _String = &data_142d40450
    int16_t* const rdx_1 = &data_142d40450
    int32_t var_30
    
    if (var_30 != 0)
        rdx_1 = var_38
    
    char const (* r9)[0x4] = data_14399ea08
    result = (*(r9 + 0x18))(&data_14399ea08, rdx_1, 0, r9)
    int64_t* result_2 = *(arg1 + 0x20)
    int64_t* result_1 = result_2
    
    if (result_2 != result)
        *(arg1 + 0x20) = result
        result_1 = result
        
        if (result_2 != 0)
            result = (**result_2)(result_2, 1)
            result_1 = *(arg1 + 0x20)
    
    rsi = nullptr
    
    if (result_1 != 0)
        int64_t var_88_2 = r15
        int32_t var_90_2 = 0
        int32_t var_7c_1 = arg2
        uint64_t var_48
        int512_t zmm1_1 = sub_141d8fb90(&var_48, arg1 + 0x30, zx.q(arg2))
        sub_140a464c0()
        int16_t* const rdx_3 = &data_142d40450
        int32_t var_40
        
        if (var_40 != 0)
            rdx_3 = var_48
        
        char const (* r9_1)[0x4] = data_14399ea08
        result = (*(r9_1 + 0x18))(&data_14399ea08, rdx_3, 0, r9_1)
        
        if (result != 0)
            uint64_t var_a8 = 0
            int32_t var_a0_1 = 0
            sub_140a1d9d0(result, &var_a8, zmm1_1)
            void** const rax_4 = &data_143238d00
            uint64_t r13_1 = var_a8
            void** const var_78 = &data_143238d00
            int64_t var_70
            __builtin_memset(&var_70, 0, 0x1c)
            int32_t var_50_1 = 0
            uint64_t var_b8 = 0
            int32_t var_b0_1 = var_a0_1
            
            if (var_a0_1 != 0)
                sub_1405a4c70(&var_b8, var_a0_1, 0)
                memcpy(var_b8, r13_1, var_a0_1 * 2)
                rax_4 = var_78
            else
                int32_t var_ac_1 = 0
            
            rax_4[5](&var_78, &var_b8)
            uint64_t rcx_9 = var_b8
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            int32_t var_80_1 = var_50_1
            sub_141d90d30(arg1)
            int64_t* rdi_1 = *(arg1 + 0x18)
            int16_t* _String_1
            int32_t var_58
            
            if (var_58 != 0)
                _String = _String_1
            
            int64_t rax_6 = _wtoi64(_String)
            int64_t r8_4 = *rdi_1
            (*(r8_4 + 0x178))(rdi_1, rax_6, r8_4)
            
            if (_String_1 != 0)
                sub_140a74f90(_String_1)
            
            int64_t rcx_14 = var_70
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            uint64_t rcx_15 = var_a8
            var_78 = &data_142e1f570
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            result = (**result)(result, 1)
        
        uint64_t rcx_17 = var_48
        
        if (rcx_17 != 0)
            result = sub_140a74f90(rcx_17)
    
    uint64_t rcx_18 = var_38
    
    if (rcx_18 != 0)
        result = sub_140a74f90(rcx_18)
else
    void*** rax = j_sub_140a82f30(0x90)
    rsi = nullptr
    void*** rbx_1 = rax
    
    if (rax == 0)
        rbx_1 = nullptr
    else
        sub_140b4c2a0(rax)
        *rbx_1 = &data_142d5e7b8
    
    int64_t* rcx_1 = *(arg1 + 0x20)
    
    if (rcx_1 != rbx_1)
        *(arg1 + 0x20) = rbx_1
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
    
    int64_t* rcx_2 = *(arg1 + 0x18)
    result = (*(*rcx_2 + 0x178))(rcx_2, 0)
    int64_t var_88_1 = r15
    int32_t var_90_1 = 0
    var_80.q = -1

if (arg3[1].d != 0)
    int64_t* rcx_19 = *arg3
    
    if (rcx_19 != 0)
        result = (*(*rcx_19 + 0x28))(rcx_19)
        
        if (result.b != 0)
            if (arg3[1].d != 0)
                rsi = *arg3
            
            return (*(*rsi + 0x50))(rsi, &var_98)

return result
