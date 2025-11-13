// 函数: sub_140806b20
// 地址: 0x140806b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg1 + 0x28)
int64_t* rcx = *(arg1 + 0x30)
int128_t zmm6 = zx.o(0)
void* rcx_2

if (rcx != 0)
    (*(*rcx + 0x338))(rcx)
    int64_t* rcx_1 = *(arg1 + 0x30)
    zmm6 = zx.o(0)
    (*(*rcx_1 + 0x340))(rcx_1)
    rcx_2 = *(arg1 + 0x30)

int64_t rax_3

if (rcx == 0 || rcx_2 == 0)
    rax_3 = 0
else
    rax_3 = *(rcx_2 + 0x78)

int32_t var_58 = zmm6.d
int32_t var_54 = 0
int64_t var_68 = rdi
int64_t var_60 = rax_3

if (sub_140a80f40() != 0)
    return sub_1407e5630(&var_68)

if (data_143f138f4 == 0)
    uint32_t rax_5
    
    if (data_143de5480 != 0)
        rax_5.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_5.b != 0)
        int128_t var_50 = var_68.o
        int64_t var_40_1 = var_58.q
        return sub_1407e5630(&var_50)

void var_38
int64_t* rax_6 = sub_1407eb3a0(&var_38, nullptr, 0xff)
void* rcx_6 = *rax_6
*(rcx_6 + 0x10) = var_68.o
*(rcx_6 + 0x20) = var_58.q
void* rcx_7 = *rax_6
int32_t r8_1 = rax_6[2].d
int64_t* rdx_2 = rax_6[1]
int64_t* rbx_1 = *(rcx_7 + 0x30)
int64_t* arg_10 = rbx_1
int32_t* rdi_1 = &rbx_1[9]

if (rbx_1 != 0)
    *rdi_1 += 1
    rbx_1 = arg_10

int32_t result = sub_140778000(rcx_7, rdx_2, r8_1, 1)

if (rbx_1 != 0)
    result = *rdi_1
    *rdi_1 -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_10)

return result
