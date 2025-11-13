// 函数: sub_141bed4d0
// 地址: 0x141bed4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141beee70(arg1)
char rax = arg1[0x2a].b
int64_t* rcx = arg1[0x24]
int32_t var_28
int32_t zmm0_1

if ((rax & 1) == 0)
    arg1[0x2a].b = rax & 0xfe
    
    if (rcx != 0)
        zmm0_1 = 0xbf800000
    label_141bed52e:
        var_28 = zmm0_1
        char var_24_1 = 1
        int64_t var_20_1 = 0
        int32_t var_18_1 = 0
        sub_140f61830(rcx, &var_28)
else
    zmm0_1 = arg1[0x26].d
    arg1[0x2a].b = rax | 1
    
    if (rcx != 0)
        goto label_141bed52e

char rax_1 = arg1[0x2a].b
int64_t* rcx_1 = arg1[0x24]

if ((rax_1 & 2) == 0)
    arg1[0x2a].b = rax_1 & 0xfd
    
    if (rcx_1 != 0)
        zmm0_1 = 0xbf800000
    label_141bed585:
        var_28 = zmm0_1
        char var_24_2 = 1
        int64_t var_20_2 = 0
        int32_t var_18_2 = 0
        sub_140f5e5a0(rcx_1, &var_28)
else
    zmm0_1 = *(arg1 + 0x134)
    arg1[0x2a].b = rax_1 | 2
    
    if (rcx_1 != 0)
        goto label_141bed585

char rax_2 = arg1[0x2a].b
int64_t* rcx_2 = arg1[0x24]

if ((rax_2 & 4) == 0)
    arg1[0x2a].b = rax_2 & 0xfb
    
    if (rcx_2 != 0)
        zmm0_1 = 0xbf800000
    label_141bed5dc:
        var_28 = zmm0_1
        char var_24_3 = 1
        int64_t var_20_3 = 0
        int32_t var_18_3 = 0
        sub_140f60240(rcx_2, &var_28)
else
    zmm0_1 = arg1[0x27].d
    arg1[0x2a].b = rax_2 | 4
    
    if (rcx_2 != 0)
        goto label_141bed5dc

char rax_3 = arg1[0x2a].b
int64_t* rcx_3 = arg1[0x24]

if ((rax_3 & 8) == 0)
    arg1[0x2a].b = rax_3 & 0xf7
    
    if (rcx_3 != 0)
        zmm0_1 = 0xbf800000
    label_141bed633:
        var_28 = zmm0_1
        char var_24_4 = 1
        int64_t var_20_4 = 0
        int32_t var_18_4 = 0
        sub_140f60190(rcx_3, &var_28)
else
    zmm0_1 = *(arg1 + 0x13c)
    arg1[0x2a].b = rax_3 | 8
    
    if (rcx_3 != 0)
        goto label_141bed633

char rax_4 = arg1[0x2a].b
int64_t* rcx_4 = arg1[0x24]

if ((rax_4 & 0x10) == 0)
    arg1[0x2a].b = rax_4 & 0xef
    
    if (rcx_4 != 0)
        zmm0_1 = 0xbf800000
    label_141bed68a:
        var_28 = zmm0_1
        char var_24_5 = 1
        int64_t var_20_5 = 0
        int32_t var_18_5 = 0
        sub_140f5fde0(rcx_4, &var_28)
else
    zmm0_1 = arg1[0x28].d
    arg1[0x2a].b = rax_4 | 0x10
    
    if (rcx_4 != 0)
        goto label_141bed68a

char rax_5 = arg1[0x2a].b
int64_t* rcx_5 = arg1[0x24]

if ((rax_5 & 0x20) == 0)
    arg1[0x2a].b = rax_5 & 0xdf
    
    if (rcx_5 != 0)
        zmm0_1 = 0xbf800000
    label_141bed6e1:
        var_28 = zmm0_1
        char var_24_6 = 1
        int64_t var_20_6 = 0
        int32_t var_18_6 = 0
        sub_140f5fdb0(rcx_5, &var_28)
else
    zmm0_1 = *(arg1 + 0x144)
    arg1[0x2a].b = rax_5 | 0x20
    
    if (rcx_5 != 0)
        goto label_141bed6e1

char rax_6 = arg1[0x2a].b
int64_t* rcx_6 = arg1[0x24]

if ((rax_6 & 0x40) == 0)
    arg1[0x2a].b = rax_6 & 0xbf
    
    if (rcx_6 != 0)
        zmm0_1 = 0xbf800000
    label_141bed738:
        var_28 = zmm0_1
        char var_24_7 = 1
        int64_t var_20_7 = 0
        int32_t var_18_7 = 0
        sub_140f60110(rcx_6, &var_28)
else
    zmm0_1 = arg1[0x29].d
    arg1[0x2a].b = rax_6 | 0x40
    
    if (rcx_6 != 0)
        goto label_141bed738

char result = arg1[0x2a].b
int64_t* rcx_7 = arg1[0x24]

if (result s>= 0)
    result &= 0x7f
    arg1[0x2a].b = result
    
    if (rcx_7 != 0)
        zmm0_1 = 0xbf800000
    label_141bed78f:
        var_28 = zmm0_1
        char var_24_8 = 1
        int64_t var_20_8 = 0
        int32_t var_18_8 = 0
        return sub_140f5fd80(rcx_7, &var_28)
else
    zmm0_1 = *(arg1 + 0x14c)
    result |= 0x80
    arg1[0x2a].b = result
    
    if (rcx_7 != 0)
        goto label_141bed78f

return result
