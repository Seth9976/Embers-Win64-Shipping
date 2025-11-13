// 函数: sub_142392360
// 地址: 0x142392360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x580)
int64_t* i

for (i = *(arg1 + 0x340); i != &i[sx.q(*(arg1 + 0x348))]; i = &i[1])
    int64_t* rdi_1 = *i
    
    if (rdi_1 != 0 && *rdi_1 == arg2)
        if (rdi_1[8].b == 6)
            i = sub_14239a450(&rdi_1[4])
            void* rcx_3 = rdi_1[3]
            
            if (rcx_3 != 0)
                i = sub_1423b2c60(rcx_3, arg3)
        
        break

if (arg1 == -0x580)
    return i

return LeaveCriticalSection(arg1 + 0x580)
