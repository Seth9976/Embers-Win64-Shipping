// 函数: sub_142118550
// 地址: 0x142118550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x140)
int128_t zmm0 = *arg2
int64_t var_38 = arg2[1].q
int128_t var_48 = zmm0

if (sub_140a80f40() != 0)
    void var_88
    sub_140b4c620(&var_88, &var_48)
    int32_t var_80 = var_48:0xc.d
    char var_7c = var_48:8.b
    return sub_142118820(rax, &var_88, &var_38)

if (data_143f138f4 == 0)
    uint32_t rax_6
    
    if (data_143de5480 != 0)
        rax_6.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_6.b != 0)
        int128_t zmm1 = var_48
        int128_t var_30 = rax.o
        int128_t var_20 = zmm1
        void var_78
        sub_140b4c620(&var_78, &var_30:8)
        int32_t var_70 = var_20:4.d
        char var_6c = var_20.b
        return sub_142118820(var_30.q, &var_78, &var_20:8)

void var_68
int64_t* rax_10 = sub_142122960(&var_68, nullptr, 0xff)
void* rcx_5 = *rax_10
*(rcx_5 + 0x10) = rax.o
*(rcx_5 + 0x20) = var_48
void* rcx_6 = *rax_10
int32_t r8_2 = rax_10[2].d
int64_t* rdx_4 = rax_10[1]
int64_t* rbx = *(rcx_6 + 0x38)
int64_t* arg_10 = rbx
int32_t* rdi = &rbx[9]

if (rbx != 0)
    *rdi += 1
    rbx = arg_10

int32_t result = sub_1407c96b0(rcx_6, rdx_4, r8_2, 1)

if (rbx != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_10)

return result
