// 函数: sub_140d9cd40
// 地址: 0x140d9cd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x20)

if (rcx == 0)
    return 

sub_140e21770(rcx)
void var_18

if (arg1 + 0x20 == &var_18)
    return 

*(arg1 + 0x20) = 0
int64_t* rbx_1 = *(arg1 + 0x28)

if (rbx_1 == 0)
    return 

*(arg1 + 0x28) = 0
rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
