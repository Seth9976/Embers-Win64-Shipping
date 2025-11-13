// 函数: sub_1420a6aa0
// 地址: 0x1420a6aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_1420a5450(arg1)

if (result == 0)
    return result

int64_t* rax_2 = sub_142437e30((*(*arg1 + 0x150))(arg1), 0, 1)
int32_t zmm1 = arg1[5].d

if (not(zmm1 f> 0f))
    zmm1 = 0x3f800000
    arg1[5].d = 0x3f800000

int64_t rdx = *rax_2
*(rax_2 + 0x2ec) = zmm1
jump(*(rdx + 0x5e8))
