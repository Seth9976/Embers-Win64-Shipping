// 函数: sub_141cb5ae0
// 地址: 0x141cb5ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
int32_t r8 = arg2.d

if (rdi == 0)
    return 

int64_t r11_1 = *rdi
int32_t r9_1 = arg2:4.d
int32_t rbx_1 = 0
int32_t i_2 = rdi[1].d
int32_t i = i_2
int64_t rax

if (i_2 s> 0)
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(i)
        int32_t i_1 = (temp3_1 - temp2_1) s>> 1
        i = i_1
        int32_t rax_4 = i_1 + rbx_1
        int64_t rcx_4 = sx.q(rax_4) * 3
        int32_t rax_6 = *(r11_1 + (rcx_4 << 3))
        rax = zx.q(rax_6 - r8)
        
        if (rax_6 == r8)
            rax = zx.q(*(r11_1 + (rcx_4 << 3) + 4) - r9_1)
        
        if (rax.d s< 0)
            rbx_1 = rax_4 + rcx_1
    while (i s> 0)

if (rbx_1 s>= i_2)
    return 

int64_t rcx_5 = sx.q(rbx_1)
rax = rcx_5 * 3
int32_t r8_1 = r8 - *(r11_1 + (rax << 3))

if (r8 == *(r11_1 + (rax << 3)))
    r8_1 = r9_1 - *(r11_1 + (rax << 3) + 4)

if (r8_1 s< 0 || rbx_1 == 0xffffffff)
    return 

int64_t rsi_1 = rcx_5 * 0x18
int64_t rcx_6 = *(rsi_1 + r11_1 + 8)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int32_t rcx_8 = rdi[1].d
int32_t rax_10 = rcx_8 - rbx_1

if (rax_10 != 1)
    int64_t r9_3 = *rdi
    memmove(r9_3 + rsi_1, r9_3 + sx.q(rbx_1 + 1) * 0x18, (rax_10 - 1) * 0x18)
    rcx_8 = rdi[1].d

rdi[1].d = rcx_8 - 1
sub_1405fde90(rdi)
