// 函数: sub_1425f4870
// 地址: 0x1425f4870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi

if (*(*arg1 + 0x31) == 0 || arg1[1].b != 0)
    rsi.b = 0
else
    rsi.b = 1

void var_78
int64_t* rax_1 = sub_140596d10(&var_78, &arg1[2])
int64_t r15 = *arg1
void var_68
int64_t* rax_2 = sub_140596d10(&var_68, rax_1)
void*** result_2 = sub_140a84c80(0, 0x40, 0)
void*** result_1 = result_2
void*** result_3 = result_2
void var_58

if (result_2 != 0)
    sub_1425f44f0(result_3, r15, sub_1425f5290, arg2, rsi.b, sub_140596d10(&var_58, rax_2), 1)
int64_t rcx_4 = *rax_2

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *rax_1

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

void var_48
void** rax_4 = sub_140958da0(&var_48, nullptr, 0xff)
void* rbx_3 = *rax_4 + 0x10
*rbx_3 = 0
*(rbx_3 + 8) = 0

if (&result_1 != rbx_3 && result_3 != 0)
    void** r8_1 = *result_3
    r8_1[8](result_3, rbx_3, r8_1)

*(rbx_3 + 0x10) = 2
void* rcx_8 = *rax_4
int64_t* rbx_4 = *(rcx_8 + 0x30)
int64_t* arg_18 = rbx_4

if (rbx_4 != 0)
    rbx_4[9].d += 1
    result_3 = result_1
    rbx_4 = arg_18

void*** result = sub_140978a40(rcx_8, rax_4[1], rax_4[2].d, 1)

if (result_3 != 0)
    (*result_3)[7](result_3, 0)
    result = sub_140a84c80(result_3, 0, 0)
    result_1 = result
    
    if (result != 0)
        result = sub_140a74f90(result)

if (rbx_4 != 0)
    result = zx.q(rbx_4[9].d)
    rbx_4[9].d -= 1
    
    if (result.d == 1)
        return sub_140a2f6e0(arg_18)

return result
