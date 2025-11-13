// 函数: sub_142c02cd0
// 地址: 0x142c02cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t i_11 = zx.d(arg1[4])
int32_t r8 = 0
int32_t r9 = 0
uint32_t i_7 = i_11
void* rbx_1 = &arg1[5 + zx.q((arg2 + 1) * i_11)]
void* r11 = rbx_1

if (i_11 != 0)
    uint32_t i
    
    do
        uint32_t rax_2 = zx.d(*r11)
        r11 += 1
        r9 = (r9 << 8) + rax_2
        i = i_7
        i_7 -= 1
    while (i != 1)

int32_t rcx = 0
uint32_t i_8 = i_11
void* r11_2 = &arg1[5 + zx.q(i_11 * arg2)]
void* rdx = r11_2

if (i_11 != 0)
    uint32_t i_1
    
    do
        uint32_t rax_5 = zx.d(*rdx)
        rdx += 1
        rcx = (rcx << 8) + rax_5
        i_1 = i_8
        i_8 -= 1
    while (i_1 != 1)

if (i_11 == 0 || r9 u>= rcx)
    void* rcx_2 = rbx_1
    int32_t rdx_1 = 0
    uint32_t i_10 = i_11
    
    if (i_11 != 0)
        uint32_t i_2
        
        do
            uint32_t rax_6 = zx.d(*rcx_2)
            rcx_2 += 1
            rdx_1 = (rdx_1 << 8) + rax_6
            i_2 = i_10
            i_10 -= 1
        while (i_2 != 1)
    
    uint32_t i_9 = i_11
    int32_t rcx_10 = 0
    void* r9_3 = &arg1[5 + zx.q(i_11 *
        ((((((zx.q(*arg1) << 8) + zx.q(arg1[1])) << 8) + zx.q(arg1[2])) << 8).d + zx.d(arg1[3])))]
    
    if (i_11 != 0)
        uint32_t i_3
        
        do
            uint32_t rax_13 = zx.d(*r9_3)
            r9_3 += 1
            rcx_10 = (rcx_10 << 8) + rax_13
            i_3 = i_9
            i_9 -= 1
        while (i_3 != 1)
    
    if (rdx_1 u<= rcx_10)
        int32_t rdx_3 = 0
        uint32_t i_6 = i_11
        
        if (i_11 != 0)
            uint32_t i_4
            
            do
                uint32_t rax_14 = zx.d(*rbx_1)
                rbx_1 += 1
                rdx_3 = (rdx_3 << 8) + rax_14
                i_4 = i_6
                i_6 -= 1
            while (i_4 != 1)
            
            if (i_11 != 0)
                uint32_t i_5
                
                do
                    uint32_t rcx_12 = zx.d(*r11_2)
                    r11_2 += 1
                    r8 = (r8 << 8) + rcx_12
                    i_5 = i_11
                    i_11 -= 1
                while (i_5 != 1)
        
        return zx.q(rdx_3 - r8)

return 0
