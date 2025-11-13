// 函数: sub_140a37670
// 地址: 0x140a37670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e52150
sub_140a38850()
EnterCriticalSection(&data_143cf8d78)
int64_t rsi = arg1[3]
int64_t r8 = arg1[2]
int64_t rdi = 0x4000 - r8

if (rsi s<= rdi)
    rdi = rsi

int32_t i = 0

if (arg1[4].d s> 0)
    void* r15_1 = arg1 + 0x24
    
    do
        sub_140a37f40(&data_143cf8d78, *(arg1 + (sx.q(i) << 2) + 0x24), r8.d, rdi.d)
        int64_t rax_2 = sx.q(*r15_1)
        int32_t r10_1 = (rax_2 + 2).d
        int64_t rcx_1 = (rax_2 + 2) * 0x28
        void* r8_2 = data_143cf8e48 + rcx_1
        int16_t r9_2 = *(r8_2 + 0x20)
        
        if (r9_2 == 1)
            bool cond:0_1 = *r8_2 != 0
            *(r8_2 + 0x1c) = data_14399fa50
            
            if (not(cond:0_1))
                void* rdx_1 = data_143cf8e48
                *(rdx_1 + rcx_1 + 0x14) = 1
                *(rdx_1 + rcx_1 + 0x18) = *(rdx_1 + 0x40)
                *(data_143cf8e48 + sx.q(*(rdx_1 + 0x40)) * 0x28 + 0x14) = r10_1
                *(rdx_1 + 0x40) = r10_1
        
        rsi -= rdi
        *(r8_2 + 0x20) = r9_2 - 1
        rdi = 0x4000
        r8 = 0
        
        if (rsi s<= 0x4000)
            rdi = rsi
        
        i += 1
        r15_1 += 4
    while (i s< arg1[4].d)

LeaveCriticalSection(&data_143cf8d78)
*arg1 = &data_142e52060

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

sub_140a74f90(arg1)
return arg1
