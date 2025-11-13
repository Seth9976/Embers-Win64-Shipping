// 函数: sub_142a697b0
// 地址: 0x142a697b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 - 5 u> 0x10)
label_142a698f3:
    int32_t rax_17 = (*(*arg1 + 0x70))(arg1)
    int64_t r8_5 = *arg1
    return zx.q(sub_142a69610(arg1, arg2, (*(r8_5 + 0x90))(arg1, zx.q(arg2), r8_5), rax_17, arg3))

switch (arg2)
    case 5
        if (*arg3 s> 0)
            return 0
        
        int64_t* rax_3 = (*(*arg1 + 0x10))(arg1)
        
        if (rax_3 == 0)
            *arg3 = 7
            return 0
        
        rax_3[0x1d].b = 1
        (*(*rax_3 + 0xe8))(rax_3, zx.q(arg2), 0, arg3)
        int64_t rdi_1 = *arg1
        int32_t rax_5 = sub_142a695b0(rax_3, 2, arg3)
        int32_t rax_7 =
            (*(rdi_1 + 0x108))(arg1, zx.q(sub_142a695b0(rax_3, 0x13, arg3)), zx.q(rax_5))
        int64_t r8_3 = *rax_3
        (*r8_3)(rax_3, 1, r8_3)
        return zx.q(rax_7)
    case 6
        if (*arg3 s> 0)
            return 0
        
        int64_t* rax_9 = (*(*arg1 + 0x10))(arg1)
        
        if (rax_9 == 0)
            *arg3 = 7
            return 0
        
        rax_9[0x1d].b = 1
        (*(*rax_9 + 0xe8))(rax_9, zx.q(arg2), 0, arg3)
        int32_t rbx_2 = (*(*arg1 + 0x110))(arg1, zx.q(sub_142a695b0(rax_9, 0x13, arg3)))
        (**rax_9)(rax_9, 1)
        return zx.q(rbx_2)
    case 7, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x12, 0x14, 0x15
        return zx.q((*(*arg1 + 0x70))(arg1))
    case 8, 0x11, 0x13
        goto label_142a698f3
