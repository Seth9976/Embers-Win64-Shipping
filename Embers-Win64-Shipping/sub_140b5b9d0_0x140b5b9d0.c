// 函数: sub_140b5b9d0
// 地址: 0x140b5b9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg1

if (arg2 == 0 || *arg2 == 0)
    int64_t rax
    rax.b = rbx == 0
    return rax

uint64_t rsi_1 = zx.q(rbx.d u>> 0x10)
uint32_t arg_c = zx.d(rbx.w)
void* r8

if (data_143e05168 == 0)
    r8 = sub_140b58510(&data_143e05180)
    data_143e05168 = 1
else
    r8 = &data_143e05180

uint32_t rbx_1 = (rbx u>> 0x20).d
int16_t* rdx_1 = zx.q((rsi_1.d.q u>> 0x20).d * 2) + *(r8 + (rsi_1 << 3) + 0x10)
uint32_t rax_5 = zx.d(*rdx_1)
int16_t* rdx_2 = arg2
uint64_t rsi_3 = zx.q(rax_5) u>> 6
uint32_t rax_6

if ((rax_5.b & 1) == 0)
    rax_6 = sub_140a54660(&rdx_1[1], rdx_2, rsi_3)
else
    rax_6 = sub_140a546e0(&rdx_1[1], rdx_2, rsi_3)

if (rax_6 == 0)
    rax_6 = zx.d(arg2[rsi_3])
    
    if (rbx_1 == 0)
        rax_6.b = rax_6.w == 0
        return rax_6
    
    if (rax_6.w == 0x5f && sub_140b57aa0(rbx_1 - 1, &arg2[1 + rsi_3]).b != 0)
        rax_6.b = 1
        return rax_6

rax_6.b = 0
return rax_6
