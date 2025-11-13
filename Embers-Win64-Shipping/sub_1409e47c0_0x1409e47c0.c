// 函数: sub_1409e47c0
// 地址: 0x1409e47c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_1409935e0(&var_18, arg1 + 8)
int16_t* const r8

if (rax[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax

sub_140a2e390(arg2, u"Flip Polygons [PolygonIDsToFlip:%s]", r8)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return arg2
