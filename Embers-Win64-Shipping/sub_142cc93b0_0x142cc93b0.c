// 函数: sub_142cc93b0
// 地址: 0x142cc93b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143e1f498:8

if (rbx == 0)
    return 

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t temp1_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (temp1_1 == 1)
    jump(*(*rbx + 8))
