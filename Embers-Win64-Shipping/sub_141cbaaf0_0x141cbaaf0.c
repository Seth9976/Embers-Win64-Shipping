// 函数: sub_141cbaaf0
// 地址: 0x141cbaaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68
__builtin_memset(&var_68, 0, 0x48)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* r14 = &var_68
int64_t arg_10 = 0
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    r14 = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* rsi = &arg_10
uint64_t var_78 = 0
int64_t var_70 = 0

if (rax_4 != 0)
    rsi = rax_4

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

uint64_t* rax_6 = *(arg2 + 0x38)
uint64_t* r8_6 = &var_78

if (rax_6 != 0)
    r8_6 = rax_6

int64_t rax_7 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_7 != 0
*(arg2 + 0x20) = rdi + rax_7
char result = sub_141ca4460(r14, rsi, r8_6)
uint64_t rcx_4 = var_78
*arg3 = result

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int128_t var_38
int64_t rcx_5 = var_38:8.q

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t* rbx_1 = var_38.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
