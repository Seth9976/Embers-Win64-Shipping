// 函数: sub_1403d1e70
// 地址: 0x1403d1e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi_1 = zx.q(*(arg1 + 0x260)) * zx.q(*(arg1 + 0x263))
uint64_t rax_1 = zx.q(*(arg1 + 0x1d8))
uint64_t rdi_3

if (rdi_1.d u< 8)
    rdi_3 = (rdi_1 * rax_1 + 7) u>> 3
else
    rdi_3 = (rdi_1 u>> 3) * rax_1

char* rax_2 = png_malloc(arg1, rdi_3 + 1)
*(arg1 + 0x200) = rax_2
*rax_2 = 0
rax_2.b = *(arg1 + 0x25d)

if ((rax_2.b & 0x10) != 0)
    rax_2 = png_malloc(arg1, *(arg1 + 0x1e8) + 1)
    *(arg1 + 0x208) = rax_2
    *rax_2 = 1
    rax_2.b = *(arg1 + 0x25d)

uint32_t rax_9

if (rax_2.b u< 0x20)
label_1403d1f1e:
    
    if (*(arg1 + 0x25b) == 0)
        rax_9 = *(arg1 + 0x1d8)
        *(arg1 + 0x1e0) = *(arg1 + 0x1dc)
    else
    label_1403d1f32:
        int32_t rax_4 = *(arg1 + 0x1dc)
        
        if ((*(arg1 + 0x15c) & 2) != 0)
            *(arg1 + 0x1e0) = rax_4
            rax_9 = *(arg1 + 0x1d8)
        else
            *(arg1 + 0x1e0) = (rax_4 + 7) u>> 3
            rax_9 = (*(arg1 + 0x1d8) + 7) u>> 3
else
    *(arg1 + 0x1f8) = png_calloc(arg1, rdi_3 + 1)
    char* rax_3
    rax_3.b = *(arg1 + 0x25d)
    
    if ((rax_3.b & 0x20) == 0)
        if ((rax_3.b & 0x40) != 0)
            goto label_1403d1f9d
        
        goto label_1403d1f16
    
    rax_3 = png_malloc(arg1, *(arg1 + 0x1e8) + 1)
    *(arg1 + 0x210) = rax_3
    *rax_3 = 2
    rax_3.b = *(arg1 + 0x25d)
    
    if ((rax_3.b & 0x40) != 0)
    label_1403d1f9d:
        char* rax_10 = png_malloc(arg1, *(arg1 + 0x1e8) + 1)
        *(arg1 + 0x218) = rax_10
        *rax_10 = 3
        rax_10.b = *(arg1 + 0x25d)
        
        if (rax_10.b s>= 0)
            goto label_1403d1f1e
        
        goto label_1403d1fc8
    
label_1403d1f16:
    
    if (rax_3.b s>= 0)
        goto label_1403d1f1e
    
label_1403d1fc8:
    char* rax_11 = png_malloc(arg1, *(arg1 + 0x1e8) + 1)
    *(arg1 + 0x220) = rax_11
    *rax_11 = 4
    
    if (*(arg1 + 0x25b) != 0)
        goto label_1403d1f32
    
    rax_9 = *(arg1 + 0x1d8)
    *(arg1 + 0x1e0) = *(arg1 + 0x1dc)

*(arg1 + 0x1e4) = rax_9
*(arg1 + 0x178) = *(arg1 + 0x1c0)
int64_t result = *(arg1 + 0x1b8)
*(arg1 + 0x170) = result
return result
