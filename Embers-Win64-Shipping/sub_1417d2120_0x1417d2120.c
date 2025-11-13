// 函数: sub_1417d2120
// 地址: 0x1417d2120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
*arg1 = 0
arg1[1] = 0
arg1[3].d = 0

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_140638cc0(&arg1[2], 0)

int32_t rax = *(arg1 + 0x2c)
arg1[5].d = 0

if (rax s< 0 && rax != 0)
    sub_140638cc0(&arg1[4], 0)

int32_t rax_1 = *(arg1 + 0x7c)
arg1[0xf].d = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405dadb0(&arg1[0xe], 0)

int32_t rax_2 = *(arg1 + 0x3c)
arg1[7].d = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_140638cc0(&arg1[6], 0)

int32_t rax_3 = *(arg1 + 0x4c)
arg1[9].d = 0

if (rax_3 s< 0 && rax_3 != 0)
    sub_1405c5570(&arg1[8], 0)

int32_t rax_4 = *(arg1 + 0x5c)
arg1[0xb].d = 0

if (rax_4 s< 0 && rax_4 != 0)
    sub_140679c00(&arg1[0xa], 0)

int32_t rax_5 = *(arg1 + 0x6c)
arg1[0xd].d = 0

if (rax_5 s< 0 && rax_5 != 0)
    sub_1405dadb0(&arg1[0xc], 0)

int32_t rax_6 = *(arg1 + 0x8c)
arg1[0x11].d = 0

if (rax_6 s< 0 && rax_6 != 0)
    sub_1405dadb0(&arg1[0x10], 0)

EnterCriticalSection(rdi + 0xb0)
int64_t rsi = sx.q(*(rdi + 0xa8))
int32_t rax_7 = (rsi + 1).d
*(rdi + 0xa8) = rax_7

if (rax_7 s> *(rdi + 0xac))
    sub_1405a4f90(rdi + 0xa0)

int64_t* rcx_12 = (rsi << 4) + *(rdi + 0xa0)
*rcx_12 = *arg2
void* result = arg2[1]
rcx_12[1] = result

if (result != 0)
    *(result + 8) += 1

if (rdi == -0xb0)
    return result

return LeaveCriticalSection(rdi + 0xb0)
