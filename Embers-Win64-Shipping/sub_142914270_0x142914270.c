// 函数: sub_142914270
// 地址: 0x142914270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rbx = *(arg1 + 0x28)
void* rdi = *(*(arg1 + 0x10) + 0x28)
void* rcx = *(rbx + 0x20)
int32_t result
int64_t var_30

if (rcx == 0)
    result = sub_142897580(zx.q(arg5), arg4, arg2, rdi, *(rbx + 0x1c), var_30)
else
    char* r14_1 = arg5.q
    
    if (r14_1 != sx.q(sub_1428916c0(rcx)))
        sub_1428a5670(4, 0x8e, 0x8f, "crypto\rsa\rsa_pmeth.c", 0x84)
        return -1
    
    int32_t rax_2 = sub_1406938b0(*(rbx + 0x20))
    int32_t rcx_3 = *(rbx + 0x1c)
    int32_t var_38
    int32_t result_1
    
    if (rax_2 == 0x5f)
        if (rcx_3 != 1)
            return -1
        
        var_38.q = &result_1
        result = sub_14294f390(0, arg4, r14_1.d, arg2, var_38, rdi)
        
        if (result s<= 0)
            return result
        
        result = result_1
    else if (rcx_3 == 5)
        if (sx.q(sub_142896de0(*(arg1 + 0x10))) u< &r14_1[1])
            sub_1428a5670(4, 0x8e, 0x78, "crypto\rsa\rsa_pmeth.c", 0x94)
            return -1
        
        int32_t rax_5 = sub_142915950(rbx, arg1)
        
        if (rax_5 == 0)
            sub_1428a5670(rax_5 + 4, 0x8e, rax_5 + 0x41, "crypto\rsa\rsa_pmeth.c", 0x98)
            return -1
        
        memcpy(*(rbx + 0x38), arg4, r14_1.d)
        r14_1[*(rbx + 0x38)] = sub_142924880(sub_1406938b0(*(rbx + 0x20)))
        result = sub_142897580(zx.q((&r14_1[1]).d), *(rbx + 0x38), arg2, rdi, 5, var_30)
    else if (rcx_3 != 1)
        if (rcx_3 != 6)
            return -1
        
        if (sub_142915950(rbx, arg1) == 0)
            return -1
        
        var_30.d = *(rbx + 0x30)
        var_38.q = *(rbx + 0x28)
        
        if (sub_14294f4d0(rdi, *(rbx + 0x38), arg4, *(rbx + 0x20), var_38, var_30.d) == 0)
            return -1
        
        result = sub_142897580(zx.q(sub_142897860(rdi)), *(rbx + 0x38), arg2, rdi, 3, var_30)
    else
        var_38.q = &result_1
        result = sub_14294ed70(sub_1406938b0(*(rbx + 0x20)), arg4, r14_1.d, arg2, var_38, rdi)
        
        if (result s<= 0)
            return result
        
        result = result_1

if (result s< 0)
    return result

*arg3 = sx.q(result)
return 1
