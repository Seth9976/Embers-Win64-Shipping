// 函数: sub_142a5db30
// 地址: 0x142a5db30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1

if (*arg4 s<= 0)
    int64_t* r8 = arg1[0x2e]
    
    if (r8 == 0)
        *arg4 = 7
        return arg1
    
    if (arg2 s> 0x1000)
        if (arg2 != 0x1001)
            if (arg2 == 0x1002)
                (*(*arg1 + 0x210))(arg1, zx.q(arg3.b))
                return rbx
            
            if (arg2 == 0x1003)
                sub_142a5eb40(arg1, arg3.b)
                return rbx
            
            if (arg2 == 0x1004)
                sub_142a5eeb0(arg1, arg3.b)
                return rbx
            
            *arg4 = 0x10
            return rbx
        
        void* rax_47 = *r8
        arg1.b = arg3.b != 0
        
        if (arg1.b != *(rax_47 + 0x1d4))
            *(rax_47 + 0x1d4) = arg1.b
            int32_t arg_20 = 0
            sub_142a5f4f0(rbx, &arg_20)
    else
        if (arg2 == 0x1000)
            sub_142a5e300(arg1, arg3.b)
            return rbx
        
        if (arg2 u> 0x17)
            *arg4 = 0x10
            return rbx
        
        switch (arg2)
            case 0
                (*(*rbx + 0xb0))(rbx, arg3 != 0)
            case 1
                (*(*rbx + 0xc8))(rbx, arg3 != 0)
            case 2
                (*(*rbx + 0x208))(rbx, arg3 != 0)
            case 3
                (*(*rbx + 0xd0))(rbx, zx.q(arg3))
            case 4
                (*(*rbx + 0xd8))(rbx, zx.q(arg3))
            case 5
                (*(*rbx + 0xd8))(rbx, zx.q(arg3))
                (*(*rbx + 0xd0))(rbx, zx.q(arg3))
            case 6
                (*(*rbx + 0xe0))(rbx, zx.q(arg3))
            case 7
                (*(*rbx + 0xe8))(rbx, zx.q(arg3))
            case 8
                (*(*rbx + 0xe8))(rbx, zx.q(arg3))
                (*(*rbx + 0xe0))(rbx, zx.q(arg3))
            case 9
                (*(*rbx + 0x180))(rbx, zx.q(arg3))
            case 0xa
                (*(*rbx + 0x1f8))(rbx, zx.q(arg3))
            case 0xb
                (*(*rbx + 0x110))(rbx, zx.q(arg3))
            case 0xc
                *arg4 = 0x10
            case 0xd
                (*(*rbx + 0x1a0))(rbx, zx.q(arg3))
            case 0xe
                (*(*rbx + 0x1c0))(rbx, zx.q(arg3))
            case 0xf
                (*(*rbx + 0x200))(rbx, zx.q(arg3))
            case 0x10
                sub_142a5eef0(rbx, arg3 != 0)
            case 0x11
                sub_142a5e700(rbx, arg3)
            case 0x12
                sub_142a5e560(rbx, arg3)
            case 0x13
                (*(*rbx + 0xb8))(rbx, arg3 != 0)
            case 0x14
                void* rax_37 = *r8
                
                if (arg3 != *(rax_37 + 0x1d8))
                    *(rax_37 + 0x1d8) = arg3
            case 0x15
                sub_142a5e810(rbx, arg3)
            case 0x16
                sub_142a5e660(rbx, arg3)
            case 0x17
                sub_142a5e120(rbx, arg3, arg4)

return rbx
