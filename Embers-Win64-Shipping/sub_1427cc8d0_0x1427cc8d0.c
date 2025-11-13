// 函数: sub_1427cc8d0
// 地址: 0x1427cc8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = arg2

if (arg2 == 0)
    return 0xffffffff

char* rax_1 = *arg1
char* r11 = rax_1
int32_t i_3 = arg1[1].d
int32_t i_2 = i_3

if (i_3 != 0)
    int32_t rdx_1
    int32_t i
    
    do
        void* rcx = rax_1
        uint32_t j
        uint32_t r8_1
        
        do
            r8_1 = zx.d(*rcx)
            j = zx.d(*(rcx + rdi - rax_1))
            
            if (r8_1 != j)
                break
            
            rcx += 1
        while (j != 0)
        
        if (r8_1 - j == 0)
            return rax_1 - r11
        
        int32_t rdx = rax_1.d
        char j_1
        
        do
            j_1 = *rax_1
            rax_1 = &rax_1[1]
        while (j_1 != 0)
        rdx_1 = rdx - rax_1.d
        i = i_2
        i_2 += rdx_1
    while (i != neg.d(rdx_1))

char i_1 = *rdi

while (i_1 != 0)
    uint64_t rdx_2 = zx.q(arg1[1].d)
    
    if ((*(arg1 + 0xc) & 0x7fffffff) u> rdx_2.d)
        if (rdx_2 != neg.q(*arg1))
            *(rdx_2 + *arg1) = i_1
        
        arg1[1].d += 1
    else
        sub_1427ccc80(arg1, rdi)
    
    i_1 = rdi[1]
    rdi = &rdi[1]

uint64_t rcx_2 = zx.q(arg1[1].d)
int32_t rax_8 = *(arg1 + 0xc) & 0x7fffffff
char arg_10 = 0

if (rax_8 u<= rcx_2.d)
    sub_1427ccc80(arg1, &arg_10)
    return zx.q(i_3)

if (rcx_2 != neg.q(*arg1))
    *(rcx_2 + *arg1) = 0

arg1[1].d += 1
return zx.q(i_3)
