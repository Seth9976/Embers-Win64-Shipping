// 函数: sub_141d01fc0
// 地址: 0x141d01fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
int16_t* var_58 = nullptr
int32_t rdx = 0
int64_t var_50 = 0
int32_t r8 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_58, rdi_1.d + 1)
        r8 = var_50:4.d
        rdx = var_50.d
    
    int32_t rax_1 = rdx + rdi_1.d + 1
    var_50.d = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, arg2, (rdi_1.d + 1) * 2)
    int32_t rax_2 = var_50.d
    
    if (rax_2 != 0 && rax_2 - 1 s> 0 && var_58[sx.q(rax_2 - 1) - 1] != 0x2f)
        sub_140a20ba0(&var_58, &data_142d5a024, 1)

if (sub_140a32a50(&var_58, &arg1[0x1e], 1) != 0)
    int32_t rax_6 = arg1[0x1f].d
    int32_t r9_1 = var_50.d
    int32_t rcx_6 = rax_6 - 1
    
    if (rax_6 == 0)
        rcx_6 = 0
    
    int32_t rdi_3 = r9_1 - 1
    
    if (r9_1 == 0)
        rdi_3 = 0
    
    int32_t rdx_4
    
    if (rcx_6 s>= 0)
        rdx_4 = rdi_3
        
        if (rcx_6 s< rdi_3)
            rdx_4 = rcx_6
    else
        rdx_4 = 0
    
    int64_t r10_1 = sx.q(rdx_4)
    
    if (sx.q(rcx_6) + 0x7fffffff s< r10_1)
        rdi_3 = rdx_4
    else if (sx.q(rcx_6) + 0x7fffffff s< sx.q(rdi_3))
        rdi_3 = rcx_6 + 0x7fffffff
    
    int64_t var_48 = 0
    int16_t* const rax_8 = &data_142d40450
    int64_t var_40_1 = 0
    
    if (r9_1 != 0)
        rax_8 = var_58
    
    int64_t r14_1 = 0
    int32_t rdi_4 = rdi_3 - rdx_4
    int32_t rsi_1 = 0
    void* r15_1 = &rax_8[r10_1]
    int32_t rax_9 = 0
    
    if (r15_1 != 0 && *r15_1 != 0 && rdi_4 s> 0)
        if (rdi_4 + 1 s> 0)
            sub_1405947f0(&var_48, rdi_4 + 1)
            rax_9 = var_40_1:4.d
            rsi_1 = var_40_1.d
            r14_1 = var_48
        
        rsi_1 += rdi_4 + 1
        var_40_1.d = rsi_1
        
        if (rsi_1 s> rax_9)
            sub_140594770(&var_48)
            rsi_1 = var_40_1.d
            r14_1 = var_48
        
        UnDecorator::getReferenceType(r14_1, r15_1, rdi_4 * 2)
        *(r14_1 + (sx.q(rsi_1) << 1) - 2) = 0
    
    void* var_38 = nullptr
    int32_t var_30_1 = rsi_1
    
    if (rsi_1 != 0)
        sub_1405e3e80(&var_38, rsi_1, 0)
        void* rcx_11
        
        if ((var_38.b & 1) == 0)
            rcx_11 = var_38
        else
            rcx_11 = &var_38 + (var_38 s>> 1)
        
        memcpy(rcx_11, r14_1, rsi_1 * 2)
    else
        int32_t var_2c_1 = 0
    
    char* rdi_6 = *arg1 + 0x20
    int32_t arg_8
    sub_141d02cc0(rdi_6, &arg_8, &var_38)
    int64_t rax_13 = sx.q(arg_8)
    void* r8_12
    
    if (rax_13.d == 0xffffffff)
        r8_12 = nullptr
    else
        void* rdx_11 = *rdi_6
        
        if ((rdx_11.b & 1) != 0)
            rdx_11 = &rdi_6[rdx_11 s>> 1]
        
        r8_12 = rax_13 * 0x50 + rdx_11
    
    void* result_1 = r8_12 + 0x10
    
    if (r8_12 == 0)
        result_1 = nullptr
    
    result = result_1
    sub_140a1d5c0(&var_38)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)

int16_t* rcx_15 = var_58

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

return result
