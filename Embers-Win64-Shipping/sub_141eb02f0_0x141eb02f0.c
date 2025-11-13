// 函数: sub_141eb02f0
// 地址: 0x141eb02f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0xc0) & 0x80000001

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffe) + 1

void* rdi_2 = sx.q(rax_1) * 0x60 + arg1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(rdi_2 + 0x24))
int32_t rdx_1 = temp0 & 0x3f
int32_t rax_7 = temp1 + rdx_1
int32_t rax_9 = (rax_7 & 0x3f) - rdx_1
int32_t rcx_1 = rax_7 s>> 6
int32_t rbx = rax_9

if (rax_9 == 0 && rcx_1 s> 0)
    rcx_1 -= 1
    rbx = rax_9 + 0x40
else if (arg2 == 0 || rax_9 == 0)
    return rax_9

int32_t* rsi_1 = *(*(rdi_2 + 0x10) + (sx.q(rcx_1) << 3))

if (data_143a2d63c != 0 && sub_140b011d0() != 0)
    void var_28
    int64_t* rax_12 = sub_141ebfc60(&var_28, nullptr, 2)
    void* rcx_4 = *rax_12
    *(rcx_4 + 0x10) = 0
    *(rcx_4 + 0x18) = rsi_1
    *(rcx_4 + 0x20) = rbx
    void* rcx_5 = *rax_12
    int32_t r8_1 = rax_12[2].d
    int64_t* rdx_2 = rax_12[1]
    void* rbx_1 = *(rcx_5 + 0x30)
    
    if (rbx_1 != 0)
        *(rbx_1 + 0x48) += 1
    
    sub_141ecbbb0(rcx_5, rdx_2, r8_1, 1)
    int64_t rsi_2 = sx.q(*(rdi_2 + 0x58))
    void* rdi_3 = rdi_2 + 0x30
    int32_t rax_13 = (rsi_2 + 1).d
    *(rdi_3 + 0x28) = rax_13
    
    if (rax_13 s> *(rdi_3 + 0x2c))
        sub_14083a490(rdi_3, rsi_2.d)
    
    void* rax_14 = *(rdi_3 + 0x20)
    
    if (rax_14 != 0)
        rdi_3 = rax_14
    
    *(rdi_3 + (rsi_2 << 3)) = rbx_1
    return rax_14

return sub_141eca6a0(rsi_1, rbx)
