// 函数: sub_140f73ae0
// 地址: 0x140f73ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
uint32_t result = (*(*rcx + 8))(rcx)

if (result.b == 0)
    char r9_1 = arg1[0xf1].b
    int32_t r8_1 = arg1[0xf2].d
    int32_t rcx_1 = 0
    int32_t rax_1
    rax_1.b = arg1[0xf3].b == 1
    int32_t arg_8 = r8_1
    
    if (rax_1 + *(arg1 + 0x794) s>= 0)
        rcx_1 = rax_1 + *(arg1 + 0x794)
    
    void* rax_3 = &arg1[0xf0]
    int32_t arg_c = rcx_1
    
    if (r9_1 == 0)
        rax_3 = &arg_8
    
    int64_t rax_4 = *rax_3
    
    if (rax_4.d == r8_1)
        result = (rax_4 u>> 0x20).d
    
    if (rax_4.d != r8_1 || result != rcx_1)
        arg_8 = r8_1
        void* rax_5 = &arg_8
        arg_c = rcx_1
        void* rcx_2 = arg1[9]
        int16_t* var_28 = nullptr
        
        if (r9_1 != 0)
            rax_5 = &arg1[0xf0]
        
        int32_t var_20_1 = 0
        int64_t var_18 = *rax_5
        int64_t var_10_1 = arg_8.q
        sub_140f02770(rcx_2, &var_28, &var_18)
        int16_t* rcx_3 = &data_142d40450
        
        if (var_20_1 != 0)
            rcx_3 = var_28
        
        result = sub_140d77020(rcx_3)
        int16_t* rcx_4 = var_28
        
        if (rcx_4 != 0)
            return sub_140a74f90(rcx_4)

return result
