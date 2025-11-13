// 函数: sub_1413837b0
// 地址: 0x1413837b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = sub_14139e490(arg1.b)
void* rbp = *arg2
void* rdx = *(rbp + 0x10)

if ((rdx.b & 1) != 0)
    rdx = (rdx s>> 1) + rbp + 0x10

void* r8 = rdx + (sx.q(*(rbp + 0x18)) << 2)

while (rdx != r8)
    uint64_t rax_2 = zx.q(*(rdx + 2))
    rcx = zx.q(*rdx)
    rdx += 4
    *(arg1 + (rcx << 3)) = *(rax_2 + arg3)

void* rdx_3 = *(rbp + 0x20)

if ((rdx_3.b & 1) != 0)
    rdx_3 = (rdx_3 s>> 1) + rbp + 0x20

void* r8_1 = rdx_3 + (sx.q(*(rbp + 0x28)) << 2)

while (rdx_3 != r8_1)
    uint64_t rax_6 = zx.q(*(rdx_3 + 2))
    rcx = zx.q(*rdx_3)
    rdx_3 += 4
    *(arg1 + (rcx << 3) + 0x100) = *(rax_6 + arg3)

void* rdx_5 = *(rbp + 0x30)

if ((rdx_5.b & 1) != 0)
    rdx_5 = (rdx_5 s>> 1) + rbp + 0x30

void* r8_2 = rdx_5 + (sx.q(*(rbp + 0x38)) << 2)

while (rdx_5 != r8_2)
    uint64_t rax_10 = zx.q(*(rdx_5 + 2))
    rcx = zx.q(*rdx_5)
    rdx_5 += 4
    *(arg1 + (rcx << 3) + 0x400) = *(rax_10 + arg3)

void* rdx_7 = *(rbp + 0x40)

if ((rdx_7.b & 1) != 0)
    rdx_7 = (rdx_7 s>> 1) + rbp + 0x40

void* r8_3 = rdx_7 + (sx.q(*(rbp + 0x48)) << 2)

while (rdx_7 != r8_3)
    uint64_t rax_14 = zx.q(*(rdx_7 + 2))
    rcx = zx.q(*rdx_7)
    rdx_7 += 4
    *(arg1 + (rcx << 3) + 0x380) = *(rax_14 + arg3)

void* rdx_9 = *(rbp + 0x50)

if ((rdx_9.b & 1) != 0)
    rdx_9 = (rdx_9 s>> 1) + rbp + 0x50

void* r8_4 = rdx_9 + (sx.q(*(rbp + 0x58)) << 2)

while (rdx_9 != r8_4)
    uint64_t rax_18 = zx.q(*(rdx_9 + 2))
    rcx = zx.q(*rdx_9)
    rdx_9 += 4
    *(arg1 + (rcx << 3)) = *(*(rax_18 + arg3) + 0x10)

void* rdx_11 = *(rbp + 0x60)

if ((rdx_11.b & 1) != 0)
    rdx_11 = (rdx_11 s>> 1) + rbp + 0x60

void* r8_5 = rdx_11 + (sx.q(*(rbp + 0x68)) << 2)

while (rdx_11 != r8_5)
    uint64_t rax_23 = zx.q(*(rdx_11 + 2))
    rcx = zx.q(*rdx_11)
    rdx_11 += 4
    *(arg1 + (rcx << 3) + 0x100) = *(*(rax_23 + arg3) + 0x10)

void* rdx_13 = *(rbp + 0x70)

if ((rdx_13.b & 1) != 0)
    rdx_13 = (rdx_13 s>> 1) + rbp + 0x70

void* r8_6 = rdx_13 + (sx.q(*(rbp + 0x78)) << 2)

while (rdx_13 != r8_6)
    uint64_t rax_28 = zx.q(*(rdx_13 + 2))
    rcx = zx.q(*rdx_13)
    rdx_13 += 4
    *(arg1 + (rcx << 3) + 0x400) = *(*(rax_28 + arg3) + 0x10)

void* rdx_14 = *(rbp + 0x80)

if ((rdx_14.b & 1) != 0)
    rdx_14 = (rdx_14 s>> 1) + rbp + 0x80

void* r8_7 = rdx_14 + (sx.q(*(rbp + 0x88)) << 2)

while (rdx_14 != r8_7)
    uint64_t rax_33 = zx.q(*(rdx_14 + 2))
    rcx = zx.q(*rdx_14)
    rdx_14 += 4
    *(arg1 + (rcx << 3) + 0x300) = *(rax_33 + arg3)

int64_t result = 0xffff

if (*(rbp + 0x94) != 0xffff)
    sub_14139e490(rcx.b)
    int64_t* rcx_1 = data_143f0f180
    void* arg_10
    (*(*rcx_1 + 0xf8))(rcx_1, &arg_10, arg3, &data_143ec71a0, 0, 0)
    void* rax_35 = arg_10
    void* arg_18 = rax_35
    
    if (rax_35 != 0)
        *(rax_35 + 8) += 1
    
    sub_1405d1550(&arg_10)
    sub_1405d1600(arg1 + 0x480, &arg_18)
    sub_1405d1550(&arg_18)
    result = *(arg1 + 0x480)
    *(arg1 + (zx.q(*(rbp + 0x94)) << 3) + 0x300) = result

return result
