// 函数: sub_14271bdc0
// 地址: 0x14271bdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *arg1
int32_t i

if (rdx[1].d != *(rdx + 0x34))
    void* r8_1 = rdx[8]
    void* r9_1 = &rdx[7]
    int64_t r11_1 = sx.q(*(arg2 + 4))
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    i = *(r9_1 + (((sx.q(rdx[9].d) - 1) & r11_1) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *rdx
        
        do
            int64_t rdx_1 = sx.q(i) * 3
            
            if (*(r8_2 + (rdx_1 << 2)) == r11_1.d)
                goto label_14271be1c
            
            i = *(r8_2 + (rdx_1 << 2) + 4)
        while (i != 0xffffffff)

i = -1
label_14271be1c:
*(arg2 + 0x20) &= 0xfffffffffffffffe
int64_t rcx_4
rcx_4.b = i != 0xffffffff
*(arg2 + 0x20) |= rcx_4
return i
