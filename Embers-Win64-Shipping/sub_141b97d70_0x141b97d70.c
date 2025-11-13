// 函数: sub_141b97d70
// 地址: 0x141b97d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x150))()

if (result == 0)
    return result

int64_t arg_8
sub_140d3a3a0(&arg_8, arg1)
void* rcx_1 = *(result + 0x188)
void* rcx_2

if (rcx_1 == 0)
    rcx_2 = result + 0x308
else
    rcx_2 = *(rcx_1 + 0xc8)

sub_1420eb770(rcx_2, arg_8)
void* rcx_3 = *(result + 0x188)
void* rcx_4

if (rcx_3 == 0)
    rcx_4 = *(result + 0x300)
else
    rcx_4 = *(rcx_3 + 0xc0)

sub_1423e5e50(rcx_4, arg1)
return sub_141bf4410(arg1)
