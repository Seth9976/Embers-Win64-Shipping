// 函数: sub_142d07fb0
// 地址: 0x142d07fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1421dfc30(&data_143f50880)
int64_t rcx = data_143f50940

if (rcx != 0)
    result = sub_140a74f90(rcx)

int64_t i = 0xc
int64_t* rdi = &data_143f50940

do
    int64_t rcx_1 = rdi[-2]
    rdi = &rdi[-2]
    i -= 1
    
    if (rcx_1 != 0)
        result = sub_140a74f90(rcx_1)
while (i != 0)

return result
