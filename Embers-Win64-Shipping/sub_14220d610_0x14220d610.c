// 函数: sub_14220d610
// 地址: 0x14220d610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_1 = *arg1 + 0xf0
uint64_t i_1 = 0
int32_t var_30 = 0
sub_142259140(rcx_1, &i_1)
uint64_t i = i_1

for (int64_t rbp = i + (sx.q(var_30) << 3); i != rbp; i += 8)
    void* rsi_1 = *arg1
    void* rax_1 = sub_142217ac0(rsi_1, i)
    
    if (*arg1[1] == rax_1)
        sub_14221f6f0(*(rsi_1 + 0x120), i)
        int64_t r8_1
        r8_1.b = 1
        sub_142266660(arg2, i, r8_1)
        *arg1[2] = 1

if (*arg1[2] != 0)
    void* rbx = *arg1
    sub_142227570(rbx)
    sub_1422273b0(rbx)
    void* arg_8 = rbx
    void** var_20_1 = &arg_8
    int64_t (* var_28)(int64_t* arg1, int64_t* arg2) = sub_142212290
    sub_14226a4e0(rbx + 0xf0, &var_28)

int64_t* result = arg1[1]
*(*result + 0xa0) = 0
uint64_t i_2 = i_1

if (i_2 == 0)
    return result

return sub_140a74f90(i_2)
