// 函数: sub_142c02b70
// 地址: 0x142c02b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(arg1[2])
int32_t r8 = 0
int32_t r9 = 0
int32_t i_7 = r10.d
void* rbx_1 = &arg1[3 + zx.q((arg2 + 1) * r10.d)]
void* r11 = rbx_1

if (r10.d != 0)
    int32_t i
    
    do
        uint32_t rax_2 = zx.d(*r11)
        r11 += 1
        r9 = (r9 << 8) + rax_2
        i = i_7
        i_7 -= 1
    while (i != 1)

int32_t rcx = 0
int32_t i_8 = r10.d
void* r11_2 = &arg1[3 + zx.q(r10.d * arg2)]
void* rdx = r11_2

if (r10.d != 0)
    int32_t i_1
    
    do
        uint32_t rax_5 = zx.d(*rdx)
        rdx += 1
        rcx = (rcx << 8) + rax_5
        i_1 = i_8
        i_8 -= 1
    while (i_1 != 1)

if (r10.d == 0 || r9 u>= rcx)
    void* rcx_2 = rbx_1
    int32_t rdx_1 = 0
    int32_t i_10 = r10.d
    
    if (r10.d != 0)
        int32_t i_2
        
        do
            uint32_t rax_6 = zx.d(*rcx_2)
            rcx_2 += 1
            rdx_1 = (rdx_1 << 8) + rax_6
            i_2 = i_10
            i_10 -= 1
        while (i_2 != 1)
    
    int32_t i_9 = r10.d
    void* r9_3 = &arg1[3 + ((zx.q(*arg1) << 8) + zx.q(arg1[1])) * r10]
    int32_t rcx_7 = 0
    
    if (r10.d != 0)
        int32_t i_3
        
        do
            uint32_t rax_8 = zx.d(*r9_3)
            r9_3 += 1
            rcx_7 = (rcx_7 << 8) + rax_8
            i_3 = i_9
            i_9 -= 1
        while (i_3 != 1)
    
    if (rdx_1 u<= rcx_7)
        int32_t rdx_3 = 0
        int32_t i_6 = r10.d
        
        if (r10.d != 0)
            int32_t i_4
            
            do
                uint32_t rax_9 = zx.d(*rbx_1)
                rbx_1 += 1
                rdx_3 = (rdx_3 << 8) + rax_9
                i_4 = i_6
                i_6 -= 1
            while (i_4 != 1)
            
            if (r10.d != 0)
                int32_t i_5
                
                do
                    uint32_t rcx_9 = zx.d(*r11_2)
                    r11_2 += 1
                    r8 = (r8 << 8) + rcx_9
                    i_5 = r10.d
                    r10 = zx.q(r10.d - 1)
                while (i_5 != 1)
        
        return zx.q(rdx_3 - r8)

return 0
