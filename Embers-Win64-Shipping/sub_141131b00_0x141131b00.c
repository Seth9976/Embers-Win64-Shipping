// 函数: sub_141131b00
// 地址: 0x141131b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *arg1

if (r9 s<= 0)
    return 

int64_t rax_1 = sx.q(data_143f0f1a0)
int64_t rcx

if (rax_1.d u> 0x1f)
    if (*(rax_1 * 0x14 + &data_143f025f0) == data_143f025b0
            || ((*(rax_1 * 0x14 + &data_143f025fc) u>> 0x11).b & 1) != 0)
        rcx.b = 1
    else
        rcx.b = 0
else if (test_bit(0xc8451814, rax_1.d) || *(rax_1 * 0x14 + &data_143f025f0) == data_143f025b0
        || ((*(rax_1 * 0x14 + &data_143f025fc) u>> 0x11).b & 1) != 0)
    rcx.b = 1
else
    rcx.b = 0

char temp0_1 = rcx.b
int32_t rsi_1 = 1
int64_t rdi_1 = 1

if (temp0_1 == 0)
    rsi_1 = 4

if (temp0_1 == 0)
    rdi_1 = 0xd

int64_t rax_6 = rdi_1 * 5
sub_1407b4d10(&arg1[2], (&data_1439c85f4)[rax_6 * 2], rsi_1 * r9 * 2, rdi_1.b, 0, 
    FHeightFieldObjectBuffers_Bounds", 0)
sub_1407b4d10(&arg1[0xa], (&data_1439c85f4)[rax_6 * 2], rsi_1 * *arg1 * data_1439b5bc4, rdi_1.b, 0, 
    FHeightFieldObjectBuffers_Data", 0)
