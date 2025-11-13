// 函数: sub_141d1e580
// 地址: 0x141d1e580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x60))(arg2)
(*(*arg1 + 0x60))(arg1)
int32_t rax_3 = (*(*arg2 + 0x48))(arg2)
int64_t r8 = *arg1
int64_t rbx = sx.q(rax_3)
char* result = (*r8)(arg1, zx.q(rbx.d), r8)

if (rbx.d s> 0)
    result = nullptr
    
    do
        result[arg1[1]] = result[arg2[1]]
        result = &result[1]
    while (result s< rbx)

return result
