// 函数: sub_14101bf40
// 地址: 0x14101bf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = arg2
void* rdi = *(*(*arg1 + 0x20) + 0x4e8)
int64_t rdi_2

if (sub_140a80f10() == 0)
    rdi_2 = *(rdi + 0x38)
else
    rdi_2 = *(rdi + 0x40) + 1

EnterCriticalSection(&arg1[0x11])
int32_t rdx = arg1[0xd].d
int32_t rbp = rdx - 1

if (rbp s< 0 || *(arg1[0xc] + (sx.q(rbp) << 3)) != rdi_2)
    rbp = rdx
    int64_t r15_1 = sx.q(arg1[0xd].d)
    int32_t rax_3 = (r15_1 + 1).d
    arg1[0xd].d = rax_3
    
    if (rax_3 s> *(arg1 + 0x6c))
        sub_1405a4d70(&arg1[0xc])
    
    *(arg1[0xc] + (r15_1 << 3)) = rdi_2
    int64_t r14_1 = sx.q(arg1[0xf].d)
    int32_t rax_5 = (r14_1 + 1).d
    arg1[0xf].d = rax_5
    
    if (rax_5 s> *(arg1 + 0x7c))
        sub_1405a4f90(&arg1[0xe])
    
    r14 = arg2
    int64_t* rax_8 = (r14_1 << 4) + arg1[0xe]
    *rax_8 = 0
    rax_8[1] = 0

int64_t* rdi_5 = (sx.q(rbp) << 4) + arg1[0xe]
int64_t rsi_1 = sx.q(rdi_5[1].d)
int32_t rax_9 = (rsi_1 + 1).d
rdi_5[1].d = rax_9

if (rax_9 s> *(rdi_5 + 0xc))
    sub_1405a4f90(rdi_5)

int64_t rax_11 = rsi_1 << 4
int64_t* result = rax_11 + *rdi_5

if (rax_11 != neg.q(*rdi_5))
    *result = r14
    result[1].d = arg3
    *(result + 0xc) = arg4

if (arg1 == -0x88)
    return result

return LeaveCriticalSection(&arg1[0x11]) __tailcall
