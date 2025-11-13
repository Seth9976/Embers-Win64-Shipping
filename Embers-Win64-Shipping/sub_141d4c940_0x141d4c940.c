// 函数: sub_141d4c940
// 地址: 0x141d4c940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0x2a])
sub_141d4c780(arg1, 0)
int32_t i_8 = arg1[9].d
int64_t rdi = 0

if (i_8 s> 0)
    int64_t r8_1 = 0
    uint64_t i_5 = zx.q(i_8)
    uint64_t i
    
    do
        void* rcx_2 = arg1[8]
        void* rax = &arg1[7]
        int64_t rdx_3 = (sx.q(arg1[9].d) - 1) & r8_1
        
        if (rcx_2 != 0)
            rax = rcx_2
        
        r8_1 += 1
        *(rax + (rdx_3 << 2)) = 0xffffffff
        i = i_5
        i_5 -= 1
    while (i != 1)

sub_141d4c780(&arg1[0xa], 0)
int32_t i_9 = arg1[0x13].d

if (i_9 s> 0)
    int64_t r8_2 = 0
    uint64_t i_6 = zx.q(i_9)
    uint64_t i_1
    
    do
        void* rcx_4 = arg1[0x12]
        void* rax_1 = &arg1[0x11]
        int64_t rdx_6 = (sx.q(arg1[0x13].d) - 1) & r8_2
        
        if (rcx_4 != 0)
            rax_1 = rcx_4
        
        r8_2 += 1
        *(rax_1 + (rdx_6 << 2)) = 0xffffffff
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)

sub_141d4c780(&arg1[0x14], 0)
int32_t i_10 = arg1[0x1d].d

if (i_10 s> 0)
    int64_t r8_3 = 0
    uint64_t i_7 = zx.q(i_10)
    uint64_t i_2
    
    do
        void* rcx_6 = arg1[0x1c]
        void* rax_2 = &arg1[0x1b]
        int64_t rdx_9 = (sx.q(arg1[0x1d].d) - 1) & r8_3
        
        if (rcx_6 != 0)
            rax_2 = rcx_6
        
        r8_3 += 1
        *(rax_2 + (rdx_9 << 2)) = 0xffffffff
        i_2 = i_7
        i_7 -= 1
    while (i_2 != 1)

sub_141d4c780(&arg1[0x1e], 0)
void* result = zx.q(arg1[0x27].d)

if (result.d s> 0)
    uint64_t i_4 = zx.q(result.d)
    uint64_t i_3
    
    do
        void* result_1 = arg1[0x26]
        result = &arg1[0x25]
        int64_t rdx_12 = (sx.q(arg1[0x27].d) - 1) & rdi
        
        if (result_1 != 0)
            result = result_1
        
        rdi += 1
        *(result + (rdx_12 << 2)) = 0xffffffff
        i_3 = i_4
        i_4 -= 1
    while (i_3 != 1)

if (arg1 == -0x150)
    return result

return LeaveCriticalSection(&arg1[0x2a])
