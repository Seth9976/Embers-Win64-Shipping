// 函数: sub_140e88c70
// 地址: 0x140e88c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t var_18 = *arg2
int64_t* var_10 = rbx

if (rbx != 0)
    rbx[1].d += 1

char rax_1 = sub_140e8ab30(data_143e29f28, *(arg1 + 0x18), &var_18, arg3, arg4)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx_1 = *rbx
        (*rdx_1)(rbx, rdx_1)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return zx.q(rax_1)
