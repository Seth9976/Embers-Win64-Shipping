// 函数: sub_141a540c0
// 地址: 0x141a540c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_c = arg3 + arg4
int64_t rdi = 0
int32_t var_14 = arg3
arg1[0x15].d = arg6
*(arg1 + 0x90) = 1.o

if (arg6 == 0xffffffff)
    arg1[0x15].d = 0
    
    if ((*(*arg1 + 0x2a8))(arg1, arg5, 0, 0, 1, 0) != 0)
        int64_t i
        
        do
            arg1[0x15].d += 1
            i = (*(*arg1 + 0x2a8))(arg1, arg2, 0, 0)
        while (i != 0)

int64_t r9 = 0
int64_t* r8 = *arg2
uint64_t r10_1 = sx.q(arg2[1].d) << 3 u>> 3

if (r8 u> &r8[arg2[1]])
    r10_1 = 0

if (r10_1 != 0)
    int32_t rdx_1 = *(arg1 + 0xac)
    
    do
        void* rax_7 = *r8
        r8 = &r8[1]
        int32_t rcx_2 = *(rax_7 + 0xac) + 1
        
        if (rcx_2 s>= rdx_1)
            rdx_1 = rcx_2
        
        r9 += 1
        *(arg1 + 0xac) = rdx_1
    while (r9 != r10_1)

if ((*(*arg1 + 0x2a8))(arg1, arg2, 0, 0, 1, 0) != 0)
    int64_t* rdx_3 = *arg2
    uint64_t r8_2 = sx.q(arg2[1].d) << 3 u>> 3
    
    if (rdx_3 u> &rdx_3[arg2[1]])
        r8_2 = 0
    
    if (r8_2 != 0)
        do
            void* rcx_4 = *rdx_3
            
            if (rcx_4 != 0 && rcx_4 != arg1)
                int32_t rax_12 = *(rcx_4 + 0xa8)
                
                if (rax_12 s>= arg1[0x15].d)
                    *(rcx_4 + 0xa8) = rax_12 + 1
            
            rdx_3 = &rdx_3[1]
            rdi += 1
        while (rdi != r8_2)

int64_t* result = sub_140d226f0(arg1, sub_141a7bc30())

if (result == 0)
    return result

return sub_141a6c0c0(result)
