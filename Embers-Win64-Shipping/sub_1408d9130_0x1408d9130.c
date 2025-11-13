// 函数: sub_1408d9130
// 地址: 0x1408d9130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 1
void* rdx = &data_143cebef4
int32_t result

do
    rdx += 8
    *(rdx - 0xc) = 1 << i.b
    result = 0xfffffffe << i.b
    i += 1
    *(rdx - 8) = result
while (i s<= 0x1e)

return result
