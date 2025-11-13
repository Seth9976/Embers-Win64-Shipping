// 函数: sub_141be7a10
// 地址: 0x141be7a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc3) = arg2
int64_t* var_38
int64_t* result = sub_141bab3c0(arg1, &var_38)
int64_t* r8 = var_38

if (r8 != 0)
    uint32_t rcx = zx.d(arg2)
    char rax
    
    if (arg2 == 0)
        rax = data_1439ae51c
    else if (rcx == 1)
        rax = data_1439ae51d
    else if (rcx == 2)
        rax = data_1439ae51e
    else if (rcx == 3)
        rax = data_1439ae51f
    else if (rcx != 4)
        rax = data_1439ae51c
    else
        rax = data_1439ae520
    
    char var_28 = rax
    char var_27_1 = 1
    int64_t var_20_1 = 0
    int32_t var_18_1 = 0
    result = (*(*r8 + 0x1d8))(r8, &var_28)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        result = (**var_30)(var_30)
        int32_t temp2_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp2_1 == 1)
            jump(*(*var_30 + 8))

return result
