// 函数: png_read_info
// 地址: 0x1403c3c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

sub_1403d8690(arg1, arg2)

while (true)
    int32_t rax_1 = sub_1403d8740(arg1)
    
    if (*(arg1 + 0x254) == 0x54414449)
        int32_t rax_2 = *(arg1 + 0x154)
        
        if ((rax_2.b & 8) != 0)
            *(arg1 + 0x154) = rax_2 | 0x2000
    
    if (*(arg1 + 0x254) == 0x52444849)
        sub_1403d8db0(arg1, arg2, rax_1)
    else
        if (*(arg1 + 0x254) != 0x444e4549)
            char const* const rdx_24
            
            if (png_handle_as_unknown(arg1, arg1 + 0x254) != 0)
                if (*(arg1 + 0x254) == 0x54414449)
                    *(arg1 + 0x154) |= 4
                
                sub_1403db4f0(arg1, arg2, rax_1)
                
                if (*(arg1 + 0x254) == 0x45544c50)
                    *(arg1 + 0x154) |= 2
                    continue
                else if (*(arg1 + 0x254) != 0x54414449)
                    continue
                else
                    int32_t rax = *(arg1 + 0x154)
                    
                    if ((rax.b & 1) == 0)
                        rdx_24 = "Missing IHDR before IDAT"
                    else
                        if ((rax.b & 2) != 0)
                            break
                        
                        if (*(arg1 + 0x25e) != 3)
                            break
                        
                        rdx_24 = "Missing PLTE before IDAT"
            else if (*(arg1 + 0x254) == 0x45544c50)
                sub_1403d8f60(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x54414449)
                int32_t rax_5 = *(arg1 + 0x154)
                
                if ((rax_5.b & 1) == 0)
                    rdx_24 = "Missing IHDR before IDAT"
                else
                    if ((rax_5.b & 2) != 0 || *(arg1 + 0x25e) != 3)
                        *(arg1 + 0x240) = rax_1
                        *(arg1 + 0x154) = rax_5 | 4
                        break
                    
                    rdx_24 = "Missing PLTE before IDAT"
            else if (*(arg1 + 0x254) == 0x44474b62)
                sub_1403da2d0(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x4d524863)
                sub_1403d9490(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x414d4167)
                sub_1403d91b0(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x54534968)
                sub_1403da4c0(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x7346466f)
                sub_1403da700(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x4c414370)
                sub_1403da7f0(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x4c414373)
                sub_1403daad0(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x73594870)
                sub_1403da610(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x54494273)
                sub_1403d9330(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x42475273)
                sub_1403d9900(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x50434369)
                sub_1403d9b10(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x544c5073)
                sub_1403d9da0(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x74584574)
                sub_1403dadb0(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x454d4974)
                sub_1403dacb0(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x534e5274)
                sub_1403da090(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x7458547a)
                sub_1403dafc0(arg1, arg2, rax_1)
                continue
            else if (*(arg1 + 0x254) == 0x74585469)
                sub_1403db210(arg1, arg2, rax_1)
                continue
            else
                sub_1403db4f0(arg1, arg2, rax_1)
                continue
            
            png_error(arg1, rdx_24)
            noreturn
        
        sub_1403d9150(arg1, arg2, rax_1)
