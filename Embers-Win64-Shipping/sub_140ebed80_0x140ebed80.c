// 函数: sub_140ebed80
// 地址: 0x140ebed80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
float zmm6[0x4] = zx.o(0)

if (*(arg1 + 0x3b8) s<= 0)
    int512_t zmm0
    zmm0.o = zx.o(0)
    return zmm0

void** rdi = nullptr
float temp0_1[0x4]

do
    void arg_8
    int64_t* rax_2 = sub_140e13cf0(*(rdi + *(arg1 + 0x3b0)), &arg_8)
    i += 1
    rdi = &rdi[2]
    temp0_1 = _mm_max_ss((*rax_2)[0], zmm6[0])
    zmm6 = temp0_1
while (i s< *(arg1 + 0x3b8))

return temp0_1
