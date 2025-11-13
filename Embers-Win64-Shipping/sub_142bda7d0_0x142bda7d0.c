// 函数: sub_142bda7d0
// 地址: 0x142bda7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r11 = arg4
int64_t r14
r14.b = 1
int32_t j_1 = *arg5
int32_t j_2 = *arg6

if (arg3 u> 1)
    uint64_t i_1 = zx.q(((arg3 - 2) u>> 1) + 1)
    int64_t rsi
    int64_t arg_10 = rsi
    uint64_t i
    
    do
        rsi.b = 0
        int32_t j
        int32_t* rdx
        int32_t r8
        int32_t r9_1
        
        if (r14.b != 0 || arg2 != 0)
            r8 = sx.d(r11[1])
            j = j_2
            rdx = arg6
            r9_1 = sx.d(*r11) - r8
            r14.b = 0
        else
            r8 = sx.d(*r11)
            j = j_1
            rsi.b = 1
            r9_1 = sx.d(r11[1]) - r8
            rdx = arg5
        
        void* rdx_1 = &rdx[1]
        
        if (j == 0)
        label_142bda8c3:
            *rdx_1 = r8
            *(rdx_1 + 4) = r9_1
            
            if (rsi.b == 0)
                j_2 += 1
            else
                j_1 += 1
        else
            while (true)
                int32_t rcx = *rdx_1
                
                if (r8 s< rcx)
                    if (j != 0)
                        void* r10_3 = (zx.q(j) << 5) + rdx_1
                        
                        do
                            j -= 1
                            r10_3 -= 0x20
                            int128_t* rcx_2 = zx.q(j) << 5
                            int128_t zmm1 = *(rcx_2 + rdx_1 + 0x10)
                            *(r10_3 + 0x20) = *(rcx_2 + rdx_1)
                            *(r10_3 + 0x30) = zmm1
                        while (j != 0)
                    
                    goto label_142bda8c3
                
                if (r8 == rcx)
                    j = *(rdx_1 + 4)
                    
                    if (r9_1 s>= 0)
                        if (r9_1 s> j)
                            *(rdx_1 + 4) = r9_1
                    else if (r9_1 s< j)
                        *(rdx_1 + 4) = r9_1
                    
                    break
                
                rdx_1 += 0x20
                int32_t j_3 = j
                j -= 1
                
                if (j_3 == 1)
                    goto label_142bda8c3
        
        r11 = &r11[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

*arg5 = j_1
*arg6 = j_2
