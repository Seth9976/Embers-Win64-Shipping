// 函数: sub_1423ee750
// 地址: 0x1423ee750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[1].d
int64_t rsi = *arg1
int16_t* var_38 = nullptr

if (rbx != 0)
    sub_1405a4c70(&var_38, rbx, 0)
    memcpy(var_38, rsi, rbx * 2)
else
    int32_t var_2c_1 = 0

sub_1423d7d40(&var_38)
int64_t var_28

if (arg3 == 0)
    int16_t* rdi_1 = var_38
    int32_t r8_2 = data_143f5b340:4.d
    data_143f5b340.d = rbx
    
    if (rbx != 0 || r8_2 != 0)
        sub_1405a4c70(&data_143f5b338, rbx, r8_2)
        memcpy(data_143f5b338, rdi_1, rbx * 2)
    else
        data_143f5b340:4.d = 0
    
    int32_t rcx_17 = sub_140b19c30(&var_28, &data_143f5b338, 0)[1].d
    int32_t rbx_3 = rcx_17 - 1
    int64_t rcx_18 = var_28
    
    if (rcx_17 == 0)
        rbx_3 = 0
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    if (rbx_3 == 0)
        sub_140a20ba0(&data_143f5b338, u".png", rbx_3 + 4)
else
    int64_t* rax = sub_140b18720(&var_28, &var_38, 0)
    
    if (&var_38 != rax)
        int16_t* rcx_4 = var_38
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        var_38 = *rax
        *rax = 0
        int32_t var_30_1 = rax[1].d
        int32_t var_2c_2 = *(rax + 0xc)
        rax[1] = 0
    
    int64_t rcx_6 = var_28
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    sub_142090dd0()
    var_28 = 0
    int64_t* rcx_7 = &var_28
    int32_t var_20_1 = 0
    
    if (data_143a2e359 == 0)
        sub_1405947f0(rcx_7, 4)
        int32_t rax_4 = var_20_1 + 4
        var_20_1 = rax_4
        
        if (rax_4 s> 0)
            sub_140594770(&var_28)
        
        UnDecorator::getReferenceType(var_28, &data_142d8ad90, 8)
        sub_140a464c0()
        sub_140b17a00(&var_38, &var_28, &data_143f5b338, &data_14399ea08)
    else
        sub_1405947f0(rcx_7, 4)
        int32_t rax_3 = var_20_1 + 4
        var_20_1 = rax_3
        
        if (rax_3 s> 0)
            sub_140594770(&var_28)
        
        UnDecorator::getReferenceType(var_28, &data_142d8ad90, 8)
        sub_140b178a0(&var_38, &var_28, &data_143f5b338)
    
    int64_t rcx_14 = var_28
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)

if (data_143f5b340.d s> 1)
    data_143f5b2a1 = arg2
    data_143f5b2a0 = 1

char result = data_14399fa08
char result_1 = result
data_143de5433 = result

if (arg2 == 0)
    result_1 = 0

data_14399fa08 = result_1
int16_t* rcx_19 = var_38

if (rcx_19 == 0)
    return result

return sub_140a74f90(rcx_19)
