// 函数: sub_142bf6620
// 地址: 0x142bf6620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_4 = zx.q(arg3)
int32_t* r15 = arg4
EnterCriticalSection(arg2)
void* r10 = arg2->__offset(0x28).q
int32_t rdx = arg2->__offset(0x30).d
void* arg_10 = r10
int32_t rbp_3 = (*(arg1 + 0x20) s>> 0x1f & 0xfffffffe) + 1
int32_t arg_8 = rdx

if (*(arg1 + 0x20) != arg2->__offset(0x38).d)
    void* rax_1 = arg2 + 0x3c
    int64_t i_2 = 0x10
    int64_t i
    
    do
        __builtin_memset(rax_1, 0xff, 0x40)
        rax_1 += 0x40
        i = i_2
        i_2 -= 1
    while (i != 1)
    int32_t var_58
    int32_t var_58_2 = var_58 | i_2.d
    arg2->__offset(0x38).d = *(arg1 + 0x20)

if (i_4.d != 0)
    uint64_t i_3 = i_4
    int32_t* r14_1 = arg7
    uint64_t i_1
    
    do
        int32_t rbx_1 = *r15
        uint64_t rcx_1 = zx.q(rbx_1.b)
        int32_t arg_18 = 0
        int32_t rcx_2 = *(arg2 + (rcx_1 << 2) + 0x3c)
        int32_t rcx_3
        
        if (rcx_2 == 0xffffffff || ((rcx_2 u>> 0x10 ^ rbx_1) & 0xffffff00) != 0)
            arg5 = sub_142b91d10(r10, rbx_1, rdx, &arg_18, arg5)
            rcx_3 = arg_18
            r10 = arg_10
            rdx = arg_8
            
            if ((rbx_1 & 0xffff0000) == 0 && rcx_3 u< 0x1000000)
                *(arg2 + (rcx_1 << 2) + 0x3c) = (rbx_1 << 0x10 & 0xff000000) | rcx_3
        else
            rcx_3 = rcx_2 & 0xffffff
        
        r15 += zx.q(arg6)
        *r14_1 = (rcx_3 * rbp_3 + 0x200) s>> 0xa
        r14_1 += zx.q(arg8)
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return LeaveCriticalSection(arg2) __tailcall
