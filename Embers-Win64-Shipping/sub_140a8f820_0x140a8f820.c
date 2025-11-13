// 函数: sub_140a8f820
// 地址: 0x140a8f820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ab23c0()
*arg1 = data_143db9f50.o
int64_t var_28 = *arg2
int32_t var_20 = arg2[1].d
int64_t var_18 = arg2[2]
void* rax_3 = arg2[3]
void* var_10 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

sub_140a952f0(&arg1[1], &var_28)
int64_t* rbx_1 = arg2[3]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
