// 函数: sub_140bdce20
// 地址: 0x140bdce20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x40)

if (rbx == 0)
    return 0

int64_t result = rbx[0x23]

if (result != 0)
    return result

(*(*rbx + 0x390))(rbx)
return rbx[0x23]
