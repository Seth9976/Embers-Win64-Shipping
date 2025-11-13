// 函数: sub_14193fd20
// 地址: 0x14193fd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rsi = zx.d(arg4)
uint64_t rdi = zx.q(arg3)
uint64_t r14 = zx.q(arg2)
sub_141909f40(*(arg1 + 0x28))
int32_t rcx_4 = (rsi * 2) | (*(arg1 + 0x38) & 0xfffffffd) | 1
*(arg1 + 0x38) = rcx_4
int32_t rax_1

if (arg5 != 0 || (rsi.b == 0 && rdi.d == *(arg1 + 0x5c)))
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
        
        if ((*(arg1 + 0x20) & 6) != 0)
            r9 = 0x88e8
    else
        r9 = 0x88e0
    
    data_143effd00(0x8893, zx.q(*(arg1 + 0x5c)), 0, r9)

int64_t result

if (rbp.b == 0)
    result = *(arg1 + 0x50)
    *(arg1 + 0x40) = r14.d
    *(arg1 + 0x3c) = rdi.d
    
    if (result == 0)
        result = sub_140a82f30(rdi, 0)
        *(arg1 + 0x58) = rdi.d
    else if (rdi.d u> *(arg1 + 0x58))
        sub_140a74f90(result)
        *(arg1 + 0x50) = 0
        *(arg1 + 0x58) = 0
        result = sub_140a82f30(rdi, 0)
        *(arg1 + 0x58) = rdi.d
    else
        *(arg1 + 0x50) = 0
    
    *(arg1 + 0x48) = result
    *(arg1 + 0x38) |= 8
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
    
    result = data_143f00168(0x8893, r14, rdi, r9_1)
    *(arg1 + 0x38) &= 0xfffffff7
    *(arg1 + 0x48) = result
    *(arg1 + 0x40) = r14.d
    *(arg1 + 0x3c) = rdi.d

return result
