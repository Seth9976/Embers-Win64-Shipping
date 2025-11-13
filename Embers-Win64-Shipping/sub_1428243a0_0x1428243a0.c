// 函数: sub_1428243a0
// 地址: 0x1428243a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28
sub_142824334(arg1, &var_28, arg3)
void* var_18

if (*(var_18 + 0x19) != 0)
label_1428243f6:
    
    if (arg1[1] == 0x2aaaaaaaaaaaaaa)
        sub_14061d880()
        noreturn
    
    int64_t r8 = *arg1
    void arg_20
    void* var_50_1 = &arg_20
    int64_t* var_48 = arg3
    int64_t** var_58_1 = &var_48
    void var_38
    int64_t* rax_2 = sub_1428241b0(&var_38, arg1, r8, &data_1434d37ab)
    void** rsi_1 = rax_2[1]
    rax_2[1] = 0
    void* var_30
    
    if (var_30 != 0)
        sub_1428245d8(var_30 + 0x20, 0)
        
        if (var_30 != 0)
            sub_14058ba50(var_30, 0x60)
    
    var_48.o = var_28
    *arg2 = std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* __ptr64 const,struct x86f01ba8::pair::operator[]::_Mutex_count_pair> > >::_Insert_node(
        arg1, &var_48, rsi_1)
    arg2[1].b = 1
else
    char rax_1 = sub_142824260(arg3, var_18 + 0x20)
    
    if (rax_1 != 0)
        goto label_1428243f6
    
    *arg2 = var_18
    arg2[1].b = rax_1

return arg2
