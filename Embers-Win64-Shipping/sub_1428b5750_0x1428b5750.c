// 函数: sub_1428b5750
// 地址: 0x1428b5750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rbx = *(arg1 + 0x70)

switch (arg2)
    case 0
        if (rbx == 0)
            void* rax_2 = sub_1428a6a70(0x1c8)
            *(arg1 + 0x70) = rax_2
            rbx = rax_2
            
            if (rax_2 == 0)
                sub_1428a5670((rax_2 + 6).d, 0xb6, 0x86, "crypto\evp\e_chacha20_poly1305.c", 0x1fd)
                return 0
        
        *(rbx + 0xc4) = 0xc
        __builtin_memset(rbx + 0xa8, 0, 0x1c)
        *(rbx + 0xc8) = -1
        *(rbx + 0x94) = 0
        *(rbx + 0x9c) = 0
        return 1
    case 8
        if (rbx != 0)
            int64_t rax_3 = sub_1428a6af0(rbx, 0x1c8, "crypto\evp\e_chacha20_poly1305.c", 0x20f)
            arg4[0xe] = rax_3
            
            if (rax_3 == 0)
                sub_1428a5670((rax_3 + 6).d, 0xb6, 0xad, "crypto\evp\e_chacha20_poly1305.c", 0x211)
                return 0
        
        return 1
    case 9
        if (arg3 - 1 u> 0xf)
            return 0
        
        *(rbx + 0xc4) = arg3
        return 1
    case 0x10
        if (arg3 - 1 u> 0xf || *(arg1 + 0x10) == 0)
            return 0
        
        memcpy(arg4, rbx + 0x84, arg3)
        return 1
    case 0x11
        if (arg3 - 1 u> 0xf)
            return 0
        
        if (arg4 == 0)
            return 1
        
        memcpy(rbx + 0x84, arg4, arg3)
        *(rbx + 0xc0) = arg3
        return 1
    case 0x12
        if (arg3 != 0xc)
            return 0
        
        uint32_t rcx_9 =
            ((zx.d(*(arg4 + 3)) << 8 | zx.d(*(arg4 + 2))) << 8 | zx.d(*(arg4 + 1))) << 8
            | zx.d(*arg4)
        *(rbx + 0x24) = rcx_9
        *(rbx + 0x78) = rcx_9
        uint32_t rcx_16 =
            ((zx.d(*(arg4 + 7)) << 8 | zx.d(*(arg4 + 6))) << 8 | zx.d(*(arg4 + 5))) << 8
            | zx.d(*(arg4 + 4))
        *(rbx + 0x28) = rcx_16
        *(rbx + 0x7c) = rcx_16
        uint32_t rcx_23 =
            ((zx.d(*(arg4 + 0xb)) << 8 | zx.d(*(arg4 + 0xa))) << 8 | zx.d(*(arg4 + 9))) << 8
            | zx.d(arg4[1].b)
        *(rbx + 0x2c) = rcx_23
        *(rbx + 0x80) = rcx_23
        return zx.q(arg3 - 0xb)
    case 0x16
        if (arg3 == 0xd)
            *(rbx + 0x94) = *arg4
            *(rbx + 0x9c) = arg4[1].d
            *(rbx + 0xa0) = *(arg4 + 0xc)
            uint32_t rcx_28 = zx.d(*(arg4 + 0xb)) << 8 | zx.d(*(arg4 + 0xc))
            
            if (*(arg1 + 0x10) != 0)
                goto label_1428b5a01
            
            if (rcx_28 u>= 0x10)
                rcx_28 -= 0x10
                *(rbx + 0xa0) = rcx_28.b
                *(rbx + 0x9f) = (rcx_28 u>> 8).b
            label_1428b5a01:
                *(rbx + 0xc8) = zx.q(rcx_28)
                *(rbx + 0x24) = *(rbx + 0x78)
                int32_t rcx_36 = (((zx.d(*(rbx + 0x97)) << 8 | zx.d(*(rbx + 0x96))) << 8
                    | zx.d(*(rbx + 0x95))) << 8 | zx.d(*(rbx + 0x94))) ^ *(rbx + 0x7c)
                *(rbx + 0x28) = rcx_36
                int32_t rcx_44 = (((zx.d(*(rbx + 0x9b)) << 8 | zx.d(*(rbx + 0x9a))) << 8
                    | zx.d(*(rbx + 0x99))) << 8 | zx.d(*(rbx + 0x98))) ^ *(rbx + 0x80)
                *(rbx + 0x2c) = rcx_44
                *(rbx + 0xbc) = 0
                return 0x10
        
        return 0
    case 0x17
        return 1

return 0xffffffff
