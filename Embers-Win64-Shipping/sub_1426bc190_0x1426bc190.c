// 函数: sub_1426bc190
// 地址: 0x1426bc190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdi = zx.d(data_143f720ec)
int64_t rbx = sx.q(data_143f72088)

if (rdi u> rbx.d)
    int32_t rdi_1 = rdi - rbx.d
    int32_t rax_1 = rbx.d + rdi_1
    bool cond:0_1 = rax_1 s<= data_143f7208c
    data_143f72088 = rax_1
    
    if (not(cond:0_1))
        sub_14083a7e0(&data_143f72080)
    
    memset(data_143f72080 + rbx * 0xc, 0, sx.q(rdi_1) * 0xc)

uint64_t r8_3 = zx.q(*arg1)
char* rdx_2 = data_143f72080 + r8_3 * 0xc
*rdx_2 = r8_3.b
int64_t result = *(arg1 + 4)
*(rdx_2 + 4) = result
return result
