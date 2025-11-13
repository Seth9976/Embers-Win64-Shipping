// 函数: sub_140cf1730
// 地址: 0x140cf1730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x78)
void* rbx = arg4
int64_t* rax = arg3

if (arg3 == 0)
    *(rdx + 0xe8)
    rax = sub_140d2be40(rbx, *(rdx + 0xe0))
    rdx = *(arg1 + 0x78)
else if (rbx == 0)
    rbx = sx.q(*(arg1 + 0x4c)) + rax

int64_t rdx_2 = *(rdx + 0xe8)
int128_t var_18 = *arg2
char result = sub_140d18770(rax, rdx_2, &var_18)
*rbx |= result
return result
