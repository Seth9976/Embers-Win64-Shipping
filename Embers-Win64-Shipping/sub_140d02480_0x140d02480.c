// 函数: sub_140d02480
// 地址: 0x140d02480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x78)

if (rax != 0)
    while (((*(rax + 0xcc) u>> 7).b & 1) == 0)
        rax = *(rax + 0x40)
        
        if (rax == 0)
            break

int64_t arg_8 = *(rax + 0x18)
int16_t* var_18
sub_140b63b70(&arg_8, &var_18)
int16_t* const r8 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    r8 = var_18

sub_140a2e390(arg2, u"class I%s;", r8)
int16_t* rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg2
