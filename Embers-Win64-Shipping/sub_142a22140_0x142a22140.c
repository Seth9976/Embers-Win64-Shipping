// 函数: sub_142a22140
// 地址: 0x142a22140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = *(arg2 + 0xfb8)
void* r15 = *(arg2 + 0xf58)
void* rsi = arg2 + 0x180
void* r13 = *(arg2 + 0xf50)
int32_t rbp = 0
int64_t* arg_10 = r10
void* const rax_3
int32_t rcx_3

if (*(*(arg2 + 0xf00) + 3) != 0)
    rcx_3 = 0
    rax_3 = 0x32b
else
    int32_t rax_2 =
        sub_142a21e80(r10, arg1 + 0x319d, sx.d(*(r15 + 8)) + sx.d(*(r13 + 8)), 0, rsi + 0x300)
    r10 = arg_10
    int32_t rcx_2 = rax_2
    rax_2.b = rax_2 s> 0
    *(r15 + 8) = rax_2.b
    rbp = rcx_2 - 0x10
    *(r13 + 8) = rax_2.b
    *(arg2 + 0x7d8) = rcx_2.b
    rcx_3 = 1
    rax_3 = 0x13

void* rdx_1 = rax_3 + arg1 + 0x3082
void* var_68 = rdx_1
void* r12 = arg2 + 0x7c0
int32_t arg_8 = rcx_3
int64_t r15_1 = 0
void* i_2 = 0x10
void* i

do
    uint64_t rdi_2 = zx.q(r15_1.d) & 3
    uint64_t rbx_3 = zx.q((r15_1 s>> 2).d) & 3
    int32_t rax_5 =
        sub_142a21e80(r10, rdx_1, sx.d(*(rbx_3 + r15)) + sx.d(*(rdi_2 + r13)), rcx_3, rsi)
    r10 = arg_10
    r12 += 1
    rdx_1 = var_68
    int32_t rcx_5 = rax_5
    rax_5.b = rax_5 s> 0
    int32_t rcx_6 = rcx_5 + arg_8
    rbp += rcx_6
    *(rbx_3 + r15) = rax_5.b
    rsi += 0x20
    *(rdi_2 + r13) = rax_5.b
    *(r12 - 1) = rcx_6.b
    r15_1 += 1
    i = i_2
    i_2 -= 1
    rcx_3 = arg_8
while (i != 1)
int32_t i_1 = 0x10
void* i_3 = arg1 + 0x32a5
int64_t rax_6 = 0x10
i_2 = i_3
void* r12_2 = arg2 + 0x7d0
arg_8.q = 0x10

do
    int64_t rcx_7 = 0
    
    if (i_1 s> 0x13)
        rcx_7 = 2
    
    int64_t rdi_3 = rcx_7 + (zx.q(rax_6.d) & 1)
    void* rbx_4
    rbx_4.b = (i_1.b & 3) u> 1
    char* rbx_5 = rbx_4 + rcx_7 + 4
    int32_t rax_10 =
        sub_142a21e80(arg_10, i_3, sx.d(*(rbx_5 + r15)) + sx.d(*(rdi_3 + r13 + 4)), 0, rsi)
    i_3 = i_2
    r12_2 += 1
    bool cond:3_1 = rax_10 s> 0
    rbp += rax_10
    *(rbx_5 + r15) = cond:3_1
    rsi += 0x20
    *(rdi_3 + r13 + 4) = cond:3_1
    i_1 += 1
    *(r12_2 - 1) = rax_10.b
    rax_6 = arg_8.q + 1
    arg_8.q = rax_6
while (i_1 s< 0x18)

return zx.q(rbp)
