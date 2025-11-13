// 函数: sub_142a4ca80
// 地址: 0x142a4ca80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r8 = arg1
uint64_t result = -1

do
    result += 1
while (arg1[result] != 0)

int32_t result_1 = 0
int64_t i_1 = sx.q(result.d)
char r10 = 1

if (result.d s> 0)
    int64_t i
    
    do
        char rcx = *r8
        
        if (rcx == 0x5f || rcx == 0x2d)
            if (result_1 != 0 && result_1 s< result.d)
                result = zx.q(result_1)
            
            r10 = 1
        else
            int32_t result_2 = 0
            
            if (r10 == 0)
                result_2 = result_1
            
            r10 = 0
            result_1 = result_2 + 1
        
        r8 = &r8[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
