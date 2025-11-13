// 函数: sub_140b64c60
// 地址: 0x140b64c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int32_t rdx = 0
int32_t rcx = 0
int64_t var_20 = 0

if (arg1 != 0 && *arg1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        rcx = var_20:4.d
        rdx = var_20.d
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_20.d = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, arg1, (rbx_1.d + 1) * 2)

int16_t* var_18
sub_140b11a30(&var_18, &var_28)
int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140b214e0(&var_18)
sub_140b20bf0(&var_18)
int64_t* rsi = data_143e18600
int64_t* rbx_3 = rsi
void* rdi_3 = &rsi[sx.q(data_143e18608) * 2]
int32_t var_10
int32_t result

if (rsi != rdi_3)
    while (true)
        int16_t* const rdx_4 = &data_142d40450
        
        if (var_10 != 0)
            rdx_4 = var_18
        
        int16_t* const rcx_8
        
        if (rbx_3[1].d == 0)
            rcx_8 = &data_142d40450
        else
            rcx_8 = *rbx_3
        
        result = sub_140a54510(rcx_8, rdx_4)
        
        if (result == 0)
            break
        
        rbx_3 = &rbx_3[2]
        
        if (rbx_3 == rdi_3)
            goto label_140b64d74

if (rsi == rdi_3 || ((rbx_3 - rsi) s>> 4).d == 0xffffffff)
label_140b64d74:
    int64_t rbx_6 = sx.q(data_143e18608)
    result = (rbx_6 + 1).d
    bool cond:0_1 = result s<= data_143e1860c
    data_143e18608 = result
    
    if (not(cond:0_1))
        result = sub_1405a4f90(&data_143e18600)
    
    int64_t* rbx_8 = (rbx_6 << 4) + data_143e18600
    *rbx_8 = 0
    int16_t* rsi_1 = var_18
    rbx_8[1].d = var_10
    
    if (var_10 != 0)
        sub_1405a4c70(rbx_8, var_10, 0)
        result = memcpy(*rbx_8, rsi_1, var_10 * 2)
    else
        *(rbx_8 + 0xc) = var_10

int16_t* rcx_11 = var_18

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
