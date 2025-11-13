// 函数: sub_141eb8e00
// 地址: 0x141eb8e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0xba8))
int32_t rax = (rsi + 1).d
*(arg1 + 0xba8) = rax

if (rax s> *(arg1 + 0xbac))
    sub_1405a4f90(arg1 + 0xba0)

int64_t* rcx_3 = (rsi << 4) + *(arg1 + 0xba0)
*rcx_3 = *arg2
void* rax_2 = arg2[1]
rcx_3[1] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

if (*(arg1 + 0xba8) == 1)
    float var_28[0x4]
    var_28[0].q = (zx.o(0)).q
    data_143f3a830 = (zx.o(0)).q
    float temp0_1[0x4] = _mm_shuffle_ps(var_28, var_28, 0xd2)
    temp0_1[0] = 0
    data_143f3a820 = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
    data_143f3a810 = zx.o(0)
    sub_141ecc080(&data_143f3a810)

int64_t* rcx_4 = *arg2
int64_t result = (**rcx_4)(rcx_4)
int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
