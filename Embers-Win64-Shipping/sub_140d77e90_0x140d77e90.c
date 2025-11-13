// 函数: sub_140d77e90
// 地址: 0x140d77e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HICON rax = LoadIconW(data_143e18638, 0x7b)
HICON rbx = rax

if (rax == 0)
    rbx = LoadIconW(nullptr, 0x7f00)

int64_t rdi = data_143e18638
void*** rax_2 = j_sub_140a82f30(0x210)

if (rax_2 == 0)
    data_143e203a8 = 0
    return 0

void*** result = sub_140d70500(rax_2, rdi, rbx)
data_143e203a8 = result
return result
