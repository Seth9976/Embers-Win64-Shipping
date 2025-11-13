// 函数: sub_1414e0780
// 地址: 0x1414e0780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg2)
void* i

if (r9.d == 3 || arg2 == 0)
    i = *(arg1 + 0xa0)
    
    for (void* rdx_1 = sx.q(*(arg1 + 0xa8)) * 0x5240 + i; i != rdx_1; i += 0x5240)
        if ((*(i + 0x497c) & 4) != 0)
            goto label_1414e084b
        
        if (*(i + 0x1de8) != 0)
            goto label_1414e084b
        
        if (*(i + 0x1df8) != 0)
            goto label_1414e084b
        
        if (*(i + 0x1e38) != 0)
            goto label_1414e084b
        
        if (*(i + 0x1f10) != 0)
            goto label_1414e084b
        
        if (*(i + 0x1e28) != 0)
            goto label_1414e084b
        
        if (*(i + 0x1e08) s> 0)
            goto label_1414e084b

if (data_143e8150c != 0 && r9.d == 1)
label_1414e084b:
    i.b = 1
    return i

int64_t i_1 = *(arg1 + 0xa0)

for (int64_t rdx_3 = sx.q(*(arg1 + 0xa8)) * 0x5240 + i_1; i_1 != rdx_3; i_1 += 0x5240)
    if (*((r9 << 2) + 0x1890 + i_1) s> 0)
        goto label_1414e084b

i.b = 0
return i
