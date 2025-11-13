// 函数: sub_141318f20
// 地址: 0x141318f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* arg_20 = arg4
wchar16 const (** rsi)[0xb] = &data_1439b6798
char r13 = arg7
void* rbx = arg1 + 0x24
void* rdi = arg1 + 0xc
int64_t i_1 = 5
*arg1 = *arg5
arg1[1].d = arg5[1].d
*(arg1 + 0xc) = *(arg5 + 0xc)
arg1[2].d = arg5[2].d
*(arg1 + 0x14) = *(arg5 + 0x14)
int32_t result
int64_t i

do
    wchar16 const (* var_60)[0xb] = *rsi
    int64_t var_58_1 = *(rdi - 0xc)
    int32_t var_50_1 = *(rdi - 4)
    int32_t var_4c_1 = *rdi
    int32_t var_48_1 = *(rdi + 4)
    int32_t var_44_1 = *(rdi + 8)
    char var_40_1 = arg6
    char var_3f_1 = 0
    int32_t var_3c_1 = 0
    void var_78
    int128_t* rax_12 = sub_1413060b0(&var_78, arg2, arg3, &var_60)
    *(rbx - 0xc) = *rax_12
    *(rbx - 4) = *(rax_12 + 8)
    *rbx = *(rax_12 + 0xc)
    *(rbx + 4) = rax_12[1].d
    result = *(rax_12 + 0x14)
    *(rbx + 8) = result
    
    if (r13 != 0)
        r13 = 0
        int64_t zmm1_1 = *(rbx + 4)
        int128_t var_98 = *(rbx - 0xc)
        int64_t var_88_1 = zmm1_1
        void**** rax_13 = sub_141304460(&var_78, arg2, arg3, arg4, &var_98)
        *(rbx - 0xc) = *rax_13
        *(rbx - 4) = rax_13[1].d
        *rbx = *(rax_13 + 0xc)
        *(rbx + 4) = rax_13[2].d
        result = *(rax_13 + 0x14)
        *(rbx + 8) = result
    
    rdi += 0x18
    rsi = &rsi[1]
    rbx += 0x18
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[0x12].b = 1
return result
