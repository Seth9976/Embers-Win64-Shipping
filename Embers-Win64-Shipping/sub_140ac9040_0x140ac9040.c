// 函数: sub_140ac9040
// 地址: 0x140ac9040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rsi = nullptr
int32_t rdi = 0
int16_t* var_58 = nullptr
int32_t var_50 = 0
int64_t var_48 = 0
int32_t var_40 = 0

if (arg4[0x18] != 0)
    arg5 = sub_140aa60c0()
    
    if (*arg4 != data_143db9dd8.b || arg4[1] != data_143db9dd8:1.b
            || *(arg4 + 4) != data_143db9dd8:4.d || *(arg4 + 8) != data_143db9dd8:8.d
            || *(arg4 + 0xc) != data_143db9dd8:0xc.d || *(arg4 + 0x10) != data_143db9de8.d
            || *(arg4 + 0x14) != data_143db9de8:4.d)
        arg5 = sub_140aa6020()
        
        if (*arg4 != data_143db9df8.b || arg4[1] != data_143db9df8:1.b
                || *(arg4 + 4) != data_143db9df8:4.d || *(arg4 + 8) != data_143db9df8:8.d
                || *(arg4 + 0xc) != data_143db9df8:0xc.d || *(arg4 + 0x10) != data_143db9e08.d
                || *(arg4 + 0x14) != data_143db9e08:4.d)
            sub_140ac8df0(&var_48, arg4)
            
            if (var_40 s> 1)
                sub_1405947f0(&var_58, 8)
                rdi = var_50 + 8
                
                if (rdi s> 0)
                    sub_140594770(&var_58)
                
                rsi = var_58
                *rsi = *u"_CUSTOM"
        else
            sub_1405947f0(&var_58, 0xb)
            rdi = var_50 + 0xb
            
            if (rdi s> 0)
                sub_140594770(&var_58)
            
            rsi = var_58
            __builtin_wcscpy(rsi, u"_UNGROUPED")
    else
        sub_1405947f0(&var_58, 9)
        rdi = var_50 + 9
        
        if (rdi s> 0)
            sub_140594770(&var_58)
        
        rsi = var_58
        __builtin_wcscpy(rsi, u"_GROUPED")

int64_t r8 = -1

do
    r8 += 1
while (*(arg2 + (r8 << 1)) != 0)

sub_140a20ba0(arg1, arg2, r8.d)
int32_t r8_1 = rdi - 1

if (rdi == 0)
    r8_1 = 0

sub_140a20ba0(arg1, rsi, r8_1)
sub_140a20ba0(arg1, &data_142dc30a4, 1)
sub_140ac5df0(arg3, arg1, arg6, arg5)
int16_t* const rcx_19 = &data_142d40450

if (rdi != 0)
    rcx_19 = rsi

int32_t rax_7 = sub_140a54510(rcx_19, u"_CUSTOM")

if (rax_7 == 0)
    sub_140a20ba0(arg1, &data_142d8adc4, rax_7 + 2)
    int32_t r8_4
    
    if (var_40 == 0)
        r8_4 = 0
    else
        r8_4 = var_40 - 1
    
    sub_140a20ba0(arg1, var_48, r8_4)

sub_140a20ba0(arg1, &data_142e64ed8, 3)
int64_t rcx_23 = *arg7

if (rcx_23 != 0)
    int64_t var_38
    int64_t* rax_9 = sub_140a30480(sub_140903440(rcx_23), &var_38, nullptr)
    int32_t rcx_25 = rax_9[1].d
    int32_t r8_5 = rcx_25 - 1
    
    if (rcx_25 == 0)
        r8_5 = 0
    
    sub_140a20ba0(arg1, *rax_9, r8_5)
    int64_t rcx_27 = var_38
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)

int32_t result = sub_140a20ba0(arg1, &data_142e6463c, 2)
int64_t rcx_29 = var_48

if (rcx_29 != 0)
    result = sub_140a74f90(rcx_29)

if (rsi != 0)
    result = sub_140a74f90(rsi)

int64_t* rbx_2 = arg7[1]

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t r14_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (r14_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, zx.q(r14_1))

return result
