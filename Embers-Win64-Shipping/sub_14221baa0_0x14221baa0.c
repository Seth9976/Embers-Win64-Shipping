// 函数: sub_14221baa0
// 地址: 0x14221baa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = *(arg1 + 0x1c)
void* rax_1 = sub_140d3c740(arg1 + 0x60, 1)
int64_t rbx

if (rax_1 == 0)
    rbx = arg_8
else
    rbx = *(rax_1 + 0x13c)
    arg_8 = rbx

uint32_t rbp_1 = (rbx u>> 0x20).d
int64_t result = sub_140b5b8a0(rbx.d, 0)
int64_t result_1
int32_t rcx_1

if (arg2 == 0)
    rcx_1.b = result.b == 0
    result.b = rbp_1 != 0
    rcx_1.b |= result.b
    
    if (rcx_1.b != 0 && rbx != data_143f3a508 && sub_141ec8c20(sub_141ec4150(), arg_8, arg1) == 0)
        *(arg1 + 0x1c) = data_143f3a508
        sub_140d3a3a0(&result_1, nullptr)
        int64_t result_2 = result_1
        *(arg1 + 0xf) &= 0xfd
        *(arg1 + 0x60) = result_2
    
    int64_t rbx_1 = *(arg1 + 0x1c)
    void* rax_8 = sub_140d3c740(arg1 + 0x60, 1)
    
    if (rax_8 != 0)
        rbx_1 = *(rax_8 + 0x13c)
    
    int32_t rcx_11
    rcx_11.b = sub_140b5b8a0(rbx_1.d, 0) == 0
    result.b = (rbx_1 u>> 0x20).d != 0
    rcx_11.b |= result.b
    
    if (rcx_11.b == 0 || rbx_1 == data_143f3a508)
        if (sub_140d3e170(arg1 + 0x60, 1, 0) == 0)
            return sub_142227610(arg1 + 0x28)
        
        void* rax_12 = sub_140d3c740(arg1 + 0x60, 1)
        *(arg1 + 0x1c) = *(rax_12 + 0x13c)
        *(arg1 + 6) = *(rax_12 + 0x126)
        *(arg1 + 8) = *(rax_12 + 0x128)
        return sub_142221830(arg1 + 0x28, rax_12 + 0x148)
else
    rcx_1.b = result.b == 0
    result.b = rbp_1 != 0
    rcx_1.b |= result.b
    
    if (rcx_1.b != 0 && rbx != data_143f3a508)
        void var_68
        sub_141eb5580(&var_68)
        
        if (sub_141ec4790(sub_141ec4150(), arg_8, &var_68) == 0)
            *(arg1 + 0x1c) = data_143f3a508
            sub_140d3a3a0(&result_1, nullptr)
            result = result_1
            *(arg1 + 0xf) &= 0xfd
            *(arg1 + 0x60) = result
        else
            result = sub_141ec6710(&var_68, *(arg1 + 8), *(arg1 + 6), arg1 + 0x28)
            
            if (result.b == 0)
                result = sub_14221aea0(arg1)
        
        int64_t var_30
        
        if (var_30 != 0)
            return sub_140a74f90(var_30)
return result
