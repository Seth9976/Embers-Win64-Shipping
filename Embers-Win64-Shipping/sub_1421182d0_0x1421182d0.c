// 函数: sub_1421182d0
// 地址: 0x1421182d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg2
int64_t var_50 = *(arg1 + 0x140)
int64_t var_38 = arg2[1].q

if (sub_140a80f40() != 0)
    return sub_14211c380(&var_50)

if (data_143f138f4 == 0)
    uint32_t rax_4
    
    if (data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_4.b != 0)
        int128_t var_30 = var_50.o
        int128_t var_20 = zmm0
        return sub_14211c380(&var_30)

void var_68
int64_t* rax_6 = sub_142122ab0(&var_68, nullptr, 0xff)
void* rcx_3 = *rax_6
*(rcx_3 + 0x10) = var_50.o
*(rcx_3 + 0x20) = zmm0
void* rcx_4 = *rax_6
int32_t r8 = rax_6[2].d
int64_t* rdx_2 = rax_6[1]
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
