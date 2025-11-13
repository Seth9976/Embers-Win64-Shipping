// 函数: sub_14189f690
// 地址: 0x14189f690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe9658
sub_14189de60(&arg1[4])

for (void* i = arg1[3]; i != 0; i = arg1[3])
    arg1[3] = *arg1[3]
    
    if (i != 0)
        sub_1418aac00(i + 8)
        j_sub_140a74f90(i)

*arg1 = &data_142e52080

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
