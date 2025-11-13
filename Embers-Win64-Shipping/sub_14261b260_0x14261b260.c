// 函数: sub_14261b260
// 地址: 0x14261b260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x34)
int64_t rbp

if (r8 == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c5340(arg1)
    
    int32_t rbx_1 = arg1[5].d
    void* rdi_1 = &arg1[2]
    sub_1405a4980(rdi_1, rbx_1 + 1)
    *(rdi_1 + 0x18) += 1
    void* rax_2 = *(rdi_1 + 0x10)
    
    if (rax_2 != 0)
        rdi_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rdi_1 + (rdx_5 << 2)) &= not.d(1 << (rbx_1.b & 0x1f))
else
    rbp = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t rdx = sx.q(*(rbp * 0x88 + r9_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = r8 - 1
    
    if (r8 != 1)
        *(rdx * 0x88 + r9_1) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_9 != 0)
    r8_1 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbp.d)
int64_t rdx_8 = sx.q((temp3 + (temp2 & 0x1f)) s>> 5)
*(r8_1 + (rdx_8 << 2)) |= 1 << (rbp.b & 0x1f)
int64_t* rdi_3 = sx.q(rbp.d) * 0x88 + *arg1
*rdi_3 = *arg2
rdi_3[1].d = arg2[1].d
*(rdi_3 + 0xc) = *(arg2 + 0xc)
rdi_3[2].d = arg2[2].d
rdi_3[3] = arg2[3]
rdi_3[4].b = arg2[4].b
rdi_3[5] = 0
int64_t rsi_1 = sx.q(arg2[6].d)
int64_t r15_1 = arg2[5]
rdi_3[6].d = rsi_1.d

if (rsi_1.d != 0)
    sub_1407751d0(&rdi_3[5], rsi_1.d, 0)
    memcpy(rdi_3[5], r15_1, (rsi_1 * 0x28).d)
else
    __builtin_memset(rdi_3 + 0x34, 0, 0x14)

void* r8_4 = &rdi_3[9]
*(r8_4 + 0x1c) = 0x80
void* rdx_11 = *(r8_4 + 0x10)

if (rdx_11 != 0)
    r8_4 = rdx_11

__builtin_memset(r8_4, 0, 0x1c)
rdi_3[0xd].d = 0xffffffff
*(rdi_3 + 0x6c) = 0
rdi_3[0xf] = 0
rdi_3[0x10].d = 0
sub_140cd48b0(&rdi_3[7], &arg2[7])
return zx.q(rbp.d)
