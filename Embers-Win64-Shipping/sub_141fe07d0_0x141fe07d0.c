// 函数: sub_141fe07d0
// 地址: 0x141fe07d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
void* r12 = nullptr
int32_t i = 0
int16_t* var_38

if (*(arg1 + 0x30) s> 0)
    int64_t r15
    int64_t arg_20 = r15
    
    do
        void* rbp_1 = *(rdi + *(arg1 + 0x28))
        int64_t arg_8 = *(rbp_1 + 0x18)
        sub_140b63b70(&arg_8, &var_38)
        int16_t* rdx_1
        
        if (arg2[1].d == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *arg2
        
        int16_t* const rcx_1 = &data_142d40450
        int32_t var_30
        
        if (var_30 != 0)
            rcx_1 = var_38
        
        int32_t rax_3 = sub_140a54510(rcx_1, rdx_1)
        int16_t* rcx_2 = var_38
        r15.b = rax_3 == 0
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        if (r15.b != 0)
            r12 = rbp_1
            break
        
        i += 1
        rdi = &rdi[1]
    while (i s< *(arg1 + 0x30))

if (arg3 == 0 || r12 != 0)
    return r12

var_38 = nullptr
void* var_30_1 = r12
uint64_t var_48 = 0
sub_1405947f0(&var_48, (r12 + 0x10).d)
void* var_40
var_40.d = r12.d + 0x10

if (r12.d + 0x10 s> var_40:4.d)
    sub_140594770(&var_48)

sub_1405a7220(var_48, 0x10, "WindowsNoEditor", 0x10, 0x3f)
int64_t* rax_5 = sub_141fdd750(arg1, arg2, &var_48, &var_38, nullptr)
uint64_t rcx_7 = var_48

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int16_t* rcx_8 = var_38

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return rax_5
