// 函数: sub_141901a20
// 地址: 0x141901a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = *(arg1 + 0x58)
char var_40 = data_1439c7490

if (sub_140a80f40() != 0)
    uint64_t rax_3 = sub_1418f4e20(&var_48)
    data_1439c7490 = 0
    return rax_3

if (data_143f138f4 == 0)
    uint32_t rax_4
    
    if (data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_4.b != 0)
        int128_t var_38 = var_48.o
        uint64_t rax_5 = sub_1418f4e20(&var_38)
        data_1439c7490 = 0
        return rax_5

void var_28
int64_t* rax_6 = sub_1418f7e40(&var_28, nullptr, 0xff)
*(*rax_6 + 0x10) = var_48.o
void* rcx_4 = *rax_6
int32_t r8 = rax_6[2].d
int64_t* rdx_2 = rax_6[1]
int64_t* rbx = *(rcx_4 + 0x28)
int64_t* arg_18 = rbx
int32_t* rdi = &rbx[9]

if (rbx != 0)
    *rdi += 1
    rbx = arg_18

int32_t rax_7 = sub_1405e48c0(rcx_4, rdx_2, r8, 1)

if (rbx != 0)
    rax_7 = *rdi
    *rdi -= 1
    
    if (rax_7 == 1)
        rax_7 = sub_140a2f6e0(arg_18)

data_1439c7490 = 0
return rax_7
