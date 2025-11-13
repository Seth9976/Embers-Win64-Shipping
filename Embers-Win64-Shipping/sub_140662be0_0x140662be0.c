// 函数: sub_140662be0
// 地址: 0x140662be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1

if (rbx == 0)
    return 

int32_t rax_1 = *(rbx + 0xc)
void* const rax

if (rax_1 s>= data_143e1d9b4)
    rax = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_2
    rax = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18

if ((*(rax + 8) & 0x30000000) != 0 || rbx[0xf].b != 0)
    return 

if (rbx[9].d s> 0)
    sub_1405a9f90(&rbx[8], 0)

jump(*(*rbx + 0x278))
