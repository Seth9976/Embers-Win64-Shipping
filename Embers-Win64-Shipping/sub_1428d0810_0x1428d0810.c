// 函数: sub_1428d0810
// 地址: 0x1428d0810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t r10 = arg4
int64_t i = arg3
int32_t* r9 = arg7
char* r14 = arg2
int64_t rbp = arg1
int32_t rdi = *r9
int32_t arg_18 = rdi

if (rdi != 0)
    while (i != 0)
        i -= 1
        char rcx = *(zx.q(rdi) + arg6) ^ *rbp
        rbp += 1
        *r14 = rcx
        r14 = &r14[1]
        rdi = (rdi + 1) & 0xf
        
        if (rdi == 0)
            break
    
    arg_18 = rdi

void* r8 = arg5
uint32_t rsi = 1
void* r15 = r8 + 0xc
int64_t r11 = arg8
int32_t i_3 = 0xc
int32_t* result = zx.q(*(r8 + 0xf))
int32_t r12_6 =
    ((zx.d(*(r8 + 0xc)) << 8 | zx.d(*(r8 + 0xd))) << 8 | zx.d(*(r8 + 0xe))) << 8 | result.d

if (i u>= 0x10)
    do
        uint64_t rdx_2 = i u>> 4
        
        if (rdx_2 u> 0x10000000)
            rdx_2 = 0x10000000
        
        int32_t r12_7 = r12_6 + rdx_2.d
        uint64_t rax_4 = zx.q(r12_7)
        uint64_t r13_1 = rdx_2 - rax_4
        
        if (rax_4 u>= rdx_2)
            r13_1 = rdx_2
        
        r12_6 = 0
        
        if (rax_4 u>= rdx_2)
            r12_6 = r12_7
        
        r11(rbp, r14, r13_1, r10, r8)
        r8 = arg5
        *r15 = (r12_6 u>> 0x18).b
        *(r8 + 0xd) = (r12_6 u>> 0x10).b
        *(r8 + 0xe) = (r12_6 u>> 8).b
        *(r8 + 0xf) = r12_6.b
        
        if (r12_6 == 0)
            int32_t j_1 = 0xc
            uint32_t rax_11 = 1
            void* rdx_4 = r15
            int32_t j
            
            do
                uint32_t rcx_3 = zx.d(*(rdx_4 - 1))
                rdx_4 -= 1
                uint32_t rax_12 = rax_11 + rcx_3
                *rdx_4 = rax_12.b
                rax_11 = rax_12 u>> 8
                j = j_1
                j_1 -= 1
            while (j != 1)
            r8 = arg5
        
        r10 = arg4
        result = 0x10000000
        r11 = arg8
        uint64_t r13_2 = r13_1 << 4
        i -= r13_2
        r14 = &r14[r13_2]
        rbp += r13_2
    while (i u>= 0x10)
    
    rdi = arg_18
    i_3 = 0xc
    r9 = arg7

if (i == 0)
    *r9 = rdi
else
    *arg6 = 0
    arg6[1] = 0
    r11(arg6, arg6, 1, r10, r8)
    *r15 = ((r12_6 + 1) u>> 0x18).b
    *(arg5 + 0xd) = ((r12_6 + 1) u>> 0x10).b
    *(arg5 + 0xe) = ((r12_6 + 1) u>> 8).b
    *(arg5 + 0xf) = (r12_6 + 1).b
    
    if (r12_6 == 0xffffffff)
        int32_t i_1
        
        do
            uint32_t rax_20 = zx.d(*(r15 - 1))
            r15 -= 1
            uint32_t rsi_1 = rsi + rax_20
            *r15 = rsi_1.b
            rsi = rsi_1 u>> 8
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    int64_t i_2
    
    do
        char* rcx_6 = zx.q(rdi)
        rdi += 1
        *(rcx_6 + r14) = rcx_6[rbp] ^ *(rcx_6 + arg6)
        i_2 = i
        i -= 1
    while (i_2 != 1)
    result = arg7
    *result = rdi

return result
