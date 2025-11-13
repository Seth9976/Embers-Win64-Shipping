// 函数: sub_1403dd0d0
// 地址: 0x1403dd0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x168) = 0
uint32_t rcx
uint32_t rdx
rcx, rdx = sub_1403c63e0(arg1)
int32_t rdi
int32_t r8

if (*(arg1 + 0x25b) == 0)
    *(arg1 + 0x1e0) = *(arg1 + 0x1dc)
    r8 = *(arg1 + 0x15c)
    rdi = *(arg1 + 0x1d8)
    *(arg1 + 0x1f0) = rdi
else
    r8 = *(arg1 + 0x15c)
    rdi = *(arg1 + 0x1d8)
    uint32_t rax = *(arg1 + 0x1dc)
    uint32_t rcx_2 = (rax + 7) u>> 3
    
    if ((r8.b & 2) != 0)
        rcx_2 = rax
    
    *(arg1 + 0x1e0) = rcx_2
    uint64_t rax_1 = zx.q(*(arg1 + 0x25c))
    rcx = *(&data_1436aff60 + (rax_1 << 2))
    *(arg1 + 0x1f0) = divu.dp.d(0:(not.d(*(&data_1436aff40 + (rax_1 << 2))) + rcx + rdi), rcx)

uint32_t rax_5
rax_5.b = *(arg1 + 0x261)

if ((r8.b & 4) != 0)
    rcx.b = 8
    
    if (*(arg1 + 0x25f) u>= 8)
        rcx = rax_5
    
    rax_5 = rcx

uint32_t rax_6 = zx.d(rax_5.b)

if ((r8 & 0x1000) != 0)
    rcx.b = *(arg1 + 0x25e)
    
    if (rcx.b == 0)
        uint32_t rdx_3 = 8
        
        if (rax_6 u> 8)
            rdx_3 = rax_6
        
        rcx.b = *(arg1 + 0x252) != 0
        rax_6 = rdx_3 << rcx.b
        
        if ((r8 & 0x200) != 0)
            goto label_1403dd196
    else if (rcx.b == 2)
        if (*(arg1 + 0x252) == 0)
            goto label_1403dd18d
        
        rax_6 = (rax_6 * 0x2aaac) u>> 0x11
        
        if ((r8 & 0x200) != 0)
            goto label_1403dd196
    else
        if (rcx.b != 3)
            goto label_1403dd18d
        
        int64_t rax_7
        rax_7.b = *(arg1 + 0x252) != 0
        rax_6 = ((rax_7 << 3) + 0x18).d
        
        if ((r8 & 0x200) != 0)
            goto label_1403dd196
else
label_1403dd18d:
    
    if ((r8 & 0x200) != 0)
    label_1403dd196:
        
        if ((r8 & 0x1000) != 0)
            rcx.b = *(arg1 + 0x25f) u< 0x10
            rax_6 <<= rcx.b
        else
            *(arg1 + 0x15c) = r8 & 0xfffffdff

int32_t r8_2 = *(arg1 + 0x15c)

if (r8_2.w s< 0)
    rdx.b = *(arg1 + 0x25e)
    
    if (rdx.b == 3)
        rax_6 = 0x20
        
        if ((r8_2 & 0x4000) != 0)
            goto label_1403dd29e
        
        goto label_1403dd2d0
    
    if (rdx.b == 2)
        int32_t rdx_4
        rdx_4.b = rax_6 s> 0x20
        rax_6 = (rdx_4 << 5) + 0x20
    else if (rdx.b == 0)
        int32_t rdx_1
        rdx_1.b = rax_6 s> 8
        rax_6 = (rdx_1 << 4) + 0x10
    
    goto label_1403dd28d

label_1403dd28d:

if ((r8_2 & 0x4000) == 0)
    goto label_1403dd2d0

label_1403dd29e:
rdx.b = *(arg1 + 0x252) != 0

if (r8_2.w s< 0 || ((r8_2 u>> 0xc).b & rdx.b) != 0)
label_1403dd2c5:
    int32_t rcx_5
    rcx_5.b = rax_6 s> 0x10
    rax_6 = (rcx_5 << 5) + 0x20
label_1403dd2d0:
    
    if ((r8_2 & 0x100000) != 0)
    label_1403dd2e7:
        uint32_t rdx_7 = zx.d(*(arg1 + 0x151)) * zx.d(*(arg1 + 0x150))
        
        if (rdx_7 s>= rax_6)
            rax_6 = rdx_7
else
    rdx.b = *(arg1 + 0x25e)
    
    if (rdx.b == 4)
        goto label_1403dd2c5
    
    if (rax_6 s> 8)
        int32_t rax_17
        rax_17.b = rdx.b == 6
        rax_6 = (rax_17 << 4) + 0x30
        
        if ((r8_2 & 0x100000) != 0)
            goto label_1403dd2e7
    else
        int64_t rax_16
        rax_16.b = rdx.b == 6
        rax_6 = ((rax_16 << 3) + 0x18).d
        
        if ((r8_2 & 0x100000) != 0)
            goto label_1403dd2e7

uint64_t rdi_2 = zx.q(rdi + 7) & 0xfffffff8
int64_t rax_9 = sx.q(rax_6)
uint64_t rdi_4 = (rdi_2 * rax_9) u>> 3

if (rax_9.d s> 7)
    rdi_4 = (rax_9 u>> 3) * rdi_2

if (rdi_4 + sx.q((rax_9.d + 7) s>> 3) + 0x31 u> *(arg1 + 0x490))
    png_free(arg1, *(arg1 + 0x438))
    int64_t rax_13
    
    if (*(arg1 + 0x25b) == 0)
        rax_13 = png_malloc(arg1, rdi_4 + sx.q((rax_9.d + 7) s>> 3) + 0x31)
    else
        rax_13 = png_calloc(arg1, rdi_4 + sx.q((rax_9.d + 7) s>> 3) + 0x31)
    
    *(arg1 + 0x438) = rax_13
    *(arg1 + 0x200) = rax_13 + 0x20
    *(arg1 + 0x490) = rdi_4 + sx.q((rax_9.d + 7) s>> 3) + 0x31

int64_t r8_3 = *(arg1 + 0x1e8)

if (r8_3 == -1)
    png_error(arg1, "Row has too many bytes to allocate in memory")
    noreturn

uint64_t count = r8_3 + 1
int64_t rax_15 = *(arg1 + 0x1f8)

if (count u> *(arg1 + 0x498))
    png_free(arg1, rax_15, count)
    rax_15 = png_malloc(arg1, *(arg1 + 0x1e8) + 1)
    *(arg1 + 0x1f8) = rax_15
    count = *(arg1 + 0x1e8) + 1
    *(arg1 + 0x498) = count

int64_t result = memset(rax_15, 0, count)
*(arg1 + 0x158) |= 0x40
return result
