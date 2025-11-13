// 函数: sub_141e97e40
// 地址: 0x141e97e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg3[2].d
int64_t* r12 = *(arg1 + 0x288)
int64_t* rbx = arg3[1]
int32_t i_4 = i_2
int32_t var_90 = arg7[1].d
int64_t var_98 = *arg7
int64_t zmm0 = *arg6
int32_t var_80 = arg6[1].d
void** const var_78 = &data_143258940
int64_t var_88 = zmm0
uint64_t var_70 = 0

if (i_2 != 0)
    sub_1405a4be0(&var_70, i_2, 0)
    uint64_t rcx_1 = var_70
    int32_t i
    
    do
        *rcx_1 = *rbx
        void* rax_5 = rbx[1]
        *(rcx_1 + 8) = rax_5
        
        if (rax_5 != 0)
            *(rax_5 + 8) += 1
        
        rcx_1 += 0x10
        rbx = &rbx[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    int32_t var_64_1 = 0

int32_t i_3 = arg3[4].d
int64_t* rbx_1 = arg3[3]
uint64_t var_60 = 0
int32_t i_5 = i_3

if (i_3 != 0)
    sub_1405a4be0(&var_60, i_3, 0)
    uint64_t rcx_3 = var_60
    int32_t i_1
    
    do
        *rcx_3 = *rbx_1
        void* rax_7 = rbx_1[1]
        *(rcx_3 + 8) = rax_7
        
        if (rax_7 != 0)
            *(rax_7 + 8) += 1
        
        rcx_3 += 0x10
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
else
    int32_t var_54_1 = 0

int64_t var_4c = *(arg3 + 0x2c)
char var_50
char var_50_1 = var_50 ^ ((arg3[5].b ^ var_50) & 0xf)
char var_4f = *(arg3 + 0x29)
int32_t var_44 = *(arg3 + 0x34)
int64_t rdx_2 = *r12
(*(rdx_2 + 0xa90))(r12, rdx_2, &var_78, zx.q(arg4), arg5.d, &var_88, &var_98, arg8.d, arg9, arg10, 
    arg11, arg12, arg13)
*arg3 = &data_143258940
sub_140596d80(&arg3[3])
return sub_140596d80(&arg3[1]) __tailcall
