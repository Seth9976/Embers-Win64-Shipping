// 函数: sub_1419af070
// 地址: 0x1419af070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg1[1])
int32_t rdx_1 = temp0 & 7
int32_t rax_2 = temp1 + rdx_1
int32_t rdi_2 = rax_2 s>> 3 & 0x80000001

if (rdi_2 s< 0)
    rdi_2 = ((rdi_2 - 1) | 0xfffffffe) + 1

if ((rax_2 & 7) - rdx_1 == 0xffffffff)
    uint64_t result
    result.b = 1
    return result

int64_t rbx = sx.q(*arg1)

if (sub_1405fba70(rbx.d, 1) != 0
        && (rdi_2 != 1 || (rdi_2.b & (*(&data_143f025fc + rbx * 0x14) u>> 0x1e).b) != 0))
    return 1

return 0
