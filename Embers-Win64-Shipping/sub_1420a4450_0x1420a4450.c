// 函数: sub_1420a4450
// 地址: 0x1420a4450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = 0
sub_140cea340()
void* rax_1
bool rcx

if (*(arg1 + 0x28) == 0)
    rcx = true
    rax_1 = nullptr
else
    bool cond:0_1 = sub_140d3e110(arg1 + 0x30) == 0
    rax_1 = *(arg1 + 0x28)
    rcx = cond:0_1

if (rcx != 0 && *(arg1 + 0x40) != 0)
    rax_1 = sub_140cd0630(arg1 + 0x28, nullptr, 0)
    
    if (rax_1 == 0 || (data_143e1b828 & *(*(rax_1 + 8) + 0x10)) == 0)
        rax_1 = *(arg1 + 0x28)
        
        if (rax_1 != 0)
            *(arg1 + 0x30) = 0xffffffff
            rax_1 = nullptr
            *(arg1 + 0x34) = 0
            *(arg1 + 0x28) = 0
    else
        *(arg1 + 0x28) = rax_1

int64_t r9 = *arg3
void* arg_8 = rax_1
int64_t rax_2 = sub_142146ce0(&arg_20, &arg_8, arg2, r9, nullptr, nullptr)
void* rdx_2 = arg_8
*(arg1 + 0x28) = rdx_2
sub_140cbad20(arg1 + 0x28, rdx_2)
char result = sub_141e10220(arg1 + 0x28)

if (result != 0 && rax_2 != 0)
    *(arg1 + 0x48) = rax_2

return result
