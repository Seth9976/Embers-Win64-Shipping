// 函数: sub_1420a0500
// 地址: 0x1420a0500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
int64_t rax
int64_t rbx
int64_t rsi

if (rcx == 0)
    rbx = 0
    rsi = nullptr
else
    rax = (*(*rcx + 0x260))(rcx)
    rbx = rax
    
    if (rax == 0)
        rsi = nullptr
    else
        void* rax_2 = sub_1424a23e0()
        void* rdx_1 = *(rbx + 0x10)
        rax = sx.q(*(rax_2 + 0x38))
        
        if (rax.d s> *(rdx_1 + 0x38))
            rsi = nullptr
        else if (*(*(rdx_1 + 0x30) + (rax << 3)) != rax_2 + 0x30)
            rsi = nullptr
        else
            rsi = rbx

if (rbx == 0)
    rbx = nullptr
else
    void* rax_3 = sub_14252e610()
    void* rdx_2 = *(rbx + 0x10)
    rax = sx.q(*(rax_3 + 0x38))
    
    if (rax.d s> *(rdx_2 + 0x38))
        rbx = nullptr
    else if (*(*(rdx_2 + 0x30) + (rax << 3)) != rax_3 + 0x30)
        rbx = nullptr

int32_t rdx_4 = *(arg1 + 0x30) & 0xfffffffe
*(arg1 + 0x30) = rdx_4

if (rsi != 0)
    *(arg1 + 0x30) = (*(rsi + 0x228) u>> 2 & 1) | rdx_4
    return 

if (rbx != 0)
    *(arg1 + 0x30) = (zx.d(*(*(rbx + 0x220) + 0x14c)) u>> 5 & 1) | rdx_4
