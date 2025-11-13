// 函数: sub_1408f5290
// 地址: 0x1408f5290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x248)

if (rax != 0)
    return rax

void* rdx_1

if (*(arg1 + 0x208) == rax)
    rdx_1 = nullptr
else
    void* rax_1 = sub_1408f5ff0()
    
    if (rax_1 == 0)
        rdx_1 = nullptr
    else
        rdx_1 = *(arg1 + 0x208)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rdx_1 = nullptr

void* rax_4 = sub_1420224f0(rdx_1)
void* rbx_1 = rax_4
void* rax_5
int64_t rax_6
void* rdx_2

if (rax_4 != 0)
    rax_5 = sub_1408f5ff0()
    rdx_2 = *(rbx_1 + 0x10)
    rax_6 = sx.q(*(rax_5 + 0x38))

if (rax_4 == 0 || rax_6.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
    rbx_1 = nullptr

*(arg1 + 0x248) = rbx_1
return rbx_1
