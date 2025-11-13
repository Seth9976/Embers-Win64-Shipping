// 函数: sub_142bda240
// 地址: 0x142bda240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t i_2 = *arg1 - 1

if (i_2 s<= 0)
    return 0

int32_t i

do
    i = i_2 - 1
    int32_t i_1 = i
    
    if (i_2 s>= 1)
        int64_t rbx_1 = *(arg1 + 8)
        uint64_t rcx = zx.q(i_2) * 3
        int32_t j_1 = *(rbx_1 + (rcx << 3))
        int32_t i_3
        
        do
            char* r8_1 = *(rbx_1 + (rcx << 3) + 8)
            uint64_t rcx_1 = zx.q(i_1) * 3
            char* rdx = *(rbx_1 + (rcx_1 << 3) + 8)
            int32_t j = *(rbx_1 + (rcx_1 << 3))
            
            if (j_1 u< j)
                j = j_1
            
            for (; j u>= 8; j -= 8)
                if ((*r8_1 & *rdx) != 0)
                    goto label_142bda304
                
                r8_1 = &r8_1[1]
                rdx = &rdx[1]
            
            if (j != 0 && (zx.d(*rdx) & zx.d(*r8_1) & not.d(0xff s>> j.b)) != 0)
            label_142bda304:
                int32_t rax_7 = sub_142bda0d0(arg1, i_1, i_2, arg2)
                rsi = rax_7
                
                if (rax_7 != 0)
                    return rax_7
                
                break
            
            i_3 = i_1
            i_1 -= 1
        while (i_3 - 1 s>= 0)
    
    i_2 = i
while (i s> 0)
return rsi
