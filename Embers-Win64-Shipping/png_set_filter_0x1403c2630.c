// 函数: png_set_filter
// 地址: 0x1403c2630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* rsi_1 = arg1
void* rax
rax.b = arg2 == 0x40

if (arg2 != 0)
    arg1.b = *(rsi_1 + 0x418)
    arg1.b &= 4
    arg1.b u>>= 2
    rax.b &= arg1.b
    
    if (rax.b == 0)
        png_error(rsi_1, "Unknown custom filter method")
        noreturn

uint64_t rbx

if (arg3.b u> 7)
    rbx = zx.q(arg3)
else
    rbx.b = 8
    
    switch (arg3.b)
        case 1
            rbx.b = 0x10
        case 2
            rbx.b = 0x20
        case 3
            rbx.b = 0x40
        case 4
            rbx.b = 0x80
        case 5, 6, 7
            png_warning(rsi_1, "Unknown row filter for method 0")

*(rsi_1 + 0x25d) = rbx.b

if (*(rsi_1 + 0x200) == 0)
    return 

if ((rbx.b & 0x10) != 0 && *(rsi_1 + 0x208) == 0)
    rax = png_malloc(rsi_1, *(rsi_1 + 0x1e8) + 1)
    *(rsi_1 + 0x208) = rax
    *rax = 1
    rbx.b = *(rsi_1 + 0x25d)

if ((rbx.b & 0x20) != 0 && *(rsi_1 + 0x210) == 0)
    if (*(rsi_1 + 0x1f8) == 0)
        png_warning(rsi_1, "Can't add Up filter after starting")
        rbx.b = *(rsi_1 + 0x25d)
        rbx.b &= 0xdf
        *(rsi_1 + 0x25d) = rbx.b
        
        if ((rbx.b & 0x40) != 0 && *(rsi_1 + 0x218) == 0)
            goto label_1403c270c
        
        goto label_1403c27c5
    
    rax = png_malloc(rsi_1, *(rsi_1 + 0x1e8) + 1)
    *(rsi_1 + 0x210) = rax
    *rax = 2
    rbx.b = *(rsi_1 + 0x25d)
    
    if ((rbx.b & 0x40) != 0 && *(rsi_1 + 0x218) == 0)
        goto label_1403c270c
    
    goto label_1403c27c5

if ((rbx.b & 0x40) != 0 && *(rsi_1 + 0x218) == 0)
label_1403c270c:
    
    if (*(rsi_1 + 0x1f8) == 0)
        png_warning(rsi_1, "Can't add Average filter after starting")
        rbx.b = *(rsi_1 + 0x25d)
        rbx.b &= 0xbf
        *(rsi_1 + 0x25d) = rbx.b
        
        if (rbx.b s>= 0)
            goto label_1403c27c9
        
        goto label_1403c27d6
    
    rax = png_malloc(rsi_1, *(rsi_1 + 0x1e8) + 1)
    *(rsi_1 + 0x218) = rax
    *rax = 3
    rbx.b = *(rsi_1 + 0x25d)
    
    if (rbx.b s>= 0)
        goto label_1403c27c9
    
    goto label_1403c27d6

label_1403c27c5:

if (rbx.b s>= 0)
label_1403c27c9:
    
    if (rbx.b == 0)
        *(rsi_1 + 0x25d) = 8
    
    return 

label_1403c27d6:

if (*(rsi_1 + 0x220) != 0)
    return 

if (*(rsi_1 + 0x1f8) == 0)
    png_warning(rsi_1, "Can't add Paeth filter after starting")
    rbx.b = *(rsi_1 + 0x25d)
    rbx.b &= 0x7f
    *(rsi_1 + 0x25d) = rbx.b
    
    if (rbx.b == 0)
        *(rsi_1 + 0x25d) = 8
else
    rax = png_malloc(rsi_1, *(rsi_1 + 0x1e8) + 1)
    *(rsi_1 + 0x220) = rax
    *rax = 4
    rbx.b = *(rsi_1 + 0x25d)
    
    if (rbx.b == 0)
        *(rsi_1 + 0x25d) = 8
