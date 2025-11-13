// 函数: sub_1423790e0
// 地址: 0x1423790e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_40 = arg2
int64_t* var_48 = arg1 - 0x10

if (sub_140a80f40() != 0)
    int32_t rbx = arg2[2].d
    int32_t rax_2 = (**(arg1 - 0x10))(arg1 - 0x10)
    int32_t rax_4
    int32_t rbx_1
    
    if (rax_2 == rbx)
        rbx_1 = *(arg2 + 0x14)
        rax_4 = (*(*(arg1 - 0x10) + 8))(arg1 - 0x10)
    
    if (rax_2 != rbx || rax_4 != rbx_1)
        int32_t rax_5 = arg2[2].d
        *(arg1 + 0x24) = *(arg2 + 0x14)
        *(arg1 + 0x20) = rax_5
        sub_1419ba620(arg1 + 0x10)
    
    (*(*arg1 + 0x28))(arg1, arg2)
    int64_t rcx_5 = *arg2
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    return j_sub_140a74f90(arg2) __tailcall

if (data_143f138f4 == 0)
    uint32_t rax_8
    
    if (data_143de5480 != 0)
        rax_8.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_8.b != 0)
        var_48.o = var_48.o
        return sub_142355420(&var_48)

void var_38
int64_t* rax_10 = sub_14235edf0(&var_38, nullptr, 0xff)
*(*rax_10 + 0x10) = var_48.o
void* rcx_11 = *rax_10
int32_t r8_1 = rax_10[2].d
int64_t* rdx_4 = rax_10[1]
int64_t* rbx_2 = *(rcx_11 + 0x28)
int64_t* arg_10 = rbx_2
int32_t* rdi_1 = &rbx_2[9]

if (rbx_2 != 0)
    *rdi_1 += 1
    rbx_2 = arg_10

int32_t result = sub_1405e48c0(rcx_11, rdx_4, r8_1, 1)

if (rbx_2 != 0)
    result = *rdi_1
    *rdi_1 -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_10)

return result
