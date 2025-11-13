// 函数: sub_1413c8a00
// 地址: 0x1413c8a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *arg1
void* rbx = arg1[1]
int32_t arg_8
sub_140865c40(rbx + 0x1078, &arg_8, rdi)
int64_t rax = sx.q(arg_8)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(rbx + 0x1078) + rax * 0x18

int32_t* rax_2 = rcx_1 + 8

if (rcx_1 == 0)
    rax_2 = nullptr

if (rax_2 != 0)
    int32_t rcx_2 = *rax_2
    void* r8_1 = rbx + 0x10c8
    void* rax_3 = *(r8_1 + 0x10)
    
    if (rax_3 != 0)
        r8_1 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rcx_2)
    int64_t rdx_4 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(r8_1 + (rdx_4 << 2)) &= not.d(1 << (rcx_2.b & 0x1f))
    rdi = *arg1
    rbx = arg1[1]

return sub_140868c90(rbx + 0x1078, rdi) __tailcall
