// 函数: sub_14290df20
// 地址: 0x14290df20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t r14 = 0x20

if (arg6 != 2)
    int32_t var_28
    
    if (arg3 != 0)
        sub_1428daf50(nullptr, &var_28, nullptr, arg3)
    
    if (arg3 != 0 && var_28 != 0xffffffff)
        sub_1428a5670(0x10, 0x10a, 0x66, "crypto\ec\ecx_meth.c", 0x3a)
        return 0
    
    int32_t rax_3
    
    if (arg4 != 0)
        if (arg2 == 0x40a || arg2 == 0x43f)
            rax_3 = 0x20
        else
            int32_t rax_2
            rax_2.b = arg2 != 0x40b
            rax_3 = rax_2 + 0x38
    
    if (arg4 == 0 || arg5 != rax_3)
        sub_1428a5670(0x10, 0x10a, 0x66, "crypto\ec\ecx_meth.c", 0x40)
        return 0

char* rax_4 = sub_1428a6a70(0x48)

if (rax_4 == 0)
    sub_1428a5670((&rax_4[0x10]).d, 0x10a, (&rax_4[0x41]).d, "crypto\ec\ecx_meth.c", 0x47)
    return 0

if (arg6 != 0)
    uint64_t rcx_3
    
    if (arg2 == 0x40a || arg2 == 0x43f)
        rcx_3 = 0x20
    else
        int64_t rcx_2
        rcx_2.b = arg2 != 0x40b
        rcx_3 = rcx_2 + 0x38
    
    void* rax_5 = sub_1428a71b0(rcx_3)
    *(rax_4 + 0x40) = rax_5
    
    if (rax_5 == 0)
        sub_1428a5670((rax_5 + 0x10).d, 0x10a, (rax_5 + 0x41).d, "crypto\ec\ecx_meth.c", 0x51)
        sub_1428a6780(rax_4)
        return 0
    
    if (arg6 != 2)
        uint32_t count
        
        if (arg2 == 0x40a || arg2 == 0x43f)
            count = 0x20
        else
            int32_t rbp
            rbp.b = arg2 != 0x40b
            count = rbp + 0x38
        
        memcpy(rax_5, arg4, count)
    else
        if (arg2 != 0x40a && arg2 != 0x43f)
            int32_t r14_1
            r14_1.b = arg2 != 0x40b
            r14 = r14_1 + 0x38
        
        if (sub_142897c20(rax_5, zx.q(r14)) s<= 0)
            sub_1428a7190(rax_5)
            *(rax_4 + 0x40) = 0
            sub_1428a6780(rax_4)
            return 0
        
        if (arg2 == 0x40a)
            *rax_5 &= 0xf8
            *(rax_5 + 0x1f) &= 0x3f
            *(rax_5 + 0x1f) |= 0x40
        else if (arg2 == 0x40b)
            *rax_5 &= 0xfc
            *(rax_5 + 0x37) |= 0x80
    
    if (arg2 == 0x40a)
        sub_142942360(rax_4, rax_5)
    else if (arg2 == 0x40b)
        sub_14293dfa0(rax_4, rax_5)
    else if (arg2 == 0x43f)
        sub_142941e00(rax_4, rax_5)
    else if (arg2 == 0x440)
        sub_142941540(rax_4, rax_5)
else
    memcpy(rax_4, arg4, arg5)

sub_142896310(arg1, arg2, rax_4)
return 1
