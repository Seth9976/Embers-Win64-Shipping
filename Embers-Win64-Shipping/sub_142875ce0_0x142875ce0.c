// 函数: sub_142875ce0
// 地址: 0x142875ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rcx = sx.q(arg2)
int64_t rax = rcx * 5
int64_t* rbx = arg4 + (rax << 3)

if (*(arg4 + (rax << 3) + 0x10) != 0 && *(rbx + 0x14) == 0)
    *(rbx + 0x14) = 1
    
    if (arg2 u>= 0x1a)
        return sub_142856000(arg1, arg3, rbx[3].d, *rbx, rbx[1], arg5, arg6)
    
    if (sub_142875330(arg1, *(rcx * 0x38 + &data_1434e71e4), arg3) != 0)
        int64_t r10_1
        
        if (arg1[0xe] == 0)
            r10_1 = (&data_1434e71f8)[rcx * 7]
        else
            r10_1 = (&data_1434e71f0)[rcx * 7]
        
        if (r10_1 != 0)
            return r10_1(arg1, rbx, zx.q(arg3), arg5, arg6)
        
        return sub_142856000(arg1, arg3, rbx[3].d, *rbx, rbx[1], arg5, arg6)

return 1
