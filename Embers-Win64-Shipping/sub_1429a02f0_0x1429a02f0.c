// 函数: sub_1429a02f0
// 地址: 0x1429a02f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg3)
int64_t rbp = sx.q((temp1 + (temp0 & 3)) s>> 2)
uint32_t result = sub_1429a0100(arg1 + 8, rbp)

if (rbp s> 0)
    int64_t rdi_1 = 0
    
    do
        int64_t rbx_1 = *(arg1 + 8)
        char result_1
        (*(*arg2 + 0x10))(arg2, &result_1, 4)
        result = zx.d(result_1)
        *(rbx_1 + (rdi_1 << 2)) = ((zx.d(arg6) << 8 | zx.d(arg5)) << 8 | zx.d(arg4)) << 8 | result
        rdi_1 += 1
    while (rdi_1 s< rbp)

return result
