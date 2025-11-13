// 函数: sub_140e34550
// 地址: 0x140e34550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_50 = -2
int32_t r12 = 0
*(arg1 + 0x60) = 0
void* rax = png_create_read_struct_2("1.5.2", arg1, sub_140e448c0, sub_140e44ad0, 0, sub_140e44a40, 
    sub_140b07c20)
void* var_68 = rax
int32_t* var_60 = png_create_info_struct(rax)
int64_t rax_2 = png_malloc(var_68, sx.q(*(arg1 + 0x40)) << 3)
void** var_48 = &var_68
int32_t** var_40 = &var_60
void var_a8

if (__intrinsic_setjmp(png_set_longjmp_fn(var_68, longjmp, 0x100), &var_a8) != 0)
    if (rax_2 != 0)
        png_free(*var_48, rax_2)
    
    return png_destroy_read_struct(var_48, var_40, nullptr)

int32_t rax_5 = *(arg1 + 0x68)

if (rax_5 == 3)
    png_set_expand(var_68)
    rax_5 = *(arg1 + 0x68)

if ((rax_5.b & 2) == 0 && *(arg1 + 0x3b) s< 8)
    png_set_expand_gray_1_2_4_to_8(var_68)
    rax_5 = *(arg1 + 0x68)

int32_t r14_1

if ((rax_5.b & 4) != 0 || arg2 u> 1)
    r14_1 = arg3
else
    if ((rax_5.b & 2) == 0 || rax_5 == 3)
        png_set_tRNS_to_alpha(var_68)
    
    r14_1 = arg3
    
    if (r14_1 == 8)
        png_set_add_alpha(var_68, 0xff, 1)
    else if (r14_1 == 0x10)
        png_set_add_alpha(var_68, 0xffff, 1)

int64_t rax_6 = 4

if (arg2 == 2)
    rax_6 = 1

int64_t r15_2 = sx.q(*(arg1 + 0x3c)) * ((sx.q(r14_1) * rax_6) u>> 3)
int64_t rdx_7 = sx.q(*(arg1 + 0x40)) * r15_2
*(arg1 + 0x10) = 0

if (*(arg1 + 0x18) != rdx_7)
    sub_140a4fbe0(arg1 + 8, rdx_7)

int64_t rax_9 = sx.q(*(arg1 + 0x40)) * r15_2 + *(arg1 + 0x10)
*(arg1 + 0x10) = rax_9

if (rax_9 s> *(arg1 + 0x18))
    sub_140a4f990(arg1 + 8)

png_set_read_fn(var_68, arg1, sub_140e44a50)
int64_t i = 0

if (*(arg1 + 0x40) s> 0)
    int64_t r8 = 0
    
    do
        *(rax_2 + (i << 3)) = *(arg1 + 8) + r8
        i += 1
        r8 += r15_2
    while (i s< sx.q(*(arg1 + 0x40)))

png_set_rows(var_68, var_60, rax_2)

if (arg2 == 1)
    r12 = 0x80

char rax_11 = *(arg1 + 0x3b)
int32_t rcx_21 = r12 | 0x200

if (rax_11 != 0x10)
    rcx_21 = r12

int32_t rdx_12 = *(arg1 + 0x68) & 2
int32_t rdi_1 = rcx_21

if (rdx_12 == 0 && (arg2 == 0 || arg2 == 1))
    rdi_1 = rcx_21 | 0x2000

if (rdx_12 == 0)
    goto label_140e3480b

if (arg2 == 2)
    png_set_rgb_to_gray_fixed(var_68, 2, 0xffffffff, 0xffffffff)
    rax_11 = *(arg1 + 0x3b)
label_140e3480b:
    
    if (arg2 == 2)
        rdi_1 |= 2

if (rax_11 == 0x10 && r14_1 == 8)
    rdi_1 |= 1

png_read_png(var_68, var_60, rdi_1)

if (rax_2 != 0)
    png_free(*var_48, rax_2)

int64_t result = png_destroy_read_struct(var_48, var_40, nullptr)
*(arg1 + 0x38) = arg2
*(arg1 + 0x39) = r14_1.b
return result
