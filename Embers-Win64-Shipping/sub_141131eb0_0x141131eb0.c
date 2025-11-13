// 函数: sub_141131eb0
// 地址: 0x141131eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_2 = (arg1[1] + 0x3f) & 0xffffffc0
int32_t r9_2 = (*arg1 + 0x3f) & 0xffffffc0
arg1[3] = rax_2
arg1[2] = r9_2
char rdi = 0x1c
int32_t rbx = 4
sub_1407b4d10(&arg1[4], 4, rax_2 * r9_2, 0x1c, 1, 
    FLightTileIntersectionResources::TileNumCulledObjects", 0)
sub_1407b4d10(&arg1[0x14], 4, arg1[3] * arg1[2], 0x1c, 1, 
    FLightTileIntersectionResources::TileStartOffsets", 0)
sub_1407b4d10(&arg1[0xc], 4, 1, 0x1c, 1, u"FLightTileIntersectionResources::NextStartOffset", 0)
char rax_3 = arg1[0x24].b

if (rax_3 != 0)
    rdi = 0x20

if (rax_3 != 0)
    rbx = 2

return sub_1407b4d10(&arg1[0x1c], rbx, arg1[3] * arg1[2] * data_1439b5bd8 * arg2, rdi, 1, 
    FLightTileIntersectionResources::TileArrayData", 0)
