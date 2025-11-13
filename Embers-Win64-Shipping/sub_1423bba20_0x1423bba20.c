// 函数: sub_1423bba20
// 地址: 0x1423bba20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14333c908
void* rsi = &arg1[0xb]
int64_t i_1 = 6
int64_t i

do
    int32_t j = 0
    void* rbx_1 = rsi
    
    do
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        *rbx_1 = 0
        j += 1
        rbx_1 += 8
    while (j u< 0xe)
    
    rsi += 0x70
    i = i_1
    i_1 -= 1
while (i != 1)
sub_1405d1550(&arg1[0xa])
*arg1 = &data_142e09230
sub_1405d1550(&arg1[4])
sub_1405d1550(&arg1[3])
sub_1405d1550(&arg1[2])
sub_1419948a0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
