// 函数: sub_1425de170
// 地址: 0x1425de170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1425d9410(arg1)
void*** rax = j_sub_140a82f30(8)

if (rax != 0)
    *rax = &data_143447dc8

data_143f70940 = rax
void*** rax_1 = j_sub_140a82f30(8)

if (rax_1 != 0)
    *rax_1 = &data_143447e08

int64_t rdx = data_143f70940
int64_t rcx = data_143ef8528
data_143f70948 = rax_1
InitializeNvCloth(rcx, rdx, rax_1, 0, 2)
*(arg1 + 0x10) = NvClothCreateFactoryCPU()
*(arg1 + 0x18) = NvClothCreateMeshQuadifier()
sub_140a387e0()
data_143f376e8
jump(*(data_14399e720 + 0x18))
