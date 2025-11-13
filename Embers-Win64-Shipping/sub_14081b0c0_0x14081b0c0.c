// 函数: sub_14081b0c0
// 地址: 0x14081b0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = 0
int32_t i_1 = arg2[2].d
void* rbx = arg2[1]
arg1[2].d = i_1

if (i_1 != 0)
    sub_14083a0c0(&arg1[1], i_1, 0)
    void* rdi_1 = arg1[1]
    int32_t i
    
    do
        sub_140819f30(rdi_1, rbx)
        rdi_1 += 0xa0
        rbx += 0xa0
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0x14) = 0

arg1[3].b ^= (arg2[3].b ^ arg1[3].b) & 1
*(arg1 + 0x19) = *(arg2 + 0x19)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
arg1[4] = 0
int64_t rdi_2 = sx.q(arg2[5].d)
int64_t rsi = arg2[4]
arg1[5].d = rdi_2.d

if (rdi_2.d != 0)
    sub_1407c35c0(&arg1[4], rdi_2.d, 0)
    memcpy(arg1[4], rsi, (rdi_2 << 6).d)
else
    *(arg1 + 0x2c) = 0

void* rax_4 = arg2[6]
arg1[6] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

return arg1
