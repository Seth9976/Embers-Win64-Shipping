// 函数: sub_142834e48
// 地址: 0x142834e48
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
int64_t var_8 = rdi
char* _Destination
int64_t r8
_Destination, r8 = malloc(strlen(arg2) + 1)
*arg1 = _Destination

if (_Destination != 0)
    strcpy(_Destination, arg2)
    int16_t* rax_1
    rax_1, r8 = sub_142837af0(arg2, arg3, rdi.d)
    
    if (rax_1 != 0)
        arg1[1].d = *(rax_1 + 8)
        *(arg1 + 0xc) = *(rax_1 + 0xc)
        
        if (sub_142834fb8(arg1, arg3) == 0)
            char** rdi_1 = *(rax_1 + 0x38)
            
            while (true)
                if (rdi_1 == 0)
                    char** rdi_2 = *(rax_1 + 0x28)
                    
                    while (true)
                        if (rdi_2 == 0)
                            sub_142837c0c(rax_1, arg3)
                            return 0
                        
                        char* r15_2 = *rdi_2
                        int64_t* rax_6 = sub_142837230(arg1)
                        
                        if (rax_6 == 0)
                            break
                        
                        if (sub_1428347d4(rax_6, r15_2, arg1) != 0)
                            break
                        
                        sub_142834d28(arg1, rax_6)
                        int64_t rax_8 = data_143fe79d8
                        
                        if (rax_8 != 0)
                            rax_8(zx.q(rax_6[5].d), zx.q(*(rax_6 + 0x2c)), &rax_6[2])
                        
                        rdi_2 = rdi_2[1]
                    
                    break
                
                char* r15_1 = *rdi_1
                char* rax_5 = sub_142837400()
                
                if (rax_5 == 0)
                    break
                
                sub_1428357b4(rax_5, r15_1, arg1)
                sub_142834d78(arg1, rax_5)
                sub_14283952c(rax_5)
                rdi_1 = rdi_1[1]
        
        sub_142837c0c(rax_1, arg3)
    else
        sub_142833a04(1, "Couldn't load soundfont file", r8)
else
    sub_142833a04(1, "Out of memory", r8)

return 0xffffffff
