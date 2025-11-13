// 函数: sub_1427e5da0
// 地址: 0x1427e5da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1

if (*(rdx + 0x10) != 0)
    int64_t rax_1 = *(rdx + 8)
    
    if (*(rax_1 + zx.q(*(rdx + 0x10) - 1) * 0x10 + 8) == 0)
        int64_t* rcx = arg1[1]
        uint64_t r8_6 = zx.q(*(rdx + 0x10) - 1) * 2
        int64_t r9_1 = *rcx
        (*(r9_1 + 0x18))(rcx, *(rax_1 + (r8_6 << 3)), r8_6, r9_1)
        void* rdx_2 = *arg1
        *(*(rdx_2 + 8) + zx.q(*(rdx_2 + 0x10) - 1) * 0x10 + 8) = 1

int64_t* rcx_4 = *arg1
int64_t var_18 = arg2
char var_10 = 0
uint64_t rdx_3 = zx.q(rcx_4[2].d)

if ((*(rcx_4 + 0x14) & 0x7fffffff) u<= rdx_3.d)
    return sub_1427e52a0(rcx_4, &var_18)

uint64_t rax_7 = rdx_3 << 4
int128_t* result = rax_7 + rcx_4[1]

if (rax_7 != neg.q(rcx_4[1]))
    *result = var_18.o

rcx_4[2].d += 1
return result
