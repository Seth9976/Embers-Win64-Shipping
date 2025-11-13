// 函数: sub_142aa62e0
// 地址: 0x142aa62e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1

if (*arg3 s<= 0)
    int32_t rax_1 = sub_142aa3ce0(arg1, arg2)
    uint64_t rdx = zx.q(rax_1)
    
    if (rax_1 == 0xc0)
        rdi = rdi[4]
        rdx = zx.q(sub_142aa3ce0(rdi, arg2))
    
    if (rdx.b u< 0xc0)
        return zx.q((zx.d(rdx.b) | (rdx.d & 0xffffff00) << 8) << 8)
            | (zx.q(rdx.d) & 0xffffffffffff0000) << 0x20
    
    while (true)
        switch (rdx.d & 0xf)
            case 0, 3
                *arg3 = 5
                return 0
            case 1
                return (zx.q(rdx.d) & 0xffffffffffffff00) << 0x20 | 0x5000500
            case 2
                return zx.q(rdx.d) & 0xffffff00
            case 4, 7, 8, 9, 0xc, 0xd
                break
            case 5
                if ((rdx.d & 0x1f00) != 0x100)
                    break
                
                rdx = zx.q(*(rdi[1] + (zx.q(rdx.d) u>> 0xd << 2)))
            case 6
                if ((rdx.d & 0x1f00) == 0x100)
                    return *(rdi[2] + (zx.q(rdx.d) u>> 0xd << 3))
                
                break
                break
            case 0xa
                rdx = zx.q(*(rdi[1] + (zx.q(rdx.d) u>> 0xd << 2)))
            case 0xb
                rdx = zx.q(*rdi[1])
            case 0xe
                return zx.q(sub_142b2c2e0(arg2, *(rdi[2] + (rdx u>> 0xd << 3)))) << 0x20 | 0x5000500
            case 0xf
                return zx.q(sub_142b2c470(arg2)) << 0x20 | 0x5000500
        
        if ((rdx.d & 0xf) == 4 || (rdx.d & 0xf) == 7 || (rdx.d & 0xf) == 8 || (rdx.d & 0xf) == 9
                || (rdx.d & 0xf) == 0xc || (rdx.d & 0xf) == 0xd)
            break
        
        if (rdx.b u< 0xc0)
            return zx.q((zx.d(rdx.b) | (rdx.d & 0xffffff00) << 8) << 8)
                | (zx.q(rdx.d) & 0xffffffffffff0000) << 0x20
    
    *arg3 = 0x10

return 0
