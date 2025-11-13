// 函数: sub_141ca9f40
// 地址: 0x141ca9f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_141ca4480(arg2)
void* rdx = arg1[8]
void* r11 = &arg1[7]
int32_t rsi = 0
int64_t rbp_1 = sx.q(arg1[9].d) - 1

if (rdx != 0)
    r11 = rdx

int32_t r9 = *(r11 + ((sx.q(rax_1) & rbp_1) << 2))

if (r9 != 0xffffffff)
    int64_t r8_1 = *arg1
    int64_t* rdx_3
    
    while (true)
        rdx_3 = sx.q(r9) * 0x30 + r8_1
        
        if (*rdx_3 == *arg2 && rdx_3[2] == arg2[2] && rdx_3[3] == arg2[3])
            break
        
        r9 = rdx_3[5].d
        
        if (r9 == 0xffffffff)
            return 0
    
    if (arg1[1].d != *(arg1 + 0x34))
        int64_t rax_10 = sx.q(*(rdx_3 + 0x2c)) & rbp_1
        void* rcx_1 = r11 + (rax_10 << 2)
        
        for (int32_t i = *(r11 + (rax_10 << 2)); i != 0xffffffff; i = *rcx_1)
            if (i == r9)
                *rcx_1 = rdx_3[5].d
                break
            
            rcx_1 = sx.q(i) * 0x30 + 0x28 + r8_1
    
    rsi = 1
    sub_1407c2ba0(arg1, r9, 1)

return zx.q(rsi)
