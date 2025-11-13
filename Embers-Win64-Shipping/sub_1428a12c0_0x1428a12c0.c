// 函数: sub_1428a12c0
// 地址: 0x1428a12c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rax = sub_1428ac6f0(arg1, arg3, 0xffffffff)
int32_t* rbx = nullptr
int32_t* rdi_1

if (rax s< 0)
    rdi_1 = nullptr
label_1428a133a:
    int32_t rax_4 = sub_1428ac6f0(arg2, arg3, 0xffffffff)
    
    if (rax_4 s< 0)
        goto label_1428a136c
    
    if (sub_1428ac6f0(arg2, arg3, rax_4) == 0xffffffff)
        rbx = sub_1428e74e0(sub_1428ac6d0(arg2, rax_4))
    label_1428a136c:
        
        if (rdi_1 != 0)
            if (rbx != 0 && sub_1428e6180(rdi_1, rbx) == 0)
                return 1
        else if (rbx == 0)
            return zx.q((rdi_1 + 1).d)
else if (sub_1428ac6f0(arg1, arg3, rax) == 0xffffffff)
    rdi_1 = sub_1428e74e0(sub_1428ac6d0(arg1, rax))
    goto label_1428a133a
return 0
