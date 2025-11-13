// 函数: sub_141809000
// 地址: 0x141809000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rbx
int16_t* const var_8 = rbx
int32_t rdi = 0
int16_t* var_18 = nullptr
int32_t var_10 = 0
char rax = sub_140b274d0(arg1, &var_18)
int32_t rax_1
int32_t rax_2

if (rax != 0)
    rbx = &data_142d40450
    int16_t* const rcx = &data_142d40450
    
    if (var_10 != 0)
        rcx = var_18
    
    rax_1 = sub_140a54510(rcx, u"http")
    
    if (rax_1 != 0)
        if (var_10 != 0)
            rbx = var_18
        
        rax_2 = sub_140a54510(rbx, u"https")

if (rax == 0 || (rax_1 != 0 && rax_2 != 0))
    rbx.b = 1
else
    void* rax_4 = data_143ef9cf8
    
    if (rax_4 == 0)
        void arg_10
        int64_t rbx_1 = *sub_140b58170(&arg_10, "HTTP", (rax_4 + 1).d)
        j_sub_140b3db50()
        j_sub_140b407e0(&data_143de7d78, rbx_1)
        rax_4 = data_143ef9cf8
    
    int64_t rbp_1 = *(rax_4 + 0x10)
    int32_t rcx_3 = 0
    int32_t var_1c_1 = 0
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    
    if (arg1 != 0 && *arg1 != 0)
        int64_t rbx_2 = -1
        
        do
            rbx_2 += 1
        while (arg1[rbx_2] != 0)
        
        if (rbx_2.d + 1 s> 0)
            sub_1405947f0(&var_28, rbx_2.d + 1)
            rcx_3 = var_1c_1
            rdi = var_20_1
        
        int32_t rax_5 = rdi + rbx_2.d + 1
        int32_t var_20_2 = rax_5
        
        if (rax_5 s> rcx_3)
            sub_140594770(&var_28)
        
        UnDecorator::getReferenceType(var_28, arg1, (rbx_2.d + 1) * 2)
    
    char rax_6 = sub_1418055c0(rbp_1, &var_28)
    int64_t rcx_8 = var_28
    rbx = zx.q(rax_6)
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

int16_t* rcx_9 = var_18

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return zx.q(rbx.b)
