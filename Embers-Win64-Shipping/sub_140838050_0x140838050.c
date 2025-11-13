// 函数: sub_140838050
// 地址: 0x140838050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x30)
*(arg1 + 0x30) = 0

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

if (z_1)
    return sub_1405dcc10(&data_143f02390, rbx) __tailcall
