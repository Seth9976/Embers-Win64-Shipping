// 函数: png_write_row
// 地址: 0x1403c1f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t rdi_1 = arg2
uint64_t rax

if (*(arg1 + 0x1f4) == 0 && *(arg1 + 0x25c) == 0)
    if ((*(arg1 + 0x155) & 4) == 0)
        png_error(arg1, "png_write_info was never called before png_write_row")
        noreturn
    
    rax, arg2 = sub_1403d1e70(arg1)
    
    if (*(arg1 + 0x25b) != 0 && (*(arg1 + 0x15c) & 2) != 0)
        goto label_1403c20ea
else if (*(arg1 + 0x25b) != 0 && (*(arg1 + 0x15c) & 2) != 0)
label_1403c20ea:
    
    switch (zx.q(*(arg1 + 0x25c)))
        case 0
            if ((*(arg1 + 0x1f4) & 7) != 0)
                return sub_1403d2020(arg1) __tailcall
        case 1
            if ((*(arg1 + 0x1f4) & 7) != 0 || *(arg1 + 0x1d8) u<= 4)
                return sub_1403d2020(arg1) __tailcall
        case 2
            if ((*(arg1 + 0x1f4) & 7) != 4)
                return sub_1403d2020(arg1) __tailcall
        case 3
            if ((*(arg1 + 0x1f4) & 3) != 0 || *(arg1 + 0x1d8) u<= 2)
                return sub_1403d2020(arg1) __tailcall
        case 4
            if ((*(arg1 + 0x1f4) & 3) != 2)
                return sub_1403d2020(arg1) __tailcall
        case 5
            if ((*(arg1 + 0x1f4) & 1) != 0 || *(arg1 + 0x1d8) u<= 1)
                return sub_1403d2020(arg1) __tailcall
        case 6
            if ((*(arg1 + 0x1f4) & 1) == 0)
                return sub_1403d2020(arg1) __tailcall

rax.b = *(arg1 + 0x25e)
*(arg1 + 0x238) = rax.b
uint64_t rcx = zx.q(*(arg1 + 0x1e4))
*(arg1 + 0x228) = rcx.d
arg2.b = *(arg1 + 0x263)
*(arg1 + 0x23a) = arg2.b
rax.b = *(arg1 + 0x260)
*(arg1 + 0x239) = rax.b
rax.w = mulu.dp.b(rax.b, arg2.b)
*(arg1 + 0x23b) = rax.b
uint64_t r8_1 = zx.q(rax.b)
uint64_t r8_3

if (rax.b u< 8)
    r8_3 = (r8_1 * rcx + 7) u>> 3
else
    r8_3 = (r8_1 u>> 3) * rcx

*(arg1 + 0x230) = r8_3
int32_t zmm0_1[0x4] = memcpy(*(arg1 + 0x200) + 1, rdi_1, r8_3.d)

if (*(arg1 + 0x25b) != 0)
    uint32_t r8_6 = zx.d(*(arg1 + 0x25c))
    
    if (r8_6 u<= 5 && (*(arg1 + 0x15c) & 2) != 0)
        zmm0_1 = sub_1403d2240(arg1 + 0x228, *(arg1 + 0x200) + 1, r8_6)
        
        if (*(arg1 + 0x228) == 0)
            return sub_1403d2020(arg1) __tailcall

if (*(arg1 + 0x15c) != 0)
    sub_1403d79f0(arg1, zmm0_1)

if ((*(arg1 + 0x418) & 4) != 0 && *(arg1 + 0x41c) == 0x40)
    sub_1403d8530(arg1 + 0x228, *(arg1 + 0x200) + 1)

int64_t xcr0
sub_1403d7970(arg1, arg1 + 0x228, xcr0)
rax = *(arg1 + 0x308)

if (rax == 0)
    return 

*(arg1 + 0x25c)
*(arg1 + 0x1f4)
jump(rax)
