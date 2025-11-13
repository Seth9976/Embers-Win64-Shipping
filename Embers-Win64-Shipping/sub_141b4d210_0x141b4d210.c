// 函数: sub_141b4d210
// 地址: 0x141b4d210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    void* rbx = arg1 + 0x280
    int64_t rsi = sx.q(*(rbx + 0x68))
    int32_t rax = (rsi + 1).d
    *(rbx + 0x68) = rax
    
    if (rax s> *(rbx + 0x6c))
        sub_141b65420(rbx, rsi.d)
    
    void* rax_1 = *(rbx + 0x60)
    
    if (rax_1 != 0)
        rbx = rax_1
    
    int64_t rcx_2 = rsi * 6
    *(rbx + (rcx_2 << 3)) = *arg2
    *(rbx + (rcx_2 << 3) + 0x10) = arg2[1]
    *(rbx + (rcx_2 << 3) + 0x20) = arg2[2]
    return rax_1

int128_t zmm1 = arg2[1]
int128_t var_70 = *arg2
int128_t var_50 = arg2[2]

if (sub_140a80f40() != 0)
    int64_t* rcx_3 = var_50.q
    int64_t r9 = *rcx_3
    return (*(r9 + 0x28))(rcx_3, &data_143f02b98, &var_70, r9)

if (data_143f138f4 == 0)
    uint32_t rax_4
    
    if (data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_4.b != 0)
        int128_t var_40 = var_70
        int128_t var_30 = zmm1
        int64_t* var_20 = var_50.q
        int64_t r9_1 = *var_20
        return (*(r9_1 + 0x28))(var_20, &data_143f02b98, &var_40, r9_1)

void var_88
int64_t* rax_6 = sub_141b52970(&var_88, nullptr, 0xff)
void* rcx_6 = *rax_6
*(rcx_6 + 0x10) = var_70
*(rcx_6 + 0x20) = zmm1
*(rcx_6 + 0x30) = var_50
void* rcx_7 = *rax_6
int32_t r8_2 = rax_6[2].d
int64_t* rdx_1 = rax_6[1]
int64_t* rbx_1 = *(rcx_7 + 0x48)
int64_t* arg_20 = rbx_1
int32_t* rdi_1 = &rbx_1[9]

if (rbx_1 != 0)
    *rdi_1 += 1
    rbx_1 = arg_20

int32_t rax_7 = sub_141b66b40(rcx_7, rdx_1, r8_2, 1)

if (rbx_1 != 0)
    rax_7 = *rdi_1
    *rdi_1 -= 1
    
    if (rax_7 == 1)
        return sub_140a2f6e0(arg_20)

return rax_7
