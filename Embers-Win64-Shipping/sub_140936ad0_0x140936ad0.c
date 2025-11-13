// 函数: sub_140936ad0
// 地址: 0x140936ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0
int32_t arg_8 = 0
int64_t* rcx = *(arg1 + 8)
int64_t var_28
int16_t* const rdi

if (rcx == 0)
    rdi = u"INVALID"
else
    int64_t r8
    r8.b = 1
    int64_t* rax_2 = (*(*rcx + 0x78))(rcx, &var_28, r8)
    
    if (rax_2[1].d == 0)
        rdi = &data_142d40450
        rsi = 1
    else
        rdi = *rax_2
        rsi = 1

int64_t var_38
int16_t** rax_4 = (*(*(arg1 + 0x18) + 0x38))(arg1 + 0x18, &var_38)

if (rax_4[1].d != 0)
    *rax_4

sub_140a2e390(arg2, u"HostIP: %s SessionId: %s", rdi)
int64_t rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

if ((rsi & 1) != 0)
    int64_t rcx_4 = var_28
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

return arg2
