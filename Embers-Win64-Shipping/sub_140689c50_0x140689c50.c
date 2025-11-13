// 函数: sub_140689c50
// 地址: 0x140689c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    arg2[1].b = 1
    sub_1406aef20(arg2, 0)

int64_t rax = arg1[0x15]
uint64_t rdx = zx.q(*(arg1 + 0xc4))
arg1[0x13] = rax
*arg1 = rax
sub_1406b0a30(&arg1[1], rdx, 0)
sub_14068b010(&arg1[5], zx.q(*(arg1 + 0xc4)))
void* rdx_2 = arg1[0x16]
arg1[0x1b].b = arg3
*(arg1 + 0xdc) = 0x989680
*(arg1 + 0xc1) = arg2 != 0
arg1[0x1c].d = 0x258
arg1[0x18].b = 0
uint64_t result = sub_1406ae3c0(arg1, rdx_2)

if (result.b == 0)
    return result

if (arg2 != 0)
    sub_1406aef20(arg2, *(arg1 + 0xc4))
    uint64_t r8 = 0
    
    if (*(arg1 + 0xc4) u> 0)
        do
            int64_t r11_1 = arg2[2]
            int64_t r10_1 = r8 * 0x18
            int64_t rax_8
            
            if (not(test_bit(*(arg1[9] + (zx.q(r8.d) u>> 5 << 2)), zx.d(r8.b) & 0x1f)))
                *(r11_1 + r10_1 + 0x10) = 0
                *(r10_1 + arg2[2]) = arg1[0x14]
                rax_8 = arg1[0x14]
            else
                *(r11_1 + r10_1 + 0x10) = 1
                uint64_t r9_2 = zx.q(r8.d) * 2
                *(r10_1 + arg2[2]) = *(arg1[0xd] + (r9_2 << 3))
                rax_8 = *(arg1[0xd] + (r9_2 << 3) + 8)
            
            r8 = zx.q(r8.d + 1)
            *(r10_1 + arg2[2] + 8) = rax_8
        while (r8.d u< *(arg1 + 0xc4))
    
    *arg2 = arg1[0x13]
    int64_t rcx_11 = arg1[0x13]
    arg2[5] = rcx_11
    int64_t* rdx_5 = arg2[2]
    int64_t rax_11 = *rdx_5
    arg2[6] = rax_11
    rax_11.b = rcx_11 != rax_11
    arg2[7].b = rax_11.b
    int64_t rcx_12 = rdx_5[1]
    arg2[8] = rcx_12
    int64_t rax_12 = arg1[0x14]
    arg2[9] = rax_12
    rax_12.b = rcx_12 != rax_12
    arg2[0xa].b = rax_12.b
    arg2[0xb] = arg1[0x14]
    arg2[0xc] = arg1[0x14]

result.b = 1
return result
