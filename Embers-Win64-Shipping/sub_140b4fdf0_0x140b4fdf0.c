// 函数: sub_140b4fdf0
// 地址: 0x140b4fdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t i = *arg1
void* rax = &arg1[1]
char r8 = 0

while (i != 0)
    if (i == 0x5f)
        int16_t j = *rax
        wchar16* rcx = u"DEPRECATED"
        
        if (j == (*u"DEPRECATED")[0])
            do
                if (j == 0)
                    return zx.q(r8)
                
                j = *(rax + 2)
                rax += 2
                rcx = &rcx[1]
            while (j == *rcx)
        
        r8 += ((rcx - u"DEPRECATED") s>> 1).b
    
    i = *rax
    r8 += 1
    rax += 2

return zx.q(r8)
