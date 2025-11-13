// 函数: sub_140ba0b60
// 地址: 0x140ba0b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = 0
char* var_10 = &arg_10
void* (* var_18)() = j_sub_140b98ce0
void* rax = sub_140a756e0(&var_18, &data_1439a98a8)
int64_t* rbx = nullptr
int64_t* rcx_1 = rax - 0x108

if (rax == 0)
    rcx_1 = nullptr

if ((*(*rcx_1 + 8))(rcx_1, arg1) == 0)
    arg_10 = 0
    char* var_10_1 = &arg_10
    var_18 = &data_140b9beb0
    void* rax_2 = sub_140a756e0(&var_18, &data_1439a98a4)
    
    if (rax_2 != 0)
        rbx = rax_2 - 0x108
    
    char result = (*(*rbx + 8))(rbx, arg1)
    
    if (result == 0)
        return result

return 1
