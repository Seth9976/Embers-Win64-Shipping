// 函数: sub_1428cdc60
// 地址: 0x1428cdc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void var_78
void* rbx = &var_78
uint64_t result

if (arg2 == 0 || *(arg2 + 0x18) == 0)
    result = sub_14289aa40(arg1, "NULL", 4)
else
    int32_t result_1 = sub_1428a97f0(&var_78, 0x50, arg2, 0)
    
    if (result_1 s<= 0x4f)
        goto label_1428cdd4e
    
    void* rax_2 = sub_1428a6730(sx.q(result_1 + 1))
    rbx = rax_2
    
    if (rax_2 != 0)
        sub_1428a97f0(rax_2, result_1 + 1, arg2, 0)
    label_1428cdd4e:
        
        if (result_1 s> 0)
            sub_14289aa40(arg1, rbx, result_1)
            
            if (rbx != &var_78)
                sub_1428a6780(rbx)
            
            result = zx.q(result_1)
        else
            int32_t rax_3 = sub_14289aa40(arg1, "<INVALID>", 9)
            result = zx.q(sub_142921640(arg1, *(arg2 + 0x18), *(arg2 + 0x14)) + rax_3)
    else
        sub_1428a5670((rax_2 + 0xd).d, (rax_2 + 0x7e).d, (rax_2 + 0x41).d, 
            "crypto\asn1\a_object.c", 0xc3)
        result = zx.q((rbx - 1).d)

__security_check_cookie(rax_1 ^ &var_a8)
return result
