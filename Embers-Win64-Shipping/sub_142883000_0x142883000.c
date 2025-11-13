// 函数: sub_142883000
// 地址: 0x142883000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rax = sub_14285b4e0(arg1)
int32_t rdi = 0

if (rax == 0)
    if (arg15 == 0)
        sub_1428a5670(0x14, 0x11c, 0x44, "ssl\t1_enc.c", 0x26)
        return 0
    
    sub_142856580(arg1, (rax + 0x50).d, 0x11c, (rax + 0x44).d, "ssl\t1_enc.c", 0x24)
    return 0

int64_t* rax_2 = sub_1428bcf50(0x3fd, nullptr)

if (rax_2 == 0)
label_14288324b:
    
    if (arg15 == 0)
        sub_1428a5670(0x14, 0x11c, 0x44, "ssl\t1_enc.c", 0x37)
    else
        sub_142856580(arg1, 0x50, 0x11c, 0x44, "ssl\t1_enc.c", 0x35)
else
    if (sub_1428bd580(rax_2) s<= 0)
        goto label_14288324b
    
    int32_t var_20
    var_20.q = rax
    
    if (sub_1428bcb30(rax_2, 0xffffffff, 0x400, 0x1000, 0, var_20) s<= 0)
        goto label_14288324b
    
    var_20.q = arg12
    
    if (sub_1428bcb30(rax_2, 0xffffffff, 0x400, 0x1001, arg13, var_20) s<= 0)
        goto label_14288324b
    
    var_20.q = arg2
    
    if (sub_1428bcb30(rax_2, 0xffffffff, 0x400, 0x1002, arg3, var_20) s<= 0)
        goto label_14288324b
    
    var_20.q = arg4
    
    if (sub_1428bcb30(rax_2, 0xffffffff, 0x400, 0x1002, arg5, var_20) s<= 0)
        goto label_14288324b
    
    var_20.q = arg6
    
    if (sub_1428bcb30(rax_2, 0xffffffff, 0x400, 0x1002, arg7, var_20) s<= 0)
        goto label_14288324b
    
    var_20.q = arg8
    
    if (sub_1428bcb30(rax_2, 0xffffffff, 0x400, 0x1002, arg9, var_20) s<= 0)
        goto label_14288324b
    
    var_20.q = arg10
    
    if (sub_1428bcb30(rax_2, 0xffffffff, 0x400, 0x1002, arg11, var_20) s<= 0)
        goto label_14288324b
    
    int64_t arg_78
    
    if (sub_1428bd400(rax_2, arg14, &arg_78) s<= 0)
        goto label_14288324b
    
    rdi = 1

sub_1428bcda0(rax_2)
return zx.q(rdi)
