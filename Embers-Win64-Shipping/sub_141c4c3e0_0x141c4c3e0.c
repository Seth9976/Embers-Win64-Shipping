// 函数: sub_141c4c3e0
// 地址: 0x141c4c3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = (*(*arg3 + 0x280))(arg3)
sub_140d3a3a0(rax_1 + 0x4c, arg3)
int64_t r9 = *rax_1
(*(r9 + 0x48))(rax_1, arg2, arg4, r9)
*arg1 = rax_1
void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rax_1

arg1[1] = rax_2
int64_t* var_18 = *arg1
int64_t* rax_4 = arg1[1]

if (rax_4 != 0)
    rax_4[1].d += 1

sub_142357580(arg3, &var_18)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t rsi_1 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rax_4 + 8))(rax_4, zx.q(rsi_1))

return arg1
