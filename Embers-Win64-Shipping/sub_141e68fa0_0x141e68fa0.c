// 函数: sub_141e68fa0
// 地址: 0x141e68fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_140cde1f0(arg2)
void* rdx = arg1[8]
void* r11 = &arg1[7]
int32_t rsi = 0
int64_t rbp_1 = sx.q(arg1[9].d) - 1

if (rdx != 0)
    r11 = rdx

int32_t rdx_1 = *(r11 + ((sx.q(rax_1) & rbp_1) << 2))

if (rdx_1 != 0xffffffff)
    int64_t r9_1 = *arg1
    void* r8_1
    
    while (true)
        int64_t rcx_1 = sx.q(rdx_1) * 5
        r8_1 = r9_1 + (rcx_1 << 3)
        
        if (*(r9_1 + (rcx_1 << 3)) == *arg2 && *(r8_1 + 8) == arg2[1])
            break
        
        rdx_1 = *(r8_1 + 0x20)
        
        if (rdx_1 == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t rax_9 = sx.q(*(r8_1 + 0x24)) & rbp_1
        void* rcx_2 = r11 + (rax_9 << 2)
        int32_t i = *(r11 + (rax_9 << 2))
        
        while (i != 0xffffffff)
            if (i == rdx_1)
                *rcx_2 = *(r8_1 + 0x20)
                break
            
            int64_t i_1 = sx.q(i)
            int64_t rcx_4 = i_1 + ((i_1 + 1) << 2)
            i = *(r9_1 + (rcx_4 << 3))
            rcx_2 = r9_1 + (rcx_4 << 3)
    
    rsi = 1
    sub_1405c3590(arg1, rdx_1, 1)

return zx.q(rsi)
