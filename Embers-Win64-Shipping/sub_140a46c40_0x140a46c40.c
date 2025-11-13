// 函数: sub_140a46c40
// 地址: 0x140a46c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a4b4a0(arg1)
int16_t* var_38 = nullptr
int16_t* rsi = nullptr
int64_t* var_30 = nullptr
int32_t rdi = 0
int32_t r15 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        r15 = var_30:4.d
        rdi = var_30.d
        rsi = var_38
    
    rdi += rbx_1.d + 1
    var_30.d = rdi
    
    if (rdi s> r15)
        sub_140594770(&var_38)
        r15 = var_30:4.d
        rdi = var_30.d
        rsi = var_38
    
    memcpy(rsi, arg2, (rbx_1.d + 1) * 2)

int32_t rcx_3
int16_t* rdx_3

if (rdi == 0)
    rdx_3 = &data_142d40450
    rcx_3 = 0
else
    rdx_3 = rsi
    rcx_3 = rdi - 1

int32_t rax = sub_1405969c0(rcx_3, rdx_3)
int32_t arg_8
int32_t* result = sub_140a3a4d0(arg1 + 0x60, &arg_8, rax, &var_38)
int64_t rcx_5 = sx.q(arg_8)
void* rdx_5

if (rcx_5.d != 0xffffffff)
    rdx_5 = *(arg1 + 0x60) + rcx_5 * 0x28

if (rcx_5.d == 0xffffffff || rdx_5 == 0)
    sub_140a3ef70(arg1 + 0x60, &var_38)
    int32_t rax_1 = var_38.d
    *var_30 = rsi
    rsi = nullptr
    var_30[1].d = rdi
    *(var_30 + 0xc) = r15
    var_30[2] = 0
    var_30[3] = 0
    var_30[4].d = 0xffffffff
    sub_140a42890(arg1 + 0x60, &arg_8, rax, var_30, rax_1, nullptr)
    result = *(arg1 + 0x60)
    rdx_5 = &result[sx.q(arg_8) * 0xa]

if (arg3 != rdx_5 + 0x10)
    int32_t i_1 = arg3[1].d
    uint64_t rbx_3 = *arg3
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_10 = *rbx_3
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            rbx_3 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    result = sub_1405967a0(arg3, *(rdx_5 + 0x10), *(rdx_5 + 0x18), *(arg3 + 0xc), 0)

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
