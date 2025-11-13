// 函数: sub_14190c3f0
// 地址: 0x14190c3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 0x1c)
int32_t rax = rsi
int64_t rbp = arg2

if (arg4 != 0)
    rax = arg4

*(arg1 + 0x5c) = rax

if (arg3 != 0)
    *(arg1 + 0x28) = arg3
    sub_141909d80(arg1)
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
sub_141909d80(arg1)
int64_t r9_1

if ((*(arg1 + 0x38) & 4) == 0)
    r9_1 = 0x88e4
    
    if ((*(arg1 + 0x20) & 6) != 0)
        r9_1 = 0x88e8
else
    r9_1 = 0x88e0

data_143effd00(0x8893, zx.q(*(arg1 + 0x5c)), 0, r9_1)

if (rbp != 0)
    int32_t rbx_2 = *(arg1 + 0x5c)
    int32_t r12_2 = data_1439c74f4
    
    if (rsi u<= rbx_2)
        rbx_2 = rsi
    
    int32_t r14_1 = 0
    
    if (r12_2 == 0)
        data_143effd08(0x8893, 0, zx.q(rbx_2), rbp)
    else if (rbx_2 != 0)
        int32_t rsi_1
        int32_t temp0_1
        
        do
            rsi_1 = rbx_2
            
            if (r12_2 u<= rbx_2)
                rsi_1 = r12_2
            
            data_143effd08(0x8893, zx.q(r14_1), zx.q(rsi_1), rbp)
            r14_1 += rsi_1
            rbp += zx.q(rsi_1)
            temp0_1 = rbx_2
            rbx_2 -= rsi_1
        while (temp0_1 != rsi_1)

*(arg1 + 0x5c)
return sub_140594850() __tailcall
