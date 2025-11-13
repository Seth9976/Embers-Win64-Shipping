// 函数: sub_1426b5250
// 地址: 0x1426b5250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_2 = zx.d((*(*arg1 + 0x298))())
int32_t* rsi_1

if (rax_2 == 0)
    rsi_1 = nullptr
else
    int64_t r10_2 = zx.q(rax_2 + 3) & 0xfffffffffffffffc
    rsi_1 = arg3 - r10_2
    
    if (arg3 != r10_2)
        *rsi_1 = 0xffffffff

if ((*(arg1 + 0x55) & 4) == 0)
    jump(*(*arg1 + 0x268))

int64_t rdx = sx.q(*arg4)
void* rbx

if (rdx.d s< 0 || rdx.d s>= *(arg2 + 0x138))
    rbx = nullptr
else
    rbx = *(*(arg2 + 0x130) + (rdx << 3))

int64_t var_48
int32_t var_40
int32_t var_38

if (rbx == 0)
    var_38 = 0x7f800000
    var_40 = 0
    var_48 = 0
    int64_t arg_8 = 0
    void* rax_4 = sub_140d2e1f0(arg1, arg2, 0, 0xfffffff, 0, 0)
    char r9 = *(arg1 + 0x54)
    rbx = rax_4
    int16_t r8 = *(arg1 + 0x52)
    int16_t rdx_2 = arg1[0xa].w
    int64_t rcx_1 = arg1[9]
    *(rax_4 + 0x55) |= 1
    *(rax_4 + 0x48) = rcx_1
    *(rax_4 + 0x50) = rdx_2
    *(rax_4 + 0x52) = r8
    *(rax_4 + 0x54) = r9
    int64_t r13_1 = sx.q(*(arg2 + 0x138))
    int32_t rax_5 = (r13_1 + 1).d
    *(arg2 + 0x138) = rax_5
    
    if (rax_5 s> *(arg2 + 0x13c))
        sub_1405a4d70(arg2 + 0x130)
    
    *(*(arg2 + 0x130) + (r13_1 << 3)) = rbx
    rdx = zx.q(*arg4)

*rsi_1 = rdx.d
(*(*rbx + 0x2a8))(rbx, *(arg2 + 0xa0))
(*(*rbx + 0x268))(rbx, arg2, arg3, zx.q(arg5), var_48, var_40, var_38)
(*(*rbx + 0x260))(rbx, arg1[8])
int64_t result = (*(*rbx + 0x288))(rbx, arg2)
*arg4 += 1
return result
