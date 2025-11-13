// 函数: sub_1427d4e00
// 地址: 0x1427d4e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm1 = (*(arg2 + 0x10)).q
sub_1427e5da0(arg1, *arg2)
int32_t* rax = arg1[5]

if (rax != 0)
    *rax += 1

int128_t var_68
int128_t* rax_1 = zmm1(&var_68, arg1[2])
void* rdx_2 = *arg1
bool cond:0 = *(rdx_2 + 0x10) == 0
int32_t zmm0 = rax_1[1].d
zmm1 = *(rax_1 + 0x14)
int32_t zmm2 = *(rax_1 + 0x18)
var_68 = *rax_1
int32_t var_58 = zmm0
int32_t var_54 = zmm1.d
int32_t var_50 = zmm2
char const* const r9

if (cond:0)
    r9 = "bad__repx__name"
else
    r9 = *(*(rdx_2 + 8) + zx.q(*(rdx_2 + 0x10) - 1) * 0x10)

void* result = sub_1427e3170(arg1[1], arg1[4], arg1[3], r9, &var_68)
void* rdx_4 = *arg1

if (*(rdx_4 + 0x10) != 0)
    if (*(*(rdx_4 + 8) + zx.q(*(rdx_4 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_8 = arg1[1]
        (*(*rcx_8 + 0x20))(rcx_8, rdx_4)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
