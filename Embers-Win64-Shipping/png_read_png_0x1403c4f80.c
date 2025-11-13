// 函数: png_read_png
// 地址: 0x1403c4f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t result = __security_cookie ^ &var_48
int64_t result_1 = result

if (arg1 != 0 && arg2 != 0)
    png_read_info(arg1, arg2)
    
    if (arg2[1] u>= 0x20000000)
        png_error(arg1, "Image is too high to process with png_read_png()")
        noreturn
    
    if ((arg3.b & 1) == 0)
        if ((arg3.b & 2) != 0)
            goto label_1403c5020
        
        goto label_1403c4fd0
    
    png_set_strip_16(arg1)
    
    if ((arg3.b & 2) != 0)
    label_1403c5020:
        png_set_strip_alpha(arg1)
        
        if ((arg3.b & 8) == 0)
            goto label_1403c4fd5
        
        goto label_1403c502d
    
label_1403c4fd0:
    
    if ((arg3.b & 8) == 0)
    label_1403c4fd5:
        
        if ((arg3.b & 0x10) == 0)
            goto label_1403c5037
        
        goto label_1403c4fea
    
label_1403c502d:
    png_set_packswap(arg1)
    
    if ((arg3.b & 0x10) != 0)
    label_1403c4fea:
        int32_t rax_1
        
        if (*(arg1 + 0x25f) u>= 8 && *(arg1 + 0x25e) != 3)
            rax_1 = png_get_valid(arg1, arg2, 0x10)
        
        if (*(arg1 + 0x25f) u>= 8 && *(arg1 + 0x25e) != 3 && rax_1 == 0)
            goto label_1403c5037
        
        png_set_expand(arg1)
        
        if ((arg3.b & 0x20) != 0)
            png_set_invert_mono(arg1)
    else
    label_1403c5037:
        
        if ((arg3.b & 0x20) != 0)
            png_set_invert_mono(arg1)
    
    if ((arg3.b & 0x40) != 0 && png_get_valid(arg1, arg2, 2) != 0)
        int32_t* var_28 = nullptr
        png_get_sBIT(arg1, arg2, &var_28)
        png_set_shift(arg1, var_28)
    
    if (arg3.b s>= 0)
        if ((arg3 & 0x100) != 0)
            goto label_1403c5162
        
        goto label_1403c5098
    
    png_set_bgr(arg1)
    
    if ((arg3 & 0x100) != 0)
    label_1403c5162:
        png_set_swap_alpha(arg1)
        
        if ((arg3 & 0x200) == 0)
            goto label_1403c50a4
        
        goto label_1403c5176
    
label_1403c5098:
    
    if ((arg3 & 0x200) == 0)
    label_1403c50a4:
        
        if ((arg3 & 0x400) != 0)
            goto label_1403c518a
        
        goto label_1403c50b0
    
label_1403c5176:
    png_set_swap(arg1)
    
    if ((arg3 & 0x400) == 0)
    label_1403c50b0:
        
        if ((arg3 & 0x2000) != 0)
            png_set_gray_to_rgb(arg1)
    else
    label_1403c518a:
        png_set_invert_alpha(arg1)
        
        if ((arg3 & 0x2000) != 0)
            png_set_gray_to_rgb(arg1)
    
    png_set_interlace_handling(arg1)
    
    if ((*(arg1 + 0x158) & 0x40) != 0)
        png_warning(arg1, "Ignoring extra png_read_update_info() call; row buffer not reallocated")
    else
        sub_1403dd0d0(arg1)
    
    sub_1403c6fe0(arg1, arg2)
    png_free_data(arg1, arg2, 0x40, 0)
    
    if (*(arg2 + 0x138) == 0)
        int64_t* rax_3 = png_malloc(arg1, zx.q(arg2[1]) << 3)
        *(arg2 + 0x138) = rax_3
        
        if (arg2[1] == 0)
            arg2[0x3b].b |= 0x40
        else
            *rax_3 = 0
            uint64_t rax_4 = zx.q(arg2[1])
            
            if (rax_4.d u>= 2)
                int64_t rcx_24 = 1
                
                do
                    *(*(arg2 + 0x138) + (rcx_24 << 3)) = 0
                    rcx_24 += 1
                    rax_4 = zx.q(arg2[1])
                while (rcx_24 u< rax_4)
            
            arg2[0x3b].b |= 0x40
            
            if (rax_4.d s> 0)
                int64_t i = 0
                
                do
                    *(*(arg2 + 0x138) + (i << 3)) = png_malloc(arg1, png_get_rowbytes(arg1, arg2))
                    i += 1
                while (i s< sx.q(arg2[1]))
    
    png_read_image(arg1, *(arg2 + 0x138))
    *(arg2 + 9) |= 0x80
    result = png_read_end(arg1, arg2)

__security_check_cookie(result_1 ^ &var_48)
return result
