// 函数: sub_140cdabf0
// 地址: 0x140cdabf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 0

if (not(test_bit(arg6, 0x1c)))
    char rax_3 = (arg1[0x10].d).b
    int32_t rdx_2 = 0
    
    if (arg4 != 0)
        rdx_2 = *(arg4 + 8)
        
        if (rdx_2 == 0)
            arg4 = nullptr
        else if ((not.b(rax_3) & 1) != 0)
            arg4 = *arg4
        else
            void* rcx_6 = *arg4
            
            if ((rcx_6.b & 1) == 0)
                arg4 = rcx_6
            else
                arg4 += rcx_6 s>> 1
    
    int32_t rcx_8 = arg3[1].d
    
    if (rcx_8 != 0)
        rbx = *arg3
        
        if ((not.b(rax_3) & 1) == 0 && (rbx.b & 1) != 0)
            rbx = (rbx s>> 1) + arg3
    
    return sub_140cda8e0(arg2, arg1[0xf], rbx, rcx_8, arg4, rdx_2, arg5, arg6, arg7)

int64_t rax = *arg1
int64_t var_38 = 0
int32_t var_30_1 = 0
int16_t* var_18
(*(rax + 0x60))(arg1, &var_18, &var_38, 0x80)
int16_t* const r8_1 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    r8_1 = var_18

int64_t var_28
sub_140a2e390(&var_28, u"%s%s()", r8_1)
int32_t var_20

if (var_20 != 0)
    rbx = zx.q(var_20 - 1)

int64_t result = sub_140a20ba0(arg2, var_28, rbx.d)
int64_t rcx_2 = var_28

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int16_t* rcx_3 = var_18

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = var_38

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
