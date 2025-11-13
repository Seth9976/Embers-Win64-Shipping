// 函数: sub_141caa060
// 地址: 0x141caa060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_140b5ead0(arg2.d)
void* rcx_1 = arg1[8]
void* r10 = &arg1[7]
int32_t rsi = 0
int64_t r11_1 = sx.q(arg1[9].d) - 1

if (rcx_1 != 0)
    r10 = rcx_1

int32_t rdx_2 = *(r10 + ((sx.q(rax_1 + (arg2 u>> 0x20).d) & r11_1) << 2))

if (rdx_2 != 0xffffffff)
    int64_t r8_1 = *arg1
    int64_t rcx_2
    
    while (true)
        rcx_2 = sx.q(rdx_2)
        int64_t rax_5 = rcx_2 * 3
        
        if (*(r8_1 + (rax_5 << 3)) == arg2)
            break
        
        rdx_2 = *(r8_1 + (rax_5 << 3) + 0x10)
        
        if (rdx_2 == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t rax_8 = rcx_2 * 3
        int64_t rax_10 = sx.q(*(r8_1 + (rax_8 << 3) + 0x14)) & r11_1
        void* rcx_3 = r10 + (rax_10 << 2)
        int32_t i = *(r10 + (rax_10 << 2))
        
        while (i != 0xffffffff)
            if (i == rdx_2)
                *rcx_3 = *(r8_1 + (rax_8 << 3) + 0x10)
                break
            
            int64_t i_1 = sx.q(i)
            i = *(r8_1 + ((i_1 * 3 + 2) << 3))
            rcx_3 = r8_1 + ((i_1 * 3 + 2) << 3)
    
    rsi = 1
    sub_1406c8ce0(arg1, rdx_2, 1)

return zx.q(rsi)
