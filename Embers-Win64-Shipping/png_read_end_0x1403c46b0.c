// 函数: png_read_end
// 地址: 0x1403c46b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

sub_1403d8880(arg1, 0)

while (true)
    int32_t rax_1 = sub_1403d8740(arg1)
    
    if (*(arg1 + 0x254) == 0x52444849)
        sub_1403d8db0(arg1, arg2, rax_1)
        
        if ((*(arg1 + 0x154) & 0x10) != 0)
            break
    else if (*(arg1 + 0x254) == 0x444e4549)
        sub_1403d9150(arg1, arg2, rax_1)
        
        if ((*(arg1 + 0x154) & 0x10) != 0)
            break
    else
        int32_t rax_2 = png_handle_as_unknown(arg1, arg1 + 0x254)
        int32_t rcx_2
        rcx_2.b = *(arg1 + 0x254) != 0x54414449
        
        if (rax_2 != 0)
            if (rcx_2 == 0 && (rax_1 != 0 || (*(arg1 + 0x155) & 0x20) != 0))
                png_benign_error(arg1, "Too many IDATs found")
            
            sub_1403db4f0(arg1, arg2, rax_1)
            
            if (*(arg1 + 0x254) == 0x45544c50)
                *(arg1 + 0x154) |= 2
                
                if ((*(arg1 + 0x154) & 0x10) != 0)
                    break
            else
                if ((*(arg1 + 0x154) & 0x10) != 0)
                    break
        else if (rcx_2 == 0)
            if (rax_1 != 0 || (*(arg1 + 0x155) & 0x20) != 0)
                png_benign_error(arg1, "Too many IDATs found")
            
            sub_1403d8880(arg1, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x45544c50)
            sub_1403d8f60(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x44474b62)
            sub_1403da2d0(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x4d524863)
            sub_1403d9490(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x414d4167)
            sub_1403d91b0(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x54534968)
            sub_1403da4c0(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x7346466f)
            sub_1403da700(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x4c414370)
            sub_1403da7f0(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x4c414373)
            sub_1403daad0(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x73594870)
            sub_1403da610(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x54494273)
            sub_1403d9330(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x42475273)
            sub_1403d9900(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x50434369)
            sub_1403d9b10(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x544c5073)
            sub_1403d9da0(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x74584574)
            sub_1403dadb0(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x454d4974)
            sub_1403dacb0(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x534e5274)
            sub_1403da090(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x7458547a)
            sub_1403dafc0(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else if (*(arg1 + 0x254) == 0x74585469)
            sub_1403db210(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
        else
            sub_1403db4f0(arg1, arg2, rax_1)
            
            if ((*(arg1 + 0x154) & 0x10) != 0)
                break
