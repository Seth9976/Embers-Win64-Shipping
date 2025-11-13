// 函数: sub_14296b900
// 地址: 0x14296b900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* result

if (arg2 == 0)
    int32_t** rax_1 = sub_14296ba60(arg1)
    
    if (rax_1 != 0)
        int32_t* rcx = *rax_1
        int64_t* result_1
        
        if (rcx == 0)
            result_1 = sub_14289a500(sub_142969c20())
        else if (rcx[4] == 0x20)
            result_1 = sub_14289a500(sub_14289b5e0())
        else
            result_1 = sub_14289b510(*(rcx + 8), *rcx)
        
        result = result_1
        goto label_14296b968
    
label_14296ba2c:
    sub_1428a5670(0x2e, 0x6f, 0x7f, "crypto\cms\cms_lib.c", 0x40)
else
    result = arg2
label_14296b968:
    
    if (result == 0)
        goto label_14296ba2c
    
    int32_t rax_3 = sub_1428a96d0(*arg1)
    int64_t* rax_6
    
    if (rax_3 s<= 0x19)
        if (rax_3 == 0x19)
            rax_6 = sub_142976230(arg1)
            goto label_14296b9ee
        
        if (rax_3 == 0x15)
            return result
        
        if (rax_3 == 0x16)
            rax_6 = sub_14293ccd0(arg1)
            goto label_14296b9ee
        
        if (rax_3 != 0x17)
            goto label_14296b9cc
        
        rax_6 = sub_14293c050(arg1)
        goto label_14296b9ee
    
    if (rax_3 == 0x1a)
        rax_6 = sub_14296c150(arg1)
    label_14296b9ee:
        
        if (rax_6 != 0)
            return sub_14289a6f0(rax_6, result) __tailcall
        
        if (arg2 == 0)
            sub_142899e70(result)
    else
        if (rax_3 == 0x312)
            rax_6 = sub_142976250(arg1)
            goto label_14296b9ee
        
    label_14296b9cc:
        sub_1428a5670(0x2e, 0x6f, 0x9c, "crypto\cms\cms_lib.c", 0x5e)
return 0
