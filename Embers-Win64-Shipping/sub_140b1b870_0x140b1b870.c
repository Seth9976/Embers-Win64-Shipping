// 函数: sub_140b1b870
// 地址: 0x140b1b870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x120) s<= 0
char arg_8 = arg2
int64_t var_18
int64_t var_10

if (cond:0)
    void** rax_7 = data_1439a4920
    void** rcx_2 = &data_1439a4930
    var_10 = arg4
    var_18 = arg3
    
    if (rax_7 != 0)
        rcx_2 = rax_7
    
    return data_1439a4910((*(*rcx_2 + 8))(rcx_2), &arg_8, &var_18, &var_10)

void* rax = *(arg1 + 0x110)
void* rbx = arg1 + 0x10
var_18 = arg4

if (rax != 0)
    rbx = rax

var_10 = arg3
void* rbx_1 = rbx + (sx.q(*(arg1 + 0x120)) << 6)
void* rax_3 = *(rbx_1 - 0x30)
void* rcx = rbx_1 - 0x20

if (rax_3 != 0)
    rcx = rax_3

return (*(rbx_1 - 0x40))((*(*rcx + 8))(rcx), &arg_8, &var_10, &var_18)
