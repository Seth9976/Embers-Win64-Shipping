// 函数: sub_141d34720
// 地址: 0x141d34720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
EnterCriticalSection(arg1 + 0x20)
int32_t arg_8
sub_140865c40(arg1 + 0x48, &arg_8, arg_10)
int64_t rax = sx.q(arg_8)
void* const rcx_2

if (rax.d == 0xffffffff)
    rcx_2 = nullptr
else
    rcx_2 = *(arg1 + 0x48) + rax * 0x18

int64_t** rdi = rcx_2 + 8

if (rcx_2 == 0)
    rdi = nullptr

if (rdi == 0)
    int64_t* arg_20 = &arg_10
    sub_141d2b8e0(arg1 + 0x48, &arg_8, &arg_20, nullptr)
    rdi = *(arg1 + 0x48) + ((sx.q(arg_8) * 3 + 1) << 3)
    int64_t* rax_4 = j_sub_140a82f30(0x10)
    
    if (rax_4 == 0)
        rax_4 = nullptr
    else
        *rax_4 = 0
        rax_4[1] = 0
    
    *rdi = rax_4

if (arg1 != -0x20)
    LeaveCriticalSection(arg1 + 0x20)

int64_t* rbx_1 = *rdi
int64_t rdi_1 = sx.q(rbx_1[1].d)
int32_t rax_5 = (rdi_1 + 1).d
rbx_1[1].d = rax_5

if (rax_5 s> *(rbx_1 + 0xc))
    sub_14090a6a0(rbx_1)

return sub_141d2d5a0(rdi_1 * 0x60 + *rbx_1, arg3)
