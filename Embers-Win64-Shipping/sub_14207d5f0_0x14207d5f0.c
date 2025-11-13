// 函数: sub_14207d5f0
// 地址: 0x14207d5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = 0
int32_t i = 0
int64_t* rax

if (*(arg1 + 0x78) s> 0)
    int64_t r9_1 = 0
    
    do
        rax = *(arg1 + 0x70)
        i += 1
        float zmm1 = *(r9_1 + rax + 8)
        *(r9_1 + rax + 4) = *(r9_1 + rax + 4) + *arg2
        float zmm0 = *(r9_1 + rax + 0xc)
        *(r9_1 + rax + 8) = zmm1 + arg2[1]
        *(r9_1 + rax + 0xc) = zmm0 + arg2[2]
        r9_1 += 0x2c
    while (i s< *(arg1 + 0x78))

if (*(arg1 + 0x40) == 0)
    return 

rax = *(arg1 + 0x38)
int32_t i_1 = 0
void* r10_1 = *rax

if (*(r10_1 + 0x78) s> 0)
    int64_t rcx = 0
    
    do
        int64_t rax_1 = *(r10_1 + 0x70)
        i_1 += 1
        *(rcx + rax_1 + 4) = *(rcx + rax_1 + 4) + *arg2
        rcx += 0x14
    while (i_1 s< *(r10_1 + 0x78))
    
    rax = *(arg1 + 0x38)

void* r10_2 = rax[1]
int32_t i_2 = 0

if (*(r10_2 + 0x78) s> 0)
    int64_t rcx_1 = 0
    
    do
        int64_t rax_2 = *(r10_2 + 0x70)
        i_2 += 1
        *(rcx_1 + rax_2 + 4) = *(rcx_1 + rax_2 + 4) + arg2[1]
        rcx_1 += 0x14
    while (i_2 s< *(r10_2 + 0x78))
    
    rax = *(arg1 + 0x38)

void* r9_2 = rax[2]

if (*(r9_2 + 0x78) s<= 0)
    return 

int64_t rcx_2 = 0

do
    rax = *(r9_2 + 0x70)
    i_3 += 1
    *(rcx_2 + rax + 4) = arg2[2] f+ *(rcx_2 + rax + 4)
    rcx_2 += 0x14
while (i_3 s< *(r9_2 + 0x78))
