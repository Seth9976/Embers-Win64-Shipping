// 函数: sub_142061100
// 地址: 0x142061100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*arg1)
int32_t rcx

if (rax.d u> 0x30)
    rcx = *(rax * 0x14 + 0x143f025f8)
else
    switch (rax)
        case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
            rcx = 3
        case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
                0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
            rcx = *(rax * 0x14 + 0x143f025f8)
        case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
            rcx = 1

int64_t r8_2

if (rcx == 1)
    r8_2 = 0x4b
else if (rcx == 3)
    r8_2 = 0x10000
else
    r8_2 = 0

sub_1410b3fe0(arg2, u"MAX_SHADER_BONES", r8_2)
sub_1405d3490(arg2 + 0x2a8, u"GPUSKIN_USE_EXTRA_INFLUENCES", 0)
int64_t rbp = data_143f41220
int64_t rcx_4

if (data_143de5480 == 0)
    rcx_4 = 0
else
    rcx_4.b = GetCurrentThreadId() != data_143de5470

int64_t r8_3
r8_3.b = *(rbp + (rcx_4 << 2)) != 0
sub_1410b3fe0(arg2, u"GPUSKIN_LIMIT_2BONE_INFLUENCES", r8_3)
int32_t rbx
rbx.b = sub_142070a00(*arg1) != 0
sub_1410b3fe0(arg2, u"GPUSKIN_USE_BONES_SRV_BUFFER", zx.q(rbx))
return sub_1410b3fe0(arg2, u"GPUSKIN_UNLIMITED_BONE_INFLUENCE", 1) __tailcall
