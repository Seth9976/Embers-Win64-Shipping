// 函数: sub_1418beb20
// 地址: 0x1418beb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143efb258)
data_143efb720(*(arg1 + 0x208), *(*arg2 + 0x10), 0)
*(arg1 + 0x220) -= 1
int64_t* r9 = *arg2
int64_t r8 = sx.q(*(arg1 + (zx.q(r9[4].b) << 3) + 8))
void* rdx_2 = *(arg1 + 0x228) + r8 * 0x28
*(rdx_2 + 8) -= *r9
int64_t rcx_2 = r8 * 5
int64_t rax_3 = *(arg1 + 0x228)
int32_t rbx_1 = 0
void* rsi = rax_3 + (rcx_2 << 3)
int32_t rcx_3 = *(rax_3 + (rcx_2 << 3) + 0x20)

if (rcx_3 s> 0)
    int64_t* rdi_1 = nullptr
    int32_t rdx_3
    
    do
        int64_t r9_1 = *(rsi + 0x18)
        rdx_3 = rcx_3
        
        if (*(rdi_1 + r9_1) == *arg2)
            int32_t rax_7 = rcx_3 - rbx_1 - 1
            
            if (rax_7 s>= 1)
                rax_7 = 1
            
            if (rax_7 != 0)
                memcpy(r9_1 + (sx.q(rbx_1) << 3), r9_1 + (sx.q(rcx_3 - rax_7) << 3), rax_7 << 3)
                rcx_3 = *(rsi + 0x20)
            
            *(rsi + 0x20) = rcx_3 - 1
            sub_1405c53d0(rsi + 0x18)
            rdx_3 = *(rsi + 0x20)
            rbx_1 -= 1
            rdi_1 -= 8
        
        rbx_1 += 1
        rdi_1 = &rdi_1[1]
        rcx_3 = rdx_3
    while (rbx_1 s< rdx_3)

void* rax_11 = *arg2
*(rax_11 + 0x20) |= 0x800
int64_t rcx_7 = *arg2

if (rcx_7 != 0)
    j_sub_140a74f90(rcx_7)

*arg2 = 0
return LeaveCriticalSection(&data_143efb258) __tailcall
