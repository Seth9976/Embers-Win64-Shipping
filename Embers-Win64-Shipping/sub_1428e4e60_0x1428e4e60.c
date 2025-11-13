// 函数: sub_1428e4e60
// 地址: 0x1428e4e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rbp = sx.q(arg3)
int64_t rax = sub_1428e4f50(nullptr, nullptr, *arg2, rbp, arg1)

if (rax != 0)
    int32_t* result
    
    if (arg1 != 0)
        result = *arg1
    
    if (arg1 != 0 && result != 0)
        goto label_1428e4ec4
    
    int32_t* result_1 = sub_1428c3550()
    result = result_1
    
    if (result_1 != 0)
        result_1[1] = 2
    label_1428e4ec4:
        int32_t rax_1 = sub_1428f2d50(result, 0, rax.d)
        
        if (rax_1 != 0)
            int32_t arg_18
            sub_1428e4f50(*(result + 8), &arg_18, *arg2, rbp, arg1)
            
            if (arg_18 != 0)
                result[1] |= 0x100
            
            *arg2 += rbp
            
            if (arg1 != 0)
                *arg1 = result
            
            return result
        
        sub_1428a5670(rax_1 + 0xd, 0xc2, rax_1 + 0x41, "crypto\asn1\a_int.c", 0x139)
        
        if (arg1 == 0 || *arg1 != result)
            sub_1428c3460(result)

return nullptr
