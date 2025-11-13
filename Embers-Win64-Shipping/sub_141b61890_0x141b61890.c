// 函数: sub_141b61890
// 地址: 0x141b61890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr
char rbx = 0
int32_t arg_8 = 0
bool rdx = sub_140b5b8a0(*(arg1 + 0x50), 0) == 0
void* rax_1

if ((*(arg1 + 0x54) != 0 | rdx) == 0)
    rax_1 = *(arg1 + 0x48)

int64_t rcx_1

if ((*(arg1 + 0x54) != 0 | rdx) != 0 || rax_1 == 0)
    rcx_1 = *(arg1 + 0x50)
else
    rcx_1 = *(rax_1 + 0x18)

arg_8.q = rcx_1
int16_t* var_48
char result = sub_140b63b70(&arg_8, &var_48)
int16_t* var_58
int32_t var_40
int64_t rsi

if (var_40 s<= 1)
    rsi.b = 0
else
    rbx = 1
    result = sub_140a32a50(&var_48, sub_140e26ff0(&var_58), 1)
    
    if (result == 0)
        rsi.b = 0
    else
        rsi = 1

if ((rbx & 1) != 0)
    int16_t* rcx_5 = var_58
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)

if (rsi.b != 0)
    int16_t* const r12_1 = &data_142d40450
    int64_t var_38
    int32_t rcx_7 = sub_140e26ff0(&var_38)[1].d
    int32_t rdx_3 = rcx_7 - 1
    
    if (rcx_7 == 0)
        rdx_3 = 0
    
    int32_t rcx_9
    int16_t* const r8_1
    
    if (var_40 == 0)
        rcx_9 = 0
        r8_1 = &data_142d40450
    else
        r8_1 = var_48
        rcx_9 = var_40 - 1
    
    int32_t rax_5 = rcx_9 - rdx_3
    int32_t rdx_4
    
    if (rcx_9 - rdx_3 s>= 0)
        rdx_4 = rcx_9
        
        if (rax_5 s< rcx_9)
            rdx_4 = rax_5
    else
        rdx_4 = 0
    
    int16_t* rbp_1 = nullptr
    int32_t r14_1 = 0
    var_58 = nullptr
    int32_t rax_7 = 0
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 0
    int16_t* rsi_1 = &r8_1[sx.q(rcx_9) - sx.q(rdx_4)]
    
    if (rsi_1 != 0 && *rsi_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rsi_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_58, rbx_1.d + 1)
            rax_7 = var_4c_1
            r14_1 = var_50_1
            rbp_1 = var_58
        
        r14_1 += rbx_1.d + 1
        
        if (r14_1 s> rax_7)
            sub_140594770(&var_58)
            rbp_1 = var_58
        
        UnDecorator::getReferenceType(rbp_1, rsi_1, (rbx_1.d + 1) * 2)
    
    int64_t rcx_15 = var_38
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    if (r14_1 != 0)
        r12_1 = rbp_1
    
    void* rax_9 = sub_140d2f6f0(sub_1425b3af0(), 0, r12_1, 0, 0, 0, 1, 0)
    void* r8_5 = rax_9
    
    if (rax_9 != 0)
        int32_t rax_11 = *(rax_9 + 0xc)
        
        if (rax_11 s< data_143e1d9b4)
            int16_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rax_11)
            uint32_t rdx_9 = zx.d(temp1_1)
            int32_t rax_13 = temp2_1 + rdx_9
            rdi = *(data_143e1d9a0 + (sx.q(rax_13 s>> 0x10) << 3))
                + sx.q(zx.d(rax_13.w) - rdx_9) * 0x18
        
        *(rdi + 8) |= 0x40000000
    else
        r8_5 = *(data_143f5b298 + 0x2b0)
    
    result = sub_140e24dd0(arg1, r8_5)
    
    if (rbp_1 != 0)
        result = sub_140a74f90(rbp_1)

int16_t* rcx_23 = var_48

if (rcx_23 == 0)
    return result

return sub_140a74f90(rcx_23)
