// 函数: sub_14236b4e0
// 地址: 0x14236b4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg2 + 0xe8)
void* var_68 = arg2
int32_t r10 = arg4[0x10].d

if (r10 u>= rcx)
    r10 = rcx - 1

int32_t r9
int32_t var_58 = r9
int32_t var_5c = r10
int128_t var_50 = arg3.o
int128_t var_40 = arg5.o

if (sub_140a80f40() != 0)
    return sub_142354ed0(&var_50)

if (data_143f138f4 == 0)
    uint32_t rax_5
    
    if (data_143de5480 != 0)
        rax_5.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_5.b != 0)
        int128_t var_30 = arg3.o
        int128_t var_20 = arg5.o
        return sub_142354ed0(&var_30)

void var_88
void** rax_7 = sub_14235f090(&var_88, nullptr, 0xff)
void* rcx_4 = *rax_7
*(rcx_4 + 0x10) = arg3.o
*(rcx_4 + 0x20) = arg5.o
void* rcx_5 = *rax_7
int32_t r8 = rax_7[2].d
int64_t* rdx_2 = rax_7[1]
int64_t* rbx = *(rcx_5 + 0x38)
arg4 = rbx
void* rdi = &rbx[9]

if (rbx != 0)
    *rdi += 1
    rbx = arg4

int32_t result = sub_1407c96b0(rcx_5, rdx_2, r8, 1)

if (rbx != 0)
    result = *rdi
    *rdi -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg4)

return result
