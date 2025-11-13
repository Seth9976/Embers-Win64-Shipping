// 函数: sub_14290ee30
// 地址: 0x14290ee30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rbx = *(arg2 + 0x28)
int64_t arg_10 = 0
int64_t arg_18 = 0
int32_t rbx_1

if (**(arg2 + 0x10) != 6)
    if (*(rbx + 0x60) == 0)
        rbx_1 = -1
        goto label_14290eea2
    
    if (sub_1428f8c10(*(rbx + 0x60), &data_1434ea5a0, &arg_18) != 0)
        rbx_1 = 0x10
        goto label_14290eea2
else
    rbx_1 = 5
label_14290eea2:
    int32_t rax_2 = sub_142897a80(*(arg2 + 0x28), &arg_10)
    
    if (rax_2 s> 0)
        if (sub_1428a2850(arg1, sub_1428a9570(**(arg2 + 0x10)), rbx_1, arg_18, arg_10, rax_2) != 0)
            return 1
        
        sub_1428a6780(arg_10)
return 0
