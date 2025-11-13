// 函数: sub_142763780
// 地址: 0x142763780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
uint64_t rdx = zx.q(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rdx_1 = *(arg1 + 0x80)
void* r10_1 = rdx * 0x70 + *(arg1 + 0x50)
int32_t rdi = *(r10_1 + 0x40)
int64_t* r14 = *(r10_1 + 0x20)
int64_t* rbx = *(r10_1 + 0x28)
void* rsi_2 = zx.q(zx.d(rax[1]) * rdx_1) + *(arg1 + 0x70)
*(arg1 + 0x10) = &rax[2]
uint32_t r12 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
int32_t* r15 = *(r10_1 + 0x30)
int32_t arg_8 = rdi
int64_t r12_2 = zx.q(r12 * rdx_1) + *(arg1 + 0x70)
EnterCriticalSection(r10_1 + 0x48)
int32_t i = 0

if (*(arg1 + 0x40) s> 0)
    int64_t rdx_2 = *r14
    void* r12_3 = r12_2 - rsi_2
    int64_t arg_10 = rdx_2
    
    do
        int64_t rcx_1 = sx.q(*r15)
        rsi_2 += 4
        *r15 = (rcx_1 - 1).d
        int32_t r14_1 = *(rdx_2 + (rcx_1 << 2) - 4)
        *(rdx_2 + (rcx_1 << 2) - 4) = 0xffffffff
        *(rsi_2 - 4) = r14_1
        *(r12_3 + rsi_2 - 4) = rdi
        int64_t rdi_1 = sx.q(rbx[1].d)
        int32_t rax_4 = (rdi_1 + 1).d
        rbx[1].d = rax_4
        
        if (rax_4 s> *(rbx + 0xc))
            sub_1405a4cf0(rbx)
        
        i += 1
        rdx_2 = arg_10
        *(*rbx + (rdi_1 << 2)) = r14_1
        rdi = arg_8
    while (i s< *(arg1 + 0x40))

return LeaveCriticalSection(r10_1 + 0x48) __tailcall
