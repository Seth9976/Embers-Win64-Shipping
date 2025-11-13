// 函数: sub_141f21c40
// 地址: 0x141f21c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx

if ((arg1[0x11].b & 3) != 3)
    rbx = nullptr
else
    (*(*arg1 + 0x2e8))()
    sub_141efe1c0(arg1, nullptr)
    rbx = arg1

char result = sub_141997f50(&arg1[0x57])

if (rbx != 0)
    result = rbx[0x11].b
    
    if ((result & 2) == 0 && (result & 1) != 0)
        (*(*rbx + 0x2d0))(rbx, 0)
        return sub_141efe1c0(rbx, nullptr)

return result
