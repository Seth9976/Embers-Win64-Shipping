// 函数: sub_1427d8d50
// 地址: 0x1427d8d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm1 = (*(arg2 + 0x10)).q
sub_1427e5da0(arg1, *arg2)
int32_t* rax = arg1[5]

if (rax != 0)
    *rax += 1

int64_t rax_1 = zmm1(arg1[2])
void* r8 = *arg1
char const* const r8_1

if (*(r8 + 0x10) == 0)
    r8_1 = "bad__repx__name"
else
    r8_1 = *(*(r8 + 8) + zx.q(*(r8 + 0x10) - 1) * 0x10)

void* result = sub_1427e32a0(arg1[1], arg1[4], r8_1, rax_1)
void* rdx_5 = *arg1

if (*(rdx_5 + 0x10) != 0)
    if (*(*(rdx_5 + 8) + zx.q(*(rdx_5 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_6 = arg1[1]
        (*(*rcx_6 + 0x20))(rcx_6, rdx_5)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
