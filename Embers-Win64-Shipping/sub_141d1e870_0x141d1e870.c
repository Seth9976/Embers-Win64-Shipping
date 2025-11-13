// 函数: sub_141d1e870
// 地址: 0x141d1e870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x60))(arg2)
(*(*arg1 + 0x60))(arg1)
int32_t i_3 = (*(*arg2 + 0x48))(arg2)
int64_t r8 = *arg1
int64_t i_2 = sx.q(i_3)
int32_t result = (*r8)(arg1, zx.q(i_2.d), r8)
int64_t i_1 = i_2

if (i_2.d s> 0)
    int64_t rbx = 0
    int64_t i
    
    do
        int32_t* rsi_2 = arg2[1] + rbx
        int32_t* rdi_2 = arg1[1] + rbx
        *rdi_2 = *rsi_2
        rdi_2[1] = rsi_2[1]
        sub_140780cc0(&rdi_2[2], &rsi_2[2])
        result = rsi_2[0x16]
        rbx += 0x60
        rdi_2[0x16] = result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
