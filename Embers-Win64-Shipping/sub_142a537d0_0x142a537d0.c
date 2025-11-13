// 函数: sub_142a537d0
// 地址: 0x142a537d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1)
int64_t r12 = arg3
int32_t rdi = rbx.d
int32_t rcx

if (rbx.d u< 0xd800)
    rcx = (rbx.d & 0x1f) + (zx.d(*((rbx s>> 5 << 1) + &data_143614790)) << 2)
else if (rbx.d u<= 0xffff)
    int32_t rcx_1 = 0
    
    if (rbx.d s<= 0xdbff)
        rcx_1 = 0x140
    
    rcx = (rbx.d & 0x1f) + (zx.q(*((sx.q((rbx.d s>> 5) + rcx_1) << 1) + &data_143614790)) << 2).d
else if (rbx.d u> 0x10ffff)
    rcx = 0xd58
else if (rbx.d s< 0xe0800)
    rcx = (rbx.d & 0x1f) + (zx.q(*((
        zx.q(zx.d(*((sx.q((rbx.d s>> 0xb) + 0x820) << 1) + &data_143614790)) + (rbx.d s>> 5 & 0x3f))
        << 1) + &data_143614790)) << 2).d
else
    rcx = 0x2fd0

int16_t r15 = *((zx.q(rcx) << 1) + &data_143614790)

if ((r15.b & 8) != 0)
    int16_t rbp_1 = *((zx.q(r15) u>> 4 << 1) + &data_14361a740)
    
    if ((0x4000 & rbp_1) == 0)
        if (rbp_1.b s< 0)
            uint64_t rax_34 = zx.q(*((zx.q(rbp_1) & 0x7f) + 0x14361b7d0))
            uint32_t rax_35
            void* rdx_5
            
            if ((0x100 & rbp_1) != 0)
                rdx_5 = &((zx.q(r15) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp)[rax_34 * 2 + 1]
                rax_35 =
                    zx.d(((zx.q(r15) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp)[rax_34 * 2])
                    << 0x10 | zx.d(*rdx_5)
            else
                rdx_5 = &((zx.q(r15) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp)[rax_34]
                rax_35 = zx.d(((zx.q(r15) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp)[rax_34])
            
            int32_t rax_27 = rax_35 & 0xf
            
            if (rax_27 != 0)
                *arg4 = rdx_5 + 2
                return rax_27
    else if (arg5 == 3)
        if ((rbx - 0x49).d u> 1 && rbx.d != 0x12e)
            if ((rbx - 0xcc).d u<= 1 || rbx.d == 0x128)
                goto label_142a53938
            
            goto label_142a53a3c
        
        char rax_23
        rax_23, arg3 = sub_142a52110(arg2, r12)
        
        if (rax_23 == 0 && (rbx - 0xcc).d u> 1 && rbx.d != 0x128)
            goto label_142a53a3c
        
    label_142a53938:
        
        if (rbx.d - 0x49 u> 0xe5)
            return 0
        
        switch (rbx.d)
            case 0x49
                *arg4 = &data_14361a738
                return 2
            case 0x4a
                *arg4 = &data_14361a73c
                return 2
            case 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 
                    0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 
                    0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 
                    0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 
                    0x7f, 0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 
                    0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 
                    0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 
                    0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 
                    0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0xbc, 0xbd, 0xbe, 0xbf, 
                    0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xce, 
                    0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 
                    0xdc, 0xdd, 0xde, 0xdf, 0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 
                    0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef, 0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 
                    0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff, 0x100, 0x101, 
                    0x102, 0x103, 0x104, 0x105, 0x106, 0x107, 0x108, 0x109, 0x10a, 0x10b, 0x10c, 
                    0x10d, 0x10e, 0x10f, 0x110, 0x111, 0x112, 0x113, 0x114, 0x115, 0x116, 0x117, 
                    0x118, 0x119, 0x11a, 0x11b, 0x11c, 0x11d, 0x11e, 0x11f, 0x120, 0x121, 0x122, 
                    0x123, 0x124, 0x125, 0x126, 0x127, 0x129, 0x12a, 0x12b, 0x12c, 0x12d
                return 0
            case 0xcc
                *arg4 = &data_14361b7b8
                return 3
            case 0xcd
                *arg4 = &data_14361b7c0
                return 3
            case 0x128
                *arg4 = &data_14361b7c8
                return 3
            case 0x12e
                *arg4 = &data_14361b734
                return 2
    else if (arg5 != 2)
    label_142a53a3c:
        
        if (rbx.d == 0x130)
            *arg4 = &data_14361a738
            return 2
        
        if (rbx.d == 0x3a3)
            arg3.b = 1
            
            if (sub_142a51eb0(arg2, r12, arg3.b) == 0 && sub_142a51eb0(arg2, r12, 0xff) != 0)
                return (rbx + 0x1f).d
    else
        if (rbx.d == 0x130)
            return 0x69
        
        if (rbx.d != 0x307)
            if (rbx.d != 0x49)
                goto label_142a53a3c
            
            if (sub_142a51fc0(arg2, r12) == 0)
                return 0x131
        else if (sub_142a52390(arg2, r12) != 0)
            *arg4 = nullptr
            return 0
    
    if ((rbp_1.b & 0x10) != 0 && (r15.b & 2) != 0)
        uint32_t rax_38 = zx.d(rbp_1)
        uint32_t rcx_14
        
        if ((0x100 & rbp_1) != 0)
            uint64_t rax_42 = zx.q(*((zx.q(rax_38) & 0xf) + 0x14361b7d0))
            rcx_14 = zx.d(((zx.q(r15) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp)[rax_42 * 2])
                << 0x10
                | zx.d(((zx.q(r15) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp)[rax_42 * 2 + 1])
        else
            rcx_14 = zx.d(((zx.q(r15) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp)[zx.q(
                *((zx.q(rax_38) & 0xf) + 0x14361b7d0))])
        
        if ((0x400 & rbp_1) != 0)
            return rbx.d - rcx_14
        
        return rbx.d + rcx_14
    
    if ((rbp_1.b & 1) != 0)
        rdi = zx.d(*((zx.q(r15) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp))
        
        if ((0x100 & rbp_1) != 0)
            rdi = rdi << 0x10 | zx.d(*((zx.q(r15) u>> 4 << 1) + 0x361a742 + &__dos_header.e_cblp))
        
        goto label_142a53b46
else if ((r15.b & 2) != 0)
    rdi = (sx.d(r15) s>> 7) + rbx.d
label_142a53b46:
    
    if (rdi != rbx.d)
        return rdi

return not.d(rdi)
