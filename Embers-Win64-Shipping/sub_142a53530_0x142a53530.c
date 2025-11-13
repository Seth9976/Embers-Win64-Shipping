// 函数: sub_142a53530
// 地址: 0x142a53530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg1)
char rdi = 0
int32_t rcx

if (r10.d u< 0xd800)
    rcx = (r10.d & 0x1f) + (zx.d(*((r10 s>> 5 << 1) + &data_143614790)) << 2)
else if (r10.d u<= 0xffff)
    int32_t rcx_1 = 0
    
    if (r10.d s<= 0xdbff)
        rcx_1 = 0x140
    
    rcx = (r10.d & 0x1f) + (zx.q(*((sx.q((r10.d s>> 5) + rcx_1) << 1) + &data_143614790)) << 2).d
else if (r10.d u> 0x10ffff)
    rcx = 0xd58
else if (r10.d s< 0xe0800)
    rcx = (r10.d & 0x1f) + (zx.q(*((
        zx.q(zx.d(*((sx.q((r10.d s>> 0xb) + 0x820) << 1) + &data_143614790)) + (r10.d s>> 5 & 0x3f))
        << 1) + &data_143614790)) << 2).d
else
    rcx = 0x2fd0

int16_t r8 = *((zx.q(rcx) << 1) + &data_143614790)
int32_t r11

if ((r8.b & 8) == 0)
    if ((r8.b & 2) == 0)
        r11 = not.d(r10.d)
    else
        r11 = (sx.d(r8) s>> 7) + r10.d
    label_142a5379e:
        
        if (r11 == r10.d)
            r11 = not.d(r11)
    
    return zx.q(r11)

int16_t rdx = *((zx.q(r8) u>> 4 << 1) + &data_14361a740)

if (rdx s>= 0)
    if (rdx.b s< 0)
        uint64_t rax_24 = zx.q(*((zx.q(rdx) & 0x7f) + 0x14361b7d0))
        uint32_t rcx_5
        void* r11_3
        
        if ((0x100 & rdx) != 0)
            void* r11_4 = (zx.q(r8) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp + (rax_24 << 2)
            r11_3 = r11_4 + 2
            rcx_5 =
                zx.d(*((zx.q(r8) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp + (rax_24 << 2)))
                << 0x10 | zx.d(*(r11_4 + 2))
        else
            rcx_5 =
                zx.d(*((zx.q(r8) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp + (rax_24 << 1)))
            r11_3 = (zx.q(r8) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp + (rax_24 << 1)
        
        int32_t rcx_9 = rcx_5 s>> 4 & 0xf
        
        if (rcx_9 != 0)
            *arg2 = r11_3 + (((zx.q(rcx_5) & 0xf) + 1) << 1)
            return zx.q(rcx_9)
else if ((arg3 & 7) != 0)
    if (r10.d == 0x49)
        return 0x131
    
    if (r10.d == 0x130)
        return 0x69
else
    if (r10.d == 0x49)
        return 0x69
    
    if (r10.d == 0x130)
        *arg2 = &data_14361a738
        return 2

if ((0x200 & rdx) != 0)
    return zx.q(not.d(r10.d))

if ((rdx.b & 0x10) != 0 && (r8.b & 2) != 0)
    uint64_t rax_32 = zx.q(*((zx.q(rdx) & 0xf) + 0x14361b7d0))
    uint32_t r8_1
    
    if ((0x100 & rdx) != 0)
        r8_1 = zx.d(*((zx.q(r8) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp + (rax_32 << 2) + 2))
            | zx.d(*((zx.q(r8) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp + (rax_32 << 2)))
            << 0x10
    else
        r8_1 = zx.d(*((zx.q(r8) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp + (rax_32 << 1)))
    
    int32_t r10_1
    
    if ((0x400 & rdx) != 0)
        r10_1 = r10.d - r8_1
    else
        r10_1 = r10.d + r8_1
    
    return zx.q(r10_1)

if ((rdx.b & 2) != 0)
    rdi = 1
else if ((1 & rdx.b) == 0)
    return zx.q(not.d(r10.d))

uint64_t rax_36 = zx.q(*((sx.q((1 << rdi) - 1) & zx.q(rdx)) + 0x14361b7d0))

if ((0x100 & rdx) != 0)
    r11 = zx.d(*((zx.q(r8) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp + (rax_36 << 2) + 2))
        | zx.d(*((zx.q(r8) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp + (rax_36 << 2))) << 0x10
else
    r11 = zx.d(*((zx.q(r8) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp + (rax_36 << 1)))

goto label_142a5379e
