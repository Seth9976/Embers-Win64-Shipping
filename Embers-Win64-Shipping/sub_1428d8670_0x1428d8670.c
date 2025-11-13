// 函数: sub_1428d8670
// 地址: 0x1428d8670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
sub_1428a5c40(*(arg1 + 0xa8))
int64_t* result = *(arg1 + 0x98)

if (result != 0)
label_1428d86cb:
    
    if (sub_1428d6de0(result) == 0)
        *arg2 = 0
        result = *(arg1 + 0xa0)
        
        if (result == 0)
            int64_t* result_2 = sub_1428975e0(arg1, arg3)
            result = result_2
            *(arg1 + 0xa0) = result_2
    else
        *arg2 = 1
else
    int64_t* result_1 = sub_1428975e0(arg1, arg3)
    *(arg1 + 0x98) = result_1
    result = result_1
    
    if (result_1 != 0)
        goto label_1428d86cb

sub_1428a5d00(*(arg1 + 0xa8))
return result
