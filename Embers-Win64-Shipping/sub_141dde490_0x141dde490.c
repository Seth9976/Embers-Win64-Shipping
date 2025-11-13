// 函数: sub_141dde490
// 地址: 0x141dde490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 &= 0xe0
*(arg1 + 4) = arg2
*(arg1 + 8) = arg3
*(arg1 + 0xc) = 0xbf800000
*(arg1 + 0x10) = 0x3f000000
__builtin_memset(&arg1[0x18], 0, 0x18)
sub_140b58260(&arg1[0x30], u"Default", 1)
*(arg1 + 0x38) = 0xa48cff00
*(arg1 + 0x48) = 0
int64_t* rcx_1 = nullptr
*(arg1 + 0x3c) = 0x42480000
*(arg1 + 0x40) = 0x42480000
*(arg1 + 0x44) = 0x437a0000

if (data_143f39018 != 0)
    rcx_1 = data_143f39010

void* arg_8
(*(*rcx_1 + 0x48))(rcx_1, &arg_8)
void* const rbp_1

if (arg_8 == 0)
    rbp_1 = nullptr
else
    void* rax_1 = sub_142452380()
    
    if (rax_1 == 0)
        rbp_1 = nullptr
    else
        rbp_1 = arg_8
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rbp_1 + 0x38) || *(*(rbp_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbp_1 = nullptr

*(arg1 + 0x70) = 0
*(arg1 + 0x50) = 0xffffffff
*(arg1 + 0x54) = 0
__builtin_memset(&arg1[0x60], 0, 0x14)
int64_t arg_20 = 0

if (*(arg1 + 0x74) s<= 0xffffffff)
    sub_1405947f0(&arg1[0x68], 0)

int16_t* rax_4 = *(arg1 + 0x68)

if (rax_4 != 0)
    *rax_4 = 0

*(arg1 + 0x58) = 0

if (rbp_1 == 0)
    *(arg1 + 0x50) = 0xffffffff
    *(arg1 + 0x54) = 0
    *(arg1 + 0x60) = 0
    int32_t rax_7 = *(arg1 + 0x74)
    int64_t var_48_1 = 0
    *(arg1 + 0x70) = 0
    
    if (rax_7 s< 0 && rax_7 != 0)
        sub_1405947f0(&arg1[0x68], 0)
    
    int16_t* rax_8 = *(arg1 + 0x68)
    
    if (rax_8 != 0)
        *rax_8 = 0
    
    *(arg1 + 0x58) = 0
else
    void var_40
    sub_140b97b00(&arg1[0x60], sub_140d21d60(&var_40, rbp_1))
    int64_t var_38
    
    if (var_38 != 0)
        sub_140a74f90(var_38)
    
    sub_140d3a3a0(&arg1[0x50], rbp_1)
    int32_t rax_6 = 0
    
    if (0 == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax_6 = data_1439aaa30
    
    *(arg1 + 0x58) = rax_6

return arg1
