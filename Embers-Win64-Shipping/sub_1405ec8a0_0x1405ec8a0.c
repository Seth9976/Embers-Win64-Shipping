// 函数: sub_1405ec8a0
// 地址: 0x1405ec8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t* rbx = *arg1

if (rbx == 0)
    return 

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

if (rbx[2].b != 0)
    jump(**rbx)

if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
    jump(**rbx)

bool z_1

if (0 == *(rbx + 0xc))
    *(rbx + 0xc) = 1
    z_1 = true
else
    *(rbx + 0xc)
    z_1 = false

if (not(z_1))
    return 

int32_t rax_2 = sub_140a20af0()
uint64_t rdx = zx.q(rax_2)
void* const rax_3

if (rax_2 != 0)
    rax_3 = *(&data_143cf0bf8 + (rdx u>> 0xe << 3)) + (zx.q(rdx.d) & 0x3fff) * 0x18
else
    rax_3 = nullptr

*(rax_3 + 8) = rbx
sub_1405a42f0(&data_143f02390, rdx.d)
