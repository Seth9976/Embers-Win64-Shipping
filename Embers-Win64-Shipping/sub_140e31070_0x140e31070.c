// 函数: sub_140e31070
// 地址: 0x140e31070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x28) != 0)
    return 

int32_t rdi_1 = 0
*(arg1 + 0x60) = 0
void* rax_1 = png_create_write_struct("1.5.2", arg1, sub_140e448c0, sub_140e44ad0)
void* var_28 = rax_1
int32_t* rax_2 = png_create_info_struct(rax_1)
void* rcx_1 = var_28
uint64_t rdx_3 = sx.q(*(arg1 + 0x40)) << 3
int32_t* var_20 = rax_2
int64_t rax_3 = png_malloc(rcx_1, rdx_3)
void var_78

if (__intrinsic_setjmp(png_set_longjmp_fn(var_28, longjmp, 0x100), &var_78) == 0)
    png_set_compression_level(var_28, 1)
    char rcx_5 = 6
    
    if (*(arg1 + 0x38) == 2)
        rcx_5 = 0
    
    png_set_IHDR(var_28, var_20, *(arg1 + 0x3c), *(arg1 + 0x40), *(arg1 + 0x39), rcx_5, 0, 0, 0)
    png_set_write_fn(var_28, arg1, sub_140e44af0, sub_140594850)
    int64_t r9_2 = 4
    
    if (*(arg1 + 0x38) == 2)
        r9_2 = 1
    
    int64_t r9_5 = ((r9_2 * sx.q(*(arg1 + 0x39))) u>> 3) * sx.q(*(arg1 + 0x3c))
    int64_t i = 0
    
    if (*(arg1 + 0x40) s> 0)
        int64_t r8_2 = 0
        
        do
            int64_t rdx_8 = *(arg1 + 8) + r8_2
            r8_2 += r9_5
            *(rax_3 + (i << 3)) = rdx_8
            i += 1
        while (i s< sx.q(*(arg1 + 0x40)))
    
    png_set_rows(var_28, var_20, rax_3)
    char rcx_10 = *(arg1 + 0x38)
    
    if (rcx_10 == 1)
        rdi_1 = 0x80
    
    if (*(arg1 + 0x39) == 0x10)
        rdi_1 = 0x200
        
        if (rcx_10 == 1)
            rdi_1 = 0x280
    
    png_write_png(var_28, var_20, rdi_1)

if (rax_3 != 0)
    png_free(var_28, rax_3)

png_destroy_write_struct(&var_28, &var_20)
