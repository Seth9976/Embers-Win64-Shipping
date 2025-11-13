// 函数: sub_1405ab0f0
// 地址: 0x1405ab0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1] = 0
void* rdi = arg3
arg1[2] = 0
arg1[3].d = 0xffffffff
*(arg1 + 0x1c) = 0
arg1[4].d = 0
__builtin_memset(&arg1[5], 0, 0x18)
void* const rax_4

if (arg3 == 0)
    rax_4 = nullptr
else
    void* rax_1
    rax_1, arg3 = sub_142452380()
    
    if (rax_1 == 0)
        rax_4 = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdi + 0x38))
            rax_4 = nullptr
        else
            rax_4 = rdi
            
            if (*(*(rdi + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                rax_4 = nullptr

arg1[8] = rax_4
arg1[9] = 0

if (rdi == 0)
    rdi = nullptr
else
    void* rax_5
    rax_5, arg3 = sub_142452380()
    
    if (rax_5 == 0)
        rdi = nullptr
    else
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s> *(rdi + 0x38) || *(*(rdi + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
            rdi = nullptr

arg3.b = 1
sub_140d3cc80(rdi, &arg1[1], arg3.b, 0x10, 0x20000000)
void*** var_18 = nullptr
void*** rax_8 = sub_140a84c80(0, 0x30, 0)
var_18 = rax_8
int32_t var_10 = 3

if (rax_8 != 0)
    rax_8[1] = arg1
    *rax_8 = &data_142d3fe58
    rax_8[2] = sub_1405bf1f0
    rax_8[4] = sub_140a387b0()
    *rax_8 = &data_142d3feb0

void arg_8
arg1[9] = *sub_14242c1e0(*arg1, &arg_8, &var_18)
void*** rax_12

if (var_10 == 0)
    rax_12 = var_18
label_1405ab25d:
    
    if (rax_12 != 0)
        sub_140a74f90(rax_12)
else
    void*** rcx_5 = var_18
    
    if (rcx_5 != 0)
        (*rcx_5)[7](rcx_5, 0)
        rax_12 = var_18
        
        if (rax_12 != 0)
            rax_12 = sub_140a84c80(rax_12, 0, 0)
            var_18 = rax_12
        
        int32_t var_10_1 = 0
        goto label_1405ab25d
return arg1
