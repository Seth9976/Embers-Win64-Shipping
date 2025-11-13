// 函数: sub_141b10070
// 地址: 0x141b10070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
__FrameHandler3::TryBlockMap::TryBlockMap(&var_58, arg1 + 8, arg1 + 0x28)
int64_t rsi = 0
int32_t arg_c = 0
int64_t var_48 = arg1 + 0x18
int64_t var_88 = 2.q
int32_t arg_24 = 0
int64_t var_80 = 2.q
uint64_t var_78 = 0
int32_t var_70 = 0
uint64_t var_68 = 0
int64_t var_60 = 0
sub_141a51280(&var_58, &var_88, &var_78, &var_68)
int32_t rdx_2 = 0
var_88 = 0
int32_t r8_2 = 0
var_80:4.d = 0
int32_t r15 = 0

if (var_70 s> 0)
    int64_t rdi_1 = 0
    
    do
        uint64_t rax_3 = var_78
        
        if (arg3 == 0)
            if (*(rdi_1 + rax_3) s> arg2)
            label_141b10135:
                uint64_t r12_1 = var_68
                int64_t r14_1 = sx.q(rdx_2)
                rdx_2 = (r14_1 + 1).d
                var_80.d = rdx_2
                
                if (rdx_2 s> r8_2)
                    sub_1405a4cf0(&var_88)
                    r8_2 = var_80:4.d
                    rdx_2 = var_80.d
                    rsi = var_88
                
                *(rsi + (r14_1 << 2)) = *(rdi_1 + r12_1)
        else if (*(rdi_1 + rax_3) s< arg2)
            goto label_141b10135
        
        r15 += 1
        rdi_1 += 4
    while (r15 s< var_70)

var_80.d = rdx_2
var_88 = rsi
var_88.o = var_88.o
int64_t result = sub_141b0f640(&var_58, &var_88)

if (rsi != 0)
    result = sub_140a74f90(rsi)

uint64_t rcx_5 = var_68

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

uint64_t rcx_6 = var_78

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
