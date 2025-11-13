// 函数: sub_14084ae10
// 地址: 0x14084ae10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (*(arg1 + 0x28) != 8 || *(arg1 + 0x4e8) == 0)
label_14084ae6c:
    result.b = 0
    return result

void* i = *(arg1 + 0x488)

for (void* rdi_2 = sx.q(*(arg1 + 0x490)) * 0x38 + i; i != rdi_2; i += 0x38)
    int64_t rdx
    rdx.b = 1
    result, rdx = sub_14074c7f0(i, rdx)
    
    if (result.b == 0)
        goto label_14084ae6c

result.b = 1
return result
