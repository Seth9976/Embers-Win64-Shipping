// 函数: sub_1429144e0
// 地址: 0x1429144e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* rdi = *(arg1 + 0x28)
char* rcx = *(rdi + 0x20)
int32_t rax = *(rdi + 0x1c)
int32_t rbx_2

if (rcx == 0)
    rbx_2 = sub_1428975a0(zx.q(arg5), arg4, arg2, *(*(arg1 + 0x10) + 0x28), rax)
else if (rax != 5)
    if (rax != 1)
        return 0xffffffff
    
    int32_t var_38
    int32_t arg_8
    var_38.q = &arg_8
    
    if (sub_14294f040(sub_1406938b0(rcx), nullptr, 0, arg2, var_38, arg4, arg5.q, 
            *(*(arg1 + 0x10) + 0x28)) s<= 0)
        return 0
    
    rbx_2 = arg_8
else
    if (sub_142915950(rdi, arg1) == 0)
        return 0xffffffff
    
    int32_t rax_2 = sub_1428975a0(zx.q(arg5), arg4, *(rdi + 0x38), *(*(arg1 + 0x10) + 0x28), 5)
    
    if (rax_2 s< 1)
        return 0
    
    rbx_2 = rax_2 - 1
    int64_t rbp_1 = sx.q(rbx_2)
    int32_t rax_4 = sub_142924880(sub_1406938b0(*(rdi + 0x20)))
    
    if (zx.d(*(*(rdi + 0x38) + rbp_1)) != rax_4)
        sub_1428a5670(4, 0x8d, 0x64, "crypto\rsa\rsa_pmeth.c", 0xd0)
        return 0
    
    if (rbx_2 != sub_1428916c0(*(rdi + 0x20)))
        sub_1428a5670(4, 0x8d, 0x8f, "crypto\rsa\rsa_pmeth.c", 0xd5)
        return 0
    
    if (arg2 != 0)
        memcpy(arg2, *(rdi + 0x38), rbp_1.d)

if (rbx_2 s< 0)
    return zx.q(rbx_2)

*arg3 = sx.q(rbx_2)
return 1
