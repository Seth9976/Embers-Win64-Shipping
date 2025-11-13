// 函数: sub_142b444f0
// 地址: 0x142b444f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_142ab63b0(arg1 + 0x28)
int64_t i = 0
int64_t r9 = 0
void* result

while (true)
    char rcx_1 = (*"none")[r9]
    r9 += 1
    
    if (rcx_1 != *(rax + r9 - 1))
        if (strcmp("currency", sub_142ab63b0(arg1 + 0x28)).d != 0)
            sub_142a48d70(arg2, u"per-measure-unit/", 0, 0xffffffff)
            sub_142b417d0(arg1 + 0x28, arg2)
            result.b = 1
            break
        
    label_142b44598:
        *arg3 = 0x10
    label_142b4459e:
        result.b = 0
        break
    
    if (r9 == 5)
        result = sub_142ab6380(arg1 + 0x28)
        
        do
            char rcx_3 = (*"percent")[i]
            i += 1
            
            if (rcx_3 != *(result + i - 1))
                if (strcmp("permille", sub_142ab6380(arg1 + 0x28)).d != 0)
                    goto label_142b4459e
                
                goto label_142b44598
        while (i != 8)
        
        *arg3 = 0x10
        result.b = 0
        break

return result
