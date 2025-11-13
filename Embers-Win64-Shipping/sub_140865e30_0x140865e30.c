// 函数: sub_140865e30
// 地址: 0x140865e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2

if (arg2 == 0)
    return 0

int32_t arg_18
sub_140865c40(arg1 + 0x168, &arg_18, arg2)
int64_t rax_1 = sx.q(arg_18)
void* const rcx_1

if (rax_1.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x168) + rax_1 * 0x18

void** rdi = rcx_1 + 8

if (rcx_1 == 0)
    rdi = nullptr

if (rdi == 0)
    void* rbx_1 = *(arg2 + 0x40)
    int64_t* arg_20 = &arg_10
    sub_140862bd0(arg1 + 0x168, &arg_18, &arg_20, nullptr)
    int32_t var_38_1 = 0x7f800000
    arg_18.q = 0
    rdi = *(arg1 + 0x168) + ((sx.q(arg_18) * 3 + 1) << 3)
    *rdi = sub_140d2e1f0(rbx_1, *(arg1 + 0x10), 0, 0xfffffff, 0, 0)

return *rdi
