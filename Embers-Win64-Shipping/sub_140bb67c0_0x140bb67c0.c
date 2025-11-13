// 函数: sub_140bb67c0
// 地址: 0x140bb67c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x1d8)
int128_t* var_18 = nullptr
int32_t var_10 = 0
uint64_t result = sub_140ba9440(arg1 + 0x500, &var_18, arg1)
int128_t* rbp = var_18
int128_t* rbx = rbp
void* rdi_2 = &rbp[sx.q(var_10)]

if (rbp != rdi_2)
    do
        result = sub_140bb6ac0(rsi + 0x340, rbx)
        rbx = &rbx[1]
    while (rbx != rdi_2)

if (rbp == 0)
    return result

return sub_140a74f90(rbp)
