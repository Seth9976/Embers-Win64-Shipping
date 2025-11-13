// 函数: sub_1427d9020
// 地址: 0x1427d9020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm1 = (*(arg2 + 0x10)).q
sub_1427e5da0(arg1, *arg2)
int32_t* rax = arg1[5]

if (rax != 0)
    *rax += 1

void arg_8
char* rax_1 = zmm1(&arg_8, arg1[2])
void* r8 = *arg1
char const* const r8_1

if (*(r8 + 0x10) == 0)
    r8_1 = "bad__repx__name"
else
    r8_1 = *(*(r8 + 8) + zx.q(*(r8 + 0x10) - 1) * 0x10)

void* result = sub_1427e72d0(arg1[1], arg1[3], r8_1, zx.d(*rax_1), &data_143b7bbf0)
void* rdx_6 = *arg1

if (*(rdx_6 + 0x10) != 0)
    if (*(*(rdx_6 + 8) + zx.q(*(rdx_6 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_6 = arg1[1]
        (*(*rcx_6 + 0x20))(rcx_6, rdx_6)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
