// 函数: sub_1427d81e0
// 地址: 0x1427d81e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_30 = *arg2
int128_t var_20 = arg2[1]
sub_1427e5da0(arg1, *arg2)
int32_t* rax = arg1[6]
int32_t rcx = 0xac

if (rax != 0)
    rcx = 0xac + *rax

int32_t var_34 = rcx
int32_t* rcx_1 = arg1[5]
char var_38 = 1

if (rcx_1 != 0)
    *rcx_1 += 1

void* result = sub_1427de5b0(arg1)
void* rdx_3 = *arg1

if (*(rdx_3 + 0x10) != 0)
    if (*(*(rdx_3 + 8) + zx.q(*(rdx_3 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_6 = arg1[1]
        (*(*rcx_6 + 0x20))(rcx_6, rdx_3)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
