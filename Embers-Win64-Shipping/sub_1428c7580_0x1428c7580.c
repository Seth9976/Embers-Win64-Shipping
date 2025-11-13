// 函数: sub_1428c7580
// 地址: 0x1428c7580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t arg_10 = *arg3
int64_t* rdi = arg2
int32_t* result

if (arg2 != 0)
    result = *arg2

if (arg2 == 0 || result == 0)
    int32_t* result_1 = sub_1428968f0()
    result = result_1
    
    if (result_1 != 0)
        goto label_1428c75d1
    
    sub_1428a5670((result_1 + 0xd).d, 0x9a, (result_1 + 6).d, "crypto\asn1\d2i_pr.c", 0x1d)
else
    sub_1428af710(*(result + 0x18))
    *(result + 0x18) = 0
label_1428c75d1:
    int32_t rax_1 = sub_142896cb0(result, arg1)
    
    if (rax_1 != 0)
        int64_t r9 = *(*(result + 0x10) + 0xb8)
        int32_t rax_3
        
        if (r9 != 0)
            rax_3 = r9(result, &arg_10, zx.q(arg4))
        
        if (r9 != 0 && rax_3 != 0)
            goto label_1428c768e
        
        if (*(*(result + 0x10) + 0x40) == 0)
            sub_1428a5670(0xd, 0x9a, 0xd, "crypto\asn1\d2i_pr.c", 0x3c)
        else
            void* rax_5 = sub_1428f1150(nullptr, &arg_10, arg4)
            
            if (rax_5 != 0)
                int32_t* result_2 = sub_1428f1170(rax_5)
                sub_1428f1010(rax_5)
                
                if (result_2 != 0)
                    sub_1428965a0(result)
                    result = result_2
                label_1428c768e:
                    *arg3 = arg_10
                    
                    if (rdi != 0)
                        *rdi = result
                    
                    return result
    else
        sub_1428a5670(rax_1 + 0xd, 0x9a, 0xa3, "crypto\asn1\d2i_pr.c", 0x29)
    
    if (rdi == 0 || *rdi != result)
        sub_1428965a0(result)

return nullptr
