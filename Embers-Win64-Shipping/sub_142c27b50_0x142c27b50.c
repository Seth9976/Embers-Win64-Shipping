// 函数: sub_142c27b50
// 地址: 0x142c27b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 2).b == 0
        || (arg3 != 0 && (zx.d(*arg1) << 8) + zx.d(arg1[1]) u>= divu.dp.d(0:0xffffffff, arg3)))
    uint32_t rax
    rax.b = 0
    return rax

int32_t rdi_3 = ((zx.d(*arg1) << 8) + zx.d(arg1[1])) * arg3
uint32_t rax_2

if (rdi_3 u< 0x7fffffff)
    rax_2 = sub_142bf7510(arg2, &arg1[2], rdi_3 * 2)

if (rdi_3 u>= 0x7fffffff || rax_2.b == 0)
    rax_2.b = 0
else
    uint64_t rbx_1 = 0
    
    if (rdi_3 == 0)
    label_142c27c13:
        rax_2.b = 1
    else
        while (true)
            char* rdx_3 = &arg1[2 + (rbx_1 << 1)]
            char* rcx_5 = &data_14369a5d0
            
            if (rdx_3 u>= &arg1[2])
                rcx_5 = rdx_3
            
            if (sub_142c25b70(rcx_5, arg2, arg1).b == 0)
                rax_2.b = 0
                break
            
            rbx_1 = zx.q(rbx_1.d + 1)
            
            if (rbx_1.d u>= rdi_3)
                goto label_142c27c13

return rax_2
