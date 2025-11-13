// 函数: png_write_info
// 地址: 0x1403c15f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

char r8_1
char r9_1
r8_1, r9_1 = png_write_info_before_PLTE(arg1, arg2)
int32_t rax_1 = arg2[2]

if ((rax_1.b & 8) == 0)
    if (*(arg2 + 0x25) == 3)
        png_error(arg1, "Valid palette required for paletted images")
        noreturn
    
    if ((rax_1.b & 0x10) != 0)
        goto label_1403c16ff
    
    goto label_1403c163a

r8_1, r9_1 = sub_1403cfa70(arg1, *(arg2 + 0x18), zx.d(arg2[8].w))
rax_1 = arg2[2]

if ((rax_1.b & 0x10) != 0)
label_1403c16ff:
    
    if ((*(arg1 + 0x15e) & 8) != 0 && *(arg2 + 0x25) == 3 && *(arg2 + 0x22) != 0)
        int64_t i = 0
        
        do
            char* rcx_2 = *(arg2 + 0x68)
            rcx_2[i] = not.b(rcx_2[i])
            i += 1
        while (i u< zx.q(*(arg2 + 0x22)))
    
    r8_1, r9_1 =
        sub_1403d0cb0(arg1, *(arg2 + 0x68), &arg2[0x1c], zx.d(*(arg2 + 0x22)), zx.d(*(arg2 + 0x25)))
    rax_1 = arg2[2]
    
    if ((rax_1.b & 0x20) == 0)
        goto label_1403c1642
    
    goto label_1403c175b

label_1403c163a:

if ((rax_1.b & 0x20) == 0)
label_1403c1642:
    
    if ((rax_1.b & 0x40) != 0)
        goto label_1403c177b
    
    goto label_1403c164a

label_1403c175b:
r8_1, r9_1 = sub_1403d0e00(arg1, arg2 + 0x7a, zx.d(*(arg2 + 0x25)))
rax_1 = arg2[2]

if ((rax_1.b & 0x40) != 0)
label_1403c177b:
    r8_1, r9_1 = sub_1403d0f50(arg1, *(arg2 + 0xa0), zx.d(arg2[8].w))
    rax_1 = arg2[2]
    
    if ((rax_1 & 0x100) == 0)
        goto label_1403c1655
    
    goto label_1403c17a8

label_1403c164a:

if ((rax_1 & 0x100) == 0)
label_1403c1655:
    
    if ((rax_1 & 0x400) != 0)
        goto label_1403c17f9
    
    goto label_1403c1660

label_1403c17a8:
r8_1, r9_1 = sub_1403d17f0(arg1, arg2[0x21], arg2[0x22], zx.d(arg2[0x23].b))
rax_1 = arg2[2]

if ((rax_1 & 0x400) != 0)
label_1403c17f9:
    r8_1, r9_1 = sub_1403d18a0(arg1, *(arg2 + 0xc8), zx.q(arg2[0x34]), zx.q(arg2[0x35]), 
        zx.d(arg2[0x3a].b), zx.d(*(arg2 + 0xe9)), *(arg2 + 0xd8))
    rax_1 = arg2[2]
    
    if ((rax_1 & 0x4000) == 0)
        goto label_1403c166b
    
    goto label_1403c1826

label_1403c1660:

if ((rax_1 & 0x4000) == 0)
label_1403c166b:
    
    if (rax_1.b s< 0)
        goto label_1403c1850
    
    goto label_1403c1673

label_1403c1826:
r8_1, r9_1 = sub_1403d1c00(arg1, arg2[0x49].b, *(arg2 + 0x128), *(arg2 + 0x130))
rax_1 = arg2[2]

if (rax_1.b s< 0)
label_1403c1850:
    r8_1, r9_1 = sub_1403d1d10(arg1, arg2[0x24], arg2[0x25], zx.d(arg2[0x26].b))
    rax_1 = arg2[2]
    
    if ((rax_1 & 0x200) == 0)
        goto label_1403c167e
    
    goto label_1403c186b

label_1403c1673:

if ((rax_1 & 0x200) != 0)
label_1403c186b:
    sub_1403d1dc0(arg1, &arg2[0x14], r8_1, r9_1)
    *(arg1 + 0x155) |= 2
    
    if ((arg2[2] & 0x2000) != 0)
    label_1403c1689:
        
        if (arg2[0x48] s> 0)
            int64_t rsi_1 = 0
            int64_t i_1 = 0
            
            do
                sub_1403d0750(arg1, *(arg2 + 0x118) + rsi_1)
                i_1 += 1
                rsi_1 += 0x20
            while (i_1 s< sx.q(arg2[0x48]))
else
label_1403c167e:
    
    if ((rax_1 & 0x2000) != 0)
        goto label_1403c1689

if (arg2[0xf] s> 0)
    int64_t rbx_1 = 0
    int64_t i_2 = 0
    
    do
        int32_t* rax_7 = *(arg2 + 0x48)
        int32_t rdx_14 = *(rax_7 + rbx_1)
        uint32_t var_48
        
        if (rdx_14 s> 0)
            uint32_t var_40
            var_40.q = *(rax_7 + rbx_1 + 0x10)
            var_48.q = *(rax_7 + rbx_1 + 0x30)
            sub_1403d14b0(arg1, rdx_14, *(rax_7 + rbx_1 + 8), *(rax_7 + rbx_1 + 0x28), var_48, 
                var_40)
            *(*(arg2 + 0x48) + rbx_1) = -3
        else if (rdx_14 == 0xffffffff)
            sub_1403d10c0(arg1, *(rax_7 + rbx_1 + 8), *(rax_7 + rbx_1 + 0x10))
            *(*(arg2 + 0x48) + rbx_1) = -3
        else if (rdx_14 == 0)
            var_48 = 0
            sub_1403d1280(arg1, *(rax_7 + rbx_1 + 8), *(rax_7 + rbx_1 + 0x10), 0)
            *(*(arg2 + 0x48) + rbx_1) = -2
        i_2 += 1
        rbx_1 += 0x38
    while (i_2 s< sx.q(arg2[0xf]))

int32_t temp0_1 = arg2[0x3e]

if (temp0_1 == 0 || temp0_1 s<= 0)
    return 

int32_t* i_3 = *(arg2 + 0xf0)

do
    int32_t rax_9 = png_handle_as_unknown(arg1, i_3)
    
    if (rax_9 != 1 && (i_3[6].b & 6) == 2
            && (rax_9 == 3 || (*(i_3 + 3) & 0x20) != 0 || (*(arg1 + 0x15a) & 1) != 0))
        png_write_chunk(arg1, i_3, *(i_3 + 8), *(i_3 + 0x10))
    
    i_3 = &i_3[8]
while (i_3 u< (sx.q(arg2[0x3e]) << 5) + *(arg2 + 0xf0))
