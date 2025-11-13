// 函数: sub_1423732f0
// 地址: 0x1423732f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2[1]
int64_t var_18 = *arg2
int64_t* var_10 = rdi

if (rdi != 0)
    *(rdi + 0xc) += 1

int32_t result = sub_141c8c380(arg1 + 0x28, &var_18)

if (rdi != 0)
    result = *(rdi + 0xc)
    *(rdi + 0xc) -= 1
    
    if (result == 1)
        return (*(*rdi + 8))(rdi, 1)

return result
