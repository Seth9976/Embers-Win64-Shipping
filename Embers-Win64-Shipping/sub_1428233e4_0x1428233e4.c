// 函数: sub_1428233e4
// 地址: 0x1428233e4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** r10 = *arg1
int32_t var_20 = 0
void** rdx = r10
void** r9 = r10[1]
void** var_28 = r9

if (*(r9 + 0x19) == 0)
    int64_t rcx = *(*arg3 + 0x20)
    
    do
        void* rax_2 = r9[4]
        var_28 = r9
        
        if (*(rax_2 + 0x20) u>= rcx)
            rdx = r9
            int32_t var_20_2 = 1
            r9 = *r9
        else
            int32_t var_20_1 = 0
            r9 = r9[2]
    while (*(r9 + 0x19) == 0)

if (*(rdx + 0x19) != 0 || *(*arg3 + 0x20) u< *(rdx[4] + 0x20))
    if (arg1[1] == 0x666666666666666)
        sub_14061d880()
        noreturn
    
    void var_38
    int64_t* rax_5 = sub_142823358(&var_38, arg1, r10, arg3)
    void** rsi_1 = rax_5[1]
    rax_5[1] = 0
    void* var_30
    
    if (var_30 != 0)
        sub_14058ba50(var_30, 0x28)
    
    var_28.o = var_28.o
    *arg2 = std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* __ptr64 const,struct x86f01ba8::pair::operator[]::_Mutex_count_pair> > >::_Insert_node(
        arg1, &var_28, rsi_1)
    arg2[1].b = 1
else
    *arg2 = rdx
    arg2[1].b = 0

return arg2
