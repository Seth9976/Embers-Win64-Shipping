// 函数: sub_1426e0a50
// 地址: 0x1426e0a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_38 = nullptr
int32_t var_30 = 0
sub_1405947f0(&var_38, 8)

if (var_30 + 8 s> 0)
    sub_140594770(&var_38)

int16_t* rdi = var_38
sub_1405a7220(rdi, 8, "invalid", 8, 0x3f)
void* const rbx_1

if (*(arg1 + 0x80) == 0)
    rbx_1 = nullptr
else
    void* rax_1 = sub_14272ef20()
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = *(arg1 + 0x80)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx_1 = nullptr

int64_t rax_4 = sub_14272e650()
int64_t rax_8
void* const rbx_2

if (rbx_1 != rax_4)
    if (*(arg1 + 0x80) == 0)
        rbx_2 = nullptr
    else
        void* rax_5 = sub_14272ef20()
        
        if (rax_5 == 0)
            rbx_2 = nullptr
        else
            rbx_2 = *(arg1 + 0x80)
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s> *(rbx_2 + 0x38) || *(*(rbx_2 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                rbx_2 = nullptr
    
    rax_8 = sub_14272e8c0()

int64_t var_28

if (rbx_1 == rax_4 || rbx_2 == rax_8)
    int64_t* rax_9 = sub_140b63b70(arg1 + 0x78, &var_28)
    
    if (&var_38 != rax_9)
        if (rdi != 0)
            sub_140a74f90(rdi)
        
        rdi = *rax_9
        *rax_9 = 0
        rax_9[1].d
        rax_9[1] = 0
    
    int64_t rcx_7 = var_28
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

int16_t* const rbx_4 = &data_142d40450
int64_t* rax_10 = sub_1426b3560(arg1, &var_28)

if (rax_10[1].d != 0)
    rbx_4 = *rax_10

sub_140a2e390(arg2, u"%s: %s", rbx_4)
int64_t rcx_10 = var_28

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

if (rdi != 0)
    sub_140a74f90(rdi)

return arg2
