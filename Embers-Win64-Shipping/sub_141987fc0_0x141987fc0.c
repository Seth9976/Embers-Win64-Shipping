// 函数: sub_141987fc0
// 地址: 0x141987fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == data_143f02138)
    return 0

if (arg1 == data_143f021c0)
    return 0xe

if (arg1 == data_143f021c8)
    return 6

if (arg1 == data_143f021d0)
    return 0xf

if (arg1 == data_143f021d8)
    return 0xd

if (arg1 == data_143f021e0)
    return 0x18

if (arg1 == data_143f021e8)
    return 2

if (arg1 == data_143f021f0)
    return 4

if (arg1 == data_143f021f8)
    return 0x19

if (arg1 == data_143f02200)
    return 0x1a

if (arg1 == data_143f02208)
    return 0xb

if (arg1 == data_143f02210)
    return 0xc

if (arg1 == data_143f02218)
    return 0x1e

if (arg1 == data_143f02220)
    return 0x1f

if (arg1 == data_143f02228)
    return 0x1b

if (arg1 == data_143f02230)
    return 0x10

if (arg1 == data_143f02238)
    return 0x12

if (arg1 == data_143f02240)
    return 0x16

if (arg1 == data_143f02248 || arg1 == data_143f02250)
    return 0x15

if (arg1 == data_143f02258 || arg1 == data_143f02260)
    return 0x1d

if (arg1 == data_143f02268 || arg1 == data_143f02270)
    return 0x11

if (arg1 == data_143f02278 || arg1 == data_143f02280)
    return 0x14

if (arg1 == data_143f02288 || arg1 == data_143f02290)
    return 0x1c

if (arg1 == data_143f02298 || arg1 == data_143f022a0)
    return 0x30

int32_t rdi = 0x20

while (true)
    sub_141971cf0()
    
    if (arg1 == *(zx.q(rdi - 0x20) * 0x18 + 0x143f0f2b0))
        break
    
    rdi += 1
    
    if (rdi s> 0x2f)
        rdi = 0x31
        break

return zx.q(rdi)
