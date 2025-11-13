// 函数: png_write_png
// 地址: 0x1403c3130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

int32_t r8
char r9
r8, r9 = png_write_info(arg1, arg2)

if ((arg3.b & 0x20) != 0)
    png_set_invert_mono(arg1)

if ((arg3.b & 0x40) != 0 && (arg2[2].b & 2) != 0)
    png_set_shift(arg1, &arg2[0x16])

if ((arg3.b & 4) == 0)
    if ((arg3 & 0x100) != 0)
        goto label_1403c31f7
    
    goto label_1403c3191

png_set_packing(arg1)

if ((arg3 & 0x100) != 0)
label_1403c31f7:
    png_set_swap_alpha(arg1)
    
    if ((arg3 & 0x1000) == 0)
        goto label_1403c3199
    
    goto label_1403c3204

label_1403c3191:
uint64_t rcx_4

if ((arg3 & 0x1000) == 0)
label_1403c3199:
    
    if ((arg3 & 0x800) != 0)
        rcx_4 = arg1
        r8 = 0
        goto label_1403c3219
    
    if (arg3.b s< 0)
        goto label_1403c3225
    
    goto label_1403c31a5

label_1403c3204:
rcx_4 = arg1
r8 = 1
label_1403c3219:
png_set_filler(rcx_4, 0, r8)

if (arg3.b s< 0)
label_1403c3225:
    png_set_bgr(arg1)
    
    if ((arg3 & 0x200) == 0)
        goto label_1403c31b1
    
    goto label_1403c3239

label_1403c31a5:

if ((arg3 & 0x200) == 0)
label_1403c31b1:
    
    if ((arg3.b & 8) != 0)
        goto label_1403c324a
    
    goto label_1403c31ba

label_1403c3239:
png_set_swap(arg1)

if ((arg3.b & 8) != 0)
label_1403c324a:
    png_set_packswap(arg1)
    
    if ((arg3 & 0x400) == 0)
        goto label_1403c31c6
    
    goto label_1403c325e

label_1403c31ba:

if ((arg3 & 0x400) != 0)
label_1403c325e:
    png_set_invert_alpha(arg1)
    
    if (arg2[2].w s< 0)
    label_1403c326b:
        int64_t rsi_1 = *(arg2 + 0x138)
        int32_t rax_1 = png_set_interlace_handling(arg1)
        
        if (rax_1 s> 0)
            int32_t i = *(arg1 + 0x1dc)
            int32_t rbx_1 = 0
            
            do
                bool cond:0_1 = i == 0
                i = 0
                
                if (not(cond:0_1))
                    int64_t rbp_1 = 0
                    
                    do
                        r8, r9 = png_write_row(arg1, *(rsi_1 + (rbp_1 << 3)))
                        i = *(arg1 + 0x1dc)
                        rbp_1 += 1
                    while (rbp_1.d u< i)
                
                rbx_1 += 1
            while (rbx_1 != rax_1)
else
label_1403c31c6:
    
    if (arg2[2].w s< 0)
        goto label_1403c326b

return png_write_end(arg1, arg2, r8.b, r9) __tailcall
