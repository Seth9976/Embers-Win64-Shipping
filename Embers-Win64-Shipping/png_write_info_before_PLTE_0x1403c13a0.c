// 函数: png_write_info_before_PLTE
// 地址: 0x1403c13a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || (*(arg1 + 0x155) & 4) != 0)
    return 

png_write_sig(arg1)

if ((*(arg1 + 0x155) & 0x10) != 0 && *(arg1 + 0x418) != 0)
    png_warning(arg1, "MNG features are not allowed in a PNG datastream")
    *(arg1 + 0x418) = 0

sub_1403cf670(arg1, *arg2, arg2[1], zx.d(arg2[9].b), zx.d(*(arg2 + 0x25)), zx.d(*(arg2 + 0x26)), 
    zx.d(*(arg2 + 0x27)), zx.d(arg2[0xa].b))
int32_t rax_2 = arg2[2]

if ((rax_2.b & 1) == 0)
    if ((rax_2 & 0x800) != 0)
        goto label_1403c158c
    
    goto label_1403c144c

sub_1403cfdd0(arg1, arg2[0xd])
rax_2 = arg2[2]

if ((rax_2 & 0x800) != 0)
label_1403c158c:
    sub_1403cfe40(arg1, zx.d(arg2[0xe].b))
    rax_2 = arg2[2]
    
    if ((rax_2 & 0x1000) == 0)
        goto label_1403c1457
    
    goto label_1403c15bd

label_1403c144c:

if ((rax_2 & 0x1000) == 0)
label_1403c1457:
    
    if ((rax_2.b & 2) != 0)
        goto label_1403c15d9
    
    goto label_1403c145f

label_1403c15bd:
sub_1403cfeb0(arg1, *(arg2 + 0x100), 0, *(arg2 + 0x108), arg2[0x44])
rax_2 = arg2[2]

if ((rax_2.b & 2) == 0)
label_1403c145f:
    
    if ((rax_2.b & 4) != 0)
        sub_1403d0af0(arg1, arg2[0x2a], arg2[0x2b], arg2[0x2c], arg2[0x2d], arg2[0x2e], arg2[0x2f], 
            arg2[0x30], arg2[0x31])
else
label_1403c15d9:
    sub_1403d0a00(arg1, &arg2[0x16], zx.d(*(arg2 + 0x25)))
    
    if (((arg2[2]).b & 4) != 0)
        sub_1403d0af0(arg1, arg2[0x2a], arg2[0x2b], arg2[0x2c], arg2[0x2d], arg2[0x2e], arg2[0x2f], 
            arg2[0x30], arg2[0x31])

int32_t temp0_1 = arg2[0x3e]

if (temp0_1 != 0 && temp0_1 s> 0)
    int32_t* i = *(arg2 + 0xf0)
    
    do
        int32_t rax_4 = png_handle_as_unknown(arg1, i)
        
        if (rax_4 != 1)
            char rcx_7 = i[6].b
            
            if (rcx_7 != 0 && (rcx_7 & 6) == 0
                    && (rax_4 == 3 || (*(i + 3) & 0x20) != 0 || (*(arg1 + 0x15a) & 1) != 0))
                int64_t r9_3 = *(i + 0x10)
                
                if (r9_3 == 0)
                    png_warning(arg1, "Writing zero-length unknown chunk")
                    r9_3 = *(i + 0x10)
                
                png_write_chunk(arg1, i, *(i + 8), r9_3)
        
        i = &i[8]
    while (i u< (sx.q(arg2[0x3e]) << 5) + *(arg2 + 0xf0))

*(arg1 + 0x155) |= 4
