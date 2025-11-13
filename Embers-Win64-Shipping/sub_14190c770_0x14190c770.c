// 函数: sub_14190c770
// 地址: 0x14190c770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *(arg1 + 0x18)
int32_t rax = rbp

if (arg4 != 0)
    rax = arg4

*(arg1 + 0x5c) = rax

if (arg3 != 0)
    *(arg1 + 0x28) = arg3
    sub_141909e60(arg1)
    jump(data_143effd08)

int64_t rcx_1 = sx.q(data_1439c74cc)
int32_t r12_1

if (0x400 - rcx_1.d s<= 1)
    int64_t rbx_1 = sx.q(0x400 - rcx_1.d) << 2
    memcpy(arg1 + 0x28, (rcx_1 << 2) + &data_143efcd00, rbx_1.d)
    data_143effcf0(0x400, &data_143efcd00)
    r12_1 = 1 - (0x400 - rcx_1.d)
    memcpy(rbx_1 + arg1 + 0x28, &data_143efcd00, r12_1 << 2)
else
    *(arg1 + 0x28) = *(&data_143efcd00 + (rcx_1 << 2))
    r12_1 = data_1439c74cc + 1

data_1439c74cc = r12_1
sub_141909e60(arg1)
int64_t r9_1

if ((*(arg1 + 0x38) & 4) == 0)
    r9_1 = 0x88e4
    
    if ((*(arg1 + 0x1c) & 6) != 0)
        r9_1 = 0x88e8
else
    r9_1 = 0x88e0

data_143effd00(0x8892, zx.q(*(arg1 + 0x5c)), 0, r9_1)

if (arg2 != 0)
    int32_t r8_4 = *(arg1 + 0x5c)
    
    if (rbp u<= r8_4)
        r8_4 = rbp
    
    sub_1419104e0(arg1, 0, r8_4, arg2)

*(arg1 + 0x5c)
return sub_140594850() __tailcall
