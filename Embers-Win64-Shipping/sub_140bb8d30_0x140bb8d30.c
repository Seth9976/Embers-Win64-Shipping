// 函数: sub_140bb8d30
// 地址: 0x140bb8d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = 0
char* var_20 = &arg_10
void* (* var_28)() = j_sub_140b98ce0
void* rax = sub_140a756e0(&var_28, &data_1439a98a8)
int64_t* rbx = nullptr
int64_t* rdi = rax - 0x108

if (rax == 0)
    rdi = nullptr

char arg_18 = 0
char* var_10 = &arg_18
void* const var_18 = &data_140b9beb0
void* rax_1 = sub_140a756e0(&var_18, &data_1439a98a4)

if (rax_1 != 0)
    rbx = rax_1 - 0x108

sub_140bb7f90(rdi, arg1)
return sub_140bb7f90(rbx, arg1)
