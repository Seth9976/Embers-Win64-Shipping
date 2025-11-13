// 函数: sub_141fd8b10
// 地址: 0x141fd8b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r15 = nullptr
int32_t r8 = 0
int64_t r13 = sx.q(arg2)
int32_t rcx = 0
int128_t* var_48 = nullptr
int64_t var_40 = 0
int64_t* r12 = *(***(arg1 + 0x18) + (r13 << 3))
void* rax_2 = *r12
int32_t rdx_1 = *(rax_2 + 0x20)
int64_t var_68 = *(rax_2 + 0x18)
int32_t var_60 = rdx_1
void* rbx_1

if (arg1[4].b == 0)
    rbx_1 = rax_2 + 8
else
    int32_t rsi_5 = (var_68 u>> 0x20).d * *arg1 * rdx_1 * var_68.d
    
    if (rsi_5 s> 0)
        sub_1405c5510(&var_48, rsi_5)
        r8 = var_40:4.d
        rcx = var_40.d
        r15 = var_48
    
    int32_t rax_3 = rsi_5 + rcx
    var_40.d = rax_3
    
    if (rax_3 s> r8)
        sub_1405daba0(&var_48)
        r15 = var_48
    
    void* rax_4 = *r12
    int32_t var_88_1 = 0
    int32_t arg_c = 0
    void arg_10
    sub_140b02330((*sub_140b5e500(&arg_10, 0x103)).q, r15, rsi_5, *(rax_4 + 8), *(rax_4 + 0x10), 0)
    rbx_1 = &var_48

bool cond:0 = *(arg1 + 0x11) == 0
int32_t rax_6 = data_143dbb190
int64_t var_78 = data_143dbb188.q
int32_t var_70 = rax_6
int64_t var_58

if (cond:0)
    int32_t rdx_7 = r12[2].d
    var_58 = r12[1]
    var_78.d = var_58.d
    var_78:4.d = (var_58 u>> 0x20).d
    int32_t var_70_1 = rdx_7
else
    int64_t* r8_5 = r13 * 0x30 + **(arg1 + 0x28)
    **(arg1 + 0x20) = r13 * 0x88 + **(arg1 + 0x30)
    int32_t var_50_1 = r12[2].d
    uint128_t** rax_11 = *(arg1 + 0x20)
    char r9_2 = (*(*(arg1 + 8) + 0x10)).b
    var_58 = r12[1]
    sub_141fe03c0(&var_68, r12 + 0x14, &var_58, r9_2, r8_5, *rax_11)
int64_t result = sub_141fdcd20(&var_68, *arg1, rbx_1, **(arg1 + 0x20), &var_78)

if (r15 == 0)
    return result

return sub_140a74f90(r15)
