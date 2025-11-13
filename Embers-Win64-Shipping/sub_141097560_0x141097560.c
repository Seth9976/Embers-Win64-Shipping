// 函数: sub_141097560
// 地址: 0x141097560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *arg1

if (rbp == 0)
    return 

void*** r8_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_1 = &r8_3[3]

if (rax_1 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    r8_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = &r8_3[3]

*(arg2 + 0x30) = rax_1
int64_t* rax_2 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_2 = r8_3
*(arg2 + 8) = &r8_3[1]
void* rdi_1 = nullptr
r8_3[1] = 0
*r8_3 = &data_142f11608
r8_3[2] = rbp
int64_t* rbx_1 = *arg1
*arg1 = 0

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

char rax_4

if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
    rax_4 = sub_1405949a0()

if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_4 != 0))
    (**rbx_1)(rbx_1, 1)
    return 

bool z_1

if (0 == *(rbx_1 + 0xc))
    *(rbx_1 + 0xc) = 1
    z_1 = true
else
    *(rbx_1 + 0xc)
    z_1 = false

if (not(z_1))
    return 

int32_t rax_5 = sub_140a20af0()

if (rax_5 != 0)
    rdi_1 = *(&data_143cf0bf8 + (zx.q(rax_5) u>> 0xe << 3)) + (zx.q(rax_5) & 0x3fff) * 0x18

*(rdi_1 + 8) = rbx_1
sub_1405a42f0(&data_143f02390, rax_5)
