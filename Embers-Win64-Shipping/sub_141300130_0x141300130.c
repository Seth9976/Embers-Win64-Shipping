// 函数: sub_141300130
// 地址: 0x141300130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1 + 0x58
sub_141303770(rbx, *(arg1 + 0x58))
int64_t i_1 = 2
int64_t i_2 = 2
int64_t result
int64_t i

do
    rbx -= 0x18
    sub_1405d1550(rbx + 0x10)
    sub_1405ec8a0(rbx + 8)
    result = sub_1405d1550(rbx)
    i = i_2
    i_2 -= 1
while (i != 1)
void*** rsi = *(arg1 + 0x20)
void* rbx_1 = arg1 + 0x20

if (rsi != 0)
    sub_1405d1550(&rsi[2])
    *rsi = &data_142f5b0f8
    sub_14081c9d0(&rsi[1])
    result = j_sub_140a74f90(rsi)

do
    int64_t* rcx_7 = *(rbx_1 - 8)
    rbx_1 -= 8
    i_1 -= 1
    
    if (rcx_7 != 0)
        result = (*(*rcx_7 + 0x38))(rcx_7)
while (i_1 != 0)

return result
