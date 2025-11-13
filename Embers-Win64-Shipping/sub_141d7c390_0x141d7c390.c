// 函数: sub_141d7c390
// 地址: 0x141d7c390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141d73a80(arg1 + 0x38)
void* result = sub_141d73a80(arg1 + 0x50)
void* result_1 = result
bool cond:0_1

if (rax != 0)
    void* rax_1 = *(arg1 + 0x68)
    
    if (rax_1 != 0 && *(rax_1 + 0x10) == rax)
        result = *(arg1 + 0x70)
        
        if (result != 0)
            cond:0_1 = *(result + 0x10) == result_1
            goto label_141d7c3e7
else if (result == 0 && *(arg1 + 0x68) == rax)
    cond:0_1 = *(arg1 + 0x70) == rax
label_141d7c3e7:
    
    if (cond:0_1)
        return result
return sub_141d79780(arg1)
