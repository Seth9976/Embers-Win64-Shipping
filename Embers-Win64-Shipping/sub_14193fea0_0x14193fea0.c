// 函数: sub_14193fea0
// 地址: 0x14193fea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rsi = zx.d(arg4)
uint64_t rdi = zx.q(arg3)
uint64_t r14 = zx.q(arg2)
sub_141909fb0(*(arg1 + 0x18))
int32_t rcx_4 = (rsi * 2) | (*(arg1 + 0x28) & 0xfffffffd) | 1
*(arg1 + 0x28) = rcx_4
int32_t rax_1

if (arg5 != 0 || (rsi.b == 0 && rdi.d == *(arg1 + 0x4c)))
    rax_1.b = 1
else
    rax_1.b = 0

int64_t rbp

if (rsi.b != 0 || data_143eff5d0 != 0)
    rbp.b = 1
else
    rbp.b = 0

if (rax_1.b != 0 && data_143eff5d4 == 0 && data_1439c74f8 != 0)
    int64_t r9
    
    if ((rcx_4.b & 4) == 0)
        r9 = 0x88e4
        
        if ((*(arg1 + 0x14) & 6) != 0)
            r9 = 0x88e8
    else
        r9 = 0x88e0
    
    data_143effd00(0x88ec, zx.q(*(arg1 + 0x4c)), 0, r9)

int64_t result

if (rbp.b == 0)
    result = *(arg1 + 0x40)
    *(arg1 + 0x30) = r14.d
    *(arg1 + 0x2c) = rdi.d
    
    if (result == 0)
        result = sub_140a82f30(rdi, 0)
        *(arg1 + 0x48) = rdi.d
    else if (rdi.d u> *(arg1 + 0x48))
        sub_140a74f90(result)
        *(arg1 + 0x40) = 0
        *(arg1 + 0x48) = 0
        result = sub_140a82f30(rdi, 0)
        *(arg1 + 0x48) = rdi.d
    else
        *(arg1 + 0x40) = 0
    
    *(arg1 + 0x38) = result
    *(arg1 + 0x28) |= 8
else
    int64_t r9_1
    
    if (zx.d(rsi.b) == 1)
        r9_1 = 1
    else if (zx.d(rsi.b) ^ 1)
        r9_1 = 0x2a
    else if ((zx.d(rsi.b) ^ 1) == 2)
        r9_1 = 0x22
    else if ((zx.d(rsi.b) ^ 1) == 3)
        r9_1 = 0xc2
    else
        r9_1 = 3
    
    result = data_143f00168(0x88ec, r14, rdi, r9_1)
    *(arg1 + 0x28) &= 0xfffffff7
    *(arg1 + 0x38) = result
    *(arg1 + 0x30) = r14.d
    *(arg1 + 0x2c) = rdi.d

return result
