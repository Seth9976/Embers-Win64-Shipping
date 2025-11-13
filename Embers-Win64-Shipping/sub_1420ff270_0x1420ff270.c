// 函数: sub_1420ff270
// 地址: 0x1420ff270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410b3e70(arg2, u"VF_SUPPORTS_SPEEDTREE_WIND", &(*U"RGBXYZF10|")[7])
int64_t var_18 = 0
int32_t var_10 = 0
sub_1405947f0(&var_18, 0x14)
int32_t rax = var_10 + 0x14
var_10 = rax

if (rax s> 0)
    sub_140594770(&var_18)

int64_t rdi = var_18
sub_1405a7220(rdi, 0x14, "MANUAL_VERTEX_FETCH", 0x14, 0x3f)
void arg_8
int32_t rbp = *sub_14062d6e0(arg2 + 0x2a8, &arg_8, &var_18)

if (rdi != 0)
    sub_140a74f90(rdi)

if (rbp == 0xffffffff && sub_1419d5c70(*arg1) != 0)
    sub_1410b3e70(arg2, u"MANUAL_VERTEX_FETCH", &(*U"RGBXYZF10|")[7])

int32_t rdi_1 = 3
char rax_5

if (((*(*(arg1 + 0x38) + 0x28) u>> 6).b & 1) != 0)
    int64_t rcx_10 = sx.q(*arg1)
    int32_t rdx_4
    
    if (rcx_10.d u> 0x30)
        rdx_4 = *(rcx_10 * 0x14 + 0x143f025f8)
    else
        switch (rcx_10)
            case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
                rdx_4 = 3
            case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
                    0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
                rdx_4 = *(rcx_10 * 0x14 + 0x143f025f8)
            case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
                rdx_4 = 1
    
    rax_5 = sub_1411a4ac0(rcx_10.d, rdx_4)

char r8_1

if (((*(*(arg1 + 0x38) + 0x28) u>> 6).b & 1) == 0 || rax_5 == 0)
    r8_1 = 0
else
    r8_1 = 1

sub_1421026d0(arg2, u"VF_SUPPORTS_PRIMITIVE_SCENE_DATA", r8_1)
char r8_2

if (((*(*(arg1 + 0x38) + 0x28) u>> 6).b & 1) == 0)
    r8_2 = 0
else
    int64_t rcx_14 = sx.q(*arg1)
    
    if (rcx_14.d u> 0x30)
        rdi_1 = *(rcx_14 * 0x14 + 0x143f025f8)
    else
        switch (rcx_14)
            case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
                    0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
                rdi_1 = *(rcx_14 * 0x14 + 0x143f025f8)
            case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
                rdi_1 = 1
    
    if (sub_1411a4ac0(rcx_14.d, rdi_1) == 0)
        r8_2 = 0
    else if (sub_1419a2670(*arg1) == 0)
        r8_2 = 0
    else
        r8_2 = 1

return sub_1421026d0(arg2, u"VF_GPU_SCENE_TEXTURE", r8_2) __tailcall
