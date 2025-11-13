// 函数: sub_14083ffd0
// 地址: 0x14083ffd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
sub_1408297c0(arg1 + 0x50, &result_1, arg2)
int64_t result = sx.q(result_1)
void* const r8_3

if (result.d == 0xffffffff)
    r8_3 = nullptr
else
    r8_3 = (result << 6) + *(arg1 + 0x50)

int64_t* rbx = r8_3 + 8

if (r8_3 == 0)
    rbx = nullptr

if (rbx == 0)
    return result

result_1.q = arg1

if (arg2 != 0)
    sub_140838b90(arg2 + 0xa0, &result_1, 0)

rbx[1].d = 0

if (*(rbx + 0xc) s<= 0xffffffff)
    sub_14083adb0(rbx, 0)

int32_t rax = *(rbx + 0x1c)
rbx[3].d = 0

if (rax s< 0 && rax != 0)
    sub_1405dadb0(&rbx[2], 0)

int32_t rax_1 = *(rbx + 0x2c)
rbx[5].d = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405dadb0(&rbx[4], 0)

return sub_1408382c0(arg1 + 0x50, arg2)
