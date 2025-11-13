// 函数: sub_14211c730
// 地址: 0x14211c730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
*(rdi + 0x1b0) = 0

if (*(rdi + 0x1b4) s<= 0xffffffff)
    sub_1405a51b0(rdi + 0x1a8, 0)

int32_t rax = *(rdi + 0x1c4)
*(rdi + 0x1c0) = 0

if (rax s< 0 && rax != 0)
    sub_1405a5130(rdi + 0x1b8, 0)

int32_t rax_1 = *(rdi + 0x1d4)
*(rdi + 0x1d0) = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405a5130(rdi + 0x1c8, 0)

int32_t rax_2 = *(rdi + 0x1e4)
*(rdi + 0x1e0) = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405a5130(rdi + 0x1d8, 0)

if ((*(rdi + 0x18c) & 8) != 0)
    int64_t* rax_3 = sub_142006940()
    int64_t r8_1 = *rax_3
    (*(r8_1 + 0x158))(rax_3, rdi, r8_1)
    *(rdi + 0x18c) &= 0xf7

*(rdi + 0x188) += 1
void* rbx = rdi + 0x60
void* rdi_1 = rdi + 0x10
int64_t i_1 = 4
int64_t result
int64_t i

do
    *(rbx - 8) = 0
    *rbx = 0
    result = sub_1421305d0(rdi_1)
    rdi_1 += 0x58
    rbx += 0x58
    i = i_1
    i_1 -= 1
while (i != 1)
return result
