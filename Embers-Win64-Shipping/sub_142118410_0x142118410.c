// 函数: sub_142118410
// 地址: 0x142118410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = arg2[1].d
int128_t var_48 = *arg2
int64_t var_50 = *(arg1 + 0x140)
int32_t var_38 = zmm1.d

if (sub_140a80f40() != 0)
    return sub_14211d220(&var_50)

if (data_143f138f4 == 0)
    uint32_t rax_3
    
    if (data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_3.b != 0)
        int128_t var_30 = var_50.o
        int128_t var_20 = var_48
        return sub_14211d220(&var_30)

void var_68
int64_t* rax_5 = sub_142122c00(&var_68, nullptr, 0xff)
void* rcx_3 = *rax_5
*(rcx_3 + 0x10) = var_50.o
*(rcx_3 + 0x20) = var_48
void* rcx_4 = *rax_5
int32_t r8 = rax_5[2].d
int64_t* rdx_2 = rax_5[1]
int64_t* rbx = *(rcx_4 + 0x38)
int64_t* arg_10 = rbx
int32_t* rdi = &rbx[9]

if (rbx != 0)
    *rdi += 1
    rbx = arg_10

int32_t result = sub_1407c96b0(rcx_4, rdx_2, r8, 1)

if (rbx != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_10)

return result
