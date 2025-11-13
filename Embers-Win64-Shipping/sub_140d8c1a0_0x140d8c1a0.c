// 函数: sub_140d8c1a0
// 地址: 0x140d8c1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_5 = (rdi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4fe0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t rdx = sx.q(*((rdi << 6) + r9_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 6) + r9_1) = 0xffffffff

void* rax_6 = arg1[4]
void* r9_2 = &arg1[2]

if (rax_6 != 0)
    r9_2 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
int64_t r8 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
*(r9_2 + (r8 << 2)) |= 1 << (rdi.b & 0x1f)
int64_t* rcx_7 = (sx.q(rdi.d) << 6) + *arg1
*rcx_7 = *arg2
void* rax_12 = arg2[1]
rcx_7[1] = rax_12

if (rax_12 != 0)
    *(rax_12 + 0xc) += 1

rcx_7[2].d = arg2[2].d
*(rcx_7 + 0x14) = *(arg2 + 0x14)
rcx_7[3].b = arg2[3].b
*(rcx_7 + 0x1c) = *(arg2 + 0x1c)
rcx_7[4].d = arg2[4].d
*(rcx_7 + 0x24) = *(arg2 + 0x24)
rcx_7[5] = *arg3
void* rax_20 = arg3[1]
rcx_7[6] = rax_20

if (rax_20 != 0)
    *(rax_20 + 8) += 1

rcx_7[7].d = 0xffffffff
int32_t arg_8
sub_140d9df20(arg1, &arg_8, *(rcx_7 + 0x24), rcx_7, rdi.d, nullptr)
return *arg1 + (sx.q(arg_8) << 6) + 0x28
