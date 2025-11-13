// 函数: sub_1405d8b30
// 地址: 0x1405d8b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_10 = 0
void* result = sub_140d2dfc0(sub_1405dbc10(), rax, 0, 0, 0, 0, 0, 0, 0)
void* result_1 = result

if (result != 0)
    int64_t rdx_1 = *result
    bool cond:0_1 = (*(rdx_1 + 0x260))(result, rdx_1) != 4
    result = result_1
    
    if (not(cond:0_1))
        *(result_1 + 0x50) = arg1

return result
