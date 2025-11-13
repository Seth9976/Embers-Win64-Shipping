// 函数: sub_14082dff0
// 地址: 0x14082dff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
void* r13 = *(arg1 + 8)

if (r13 == 0)
    return 

void* rax = *(r13 + 0x18)

if (*(r13 + 0x10) != 0)
    rax = *(rax + 0x140)

if (rax == 0 || *(rax + 0xb0) u< 2 || *(r13 + 0x30) == 0 || data_14396f074 == 0
        || data_1439c7a0c == 0)
    return 

int32_t i = 0

if (arg2[1].d s<= 0)
    return 

int32_t rbx_1 = 1
int64_t* r15_1 = nullptr

do
    if ((arg4 & rbx_1) != 0)
        void* rsi_1 = *(r15_1 + *arg2)
        int64_t* rax_2 = sub_140820290(arg5)
        int64_t var_50_1 = 0
        int32_t var_48_1 = 0
        int128_t var_68
        __builtin_memset(&var_68, 0, 0x14)
        void*** rax_3 = sub_1408125f0(arg5)
        int128_t* var_88_1 = &var_68
        sub_140822b60(arg1, rsi_1, arg3, arg6, arg5, &rax_3[0x3c])
        sub_14083d7b0(arg1, rsi_1, arg3, arg6, arg5, r13, &var_68, rax_2, rax_3)
        sub_1422dd2a0(arg5, i, rax_2)
        arg4 = arg_20
    
    i += 1
    rbx_1 = rol.d(rbx_1, 1)
    r15_1 = &r15_1[1]
while (i s< arg2[1].d)
