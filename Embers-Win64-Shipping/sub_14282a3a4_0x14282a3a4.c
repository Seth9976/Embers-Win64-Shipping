// 函数: sub_14282a3a4
// 地址: 0x14282a3a4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[2] = 0
int64_t* rax = arg2

if (arg2[3] u>= 0x10)
    rax = *arg2

*rax = 0
char* rax_1 = arg4
arg4[2] = 0

if (arg4[3] u>= 0x10)
    rax_1 = *arg4

*rax_1 = 0
*arg3 = 0
int64_t* rcx = *(arg1 + 8)
void* result

while (true)
    result = sub_142828cbc(rcx)
    
    if (result.b != 0)
        break
    
    result = sub_142828cd8(*(arg1 + 8))
    
    if (*(result + 4) == 0x10)
        sub_14282a2e8(arg1, arg3, arg4)
    else
        if (*(result + 4) != 0x12)
            break
        
        sub_14282a44c(arg1, arg2)
    
    rcx = *(arg1 + 8)

return result
