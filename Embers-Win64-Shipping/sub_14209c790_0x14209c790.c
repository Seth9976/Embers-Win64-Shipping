// 函数: sub_14209c790
// 地址: 0x14209c790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi

if ((arg1[0x11].b & 3) != 3)
    rdi = nullptr
else
    (*(*arg1 + 0x2e8))()
    sub_141efe1c0(arg1, nullptr)
    rdi = arg1

*(arg1 + 0x50c) += 1
char result = sub_141ee8490(arg1)

if (rdi != 0)
    result = rdi[0x11].b
    
    if ((result & 2) == 0 && (result & 1) != 0)
        (*(*rdi + 0x2d0))(rdi, 0)
        return sub_141efe1c0(rdi, nullptr)

return result
