// 函数: sub_142376ff0
// 地址: 0x142376ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f0f180
int32_t arg_8 = 0
int64_t rbx = (*(*rcx + 0x510))(rcx, &data_143f02b98, *(arg1 + 8), 0, 1, &arg_8, 0, 1)
int64_t r9 = sx.q(*(arg1 + 0x50)) * 0x28
uint64_t i_2 =
    zx.q(divu.dp.d(0:(*(arg1 + 0x34) - 1 + *(r9 + &data_1439c85ec)), *(r9 + &data_1439c85ec)))
int32_t rax_11 = divu.dp.d(0:(*(arg1 + 0x30) - 1 + *(r9 + 0x1439c85e8)), *(r9 + 0x1439c85e8))
    * (&data_1439c85f4)[sx.q(*(arg1 + 0x50)) * 0xa]

if (rax_11 != arg_8)
    int64_t rdi_1 = *arg2
    
    if (i_2.d != 0)
        uint64_t i_1 = i_2
        uint64_t rsi_1 = zx.q(rax_11)
        uint64_t i
        
        do
            memcpy(rbx, rdi_1, rsi_1.d)
            rdi_1 += rsi_1
            rbx += zx.q(arg_8)
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    memcpy(rbx, *arg2, arg2[1].d)

int64_t* rcx_4 = data_143f0f180
int32_t* var_30
var_30.b = 1
return (*(*rcx_4 + 0x518))(rcx_4, &data_143f02b98, *(arg1 + 8), 0, 0, var_30)
