// 函数: sub_141b25710
// 地址: 0x141b25710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rsi
int16_t* var_10 = rsi
int32_t rdi = 0
int32_t arg_10 = 0
int16_t* var_38

if (sub_140bace50(arg1) != 0)
    int32_t rax_1 = arg1[1].d
    int32_t rdx = 0
    var_38 = nullptr
    rsi = nullptr
    int32_t var_30_1 = 0
    int32_t rbp_1 = 0
    int32_t var_2c_1 = 0
    int32_t rbx_1 = rax_1 - 1
    
    if (rax_1 == 0)
        rbx_1 = 0
    
    if (rbx_1 + 2 s> 0)
        sub_1405947f0(&var_38, rbx_1 + 2)
        rdx = var_30_1
        rbp_1 = var_2c_1
        rsi = var_38
    
    int32_t r15_2 = rbx_1 + 2 + rdx
    
    if (r15_2 s> rbp_1)
        sub_140594770(&var_38)
        rbp_1 = var_2c_1
        rsi = var_38
    
    *rsi = 0x2f
    int64_t rbx_2 = sx.q(rbx_1)
    memcpy(&rsi[1], *arg1, rbx_2.d * 2)
    rsi[rbx_2 + 1] = 0
    
    if (arg1 != &var_38)
        int64_t rcx_3 = *arg1
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        *arg1 = rsi
        arg1[1].d = r15_2
        *(arg1 + 0xc) = rbp_1
    else if (rsi != 0)
        sub_140a74f90(rsi)

void** i = *(arg2 + 0x98)

for (void* r15_3 = &i[sx.q(*(arg2 + 0xa0))]; i != r15_3; i = &i[1])
    void* result = *i
    char rax_5
    
    if (result != 0)
        rdi |= 1
        rax_5 = sub_140a236f0(sub_1420e4db0(result, &var_38), arg1, 1)
    
    if (result == 0 || rax_5 == 0)
        rsi.b = 0
    else
        rsi.b = 1
    
    if ((rdi.b & 1) != 0)
        int16_t* rcx_7 = var_38
        rdi &= 0xfffffffe
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
    
    if (rsi.b != 0)
        int64_t rcx_9 = *arg1
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        return result

int64_t rcx_8 = *arg1

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return 0
