// 函数: sub_14262cdc0
// 地址: 0x14262cdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142609370(*(arg1 + 0x350))
void* rbx = arg1 + 0x38
*(arg1 + 0x350) = 0
int64_t i_2 = 8
int64_t i

do
    sub_142609160(*rbx)
    *rbx = 0
    rbx += 0x68
    i = i_2
    i_2 -= 1
while (i != 1)
int64_t* result = sub_142607660()
*(arg1 + 0x350) = result

if (result == 0)
label_14262ce86:
    result.b = 0
else if ((sub_142611af0(result, arg4, arg3, nullptr) u>> 0x1f).b != 0)
label_14262ce86_1:
    result.b = 0
else
    *(arg1 + 0x344) = arg2
    int64_t i_1 = 0
    void* rbx_1 = arg1
    
    do
        *rbx_1 = 0
        result = j_sub_1426075c0(zx.q(*(arg1 + 0x344) << 3), 0)
        *(rbx_1 + 0x38) = result
        
        if (result == 0)
            goto label_14262ce86_1
        
        i_1 += 1
        rbx_1 += 0x68
    while (i_1 s< 8)
    
    *(arg1 + 0x348) = 0
    result.b = 1

return result
