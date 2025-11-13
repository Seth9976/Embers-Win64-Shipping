// 函数: sub_141ea2be0
// 地址: 0x141ea2be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = zx.d(*(arg1 + 0x58))
int32_t var_2c = 0
int128_t* rbx = nullptr
int128_t* var_38 = nullptr
int32_t var_30 = 0

if (r8 == 1)
    sub_1405947f0(&var_38, 0xe)
    int32_t rax_3 = var_30 + 0xe
    var_30 = rax_3
    
    if (rax_3 s> var_2c)
        sub_140594770(&var_38)
    
    rbx = var_38
    __builtin_memcpy(rbx, u"const extends", 0x1c)
else if (r8 == 2)
    sub_1405947f0(&var_38, 0xb)
    int32_t rax_2 = var_30 + 0xb
    var_30 = rax_2
    
    if (rax_2 s> var_2c)
        sub_140594770(&var_38)
    
    rbx = var_38
    __builtin_wcscpy(rbx, u"macros for")
else if (r8 != 3)
    sub_1405947f0(&var_38, 8)
    int32_t rax_1 = var_30 + 8
    var_30 = rax_1
    
    if (rax_1 s> var_2c)
        sub_140594770(&var_38)
    
    rbx = var_38
    *rbx = *u"extends"

void* const rdx_3

if (*(arg1 + 0x50) == 0)
    rdx_3 = nullptr
else
    void* rax_4 = sub_140d41340()
    
    if (rax_4 == 0)
        rdx_3 = nullptr
    else
        rdx_3 = *(arg1 + 0x50)
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
            rdx_3 = nullptr

int64_t arg_8 = *(rdx_3 + 0x18)
int64_t var_28
sub_140b63b70(&arg_8, &var_28)
int128_t* r8_4 = &data_142d40450

if (var_30 != 0)
    r8_4 = rbx

sub_140a2e390(arg2, u"%s %s", r8_4)
int64_t rcx_9 = var_28

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

if (rbx != 0)
    sub_140a74f90(rbx)

return arg2
