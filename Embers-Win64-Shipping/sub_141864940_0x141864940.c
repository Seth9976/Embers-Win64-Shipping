// 函数: sub_141864940
// 地址: 0x141864940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg1, 0, 0x90)
sub_140b4c2a0(arg1)
arg1[0x13] = arg2
void* rcx_1 = &arg1[0x16]
arg1[0x12] = 0
*arg1 = &data_142fe63d0
arg1[0x14] = 0
arg1[0x15] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x1a].d = 0xffffffff
*(arg1 + 0xd4) = 0
arg1[0x1c] = 0
arg1[0x1d].d = 0
(*arg1)[0x1b](arg1, 0)
int64_t rdx
rdx.b = 1
(*arg1)[0x14](arg1, rdx)
void** const var_d8
memset(&var_d8, 0, 0x90)
sub_140b4c2a0(&var_d8)
int64_t var_48 = 0
var_d8 = &data_142d6b230
int64_t var_40 = arg2
int64_t var_38 = 0x7fffffffffffffff
sub_140b55290(&var_d8, 1)
var_d8[0x1b](&var_d8, 0)
int64_t* var_d0
int32_t* rdx_2 = *var_d0
char var_af
int32_t i_1

if (&rdx_2[1] u> var_d0[1])
    int32_t* rdx_3 = &i_1
    void** const* rcx_9 = &var_d8
    
    if ((var_af & 0x20) != 0)
        sub_140b54070(rcx_9, rdx_3, arg3)
    else
        var_d8[0x2a](rcx_9, rdx_3, 4)
else
    i_1 = *rdx_2
    *var_d0 += 4

int32_t i_2 = i_1

if (i_2 s>= 0x32)
    *(arg1 + 0x29) |= 1
else
    int512_t zmm1 = sub_14187f990(&arg1[0x14], i_2)
    
    if (i_1 s> 0)
        int32_t i
        
        do
            void** const rax_7 = var_d8
            int64_t arg_18 = 0
            rax_7[0x28](&var_d8, &arg_18)
            int32_t* rax_8 = *var_d0
            int32_t arg_10
            
            if (&rax_8[1] u> var_d0[1])
                int32_t* rdx_6 = &arg_10
                void** const* rcx_14 = &var_d8
                
                if ((var_af & 0x20) != 0)
                    sub_140b54070(rcx_14, rdx_6, zmm1)
                else
                    var_d8[0x2a](rcx_14, rdx_6, 4)
            else
                arg_10 = *rax_8
                *var_d0 += 4
            
            zmm1 = sub_141859930(&arg1[0x14], &arg_10, &arg_18)
            i = i_1 - 1
            i_1 = i
        while (i s> 0)

arg1[0x12] = var_48
sub_140b4cb40(&var_d8)
return arg1
