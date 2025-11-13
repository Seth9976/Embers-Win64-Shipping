// 函数: sub_14218f7c0
// 地址: 0x14218f7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int64_t var_e8 = 0
int32_t var_e0 = 0
int64_t arg_8 = 0
void** const var_c8
memset(&var_c8, 0, 0x90)
sub_140b4c2a0(&var_c8)
int64_t var_38 = 0
var_c8 = &data_142d6ad48
int64_t* var_30 = &var_e8
int64_t var_28 = 0
sub_140b552b0(&var_c8, 1)
var_c8[0x1b](&var_c8, 0)
int64_t* rcx_4 = *arg2
int64_t r8
r8.b = 1
uint64_t var_d8[0x2]
(*(*rcx_4 + 0x78))(rcx_4, &var_d8, r8)
int64_t* var_c0
int64_t* rdx_2 = *var_c0

if (&rdx_2[1] u> var_c0[1])
    int64_t* rdx_3 = &arg_20
    void** const* rcx_6 = &var_c8
    char var_9f
    
    if ((var_9f & 0x20) != 0)
        sub_140b540d0(rcx_6, rdx_3, arg5)
    else
        var_c8[0x2a](rcx_6, rdx_3, 8)
else
    arg_20 = *rdx_2
    *var_c0 += 8

sub_140a1d9d0(&var_c8, &var_d8, arg5)
void** rcx_8 = 0x30

if (arg3 != 0)
    rcx_8 = 0x40

sub_140b3f0c0(*(rcx_8 + arg1), 0x40, var_e8, sx.q(var_e0), arg6)
uint64_t rcx_10 = var_d8[0]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

void** result = sub_140b4cb40(&var_c8)
int64_t rcx_12 = var_e8

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
