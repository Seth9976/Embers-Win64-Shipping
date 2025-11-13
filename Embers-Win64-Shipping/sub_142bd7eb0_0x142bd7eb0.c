// 函数: sub_142bd7eb0
// 地址: 0x142bd7eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_2 = zx.q(arg2)
int32_t arg_24 = 2

if (arg2 s< 2)
    return 

int32_t* rax

if (i_2.d u> ((*(arg1 + 0x18) - *(arg1 + 0x10)) s>> 3).d)
    rax = *(arg1 + 8)
    
    if (rax != 0 && *rax == 0)
        *rax = 0x82
    
    return 

int32_t rsi_2

if (arg3 s>= 0)
    rsi_2 = mods.dp.d(sx.q(arg3), i_2.d)
else
    rsi_2 = neg.d(mods.dp.d(sx.q(neg.d(arg3)), i_2.d))

if (rsi_2 == 0)
    return 

int32_t r11_1 = -1
int32_t r8_1 = -1

if (i_2.d s<= 0)
    return 

int32_t* rcx = 0.q
int32_t** rbx_1 = -fffffffffffffff8
uint64_t i_1 = i_2
uint64_t i

do
    if (r11_1 == r8_1)
        r11_1 += 1
        rbx_1 = &rbx_1[1]
        r8_1 = r11_1
        rcx = *(rbx_1 + *(arg1 + 0x10))
    
    r8_1 += rsi_2
    
    if (r8_1 s>= i_2.d)
        r8_1 -= i_2.d
    else if (r8_1 s< 0)
        r8_1 += i_2.d
    
    int64_t rax_8 = *(arg1 + 0x10)
    int64_t rdx_4 = sx.q(r8_1)
    rax = *(rax_8 + (rdx_4 << 3))
    *(rax_8 + (rdx_4 << 3)) = rcx
    rcx = rax
    i = i_1
    i_1 -= 1
while (i != 1)
