// 函数: sub_1418cde00
// 地址: 0x1418cde00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
sub_1418c9d30(arg1, *arg2, arg2[1].d, 0, 0)
void* rsi = &arg1[2]
void* r12_1 = arg1 - arg2
void* rbx = &arg2[7]

for (int64_t i = 5; i != 0; )
    *rsi = 0
    i -= 1
    int64_t rdi_1 = sx.q(*(rbx - 0x20))
    int64_t r14_1 = *(rbx - 0x28)
    *(rbx + r12_1 - 0x20) = rdi_1.d
    
    if (rdi_1.d != 0)
        sub_1405c4a90(rsi, rdi_1.d, 0)
        memcpy(*rsi, r14_1, (rdi_1 << 2).d)
    else
        *(rbx + r12_1 - 0x1c) = 0
    
    *(rbx + r12_1 - 0x18) = 0
    void* r14_2 = rbx + r12_1
    int64_t rdi_2 = sx.q(*(rbx - 0x10))
    int64_t r15_1 = *(rbx - 0x18)
    *(r12_1 + rbx - 0x10) = rdi_2.d
    
    if (rdi_2.d != 0)
        sub_1418eca20(r14_2 - 0x18, rdi_2.d, 0)
        memcpy(*(r14_2 - 0x18), r15_1, (rdi_2.d + (rdi_2 << 1).d) * 2)
    else
        *(r12_1 + rbx - 0xc) = rdi_2.d
    
    *(rbx + r12_1 - 8) = 0
    void* r14_3 = rbx + r12_1
    int32_t rdi_3 = *rbx
    int64_t r15_2 = *(rbx - 8)
    *(r12_1 + rbx) = rdi_3
    
    if (rdi_3 != 0)
        sub_1405a4c70(r14_3 - 8, rdi_3, 0)
        memcpy(*(r14_3 - 8), r15_2, rdi_3 * 2)
    else
        *(r12_1 + rbx + 4) = 0
    
    rsi += 0x38
    *(rbx + r12_1 + 8) = *(rbx + 8)
    *(rbx + r12_1 + 0xa) = *(rbx + 0xa)
    rbx += 0x38

arg1[0x25] = 0
int64_t rdi_4 = sx.q(arg2[0x26].d)
int64_t rsi_2 = arg2[0x25]
arg1[0x26].d = rdi_4.d

if (rdi_4.d != 0)
    sub_1405c4a90(&arg1[0x25], rdi_4.d, 0)
    memcpy(arg1[0x25], rsi_2, (rdi_4 << 2).d)
else
    *(arg1 + 0x134) = 0

return arg1
