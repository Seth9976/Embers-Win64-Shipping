// 函数: sub_1421e1fe0
// 地址: 0x1421e1fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[5]
void* rbp = &arg1[1]
void* rbx = rbp

if (rax != 0)
    rbx = rax

int64_t rdi = 0
int64_t rsi = sx.q(*(rbp + 0x28)) << 2
uint64_t rsi_1 = rsi u>> 2

if (rbx u> rbx + rsi)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        sub_142188fc0(*(*(*arg1 + 0x28) + (sx.q(*rbx) << 3)))
        rdi += 1
        rbx += 4
    while (rdi != rsi_1)

void var_58
int64_t* rax_4 = sub_1421e17b0(&var_58, nullptr, arg2)
void* rdx_1 = *rax_4
*(rdx_1 + 0x10) = *arg1
void* rbx_1 = rdx_1 + 0x18
*(rbx_1 + 0x20) = 0
int64_t rsi_2 = sx.q(*(rbp + 0x28))
void* r14_1 = *(rbp + 0x20)
*(rbx_1 + 0x28) = rsi_2.d

if (rsi_2.d != 0)
    sub_1421fc880(rbx_1, rsi_2.d, 0)
    void* rax_5 = *(rbx_1 + 0x20)
    
    if (r14_1 != 0)
        rbp = r14_1
    
    if (rax_5 != 0)
        rbx_1 = rax_5
    
    memcpy(rbx_1, rbp, (rsi_2 << 2).d)
else
    *(rbx_1 + 0x2c) = 8

void* rcx_6 = *rax_4
int32_t r8_3 = rax_4[2].d
int64_t* rdx_4 = rax_4[1]
int64_t* rbx_2 = *(rcx_6 + 0x50)
int64_t* arg_18 = rbx_2
int32_t* rdi_2 = &rbx_2[9]

if (rbx_2 != 0)
    *rdi_2 += 1
    rbx_2 = arg_18

sub_14085c960(rcx_6, rdx_4, r8_3, 1)
void* rax_6 = *arg3
int64_t* arg_8 = rbx_2
*(rax_6 + 0x4c) = 2

if (rbx_2 != 0)
    *rdi_2 += 1
    rbx_2 = arg_18

int32_t result = sub_14084e1b0(*arg3, &arg_8)

if (rbx_2 != 0)
    result = *rdi_2
    *rdi_2 -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_18)

return result
