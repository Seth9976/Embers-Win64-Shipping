// 函数: sub_140e0fda0
// 地址: 0x140e0fda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_60 = &arg_8
void*** (* var_68)() = j_sub_140597fc0
int64_t* rax_1 = sub_140a756e0(&var_68, &data_143958018) + 0x10
int64_t* var_58 = rax_1
void*** (* rdi)() = nullptr
int32_t r14 = 0
int64_t rcx_1 = *rax_1
int64_t rcx_2 = rax_1[2]
char var_40 = 0
int64_t result_1 = rax_1[3]
rax_1[3] = &var_58
int32_t result_2 = 0
int64_t* rax_2 = var_58
rax_2[4].d += 1
int64_t* i = *(arg1 + 0x18)
var_68 = nullptr
var_60:4.d = 0

for (; i != 0; i = *i)
    int64_t result_3 = sx.q(result_2)
    result_2 = (result_3 + 1).d
    var_60.d = result_2
    
    if (result_2 s> r14)
        sub_14083a440(&var_68, result_3.d)
        result_2 = var_60.d
        r14 = var_60:4.d
        rdi = var_68
    
    *(rdi + (result_3 << 3)) = i

for (int64_t* i_1 = *(arg1 + 0x20); i_1 != 0; i_1 = *i_1)
    int64_t result_4 = sx.q(result_2)
    result_2 = (result_4 + 1).d
    var_60.d = result_2
    
    if (result_2 s> r14)
        sub_14083a440(&var_68, result_4.d)
        result_2 = var_60.d
        r14 = var_60:4.d
        rdi = var_68
    
    *(rdi + (result_4 << 3)) = i_1

int64_t result = sx.q(result_2)
int64_t rbx = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
void* rcx_5 = rdi + (result << 3)
uint64_t rsi_4 = (rcx_5 - rdi + 7) u>> 3

if (rdi u> rcx_5)
    rsi_4 = 0

if (rsi_4 != 0)
    do
        result = j_sub_140a74f90(*rdi)
        rbx += 1
        rdi += 8
    while (rbx != rsi_4)

var_60.d = 0

if (r14 != 0)
    result = sub_14083ad10(&var_68, 0)

*(arg1 + 0x10) = 0

if (*(arg1 + 0x14) != 0)
    result = sub_1405c5510(arg1 + 8, 0)

if (var_40 == 0)
    int64_t* rax_3 = var_58
    char var_40_1 = 1
    rax_3[4].d -= 1
    int64_t* rcx_9 = var_58
    
    if (rcx_2 != rcx_9[2])
        sub_140b16b40(rcx_9, rcx_2)
        rcx_9 = var_58
    
    *rcx_9 = rcx_1
    result = result_1
    var_58[3] = result

return result
