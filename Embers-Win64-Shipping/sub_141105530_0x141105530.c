// 函数: sub_141105530
// 地址: 0x141105530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rdi_1 = (zx.q(arg1[0xc]) u>> 0xa).b & 1
int32_t rax = sub_1410efe60(*arg1, arg1[9], rdi_1)
int32_t rax_1 = sub_1410f0700(*arg1, rax)
int32_t rax_2 = sub_1410f07b0(*arg1, rax, rdi_1)
int32_t rbx = 0
int32_t rdi_2
int64_t r8_2

if (rax_2 u> 7)
    rdi_2 = 0
    
    if (((rax_2 - 1) & 0xfffffffd) == 0)
        r8_2 = 0
    else
        r8_2 = 1
else
    switch (rax_2)
        case 0
            rdi_2 = 4
            r8_2 = 1
        case 1
            rdi_2 = 3
            r8_2 = 0
        case 2
            rdi_2 = 5
            r8_2 = 1
        case 3
            rdi_2 = 4
            r8_2 = 0
        case 4
            r8_2 = 1
            int32_t rdi_3
            rdi_3.b = *arg1 - 0x19 u<= 1
            rdi_2 = rdi_3 + 3
        case 5, 6, 7
            rdi_2 = 1
            r8_2 = 1

sub_1405d3490(arg2 + 0x2a8, u"DECAL_OUTPUT_NORMAL", r8_2)
sub_1405d3490(arg2 + 0x2a8, u"DECAL_BLEND_MODE", zx.q(rax))
sub_1410b3fe0(arg2, u"DECAL_PROJECTION", 1)
sub_1405d3490(arg2 + 0x2a8, u"DECAL_RENDERTARGET_COUNT", zx.q(rdi_2))
sub_1405d3490(arg2 + 0x2a8, u"DECAL_RENDERSTAGE", zx.q(rax_1))
int32_t rdi_4
uint64_t r8_6

if (rax - 4 u> 9)
    rdi_4 = 0
    r8_6 = zx.q(rbx)
else
    switch (rax)
        case 4
            rdi_4 = 1
            rbx = 1
            r8_6 = zx.q(rbx)
        case 5, 0xb, 0xd
            rdi_4 = 0
            r8_6 = 1
        case 6
            rdi_4 = 0
            rbx = 1
            r8_6 = zx.q(rbx)
        case 7, 0xc
            rdi_4 = 1
            r8_6 = 1
        case 8
            rdi_4 = 0
            r8_6 = 0
            rbx = 1
        case 9
            rdi_4 = 1
            r8_6 = 0
            rbx = 1
        case 0xa
            rdi_4 = 1
            r8_6 = zx.q(rbx)

sub_1405d3490(arg2 + 0x2a8, u"MATERIAL_DBUFFERA", r8_6)
sub_1405d3490(arg2 + 0x2a8, u"MATERIAL_DBUFFERB", zx.q(rbx))
return sub_1405d3490(arg2 + 0x2a8, u"MATERIAL_DBUFFERC", zx.q(rdi_4)) __tailcall
