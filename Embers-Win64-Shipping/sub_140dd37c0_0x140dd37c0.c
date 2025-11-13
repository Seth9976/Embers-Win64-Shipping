// 函数: sub_140dd37c0
// 地址: 0x140dd37c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x7b8)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ecd228
int64_t* rax = arg1[1]
int64_t var_18 = *arg1

if (rax != 0)
    rax[1].d += 1

sub_140d93ff0(&result[2], &var_18)

if (rax != 0)
    rax[1].d -= 1
    
    if (rax[1].d == 1)
        (**rax)(rax)
        int32_t temp1_1 = *(rax + 0xc)
        *(rax + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rax + 8))(rax, 1)

return result
