// 函数: sub_14218a600
// 地址: 0x14218a600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x978))()

if (rax_1 == 0xffffffff)
    return 0

if (arg3 != 0)
    (*(*arg1 + 0x550))(arg1, zx.q(rax_1), arg3)

void* result_1 = (*(*arg1 + 0x548))(arg1, zx.q(rax_1))
void* rax_5
void* rcx_2
int64_t rdx_2

if (result_1 != 0)
    rax_5 = sub_142542e20()
    rcx_2 = *(result_1 + 0x10)
    rdx_2 = sx.q(*(rax_5 + 0x38))

void* result

if (result_1 == 0 || rdx_2.d s> *(rcx_2 + 0x38)
        || *(*(rcx_2 + 0x30) + (rdx_2 << 3)) != rax_5 + 0x30)
    result = nullptr
else
    result = result_1

if (result_1 != 0 && result == 0)
    void* result_2 = sub_142121cc0(result_1, arg1)
    int64_t r9_1 = *arg1
    result = result_2
    (*(r9_1 + 0x550))(arg1, zx.q(rax_1), result_2, r9_1)

return result
