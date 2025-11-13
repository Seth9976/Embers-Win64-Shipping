// 函数: sub_141d2c0c0
// 地址: 0x141d2c0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int64_t* rdi = *(arg1 + 0x3e0)
int64_t rsi = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x3e8)) << 3 u>> 3

if (rdi u> &rdi[sx.q(*(arg1 + 0x3e8))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx = *(*rdi + 0x60)
        (*(*rcx + 0x28))(rcx)
        rsi += 1
        rdi = &rdi[1]
    while (rsi != r14_1)

int64_t rsi_1 = 0
int64_t* rdi_1 = *(arg1 + 0x3f0)
uint64_t r14_3 = sx.q(*(arg1 + 0x3f8)) << 3 u>> 3

if (rdi_1 u> &rdi_1[sx.q(*(arg1 + 0x3f8))])
    r14_3 = 0

if (r14_3 != 0)
    do
        int64_t* rcx_1 = *(*rdi_1 + 0x60)
        (*(*rcx_1 + 0x28))(rcx_1)
        rsi_1 += 1
        rdi_1 = &rdi_1[1]
    while (rsi_1 != r14_3)

int64_t rsi_2 = 0
int64_t* rdi_2 = *(arg1 + 0x400)
uint64_t r14_5 = sx.q(*(arg1 + 0x408)) << 3 u>> 3

if (rdi_2 u> &rdi_2[sx.q(*(arg1 + 0x408))])
    r14_5 = 0

if (r14_5 != 0)
    do
        int64_t* rcx_2 = *(*rdi_2 + 0x60)
        (*(*rcx_2 + 0x28))(rcx_2)
        rsi_2 += 1
        rdi_2 = &rdi_2[1]
    while (rsi_2 != r14_5)

int64_t* r8 = *(arg1 + 0x410)
void* r9 = &r8[sx.q(*(arg1 + 0x418))]

while (r8 != r9)
    void* rdx_1 = *r8
    int32_t rax_13 = 0
    
    if (0 == *(rdx_1 + 0x51c))
        *(rdx_1 + 0x51c) = 0
    else
        rax_13 = *(rdx_1 + 0x51c)
    
    int32_t rcx_3
    rcx_3.b = rax_13 != 1
    r8 = &r8[1]
    *(rdx_1 + 0x51c)
    *(rdx_1 + 0x51c) = rcx_3

int64_t* r8_1 = *(arg1 + 0x420)
void* r9_1 = &r8_1[sx.q(*(arg1 + 0x428))]

while (r8_1 != r9_1)
    void* rdx_2 = *r8_1
    int32_t rax_15 = 0
    
    if (0 == *(rdx_2 + 0x16c))
        *(rdx_2 + 0x16c) = 0
    else
        rax_15 = *(rdx_2 + 0x16c)
    
    int32_t rcx_5
    rcx_5.b = rax_15 != 1
    r8_1 = &r8_1[1]
    *(rdx_2 + 0x16c)
    *(rdx_2 + 0x16c) = rcx_5

int64_t* rdi_3 = *(arg1 + 0x430)
void* result = &rdi_3[sx.q(*(arg1 + 0x438))]
uint64_t rsi_4 = sx.q(*(arg1 + 0x438)) << 3 u>> 3

if (rdi_3 u> result)
    rsi_4 = 0

if (rsi_4 != 0)
    do
        int64_t* rcx_8 = *rdi_3 + 0x5d0
        result = (*(*rcx_8 + 0x28))(rcx_8)
        rbx += 1
        rdi_3 = &rdi_3[1]
    while (rbx != rsi_4)

return result
