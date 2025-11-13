// 函数: sub_142113ac0
// 地址: 0x142113ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f48b30 != 0)
    return 

void* i = &data_143f48af0
data_143f48b30 = 1

do
    int64_t* rdi_1 = *i
    
    if (rdi_1 != 0 && ((rdi_1[1].d u>> 0xa).b & 1) == 0)
        sub_140cd85e0(rdi_1)
    
    if (rdi_1 == 0 || ((rdi_1[1].d u>> 0xa).b & 1) != 0 || ((rdi_1[1].d u>> 0xc).b & 1) != 0)
        data_143f48b30 = 0
    
    i += 8
while (i s< &data_143f48b28)
