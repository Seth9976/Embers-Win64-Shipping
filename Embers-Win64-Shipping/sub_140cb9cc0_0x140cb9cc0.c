// 函数: sub_140cb9cc0
// 地址: 0x140cb9cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18

if (test_bit(arg4, 0x1c))
    sub_140a20ba0(arg2, u"TEXT("", 6)
    int64_t* rax_1 = sub_140cd0060(arg3, &var_18)
    int32_t rcx_2 = rax_1[1].d
    int32_t r8 = rcx_2 - 1
    
    if (rcx_2 == 0)
        r8 = 0
    
    sub_140a20ba0(arg2, *rax_1, r8)
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    return sub_140a20ba0(arg2, &data_142e6463c, 2) __tailcall

if (not(test_bit(arg4, 0x13)) || (arg4.b & 2) == 0)
    int64_t* rax_5 = sub_140cd0060(arg3, &var_18)
    int32_t rcx_15 = rax_5[1].d
    int32_t r8_4 = rcx_15 - 1
    
    if (rcx_15 == 0)
        r8_4 = 0
    
    int64_t result = sub_140a20ba0(arg2, *rax_5, r8_4)
    int64_t rcx_17 = var_18
    
    if (rcx_17 == 0)
        return result
    
    return sub_140a74f90(rcx_17)

sub_140a20ba0(arg2, &data_142d4056c, 1)
int64_t* rax_3 = sub_140cd0060(arg3, &var_18)
int32_t rcx_9 = rax_3[1].d
int32_t r8_2 = rcx_9 - 1

if (rcx_9 == 0)
    r8_2 = 0

sub_140a20ba0(arg2, *rax_3, r8_2)
int64_t rcx_11 = var_18

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return sub_140a20ba0(arg2, &data_142d4056c, 1) __tailcall
