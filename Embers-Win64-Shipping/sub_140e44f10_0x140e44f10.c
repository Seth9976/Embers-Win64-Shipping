// 函数: sub_140e44f10
// 地址: 0x140e44f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *arg1
int64_t* r10 = arg1[1]
*arg2 = *r9
arg2[1] = r9[1]
void* rax_2 = r9[2]
arg2[2] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg2[3].d ^= (arg2[3].d ^ r9[3].d) & 1
int32_t rcx_3 = ((arg2[3].d ^ r9[3].d) & 2) ^ arg2[3].d
arg2[3].d = rcx_3
int32_t rdx_3 = ((rcx_3 ^ r9[3].d) & 4) ^ rcx_3
arg2[3].d = rdx_3
arg2[3].d = ((rdx_3 ^ r9[3].d) & 8) ^ rdx_3
arg2[4] = *r10
return arg2
