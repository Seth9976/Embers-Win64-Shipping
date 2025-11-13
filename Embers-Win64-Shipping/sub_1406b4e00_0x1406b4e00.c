// 函数: sub_1406b4e00
// 地址: 0x1406b4e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t var_20 = (zx.o(0)).q
int64_t var_10 = 0
void* const __return_addr_1 = __return_addr
arg3[6].b = 1
sub_1406934d0(&arg3[7], &__return_addr_1)
int64_t rcx_1 = var_20

if (rcx_1 != 0)
    int64_t rax_4 = rcx_1
    
    if ((var_10 - rcx_1) s>> 3 << 3 u>= 0x1000)
        rcx_1 = *(rcx_1 - 8)
        
        if (rax_4 - rcx_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_1)

sub_1406b2b60(arg1, arg2, arg3)
sub_140692d40(arg3)
return arg1
