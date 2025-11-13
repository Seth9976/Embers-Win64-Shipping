// 函数: sub_14183fd00
// 地址: 0x14183fd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
int16_t* var_58 = nullptr
int32_t r8 = 0
int64_t var_50 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx_1.d + 1)
        r8 = var_50:4.d
        rdx = var_50.d
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_50.d = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, arg2, (rbx_1.d + 1) * 2)

sub_140b214e0(&var_58)
sub_140a20ba0(&var_58, &data_142d5a024, 1)
Concurrency::details::UMSThreadProxy::InternalSwitchTo(&var_58)
int64_t* var_38 = nullptr
int32_t i_2 = 0
sub_140a464c0()
int16_t* const r8_3 = &data_142d40450

if (var_50.d != 0)
    r8_3 = var_58

int64_t* result =
    (*(data_14399ea08 + 0x80))(&data_14399ea08, &var_38, r8_3, &data_142d6bbe8, 1, 0, 1)
int32_t i_1 = i_2
int32_t r14 = 0

if (i_1 s> 0)
    int64_t r12_1 = 0
    
    do
        int32_t rax_2 = var_50.d
        int32_t rdx_4 = rax_2 - 1
        
        if (rax_2 == 0)
            rdx_4 = 0
        
        int64_t* r8_4 = var_38
        int32_t rax_3 = *(r8_4 + r12_1 + 8)
        int32_t rcx_6 = rax_3 - 1
        
        if (rax_3 == 0)
            rcx_6 = 0
        
        int16_t* const r9_1
        
        if (rax_3 == 0)
            r9_1 = &data_142d40450
        else
            r9_1 = *(r8_4 + r12_1)
        
        int32_t rax_5 = rcx_6 - rdx_4
        int32_t rdx_5
        
        if (rcx_6 - rdx_4 s>= 0)
            rdx_5 = rcx_6
            
            if (rax_5 s< rcx_6)
                rdx_5 = rax_5
        else
            rdx_5 = 0
        
        int64_t rsi_1 = 0
        int32_t rdx_6 = 0
        int64_t var_48 = 0
        int64_t var_40_1 = 0
        int16_t* rdi_1 = &r9_1[sx.q(rcx_6) - sx.q(rdx_5)]
        int32_t rcx_9 = 0
        
        if (rdi_1 != 0 && *rdi_1 != 0)
            int64_t rbx_3 = -1
            
            do
                rbx_3 += 1
            while (rdi_1[rbx_3] != 0)
            
            if (rbx_3.d + 1 s> 0)
                sub_1405947f0(&var_48, rbx_3.d + 1)
                rcx_9 = var_40_1:4.d
                rdx_6 = var_40_1.d
                rsi_1 = var_48
            
            int32_t rax_7 = rbx_3.d + 1 + rdx_6
            var_40_1.d = rax_7
            
            if (rax_7 s> rcx_9)
                sub_140594770(&var_48)
                rsi_1 = var_48
            
            UnDecorator::getReferenceType(rsi_1, rdi_1, (rbx_3.d + 1) * 2)
        
        void arg_10
        result = sub_1408f1b50(arg1 + 0x1b0, &arg_10, &var_48)
        
        if (*result == 0xffffffff)
            int64_t rbx_5 = sx.q(arg3[1].d)
            int64_t* rdi_2 = var_38
            int32_t rax_8 = (rbx_5 + 1).d
            arg3[1].d = rax_8
            
            if (rax_8 s> *(arg3 + 0xc))
                sub_1405a4f90(arg3)
            
            result = sub_140596d10((rbx_5 << 4) + *arg3, &rdi_2[sx.q(r14) * 2])
        
        if (rsi_1 != 0)
            result = sub_140a74f90(rsi_1)
        
        i_1 = i_2
        r14 += 1
        r12_1 += 0x10
    while (r14 s< i_1)

int64_t* rbx_6 = var_38

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_19 = *rbx_6
        
        if (rcx_19 != 0)
            result = sub_140a74f90(rcx_19)
        
        rbx_6 = &rbx_6[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_6 = var_38

if (rbx_6 != 0)
    result = sub_140a74f90(rbx_6)

int16_t* rcx_21 = var_58

if (rcx_21 == 0)
    return result

return sub_140a74f90(rcx_21)
