// 函数: sub_142c79870
// 地址: 0x142c79870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
char r10 = 0
int32_t* r9 = *(rax + 0x250)

if (*(rax + 0x5e8) != 0)
    *r9 = 1

*arg3 = 0
char* r11 = *(r9 + 8)

if (r11 != 0)
    int64_t r8 = arg1[0xe8]
    
    if (r8 != 0)
        char* rax_1 = r11
        uint32_t i
        uint32_t rdx
        
        do
            rdx = zx.d(*rax_1)
            i = zx.d(*(rax_1 + r8 - r11))
            
            if (rdx != i)
                break
            
            rax_1 = &rax_1[1]
        while (i != 0)
        
        if (rdx - i == 0)
            char* rax_2 = *(r9 + 0x10)
            
            if (rax_2 == 0)
                r10 = 1
            else
                int64_t r8_2 = arg1[0xe9]
                
                if (r8_2 == 0)
                    r10 = 1
                else
                    void* r8_3 = r8_2 - rax_2
                    uint32_t i_1
                    uint32_t rdx_2
                    
                    do
                        rdx_2 = zx.d(*rax_2)
                        i_1 = zx.d(*(rax_2 + r8_3))
                        
                        if (rdx_2 != i_1)
                            break
                        
                        rax_2 = &rax_2[1]
                    while (i_1 != 0)
                    
                    if (rdx_2 - i_1 == 0)
                        r10 = 1

int32_t result
int512_t zmm2

if (*(*arg1 + 0x5e9) == 0)
    int64_t rax_4 = *(r9 + 0x38)
    
    if (rax_4 == 0)
    label_142c7993b:
        
        if (r10 == 0 || *(r9 + 0x18) == 0)
            if (rax_4 != 0 || r10 == 0 || *(r9 + 0x30) == rax_4)
                goto label_142c7996b
            
            result, zmm2 = sub_142c79d70(arg1)
        else
            result, zmm2 = sub_142c79b50(arg1)
    else if (r10 != 0 || r11 == 0)
        result, zmm2 = sub_142c79be0(arg1)
    else
        if (rax_4 == 0)
            goto label_142c7993b
        
    label_142c7996b:
        
        if (r11 == 0 || r10 != 0 || (rax_4 == 0 && *(r9 + 0x18) == rax_4 && *(r9 + 0x30) == rax_4))
            result, zmm2 = sub_142c79be0(arg1)
        else
            result, zmm2 = sub_142c79dd0(arg1)
else
    result, zmm2 = sub_142c799c0(arg1)

if (result == 0)
    result = sub_142c78a60(arg1, arg3, zmm2)
    *arg2 = *(arg1 + 0x3fd)

return result
