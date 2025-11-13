// 函数: sub_142822980
// 地址: 0x142822980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t* rax = sub_142822a54(arg1, &var_58, arg3)
void** zmm0 = rax[2]
int128_t zmm6 = *rax
char rax_1

if (*(zmm0 + 0x19) == 0)
    rax_1 = sub_142822974(arg3, &zmm0[4])

if (*(zmm0 + 0x19) != 0 || rax_1 != 0)
    if (arg1[1] == 0x555555555555555)
        sub_14061d880()
        noreturn
    
    int64_t* rax_2 = sub_1428228c4(&var_58, arg1, *arg1, arg3)
    void** rbx_1 = rax_2[1]
    rax_2[1] = 0
    sub_142822d2c(&var_58)
    int128_t var_38 = zmm6
    *arg2 = std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* __ptr64 const,struct x86f01ba8::pair::operator[]::_Mutex_count_pair> > >::_Insert_node(
        arg1, &var_38, rbx_1)
    arg2[1].b = 1
else
    *arg2 = zmm0
    arg2[1].b = rax_1

return arg2
