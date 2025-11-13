// 函数: sub_142cb6100
// 地址: 0x142cb6100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143cea568
void* rax = rcx

if (((data_143cea570.q - rcx) & 0xfffffffffffffff8) u>= 0x1000)
    rcx = *(rcx - 8)
    
    if (rax - rcx - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn

j_sub_140a74f90(rcx)
int64_t* rdx_4 = data_143cea558
__builtin_memset(&data_143cea568, 0, 0x18)
sub_140895bd0(&data_143cea558, rdx_4)
return j_sub_140a74f90(data_143cea558) __tailcall
