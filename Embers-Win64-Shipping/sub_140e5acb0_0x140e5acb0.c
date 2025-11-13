// 函数: sub_140e5acb0
// 地址: 0x140e5acb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t* rcx = arg1[0xc0]
void var_188
(*(*arg1 + 0x140))(arg1, zx.q((*(*rcx + 8))(rcx)), sub_140d947e0(&var_188), zx.q(arg2))
void var_38
sub_140596d80(&var_38)
int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp1_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

void var_180
int64_t result = sub_140d94d20(&var_180)
__security_check_cookie(rax_1 ^ &var_1a8)
return result
