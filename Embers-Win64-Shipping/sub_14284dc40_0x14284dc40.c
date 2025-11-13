// 函数: sub_14284dc40
// 地址: 0x14284dc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int64_t r11 = sx.q(arg3)

if (arg1 != 0)
    if (arg2 - 0x10 u> 0x73)
        jump(*(*arg1 + 0x88))
    
    switch (arg2)
        case 0x10
            arg1[0x29] = arg4
            return 1
        case 0x11, 0x12, 0x13, 0x20, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x2e, 0x2f, 0x30, 0x31, 
                0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 
                0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4f, 0x50, 0x51, 
                0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 
                0x60, 0x61, 0x62, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 
                0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7f, 0x80, 0x81
            jump(*(*arg1 + 0x88))
        case 0x14
            return sub_1428a8d00(arg1[5]) __tailcall
        case 0x15
            return zx.q(arg1[0xd].d)
        case 0x16
            return zx.q(arg1[0xe].d)
        case 0x17
            return zx.q(*(arg1 + 0x6c))
        case 0x18
            return zx.q(*(arg1 + 0x74))
        case 0x19
            return zx.q(*(arg1 + 0x7c))
        case 0x1a
            return zx.q(arg1[0xf].d)
        case 0x1b
            return zx.q(*(arg1 + 0x8c))
        case 0x1c
            return zx.q(arg1[0x12].d)
        case 0x1d
            return zx.q(arg1[0x10].d)
        case 0x1e
            return zx.q(*(arg1 + 0x84))
        case 0x1f
            return zx.q(arg1[0x11].d)
        case 0x21
            int32_t rax_28 = *(arg1 + 0x11c) | r11.d
            *(arg1 + 0x11c) = rax_28
            return rax_28
        case 0x28
            return zx.q(arg1[0x27].d)
        case 0x29
            arg1[0x27].d = r11.d
            return zx.q(arg1[0x27].d)
        case 0x2a
            if (r11.d s>= 0)
                uint64_t rax_11 = zx.q(arg1[6].d)
                arg1[6] = r11
                return rax_11
        case 0x2b
            return zx.q(arg1[6].d)
        case 0x2c
            arg1[9].d = r11.d
            return zx.q(arg1[9].d)
        case 0x2d
            return zx.q(arg1[9].d)
        case 0x32
            return zx.q(arg1[0x25].d)
        case 0x33
            if (r11.d s>= 0)
                uint64_t rax_10 = zx.q(arg1[0x25].d)
                arg1[0x25] = r11
                return rax_10
        case 0x34
            if ((r11 - 0x200).d u<= 0x3e00)
                arg1[0x38] = r11
                
                if (r11 u< arg1[0x37])
                    arg1[0x37] = r11
                
                return 1
        case 0x4e
            int32_t r11_4 = not.d(r11.d) & *(arg1 + 0x11c)
            *(arg1 + 0x11c) = r11_4
            return zx.q(r11_4)
        case 0x63
            void* rcx_5 = arg1[0x26]
            int32_t rax_38 = *(rcx_5 + 0x1c) | r11.d
            *(rcx_5 + 0x1c) = rax_38
            return rax_38
        case 0x64
            void* rax_39 = arg1[0x26]
            int32_t r11_6 = not.d(r11.d) & *(rax_39 + 0x1c)
            *(rax_39 + 0x1c) = r11_6
            return zx.q(r11_6)
        case 0x7b
            if (sub_142851af0(r11.d, *(arg1 + 0x124)) != 0
                    && sub_14285f650(**arg1, r11.d, &arg1[0x24]) != 0)
                return 1
        case 0x7c
            int32_t rdx_5 = r11.d
            
            if (sub_142851af0(arg1[0x24].d, rdx_5) != 0
                    && sub_14285f650(**arg1, rdx_5, arg1 + 0x124) != 0)
                return 1
        case 0x7d
            if (r11 u<= arg1[0x38] && r11.d != 0)
                arg1[0x37] = r11
                return 1
        case 0x7e
            if ((r11 - 1).d u<= 0x1f)
                arg1[0x39] = r11
                return 1
        case 0x82
            return zx.q(arg1[0x24].d)
        case 0x83
            return zx.q(*(arg1 + 0x124))
else
    if (arg2 == 0x5c)
        return sub_142865a40(nullptr, nullptr, arg4) __tailcall
    
    if (((arg2 - 0x62) & 0xfffffffb) == 0)
        return sub_142866330(arg1, arg4, 0) __tailcall

return 0
