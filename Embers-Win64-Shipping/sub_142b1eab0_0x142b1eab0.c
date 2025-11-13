// 函数: sub_142b1eab0
// 地址: 0x142b1eab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[4]
arg1[7] = rax
int16_t* r9 = rax - 2
arg1[6] = r9

if ((zx.d(*r9) & 0xfffffc00) == 0xdc00 && arg1[2] u< r9)
    if ((zx.d(r9[-1]) & 0xfffffc00) == 0xd800)
        r9 = &r9[-1]
    
    arg1[6] = r9

uint16_t rax_13

do
    void* rax_5 = arg1[6]
    arg1[7] = rax_5
    
    if (arg1[3] u>= rax_5)
        break
    
    arg1[6] = rax_5 - 2
    uint32_t rdx = zx.d(*(rax_5 - 2))
    
    if ((rdx & 0xfffffc00) == 0xdc00 && arg1[2] u< rax_5 - 2)
        uint32_t r8 = zx.d(*(rax_5 - 4))
        
        if ((r8 & 0xfffffc00) == 0xd800)
            arg1[6] = rax_5 - 4
            rdx += (r8 - 0xd7f7) << 0xa
    
    void* rcx_3 = *arg1
    
    if (rdx s< zx.d(*(rcx_3 + 0xa)))
        break
    
    rax_13 = sub_142af42a0(rcx_3, rdx)
    
    if (rax_13 u< 0xfc00)
        break
while ((rax_13 u>> 1).b u> arg3)
int16_t* i = arg1[4]
int64_t rax_14
rax_14.b = arg2 u> 0xffff
int16_t* rdx_1 = &i[rax_14 + 1]
arg1[4] = rdx_1
int16_t result

do
    result = i[-1]
    i -= 2
    rdx_1 -= 2
    *rdx_1 = result
while (arg1[7] != i)

if (arg2 s> 0xffff)
    *i = (arg2 s>> 0xa).w - 0x2840
    result = 0x3ff
    int32_t rdi
    rdi.w = arg2.w & 0x3ff
    rdi.w |= 0xdc00
    i[1] = rdi.w
else
    *i = arg2.w

if (arg3 u<= 1)
    arg1[3] = rdx_1

return result
