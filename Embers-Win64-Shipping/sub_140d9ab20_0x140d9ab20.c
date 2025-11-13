// 函数: sub_140d9ab20
// 地址: 0x140d9ab20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = arg3

if ((*(arg3 + 0x1b) & 8) != 0)
    int32_t rax = *(arg3 + 0x14)
    
    if (rax == 0xffffffff)
        rax = *arg5
    
    *arg5 = rax + 1
    int64_t* rcx = *arg3
    arg5.b = not.b(*(arg3 + 0x1b) u>> 2) & 1
    return sub_140de8430(rcx, arg1, arg4, arg7, arg5.b, rcx[5].b u>> 7) __tailcall

int32_t rax_4 = arg7[1].d
arg3[1].d = rax_4
*(arg3 + 0xc) = arg4
int32_t var_20 = rax_4
int32_t var_1c = *(arg2 + 0x378)
*(*arg3 + 0x18) = arg2.o
int64_t rdi = sx.q(arg7[1].d)
int32_t rax_7 = (rdi + 1).d
arg7[1].d = rax_7

if (rax_7 s> *(arg7 + 0xc))
    sub_140dbce90(arg7, rdi.d)

int64_t rax_8 = *arg7
int64_t rcx_4 = rdi << 5
int32_t i = 0
*(rcx_4 + rax_8) = *rbx
*(rcx_4 + rax_8 + 0x10) = rbx[1]

if (rbx[1].d s> 0)
    int64_t r14_1 = arg6.q
    
    do
        int64_t rax_9 = sx.q(*arg5)
        void* r8_4 = (rax_9 << 5) + *r14_1
        
        if ((*(r8_4 + 0x1b) & 8) == 0)
            *arg5 = rax_9.d + 1
        
        sub_140d9ab20(arg1, arg2, r8_4, zx.q(*(rbx + 8)), arg5, r14_1, arg7)
        i += 1
    while (i s< rbx[1].d)

int32_t rdx_6 = -1
int64_t rax_11 = sx.q(*(rbx + 8))
int32_t rcx_7 = arg7[1].d - 1

if (rcx_7 != rax_11.d)
    rdx_6 = rcx_7

int64_t result = *arg7
*((rax_11 << 5) + result + 0x14) = rdx_6
return result
