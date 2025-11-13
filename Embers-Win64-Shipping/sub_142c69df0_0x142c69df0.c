// 函数: sub_142c69df0
// 地址: 0x142c69df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = arg1
int64_t result = 0
uint64_t rsi
rsi.b = 1
char* r8 = arg1

if (arg2 == 0)
    r8 = sub_142c69100(arg1)

while (*rdi != 0)
    if (rdi u>= r8)
        char rcx = *rdi
        
        if (rcx == 0x20)
            int64_t result_2 = result + 3
            result += 1
            
            if (rsi.b != 0)
                result = result_2
        else
            rsi = zx.q(rsi.b)
            int64_t result_1 = result + 2
            
            if (rcx == 0x3f)
                rsi = 0
            
            if (rcx u< 0x80)
                result_1 = result
            
            result = result_1 + 1
    else
        result += 1
    
    rdi = &rdi[1]

return result
