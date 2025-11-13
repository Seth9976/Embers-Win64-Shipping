// 函数: sub_142b8f260
// 地址: 0x142b8f260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    int64_t rax
    rax.b = 0
    return rax

*(arg1 + 0x1cc8) = 5
int16_t arg_18 = *(arg1 + 0x1cc8) | 0x200
sub_142a48d70(arg1 + 0x1c88, &arg_18, 0, 1)
void* rdi = arg1 + 0x1c60
int32_t rbx = 0
int32_t rax_2

while (true)
    rax_2 = sub_142aa6280(arg2, rbx + 0x1000)
    *rdi = rax_2
    
    if (rax_2 != 0)
        arg_18 = 0
        sub_142a48d70(arg1 + 0x1c88, &arg_18, 0, 1)
        rbx += 1
        rdi += 4
        
        if (rbx s< 4)
            continue
        else
            *(arg1 + 0x1c70) = sub_142aa6110(arg2, 0x1004)
            *(arg1 + 0x1c74) = sub_142aa6110(arg2, 0x19)
            *(arg1 + 0x1c78) = sub_142aa6280(arg2, 0x19)
            
            if (*(arg1 + 0x1c70) != 0 && *(arg1 + 0x1c74) != 0)
                rax_2.b = 1
                break
    
    rax_2.b = 0
    break

return rax_2
