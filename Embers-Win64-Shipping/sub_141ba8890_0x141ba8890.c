// 函数: sub_141ba8890
// 地址: 0x141ba8890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc0) &= 0xfe
*(arg1 + 0xc0) |= arg2
int64_t* var_18
uint8_t result = sub_141bab3c0(arg1, &var_18)
int64_t* rcx = var_18

if (rcx != 0)
    uint8_t r8_1 = rcx[5].b
    result = r8_1 u>> 5 & 1
    
    if (result != arg2)
        rcx[5].b = (r8_1 & 0xdf) | arg2 << 5
        result = sub_140e19ef0(rcx, 4)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*var_10 + 8))

return result
