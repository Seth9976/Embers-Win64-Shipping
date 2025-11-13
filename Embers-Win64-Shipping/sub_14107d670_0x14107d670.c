// 函数: sub_14107d670
// 地址: 0x14107d670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x168))()
void* var_38

if (sub_1419803d0((*U"1111")[sx.q(arg3)]) != 0 && (*(arg2 + 0x60))() != 0 && rax_1 != 0)
    char var_40_1 = 1
    int32_t var_48_1 = 0
    void** rax_4
    int512_t zmm0
    rax_4, zmm0 = sub_142127800(arg1, &var_38, &data_143e35d30, arg2, arg5)
    void* rdx_1 = *rax_4
    int64_t rcx_2 = rax_4[1]
    *arg8 = rdx_1
    arg8[1] = rcx_2
    uint64_t rax_8
    
    if (arg4 != 0 && rdx_1 != 0)
        rax_8 = zx.q(*(rdx_1 + 0x108) u>> 4) & 0x7f
    
    int64_t* r8
    
    if (arg4 != 0 && rdx_1 != 0 && (rax_8.d == 0xb || rax_8.d == 0xc || rax_8.d == 0x1e
            || rax_8.d == 0x1f || rax_8.d == 0x12 || rax_8.d == 0x10 || rax_8.d == 0x16
            || rax_8.d == 0x1b || *(rax_8 * 0x14 + &data_143f025f0) == data_143f025b0))
        r8 = &data_143e35ff0
    else
        r8 = &data_143e35bd0
    
    char var_40_2 = 1
    int32_t var_48_2 = 0
    void** rax_10
    rax_10, arg5 = sub_142127800(arg1, &var_38, r8, arg2, zmm0)
    void* rcx_5 = *rax_10
    arg7[1] = rax_10[1]
    *arg7 = rcx_5

char var_40_3 = 1
int32_t var_48_3 = 0
int64_t* r8_1 = &data_143e35e90

if (arg4 == 0)
    r8_1 = &data_143e35a70

void* var_28
void** rax_12
int512_t zmm0_1
rax_12, zmm0_1 = sub_142127800(arg1, &var_28, r8_1, arg2, arg5)
char var_40_4 = 1
int64_t* r8_2 = &data_143e36150
int32_t var_48_4 = 0
int64_t var_30 = rax_12[1]
var_38 = *rax_12
zmm0_1.o = var_38.o
*arg9 = zmm0_1.o

if (arg6 == 0)
    r8_2 = &data_143e362b0

void** rax_15 = sub_142127800(arg1, &var_28, r8_2, arg2, zmm0_1)
int64_t var_30_1 = rax_15[1]
var_38 = *rax_15
*arg10 = var_38.o
return arg10
