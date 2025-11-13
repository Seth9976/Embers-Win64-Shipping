// 函数: sub_141c4c260
// 地址: 0x141c4c260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg1[1]
*arg2 = **arg1
*(arg2 + 8) = 0
int64_t rbx = sx.q(r12[1].d)
int64_t rdi = *r12
arg2[4] = rbx.d

if (rbx.d != 0)
    sub_140638750(&arg2[2], rbx.d, 0)
    memcpy(*(arg2 + 8), rdi, (rbx << 2).d)
else
    arg2[5] = 0

void* rdi_1 = &arg2[6]
void* rax_2 = &arg2[2] - r12
void* rbx_1 = &r12[2]
int64_t i_1 = 2
int64_t i = 2
int32_t* rcx_3 = rax_2 + 8
int32_t* arg_8 = rcx_3

do
    *rdi_1 = 0
    i -= 1
    int64_t rsi_1 = sx.q(*(rbx_1 + 8))
    int64_t rax_3 = *rbx_1
    *(rcx_3 + rbx_1) = rsi_1.d
    
    if (rsi_1.d != 0)
        sub_1405c4a00(rdi_1, rsi_1.d, 0)
        memcpy(*rdi_1, rax_3, (rsi_1 << 3).d)
        rcx_3 = arg_8
    else
        *(rbx_1 + rax_2 + 0xc) = 0
    
    rdi_1 += 0x10
    rbx_1 += 0x10
while (i != 0)

void* rdi_2 = &arg2[0xe]
void* rbx_2 = &r12[6]

do
    *rdi_2 = 0
    i_1 -= 1
    int64_t rsi_2 = sx.q(*(rbx_2 + 8))
    int64_t rbp = *rbx_2
    *(rbx_2 + rcx_3) = rsi_2.d
    
    if (rsi_2.d != 0)
        sub_140638750(rdi_2, rsi_2.d, 0)
        memcpy(*rdi_2, rbp, (rsi_2 << 2).d)
        rcx_3 = arg_8
    else
        *(rbx_2 + rax_2 + 0xc) = 0
    
    rdi_2 += 0x10
    rbx_2 += 0x10
while (i_1 != 0)

arg2[0x16] = r12[0xa].d
arg2[0x17] = *(r12 + 0x54)
arg2[0x18] = r12[0xb].d
*(arg2 + 0x68) = r12[0xc]
return arg2
