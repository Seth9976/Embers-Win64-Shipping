// 函数: sub_141f4ac80
// 地址: 0x141f4ac80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0x15]
void* rsi = arg1[0x14]

if (rdi == 0)
    rdi = sub_141ee69e0(arg1)

if (rsi == 0)
label_141f4acce:
    char rax_4
    
    if (rdi != 0)
        rax_4 = sub_14243ade0(rdi)
    
    if (rdi == 0 || rax_4 == 0)
        rdi.b = 0
    else
        rdi.b = 1
    
    char rax_3
    
    if ((*(*arg1 + 0x448))(arg1) == 0 || (rsi != 0 && (*(rsi + 0x58) & 0x20) != 0))
        rax_3 = 0
    else
        rax_3 = 1
    
    if (rdi.b != 0 && rax_3 != 0 && (*(arg1 + 0x14c) & 0x20) != 0)
        return 1
else
    int64_t rax_2 = sub_141dcb240(rsi)
    
    if (rax_2 == 0)
        goto label_141f4acce
    
    if (sub_141f4ac80(rax_2) != 0)
        goto label_141f4acce

return 0
