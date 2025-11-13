// 函数: sub_14040c9e0
// 地址: 0x14040c9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_7 = sx.q(arg4)
int64_t result = i_7 << 2
int32_t* rsi = result + arg3
*(result + arg2) = 0x10000
*rsi = 0x10000

if (arg4 s> 0)
    void* r9 = result + arg1
    void* rdx_1 = arg2 - result - arg1
    int32_t* r8 = r9 - 4
    void* r11_3 = arg3 - result - arg1
    int64_t i_4 = i_7
    int64_t i
    
    do
        int32_t rax = *r8
        r9 += 4
        r8 = &r8[-1]
        *(rdx_1 + r9 - 4) = neg.d(rax + *(r9 - 4))
        result = zx.q(*(r9 - 4) - r8[1])
        *(r11_3 + r9 - 4) = result.d
        i = i_4
        i_4 -= 1
    while (i != 1)

int64_t i_1 = i_7

if (i_7 s> 0)
    void* rcx = &rsi[-1]
    void* r8_2 = arg2 - arg3
    
    do
        int32_t rax_4 = *(r8_2 + rcx + 4)
        i_1 -= 1
        rcx -= 4
        *(r8_2 + rcx + 4) -= rax_4
        result = zx.q(*(rcx + 8))
        *(rcx + 4) += result.d
    while (i_1 s> 0)

int64_t r9_1 = 2
int64_t r8_3 = 2

if (2 s<= i_7)
    void* r11_4 = arg2
    bool cond:0_1 = i_7 s<= 2
    
    do
        if (not(cond:0_1))
            void* rcx_2 = arg2 + ((i_7 - 2) << 2)
            int64_t i_5 = i_7 - r8_3
            int64_t i_2
            
            do
                int32_t rax_5 = *(rcx_2 + 8)
                rcx_2 -= 4
                *(rcx_2 + 4) -= rax_5
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        int32_t rax_6 = *(r11_4 + 8)
        r8_3 += 1
        r11_4 += 4
        result = zx.q(rax_6 * 2)
        *(r11_4 - 4) -= result.d
        cond:0_1 = i_7 s<= r8_3
    while (i_7 s>= r8_3)
    
    if (2 s<= i_7)
        void* r8_4 = arg3
        bool cond:1_1 = i_7 s<= 2
        
        do
            if (not(cond:1_1))
                void* rax_8 = arg3 + ((i_7 - 2) << 2)
                int64_t i_6 = i_7 - r9_1
                int64_t i_3
                
                do
                    int32_t rcx_3 = *(rax_8 + 8)
                    rax_8 -= 4
                    *(rax_8 + 4) -= rcx_3
                    i_3 = i_6
                    i_6 -= 1
                while (i_3 != 1)
            
            int32_t rax_9 = *(r8_4 + 8)
            r9_1 += 1
            r8_4 += 4
            result = zx.q(rax_9 * 2)
            *(r8_4 - 4) -= result.d
            cond:1_1 = i_7 s<= r9_1
        while (i_7 s>= r9_1)

return result
