// 函数: sub_142911290
// 地址: 0x142911290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rbx = *(arg1 + 0x28)
int64_t rdi = sx.q(arg3)

if (arg2 s> 0x1001)
    if (arg2 - 0x1002 u<= 0xe)
        switch (arg2)
            case 0x1002
                if (rbx[2] == 0)
                    rbx[1] = rdi.d
                    return 1
            case 0x1003
                if ((rdi - 1).d u<= 2 && rbx[9] == 0)
                    rbx[8] = rdi.d
                    return 1
            case 0x1004
                if (rbx[2] != 0)
                    rbx[3] = rdi.d
                    return 1
            case 0x1005
                if (rdi.d u<= 2)
                    rbx[2] = rdi.d
                    return 1
            case 0x1006
                if (rdi.d == 0xfffffffe)
                    return zx.q(sx.d(rbx[0xc].b))
                
                if ((rdi - 1).d u<= 1)
                    rbx[0xc].b = rdi.b
                    return 1
            case 0x1007
                *(rbx + 0x40) = arg4
                return 1
            case 0x1008
                *arg4 = *(rbx + 0x40)
                return 1
            case 0x1009
                if (arg3 s> 0)
                    *(rbx + 0x58) = rdi
                    return 1
            case 0x100a
                *arg4 = rbx[0x16]
                return 1
            case 0x100b
                sub_1428a6780(*(rbx + 0x48))
                *(rbx + 0x48) = arg4
                int64_t rax_20 = rdi
                
                if (arg4 == 0)
                    rax_20 = 0
                
                *(rbx + 0x50) = rax_20
                return 1
            case 0x100c
                *arg4 = *(rbx + 0x48)
                return zx.q(rbx[0x14])
            case 0x100d
                sub_1428cd400(*(rbx + 0x38))
                *(rbx + 0x38) = arg4
                return 1
            case 0x100e
                *arg4 = *(rbx + 0x38)
                return 1
            case 0x100f
                if (arg3 s> 0 && rbx[8] == 0)
                    rbx[9] = rdi.d
                    return 1
            case 0x1010
                rbx[4] = rdi.d
                return 1
else if (arg2 == 0x1001)
    if (rdi.d s>= 0x100)
        *rbx = rdi.d
        return 1
else if (arg2 == 2)
    return zx.q(arg2 - 1)

return 0xfffffffe
