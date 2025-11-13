// 函数: sub_141f765f0
// 地址: 0x141f765f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x3e8) == 0)
    return 

int64_t* rax = sub_141ee6400(arg1)

if (rax != 0 && rax[1].d s<= 1)
    return 

void* rax_1 = *(arg1 + 0x3e8)
int32_t var_50_1 = (*(arg1 + 0x254)).d
int32_t var_48_1 = (*(arg1 + 0x25c)).d
int32_t var_4c_1 = (*(arg1 + 0x258)).d
int32_t var_44 = *(arg1 + 0x260)

if (sub_140a80f40() != 0)
    *(rax_1 + 0xc4) = var_50_1.d
    *(rax_1 + 0xc8) = var_4c_1.d
    *(rax_1 + 0xcc) = var_48_1.d
    int128_t var_78
    sub_140acc920(&var_78, &var_44)
    *(rax_1 + 0xd0) = var_78
    return 

if (data_143f138f4 == 0)
    uint32_t rax_8
    
    if (data_143de5480 != 0)
        rax_8.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_8.b != 0)
        int128_t var_40 = rax_1.o
        int64_t var_30 = var_48_1.q
        *(var_40.q + 0xc4) = var_40:8.d.d
        *(var_40.q + 0xc8) = var_40:0xc.d.d
        *(var_40.q + 0xcc) = var_30.d.d
        int128_t var_68
        sub_140acc920(&var_68, &var_30:4)
        *(var_40.q + 0xd0) = var_68
        return 

void var_28
int64_t* rax_13 = sub_141f5a500(&var_28, nullptr, 0xff)
void* rcx_3 = *rax_13
*(rcx_3 + 0x10) = rax_1.o
*(rcx_3 + 0x20) = var_48_1.q
void* rcx_4 = *rax_13
int32_t r8_1 = rax_13[2].d
int64_t* rdx_3 = rax_13[1]
int64_t* rbx_1 = *(rcx_4 + 0x30)
int64_t* arg_10 = rbx_1
int32_t* rdi_1 = &rbx_1[9]

if (rbx_1 != 0)
    *rdi_1 += 1
    rbx_1 = arg_10

sub_140778000(rcx_4, rdx_3, r8_1, 1)

if (rbx_1 == 0)
    return 

rax = zx.q(*rdi_1)
*rdi_1 -= 1

if (rax.d == 1)
    sub_140a2f6e0(arg_10)
