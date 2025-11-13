// 函数: png_warning
// 地址: 0x1403c3370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0

if (arg1 != 0)
    if (*arg2 == 0x23)
        rdx = 1
        
        if (arg2[1] != 0x20)
            rdx = 2
            
            if (arg2[2] != 0x20)
                rdx = 3
                
                if (arg2[3] != 0x20)
                    rdx = 4
                    
                    if (arg2[4] != 0x20)
                        rdx = 5
                        
                        if (arg2[5] != 0x20)
                            rdx = 6
                            
                            if (arg2[6] != 0x20)
                                rdx = 7
                                
                                if (arg2[7] != 0x20)
                                    rdx = 8
                                    
                                    if (arg2[8] != 0x20)
                                        rdx = 9
                                        
                                        if (arg2[9] != 0x20)
                                            rdx = 0xa
                                            
                                            if (arg2[0xa] != 0x20)
                                                rdx = 0xb
                                                
                                                if (arg2[0xb] != 0x20)
                                                    rdx = 0xc
                                                    
                                                    if (arg2[0xc] != 0x20)
                                                        rdx = 0xd
                                                        
                                                        if (arg2[0xd] != 0x20)
                                                            int32_t rdx_1
                                                            rdx_1.b = arg2[0xe] == 0x20
                                                            rdx = rdx_1 ^ 0xf
    
    int64_t rax_1 = *(arg1 + 0x110)
    
    if (rax_1 != 0)
        jump(rax_1)

sub_141528310(__acrt_iob_func(2), "libpng warning: %s", &arg2[zx.q(rdx)])
return fputc(0xa, __acrt_iob_func(2)) __tailcall
