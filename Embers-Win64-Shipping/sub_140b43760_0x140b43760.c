// 函数: sub_140b43760
// 地址: 0x140b43760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x260) == 0)
    return 

uint64_t rax = *(arg1 + 0x258)
void* rbx_1 = arg1 + 0x58

if (rax != 0)
    rbx_1 = rax

int64_t rdi_1 = sx.q(*(arg1 + 0x260))
void* r14_3 = (rdi_1 << 5) + rbx_1

if (rbx_1 != r14_3)
    do
        void arg_8
        sub_140b63580(rbx_1, &arg_8)
        sub_140b2c0d0(arg1 + 0x268, &arg_8, rbx_1 + 0x10)
        rbx_1 += 0x20
    while (rbx_1 != r14_3)
    
    rax = *(arg1 + 0x258)
    rdi_1 = zx.q(*(arg1 + 0x260))

void* rbx_2 = arg1 + 0x58

if (rax != 0)
    rbx_2 = rax

if (rdi_1.d != 0)
    void* rbx_3 = rbx_2 + 0x10
    int32_t i
    
    do
        sub_1405ec5c0(rbx_3)
        rbx_3 += 0x20
        i = rdi_1.d
        rdi_1 = zx.q(rdi_1.d - 1)
    while (i != 1)

bool cond:2_1 = *(arg1 + 0x264) == 0
*(arg1 + 0x260) = 0

if (not(cond:2_1))
    sub_140b45a10(arg1 + 0x58, 0)
