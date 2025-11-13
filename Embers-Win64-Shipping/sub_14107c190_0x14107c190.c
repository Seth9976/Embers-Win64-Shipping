// 函数: sub_14107c190
// 地址: 0x14107c190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x168))()
void* var_68

if (sub_1419803d0((*U"1111")[sx.q(arg4)]) != 0 && (*(arg2 + 0x60))() != 0 && rax_1 != 0)
    char var_70_1 = 1
    int32_t var_78_1 = 0
    void** rax_4
    int512_t zmm0
    rax_4, zmm0 = sub_142127800(arg1, &var_68, &data_143e30780, arg2, arg5)
    void* rdx_1 = *rax_4
    int64_t rcx_2 = rax_4[1]
    *arg9 = rdx_1
    arg9[1] = rcx_2
    uint64_t rax_8
    
    if (arg6 != 0 && rdx_1 != 0)
        rax_8 = zx.q(*(rdx_1 + 0x108) u>> 4) & 0x7f
    
    int64_t* r8
    
    if (arg6 != 0 && rdx_1 != 0 && (rax_8.d == 0xb || rax_8.d == 0xc || rax_8.d == 0x1e
            || rax_8.d == 0x1f || rax_8.d == 0x12 || rax_8.d == 0x10 || rax_8.d == 0x16
            || rax_8.d == 0x1b || *(rax_8 * 0x14 + &data_143f025f0) == data_143f025b0))
        r8 = &data_143e30a40
    else
        r8 = &data_143e30620
    
    char var_70_2 = 1
    int32_t var_78_2 = 0
    void** rax_10
    rax_10, arg5 = sub_142127800(arg1, &var_68, r8, arg2, zmm0)
    void* rcx_5 = *rax_10
    arg8[1] = rax_10[1]
    *arg8 = rcx_5

char var_70_3 = 1
int32_t var_78_3 = 0
void** rdx_4
int64_t* r8_1

if (arg6 == 0)
    r8_1 = &data_143e304c0
    void var_58
    rdx_4 = &var_58
else
    r8_1 = &data_143e308e0
    rdx_4 = &var_68

void** rax_12
int512_t zmm0_1
rax_12, zmm0_1 = sub_142127800(arg1, rdx_4, r8_1, arg2, arg5)
char var_70_4 = 1
int32_t var_78_4 = 0
int64_t rcx_7 = rax_12[1]
*arg10 = *rax_12
arg10[1] = rcx_7
void** rdx_5
int64_t* r8_2

if (arg7 == 0)
    r8_2 = &data_143e30d00
    void var_38
    rdx_5 = &var_38
else
    r8_2 = &data_143e30ba0
    void var_48
    rdx_5 = &var_48

void** rax_14 = sub_142127800(arg1, rdx_5, r8_2, arg2, zmm0_1)
int64_t rcx_9 = rax_14[1]
void* result = *rax_14
*arg11 = result
arg11[1] = rcx_9
return result
