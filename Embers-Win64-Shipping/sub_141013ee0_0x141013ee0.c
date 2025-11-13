// 函数: sub_141013ee0
// 地址: 0x141013ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x58)

if (*(arg1 + 0x50) == 0)
    sub_141013a40(arg1)

int32_t* r14 = *(arg1 + 0x40)
int64_t rax = sx.q(*r14)
*arg3 = rax.d
int64_t rcx_2 = rax * 5
int64_t rax_1 = *(arg1 + 0x28)
int64_t* rdx = *(rax_1 + (rcx_2 << 3) + 0x10)
void* rbp = rax_1 + (rcx_2 << 3)
uint64_t rax_2 = zx.q(*(arg1 + 0x1c))
int64_t rcx_3 = *rdx
*arg2 = rcx_3
int64_t rcx_4 = rcx_3 + rax_2
*rdx = rcx_4

if (rcx_4 == rdx[1])
    void* rcx_5 = *(rbp + 0x10)
    
    if (rcx_5 != 0)
        if (*(rbp + 0x20) != 1)
            void* rax_3 = *(rcx_5 + 0x10)
            *(rbp + 0x10) = rax_3
            *(rax_3 + 0x18) = 0
            j_sub_140a74f90(rcx_5)
            (*(*(rbp + 8) + 8))(rbp + 8, zx.q(*(rbp + 0x20) - 1))
        else
            sub_14101ec50(rbp + 8)
    
    if (*(rbp + 0x20) == 0)
        if (*(arg1 + 0x50) != 1)
            void* rax_5 = *(arg1 + 0x40)
            
            if (r14 != rax_5)
                void* rax_7 = *(arg1 + 0x48)
                
                if (r14 != rax_7)
                    *(*(r14 + 8) + 0x10) = *(r14 + 0x10)
                    *(*(r14 + 0x10) + 8) = *(r14 + 8)
                else
                    void* rax_8 = *(rax_7 + 0x10)
                    *(arg1 + 0x48) = rax_8
                    *(rax_8 + 8) = 0
            else
                void* rax_6 = *(rax_5 + 8)
                *(arg1 + 0x40) = rax_6
                *(rax_6 + 0x10) = 0
            
            j_sub_140a74f90(r14)
            (*(*(arg1 + 0x38) + 8))(arg1 + 0x38, zx.q(*(arg1 + 0x50) - 1))
        else
            sub_14101ebf0(arg1 + 0x38)

if (arg1 != -0x58)
    LeaveCriticalSection(arg1 + 0x58)

return arg2
