// 函数: sub_142a524d0
// 地址: 0x142a524d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1)
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

int16_t rsi = *((zx.q(rcx) << 1) + &data_143614790)
int32_t r10

if ((rsi.b & 8) == 0)
    if ((rsi.b & 3) != 1)
        r10 = not.d(rbx.d)
    else
        r10 = (sx.d(rsi) s>> 7) + rbx.d
    label_142a52769:
        
        if (r10 == rbx.d)
            r10 = not.d(r10)
    
    return zx.q(r10)

int16_t rdi_1 = *((zx.q(rsi) u>> 4 << 1) + &data_14361a740)
int64_t r14_3 = (zx.q(rsi) u>> 4 << 1) + 0x361a740 + &__dos_header.e_cblp

if ((0x4000 & rdi_1) == 0)
    if (rdi_1.b s< 0)
        uint64_t rax_27 = zx.q(*((zx.q(rdi_1) & 0x7f) + 0x14361b7d0))
        void* rcx_6
        uint32_t rdx_1
        
        if ((0x100 & rdi_1) != 0)
            void* rcx_7 = r14_3 + (rax_27 << 2)
            rcx_6 = rcx_7 + 2
            rdx_1 = zx.d(*(r14_3 + (rax_27 << 2))) << 0x10 | zx.d(*(rcx_7 + 2))
        else
            rdx_1 = zx.d(*(r14_3 + (rax_27 << 1)))
            rcx_6 = r14_3 + (rax_27 << 1)
        
        int32_t rdx_4 = rdx_1 s>> 4
        int32_t rdx_5 = rdx_4 s>> 4
        void* r8_3 = rcx_6 + ((zx.q(rdx_1) & 0xf) << 1) + (((zx.q(rdx_4) & 0xf) + 1) << 1)
        
        if (arg6 == 0)
            uint64_t rcx_10 = zx.q(rdx_5) & 0xf
            rdx_5 s>>= 4
            r8_3 += rcx_10 << 1
        
        int32_t rdx_6 = rdx_5 & 0xf
        
        if (rdx_6 != 0)
            *arg4 = r8_3
            return zx.q(rdx_6)
else if (arg5 != 2)
    if (arg5 == 3 && rbx.d == 0x307 && sub_142a52250(arg2, arg3) != 0)
        *arg4 = 0
        return 0
else if (rbx.d == 0x69)
    return 0x130

if ((rdi_1.b & 0x10) != 0)
    rsi.b &= 3

if ((rdi_1.b & 0x10) != 0 && rsi.b == 1)
    uint64_t rax_33 = zx.q(*((zx.q(rdi_1) & 0xf) + 0x14361b7d0))
    uint32_t rcx_11
    
    if ((0x100 & rdi_1) != 0)
        rcx_11 = zx.d(*(r14_3 + (rax_33 << 2))) << 0x10 | zx.d(*(r14_3 + (rax_33 << 2) + 2))
    else
        rcx_11 = zx.d(*(r14_3 + (rax_33 << 1)))
    
    int32_t rbx_1
    
    if ((0x400 & rdi_1) != 0)
        rbx_1 = rbx.d - rcx_11
    else
        rbx_1 = rbx.d + rcx_11
    
    return zx.q(rbx_1)

char rcx_14

if (arg6 != 0 || (rdi_1.b & 8) == 0)
    if ((rdi_1.b & 4) == 0)
        return zx.q(not.d(rbx.d))
    
    rcx_14 = 2
else
    rcx_14 = 3

uint64_t rax_38 = zx.q(*((sx.q((1 << rcx_14) - 1) & zx.q(rdi_1)) + 0x14361b7d0))

if ((0x100 & rdi_1) != 0)
    r10 = zx.d(*(r14_3 + (rax_38 << 2))) << 0x10 | zx.d(*(r14_3 + (rax_38 << 2) + 2))
else
    r10 = zx.d(*(r14_3 + (rax_38 << 1)))

goto label_142a52769
