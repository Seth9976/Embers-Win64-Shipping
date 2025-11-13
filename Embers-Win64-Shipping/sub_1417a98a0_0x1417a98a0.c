// 函数: sub_1417a98a0
// 地址: 0x1417a98a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
int64_t* i = nullptr

if (*(arg3 + 0xc) u>= 3)
    i = arg3

if (*(arg2 + 0xc) u>= 3)
    rbx = arg2

if (rbx == i)
    return 

void* rdx = *rbx
void* r8 = *i
int64_t rsi_1 = sx.q(i[1].d)
int64_t r14_1 = sx.q(rbx[1].d)
int128_t zmm6
zmm6.d = (*(*(rdx + 0x4e8) + (r14_1 << 2))).d f+ *(*(r8 + 0x4e8) + (rsi_1 << 2))
int64_t** r14_3 = (r14_1 << 4) + *(rdx + 0x500)
int64_t* rsi_3 = (rsi_1 << 4) + *(r8 + 0x500)
zmm6.d = zmm6.d f* 0.5f
int64_t* rax_1 = *r14_3
int64_t rdx_1 = sx.q(r14_3[1].d)
int64_t r15_2 = rdx_1 * 2
void* rcx_1 = &rax_1[r15_2]

if (rax_1 == rcx_1)
label_1417a9945:
    int32_t rax_2 = (rdx_1 + 1).d
    r14_3[1].d = rax_2
    
    if (rax_2 s> *(r14_3 + 0xc))
        sub_1405a4f90(r14_3)
    
    int64_t* rax_3 = *r14_3
    rax_3[r15_2 + 1].d = zmm6.d
    rax_3[r15_2] = i
else
    while (*rax_1 != i)
        rax_1 = &rax_1[2]
        
        if (rax_1 == rcx_1)
            goto label_1417a9945

int64_t* i_1 = *rsi_3
int64_t rdx_2 = sx.q(rsi_3[1].d)
int64_t rdi_1 = rdx_2 * 2

for (; i_1 != &i_1[rdi_1]; i_1 = &i_1[2])
    if (*i_1 == rbx)
        return 

int32_t rax_4 = (rdx_2 + 1).d
rsi_3[1].d = rax_4

if (rax_4 s> *(rsi_3 + 0xc))
    sub_1405a4f90(rsi_3)

i_1 = *rsi_3
i_1[rdi_1 + 1].d = zmm6.d
i_1[rdi_1] = rbx
