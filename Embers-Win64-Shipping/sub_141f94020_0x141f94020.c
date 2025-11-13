// 函数: sub_141f94020
// 地址: 0x141f94020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = arg1[0xc]
int64_t rdi
rdi.b = 0
uint64_t rsi
rsi.b = 0

if (i == 0)
label_141f940dd:
    char result = (arg1[6].d).b & 0x11
    
    if (result != 0x11)
        return result
else
    do
        char rcx = i[0x1e].b
        
        if ((rcx & 1) == 0)
            break
        
        if ((rcx & 2) != 0)
            if ((rcx & 0x40) != 0)
                while ((i[0x1e].b & 1) != 0)
                    if ((*(i + 0xf1) & 1) != 0)
                        goto label_141f94084
                    
                    i = i[0x18]
                    
                    if (i == 0)
                        goto label_141f94084
                
                break
            
        label_141f94084:
            arg1[6].d |= 1
            i = arg1[0xc]
        
        char rcx_1 = i[0x1e].b
        
        if (rdi.b != 0 || (rcx_1 & 4) != 0)
            rdi.b = 1
        
        if ((rcx_1 & 4) != 0)
            rsi = zx.q(*(i + 0xf2))
        
        arg1[0xc] = i[0x18]
        int64_t r8_1 = *i
        (*r8_1)(i, 1, r8_1)
        i = arg1[0xc]
        arg1[0xa].d -= 1
    while (i != 0)
    
    if (rdi.b == 0)
        goto label_141f940dd

return sub_141f83fe0(arg1, 0, rsi.b)
