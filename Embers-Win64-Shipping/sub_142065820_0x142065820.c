// 函数: sub_142065820
// 地址: 0x142065820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x110)
void* rbx = arg1 + 0x100

if (rax != 0)
    rbx = rax

int64_t rsi = 0
int64_t rbp = sx.q(*(arg1 + 0x118)) << 3
void* result = rbx + rbp
uint64_t rbp_1 = rbp u>> 3

if (rbx u> result)
    rbp_1 = 0

if (rbp_1 != 0)
    do
        int64_t* rdi_1 = *rbx
        (*(*rdi_1 + 0x20))(rdi_1)
        result = (**rdi_1)(rdi_1, 1)
        rsi += 1
        rbx += 8
    while (rsi != rbp_1)

bool cond:1 = *(arg1 + 0x11c) == 0
*(arg1 + 0x118) = 0

if (cond:1)
    return result

return sub_1408098d0(arg1 + 0x100, 0) __tailcall
