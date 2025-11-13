// 函数: sub_1422ccaa0
// 地址: 0x1422ccaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg2 + 0x28)
int32_t rdi = arg10
char rsi = rdi.b & 1

if (((*(rdx + 0xa4) u>> 1).b & 1) != 0)
    return sub_1422cd100(arg1, rdx, arg4, arg6, arg7, arg8, rsi, arg9)

int64_t r12
r12.b = 0

if ((*(arg7 + 0x29) & 1) == 0)
    int64_t r10_1 = arg7[0x15]
    
    if (r10_1 s< arg7[0x14])
        bool cond:1_1 = (*(sx.q((r10_1 s>> 3).d) + arg7[0x12]) & 1 << (r10_1.b & 7)) != 0
        arg7[0x15] = r10_1 + 1
        r12.b = cond:1_1
    else
        sub_140b55370(arg7)

char var_68 = r12.b
*arg8 = 0

if (((rdi u>> 1).b & 1) == 0)
    char var_67_1 = 0

if (((rdi u>> 1).b & 1) != 0 || (*(arg1 + 0x20) & 1) == 0)
    char var_67_2 = 1

if (rsi == 0)
    int64_t var_60_2 = 0
else
    void* var_60_1 = &arg4[0xe]

char* var_48_1 = arg9
void* var_40_1 = arg1 + 0x28
void* var_38_1 = arg1 + 0x38
int64_t* rax_13 = arg6
int64_t* var_30_1 = rax_13
int64_t* var_98 = rax_13
int64_t var_90_1 = *arg4
void* var_88_1 = &arg4[4]
char* var_50_1 = arg8
int32_t var_7c_1 = *(arg1 + 0x40) - 1
int64_t var_28_1 = 0
arg6.d = 0
int32_t var_80_1 = 0
int32_t var_78_1 = 0
int16_t var_74_1 = 0
(*(*arg7 + 0x168))(arg7, &arg6)

if (var_68 != 0)
    arg10 = 0xabadf00d
    int64_t* rdx_4 = arg7[1]
    int32_t* r8_2 = *rdx_4
    
    if (&r8_2[1] u> rdx_4[1])
        int32_t* rdx_5 = &arg10
        
        if ((*(arg7 + 0x29) & 0x20) != 0)
            sub_140b54070(arg7, rdx_5, arg5)
        else
            (*(*arg7 + 0x150))(arg7, rdx_5, 4)
    else
        arg10 = *r8_2
        *rdx_4 += 4

if (sub_1422cd720(&var_68, &var_98, arg5) != 0 && 0 == arg6.w)
    return 1

return 0
