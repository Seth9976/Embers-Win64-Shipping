// 函数: sub_140b51c80
// 地址: 0x140b51c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi_1 = zx.q((arg2 + 0x1f) u>> 5)
uint32_t rbx_2 = (*(arg1 + 0x14) + 0x1f) u>> 5
void* rdi = arg1
int64_t rcx = *(arg1 + 8)

if (rbx_2 u> 2)
    if (rcx != 0)
        *(rdi + 8) = sub_140a84c80(rcx, zx.q(rbx_2) << 2, 0)
    else
        if (rbx_2 != 0)
            int64_t rax_1 = sub_140a84c80(rcx, zx.q(rbx_2) << 2, 0)
            *(rdi + 8) = rax_1
            rcx = rax_1
        
        memmove(rcx, rdi, rsi_1.d << 2)
else if (rcx != 0)
    memmove(rdi, rcx, rsi_1.d << 2)
    rcx = *(rdi + 8)
    
    if (rcx != 0)
        *(rdi + 8) = sub_140a84c80(rcx, 0, 0)

if (rbx_2 == 0)
    return 

void* rax_2 = *(rdi + 8)

if (rax_2 != 0)
    rdi = rax_2

memset(rdi + (rsi_1 << 2), 0, zx.q(rbx_2 - rsi_1.d) << 2)
