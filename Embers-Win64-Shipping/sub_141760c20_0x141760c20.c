// 函数: sub_141760c20
// 地址: 0x141760c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141760860(arg1)
arg1[0x19].b = 1
*arg1 = &data_142fc6e28
*(arg1 + 0xcc) |= 4
void* rax = arg1[2]
int32_t var_20 = 0
void arg_8
void* arg_18

if (rax != 0)
    void* rcx = *(rax + 8)
    
    if (rcx != 0)
        arg_18 = rax
        sub_140946410(rcx + 8, &arg_8, &arg_18, nullptr)

arg1[0x1a] = 0
arg1[0x1b].d = 0
*(arg1 + 0xcc) |= 8
void* rax_1 = arg1[2]
int32_t var_20_1 = 0

if (rax_1 != 0)
    void* rcx_2 = *(rax_1 + 8)
    
    if (rcx_2 != 0)
        arg_18 = rax_1
        sub_140946410(rcx_2 + 8, &arg_8, &arg_18, nullptr)

*(arg1 + 0xdc) = 0
*(arg1 + 0xe4) = 0
*(arg1 + 0xcc) |= 0x10
void* rax_2 = arg1[2]
int32_t var_20_2 = 0

if (rax_2 != 0)
    void* rcx_4 = *(rax_2 + 8)
    
    if (rcx_4 != 0)
        arg_18 = rax_2
        sub_140946410(rcx_4 + 8, &arg_8, &arg_18, nullptr)

int128_t zmm6 = data_142d3f660
arg1[0x1d] = 0
arg1[0x1e].d = 0
*(arg1 + 0xcc) |= 0x20
void* rax_3 = arg1[2]

if (rax_3 != 0)
    void* rcx_6 = *(rax_3 + 8)
    
    if (rcx_6 != 0)
        arg_18 = rax_3
        sub_140946410(rcx_6 + 8, &arg_8, &arg_18, nullptr)

*(arg1 + 0x100) = zmm6
return arg1
