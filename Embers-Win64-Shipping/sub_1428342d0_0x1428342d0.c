// 函数: sub_1428342d0
// 地址: 0x1428342d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t _ElementSize = sx.q(arg2)

if (fread(arg1, _ElementSize, 1, arg3) == 1)
    return 0

int32_t rax_1
int64_t r8
rax_1, r8 = feof(arg3)

if (rax_1 == 0)
    sub_142833a04(1, "File read failed", r8)
else
    sub_142835944(4, "EOF while attemping to read %d bytes", zx.q(_ElementSize.d))

return 0xffffffff
