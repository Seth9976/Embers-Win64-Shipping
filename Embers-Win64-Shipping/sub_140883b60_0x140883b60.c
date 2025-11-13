// 函数: sub_140883b60
// 地址: 0x140883b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = data_143ce5ab0
int16_t* rdi

if (*(arg2 + 0x18) == 0)
    rdi = &data_142d40450
else
    rdi = *(arg2 + 0x10)

int64_t* rsi = nullptr
int64_t var_28 = 0
int32_t rdx = 0
int32_t var_20 = 0
int32_t rcx = 0
int32_t var_1c = 0

if (rdi != 0 && *rdi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rdi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        rcx = var_1c
        rdx = var_20
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    int32_t var_20_1 = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, rdi, (rbx_1.d + 1) * 2)

if (*(rbp + 0x20) != 0)
    rsi = *(rbp + 0x18)

int64_t result = (*(*rsi + 0x48))(rsi, &var_28)
int64_t rcx_5 = var_28
int64_t* result_1 = result

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

if (result_1 != 0)
    *arg1 = result_1
    int64_t rdx_4 = *result_1
    void* rax_3 = (*(rdx_4 + 0x260))(result_1, rdx_4)
    arg1[1] = rax_3
    void* rcx_7 = rax_3
    result = rax_3 s>> 1
    void* rdx_5 = result + &arg1[1]
    char r8_2 = rax_3.b & 1
    
    if (r8_2 == 0)
        rdx_5 = rcx_7
    
    if (rdx_5 != 0)
        if (r8_2 != 0)
            rcx_7 = &arg1[1] + result
        
        *rcx_7 = *arg1
        void* rdx_6 = arg1[1]
        
        if ((rdx_6.b & 1) != 0)
            rdx_6 = (rdx_6 s>> 1) + &arg1[1]
        
        return (*(*result_1 + 0x270))(result_1, rdx_6, arg2, arg3)

return result
