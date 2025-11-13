// 函数: sub_141d59590
// 地址: 0x141d59590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x10)
int64_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = 0
    rbx[1] = 0
    sub_140b0b2f0(rbx)
    *rbx = &data_143227400
    rbx[1] = &data_143227410

if (rbx == 0)
    return nullptr

return &rbx[1]
