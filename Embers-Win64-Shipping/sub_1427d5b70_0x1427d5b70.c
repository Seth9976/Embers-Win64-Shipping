// 函数: sub_1427d5b70
// 地址: 0x1427d5b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm1 = (*(arg2 + 0x10)).q
sub_1427e5da0(arg1, *arg2)
int32_t* rax = arg1[5]

if (rax != 0)
    *rax += 1

void arg_8
int32_t* rax_1 = zmm1(&arg_8, arg1[2])
void* rdx_2 = *arg1
char const* const r8

if (*(rdx_2 + 0x10) == 0)
    r8 = "bad__repx__name"
else
    r8 = *(*(rdx_2 + 8) + zx.q(*(rdx_2 + 0x10) - 1) * 0x10)

void* result = sub_1427e72d0(arg1[1], arg1[3], r8, *rax_1, &data_143b7b180)
void* rdx_4 = *arg1

if (*(rdx_4 + 0x10) != 0)
    if (*(*(rdx_4 + 8) + zx.q(*(rdx_4 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_8 = arg1[1]
        (*(*rcx_8 + 0x20))(rcx_8, rdx_4)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
