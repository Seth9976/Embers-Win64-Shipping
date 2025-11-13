// 函数: sub_141845400
// 地址: 0x141845400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 0x28))
        break
    
    sub_141845330(*(*(arg1 + 0x20) + sx.q(i) * 0x10))

int64_t* rbx = data_143efa898:8
data_143efa898.q = 0

if (rbx == 0)
    return 

data_143efa898:8 = 0
rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t temp1_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx + 8))(rbx, 1)
