// 函数: sub_1428eede0
// 地址: 0x1428eede0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* result = arg2

if (arg2 != 0)
    int32_t rax_1 = *arg2
    
    if (rax_1 == 0)
        sub_1428cd400(*(arg2 + 8))
    else if (rax_1 == 1)
        int64_t rcx_2 = *(arg2 + 8)
        
        if (rcx_2 != 0)
            sub_1428c3d60(rcx_2, &data_143515690)
else
    int32_t* result_1 = sub_1428db530(&data_143515720)
    result = result_1
    
    if (result_1 == 0)
        sub_1428a5670((&result_1[4]).d, 0x106, (result_1 + 0x41).d, "crypto\ec\ec_asn1.c", 0x213)
        return 0

int32_t* rax_4

if (sub_14289a070(arg1) == 0)
    *result = 1
    rax_4 = sub_1428eebf0(arg1, nullptr)
label_1428eee9e:
    *(result + 8) = rax_4
    
    if (rax_4 != 0)
        return result
else
    int32_t rax_3 = sub_140611e80(arg1)
    
    if (rax_3 != 0)
        *result = 0
        rax_4 = sub_1428a9570(rax_3)
        goto label_1428eee9e
sub_1428c3d60(result, &data_143515720)
return 0
