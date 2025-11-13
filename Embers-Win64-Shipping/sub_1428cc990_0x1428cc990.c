// 函数: sub_1428cc990
// 地址: 0x1428cc990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
sub_1428a5c40(arg2)
int32_t* result = *arg1
sub_1428a5d00(arg2)

if (result == 0)
    int32_t* result_1 = sub_1428a6730(zx.q((&result[0x1a]).d))
    result = result_1
    
    if (result_1 == 0)
        sub_1428a5670((result_1 + 3).d, 0x95, (result_1 + 0x41).d, "crypto\bn\bn_mont.c", 0xe9)
        return nullptr
    
    *result_1 = 0
    sub_142890e40(&result_1[2])
    sub_142890e40(&result[8])
    sub_142890e40(&result[0xe])
    *(result + 0x58) = 0
    *(result + 0x50) = 0
    result[0x18] = 1
    
    if (sub_1428cc700(result, arg3, arg4) == 0)
        sub_1428cc600(result)
        return nullptr
    
    sub_1428a5c40(arg2)
    
    if (*arg1 == 0)
        *arg1 = result
    else
        sub_1428cc600(result)
        result = *arg1
    
    sub_1428a5d00(arg2)

return result
