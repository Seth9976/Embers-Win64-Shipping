// 函数: sub_140b51b20
// 地址: 0x140b51b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rbx_1 = *(arg1 + 0x80)

if (rbx_1 == 0)
    void* rax = j_sub_140a82f30(zx.q((rbx_1 + 0x58).d))
    rbx_1 = rax
    
    if (rax == 0)
        rbx_1 = rax
    else
        *(rbx_1 + 0x40) = 0
        *(rbx_1 + 0x48) = 0
        *(rbx_1 + 0x4c) = 8
    
    *(arg1 + 0x80) = rbx_1

int64_t rsi_1 = sx.q(*(rbx_1 + 0x48))
int32_t rax_1 = (rsi_1 + 1).d
*(rbx_1 + 0x48) = rax_1

if (rax_1 s> *(rbx_1 + 0x4c))
    sub_1407752f0(rbx_1, rsi_1.d)

void* rax_2 = *(rbx_1 + 0x40)
void* rcx_2 = rbx_1

if (rax_2 != 0)
    rcx_2 = rax_2

*(rcx_2 + (rsi_1 << 3)) = arg2
int32_t i_1 = *(rbx_1 + 0x50)
int32_t i

do
    i = i_1
    i_1 += 1
while (i == 0xffffffff)
*(rbx_1 + 0x50) = i_1
*(arg1 + 0x78) = arg2
