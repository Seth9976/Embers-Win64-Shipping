// 函数: sub_1428bf6e0
// 地址: 0x1428bf6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rdx = *arg1
int32_t var_18_1
int32_t r8

if (*(rdx + 0x90) != 0)
    int32_t rax_1
    int32_t rcx
    
    if (rdx == *arg2)
        rax_1 = arg1[4].d
        
        if (rax_1 != 0)
            rcx = arg2[1].d
    
    if (rdx == *arg2 && (rax_1 == 0 || rcx == 0 || rax_1 == rcx))
        int64_t r8_1 = *(rdx + 0xc8)
        int32_t var_18
        int32_t rcx_1
        int32_t rdx_1
        int32_t r8_2
        
        if (r8_1 == 0)
            rdx_1 = (r8_1 + 0x76).d
            var_18 = 0x33f
            rcx_1 = rdx_1 - 0x66
            r8_2 = rdx_1 - 0x34
        label_1428bf76c:
            sub_1428a5670(rcx_1, rdx_1, r8_2, "crypto\ec\ec_lib.c", var_18)
            var_18.q = arg5
            return (*(*arg1 + 0x90))(arg1, arg2, arg3, arg4, var_18)
        
        int32_t rcx_3
        
        if (rax_1 != 0)
            rcx_3 = arg2[1].d
        
        if (rax_1 != 0 && rcx_3 != 0 && rax_1 != rcx_3)
            rdx_1 = 0x76
            var_18 = 0x343
            rcx_1 = 0x10
            r8_2 = 0x65
            goto label_1428bf76c
        
        if (r8_1(arg1, arg2) == 0)
            var_18.q = arg5
            return (*(*arg1 + 0x90))(arg1, arg2, arg3, arg4, var_18)
        
        var_18_1 = 0x2f9
        r8 = 0x6a
    else
        var_18_1 = 0x2f5
        r8 = 0x65
else
    var_18_1 = 0x2f1
    r8 = 0x42

sub_1428a5670(0x10, 0x125, r8, "crypto\ec\ec_lib.c", var_18_1)
return 0
