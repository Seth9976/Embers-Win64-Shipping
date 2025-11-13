// 函数: sub_142c52e20
// 地址: 0x142c52e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = data_143ccb8b8(1, 0x1c0)

if (result == 0)
    return result

*result = 0xbab1e

if (sub_142c5a4e0(&result[0x20]) == 0
        && sub_142c67040(&result[0x2e], arg1, sub_142c53ad0, sub_142c53ac0, sub_142c520b0) == 0
        && sub_142c6ee20(&result[0x3c], arg2) == 0)
    sub_142c69f40(&result[8], _guard_check_icall)
    sub_142c69f40(&result[0x10], _guard_check_icall)
    void* rax_3 = sub_142c52100()
    *(result + 0x140) = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 0xc0) = result
        *(*(result + 0x140) + 0xa48) = &result[0x3c]
        result[0x55] = 5
        result[0x52] = 0xffffffff
        return result

sub_142c66fd0(&result[0x2e])
sub_142c66fd0(&result[0x20])
sub_142c6ec60(&result[0x3c])
sub_142c5c560(*(result + 0x140))
*(result + 0x140) = 0
sub_142c69e80(&result[8], 0)
sub_142c69e80(&result[0x10], 0)
data_143ccb8a0(result)
return nullptr
