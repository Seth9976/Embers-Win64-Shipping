// 函数: sub_142935a50
// 地址: 0x142935a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t i = arg2
char* rbx = arg1

if (arg2 != 0)
    do
        uint32_t rcx
        uint32_t arg_10
        
        if (arg3 == 0x1001)
            rcx = zx.d(*rbx)
            rbx = &rbx[1]
            i -= 1
            arg_10 = rcx
        else if (arg3 == 0x1002)
            uint32_t rax_2 = zx.d(*rbx) << 8
            arg_10 = rax_2
            uint32_t rcx_1 = zx.d(rbx[1])
            rbx = &rbx[2]
            rcx = rcx_1 | rax_2
            arg_10 = rcx
            i -= 2
        else if (arg3 != 0x1004)
            int32_t rax_8 = sub_1429342f0(rbx, i, &arg_10)
            
            if (rax_8 s< 0)
                return -1
            
            rcx = arg_10
            i -= rax_8
            rbx = &rbx[sx.q(rax_8)]
        else
            uint32_t rax_4 = zx.d(*rbx) << 0x18
            arg_10 = rax_4
            uint32_t rcx_4 = zx.d(rbx[1]) << 0x10 | rax_4
            arg_10 = rcx_4
            uint32_t rax_7 = zx.d(rbx[2]) << 8 | rcx_4
            arg_10 = rax_7
            uint32_t rcx_5 = zx.d(rbx[3])
            rbx = &rbx[4]
            rcx = rcx_5 | rax_7
            arg_10 = rcx
            i -= 4
        
        if (arg4 != 0)
            int32_t result = arg4(rcx, arg5)
            
            if (result s<= 0)
                return result
    while (i != 0)

return 1
