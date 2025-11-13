// 函数: sub_141be02b0
// 地址: 0x141be02b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*arg2 f!= *(arg1 + 0x128) || arg2[1] f!= *(arg1 + 0x12c) || arg2[2] f!= *(arg1 + 0x130)
    || arg2[3] f!= *(arg1 + 0x134))
label_141be0308:
    result = sub_140693390(arg1 + 0x128, arg2)
    int64_t* rcx_1 = *(arg1 + 0x1d8)
    
    if (rcx_1 != 0)
        char var_20_1 = 1
        void* var_28 = arg1 + 0x108
        int64_t var_18_1 = 0
        int32_t var_10_1 = 0
        result = sub_140e24960(rcx_1, &var_28)
else
    result = zx.q(*(arg1 + 0x138))
    
    if (result.b != arg2[4].b)
        goto label_141be0308
    
    if (result.b == 1)
        result = *(arg2 + 0x18)
        
        if (*(arg1 + 0x140) != result)
            goto label_141be0308

int64_t* rbx_1 = *(arg2 + 0x20)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
