// 函数: sub_14205cca0
// 地址: 0x14205cca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg10
int64_t* rsi = *(arg8 + 0x28)
void* var_38 = rbp
sub_1420f9fb0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, *(arg7 + 0x200), arg9)
int32_t rbx = *(arg1 + 0x10)
int32_t rdi_1 = *(arg1 + 0xc)
int64_t rsi_1 = sx.q(*(rbp + 0x38))
void* r14_1 = sx.q(rsi[1].d) * 0x150 + *(*rsi + 0x20)
int32_t rax_6 = *(arg7 + 0x240) & 0xf
int64_t rcx = **(r14_1 + 0x128)
int32_t rax_8 = (rsi_1 + 1).d
*(rbp + 0x38) = rax_8

if (rax_8 s> *(rbp + 0x3c))
    sub_1419d6df0(rbp, rsi_1.d)

void* rax_9 = *(rbp + 0x30)
int64_t rcx_2 = rsi_1 * 3
void* rdx_1 = rbp

if (rax_9 != 0)
    rdx_1 = rax_9

*(rdx_1 + (rcx_2 << 2)) = rax_6.q
*(rdx_1 + (rcx_2 << 2) + 8) = rcx:4.d
int32_t rax_11 = *(arg7 + 0x244)

if (rax_11 s> 0xffffffff)
    int64_t* rcx_3 = *(r14_1 + 0x118)
    
    if (rcx_3 != 0)
        int64_t rsi_2 = sx.q(*(rbp + 0x38))
        int64_t rax_13 = *rcx_3
        int32_t rax_14 = (rsi_2 + 1).d
        *(rbp + 0x38) = rax_14
        
        if (rax_14 s> *(rbp + 0x3c))
            sub_1419d6df0(rbp, rsi_2.d)
        
        void* rax_15 = *(rbp + 0x30)
        int64_t rcx_5 = rsi_2 * 3
        
        if (rax_15 != 0)
            rbp = rax_15
        
        *(rbp + (rcx_5 << 2)) = (rax_11 & 0xf).q
        *(rbp + (rcx_5 << 2) + 8) = rax_13:4.d

sub_14088d770(arg9, rdi_1, *(*(r14_1 + 0x128) + 0x10))
return sub_14088d770(arg9, rbx, *(*(r14_1 + 0x130) + 0x10)) __tailcall
