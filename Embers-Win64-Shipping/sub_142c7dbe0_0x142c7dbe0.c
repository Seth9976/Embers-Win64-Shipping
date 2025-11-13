// 函数: sub_142c7dbe0
// 地址: 0x142c7dbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t* rax = data_143ccb898(0x28)
*(*arg1 + 0x250) = rax

if (rax == 0)
    return zx.q((rax + 0x1b).d)

*(rbx + 0x4e38) += 1
char* str1 = *(rbx + 0x4e38)
*(rbx + 0x4e40) = 1
char* rax_2 = strstr(str1, ";type=")

if (rax_2 != 0)
label_142c7dc65:
    *rax_2 = 0
    char rax_3 = sub_142c70430(zx.d(rax_2[6]))
    *(arg1 + 0x40c) = 1
    
    if (rax_3 == 0x41)
        *(rbx + 0x5db) = 1
    else if (rax_3 == 0x44)
        *(rbx + 0x5dd) = 1
    else
        *(rbx + 0x5db) = 0
else
    rax_2 = strstr(arg1[0x18], ";type=")
    
    if (rax_2 != 0)
        goto label_142c7dc65

*rax = *arg1 + 0xf8
rax[3].d = 0
rax[4] = 0
char* string = arg1[0x3e]
rax[1] = string
rax[2] = arg1[0x3f]
char* rax_7 = strchr(string, 0xd)

if (rax_7 == 0)
    char* rax_8 = strchr(string, (&rax_7[0xa]).d)
    
    if (rax_8 == 0)
        char* string_1 = rax[2]
        char* rax_9 = strchr(string_1, (&rax_8[0xd]).d)
        
        if (rax_9 == 0)
            char* result = strchr(string_1, (&rax_9[0xa]).d)
            
            if (result == 0)
                arg1[0xed] = -1
                return result

return 3
