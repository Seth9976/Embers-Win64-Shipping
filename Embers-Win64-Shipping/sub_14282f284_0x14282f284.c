// 函数: sub_14282f284
// 地址: 0x14282f284
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
char* var_90 = arg1
int32_t var_a8 = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0xf
*arg1 = 0
int32_t var_a8_1 = 1
int64_t* rcx = arg2
int64_t var_a0
void* var_88

while (sub_14282a90c(rcx) != 0)
    sub_142821920()
    var_a0 = 0
    int64_t* var_98_1 = arg2
    int32_t rax_2 = sub_14282694c(&data_143f89740, &var_a0)
    
    if (rax_2 s<= 0)
        break
    
    int64_t* rax_3 = sub_14282af50(arg2, &var_88, rax_2)
    int64_t* rdx_2 = rax_3
    
    if (rax_3[3] u>= 0x10)
        rdx_2 = *rax_3
    
    sub_14058c1d0(arg1, rdx_2, rax_3[2])
    int64_t var_70
    
    if (var_70 u>= 0x10)
        sub_14058ba50(var_88, var_70 + 1)
    
    rcx = arg2

if (*(arg1 + 0x10) != 0)
    __security_check_cookie(rax_1 ^ &var_c8)
    return arg1

sub_14058a5c0(&var_88, "tag handle with no suffix")
struct std::exception::VTable* exceptionObject
sub_1428244f0(&exceptionObject, sub_1427bde30(arg2, &var_a0), &var_88)
_CxxThrowException(&exceptionObject, &data_143946450)
noreturn
