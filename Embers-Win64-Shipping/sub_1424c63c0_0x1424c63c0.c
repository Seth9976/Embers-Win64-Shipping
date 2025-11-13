// 函数: sub_1424c63c0
// 地址: 0x1424c63c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
char r8_4 = arg_10
int64_t* rdx_4 = arg_18
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
void var_68
int32_t* rax_4 = sub_1420cc0e0(&var_68, rdx_4, r8_4)
*arg3 = *rax_4
arg3[1] = rax_4[1]
arg3[2] = rax_4[2]

if (&arg3[4] != &rax_4[4])
    int64_t rcx_8 = *(arg3 + 0x10)
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    *(arg3 + 0x10) = *(rax_4 + 0x10)
    *(rax_4 + 0x10) = 0
    arg3[6] = rax_4[6]
    arg3[7] = rax_4[7]
    *(rax_4 + 0x18) = 0

if (&arg3[8] != &rax_4[8])
    int64_t rcx_9 = *(arg3 + 0x20)
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    *(arg3 + 0x20) = *(rax_4 + 0x20)
    *(rax_4 + 0x20) = 0
    arg3[0xa] = rax_4[0xa]
    arg3[0xb] = rax_4[0xb]
    *(rax_4 + 0x28) = 0

if (&arg3[0xc] != &rax_4[0xc])
    int64_t rcx_10 = *(arg3 + 0x30)
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    *(arg3 + 0x30) = *(rax_4 + 0x30)
    *(rax_4 + 0x30) = 0
    arg3[0xe] = rax_4[0xe]
    arg3[0xf] = rax_4[0xf]
    *(rax_4 + 0x38) = 0

*(arg3 + 0x40) = *(rax_4 + 0x40)
char result = rax_4[0x12].b
arg3[0x12].b = result
int64_t var_38

if (var_38 != 0)
    result = sub_140a74f90(var_38)

int64_t var_48

if (var_48 != 0)
    result = sub_140a74f90(var_48)

int64_t var_58

if (var_58 == 0)
    return result

return sub_140a74f90(var_58)
