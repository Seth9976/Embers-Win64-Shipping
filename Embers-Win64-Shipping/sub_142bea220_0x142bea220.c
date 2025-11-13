// 函数: sub_142bea220
// 地址: 0x142bea220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t* r8 = arg1[2]

if (arg1[4].b == 0)
    return 6

int16_t* rax_1 = arg1[3]
uint32_t rdx = zx.d(*rax_1)
uint32_t rax_2 = zx.d(rax_1[1])
r8[1] = rax_2
*r8 = rdx
uint32_t rcx = zx.d(*(arg1 + 0x22))
int16_t rax_5

if (rcx == 1)
    *(r8 + 0x1a) = 1
    r8[2] = (rax_2 + 7) u>> 3
    rax_5 = 2
else if (rcx == 2)
    *(r8 + 0x1a) = 3
    r8[2] = (rax_2 + 3) u>> 2
    rax_5 = 4
else if (rcx == 4)
    *(r8 + 0x1a) = 4
    r8[2] = (rax_2 + 1) u>> 1
    rax_5 = 0x10
else if (rcx == 8)
    r8[2] = rax_2
    rax_5 = 0x100
    *(r8 + 0x1a) = 2
else
    if (rcx != 0x20)
        return 3
    
    r8[2] = rax_2 << 2
    rax_5 = 0x100
    *(r8 + 0x1a) = 7

int32_t rdx_1 = rdx * r8[2]
r8[6].w = rax_5

if (rdx_1 == 0 || arg2 != 0)
    return 0

int32_t result = sub_142b98ac0(*(*arg1 + 0x78), rdx_1)

if (result != 0)
    return result

*(arg1 + 0x21) = 1
return result
