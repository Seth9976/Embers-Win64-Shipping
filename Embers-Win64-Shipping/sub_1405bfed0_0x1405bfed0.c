// 函数: sub_1405bfed0
// 地址: 0x1405bfed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t arg_8
int64_t* rcx_4

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
label_1405bff5e:
    rcx_4 = nullptr
else
    arg_8 = arg2
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg_8:4.d
    void* r8 = arg1 + 0x40
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_1405bff5e_1:
        rcx_4 = nullptr
    else
        while (true)
            rcx_4 = (sx.q(rax_4) << 5) + *(arg1 + 8)
            
            if (*rcx_4 == arg2)
                break
            
            rax_4 = rcx_4[3].d
            
            if (rax_4 == 0xffffffff)
                goto label_1405bff5e_2
        
        if (rax_4 == 0xffffffff)
        label_1405bff5e_2:
            rcx_4 = nullptr

int32_t* result = &rcx_4[1]

if (rcx_4 == 0)
    result = nullptr

if (result != 0 && *(result + 8) == arg3)
    *result |= arg4
    return result

int32_t var_38 = arg4
int64_t* var_28 = &arg_10
int64_t var_30_1 = arg3
int32_t* var_20_1 = &var_38
return sub_1405a8410(arg1 + 8, &arg_8, &var_28, nullptr)
