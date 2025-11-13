// 函数: sub_142824df8
// 地址: 0x142824df8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_20 = 0
void** rcx = *arg1
void** rdx = rcx
void** rax = rcx[1]
void** var_28 = rax

if (*(rax + 0x19) == 0)
    int64_t r9_1 = *arg3
    
    do
        var_28 = rax
        
        if (rax[4] u>= r9_1)
            rdx = rax
            int32_t var_20_2 = 1
            rax = *rax
        else
            int32_t var_20_1 = 0
            rax = rax[2]
    while (*(rax + 0x19) == 0)

if (*(rdx + 0x19) != 0 || *arg3 u< rdx[4])
    if (arg1[1] == 0x555555555555555)
        sub_14061d880()
        noreturn
    
    int64_t* arg_20 = arg3
    void arg_8
    void* var_40_1 = &arg_8
    int64_t** var_48_1 = &arg_20
    void var_38
    int64_t* rax_2 = sub_142824be8(&var_38, arg1, rcx, &data_1434d387d)
    void** rsi_1 = rax_2[1]
    rax_2[1] = 0
    void* var_30
    
    if (var_30 != 0)
        sub_14058ba50(var_30, 0x30)
    
    var_28.o = var_28.o
    *arg2 = std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* __ptr64 const,struct x86f01ba8::pair::operator[]::_Mutex_count_pair> > >::_Insert_node(
        arg1, &var_28, rsi_1)
    arg2[1].b = 1
else
    *arg2 = rdx
    arg2[1].b = 0

return arg2
