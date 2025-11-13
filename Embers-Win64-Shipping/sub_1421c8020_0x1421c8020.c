// 函数: sub_1421c8020
// 地址: 0x1421c8020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int32_t arg_18 = arg3
char* arg_38
char* r8 = arg_38
void* rcx = *(arg1 + 0x28)
void* arg_8 = rcx
int32_t r9_1 = *(arg1 + 0x120) - *(arg1 + 0x118)

if (arg2 s<= r9_1)
    r9_1 = arg2

int32_t arg_10 = r9_1

if (r8 != 0 && (*r8 & 8) != 0 && r9_1 s> 0)
    int64_t* rcx_1 = *(rcx + 0x58)
    (*(*rcx_1 + 0x360))(rcx_1, arg1)

void* var_48 = arg1
int32_t* var_40 = &arg_18
int32_t* var_38 = &arg_10
int32_t* var_30 = &arg_20
int64_t var_28 = arg5
int64_t var_20 = arg6
void** var_18 = &arg_8
char** var_10 = &arg_38
return sub_1421abbe0(&var_48, *(*(arg1 + 0x10) + 0x37) & 1)
