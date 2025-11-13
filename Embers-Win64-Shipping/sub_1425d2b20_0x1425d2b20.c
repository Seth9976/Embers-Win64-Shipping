// 函数: sub_1425d2b20
// 地址: 0x1425d2b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm3
zmm3.o = *(arg1 + 8)
(*(*arg4 + 8))(arg4, arg2, arg3, zmm3)
int32_t rax_1 = *(arg2 + 0xc)
void* const rax_8

if (rax_1 s>= data_143e1d9b4)
    rax_8 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_1
    rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18

uint32_t result = *(rax_8 + 8) u>> 0x1d

if ((result.b & 1) != 0)
    arg4[2].d = 0
    
    if (*(arg4 + 0x14) s<= 0xffffffff)
        result = sub_1405a5220(&arg4[1], 0)

if (arg4[2].d == 0)
    sub_140d3c6e0(arg2 + 0x438)
    result = *(arg4 + 0x14)
    arg4[2].d = 0
    
    if (result s< 0 && result != 0)
        return sub_1405a5220(&arg4[1], 0)

return result
