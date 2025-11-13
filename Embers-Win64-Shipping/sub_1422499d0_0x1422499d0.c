// 函数: sub_1422499d0
// 地址: 0x1422499d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x50)

if (rbx == 0)
    return 

int64_t arg_8 = rbx

if (sub_140a80f40() != 0)
    sub_14223ef20(&arg_8)
    *(arg1 + 0x50) = 0
    return 

if (data_143f138f4 == 0)
    uint32_t rax_3
    
    if (data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_3.b != 0)
        int64_t arg_18 = rbx
        sub_14223ef20(&arg_18)
        *(arg1 + 0x50) = 0
        return 

void var_38
int64_t* rax_5 = sub_142244860(&var_38, nullptr, 0xff)
*(*rax_5 + 0x10) = rbx
void* rcx_4 = *rax_5
int32_t r8_1 = rax_5[2].d
int64_t* rdx_3 = rax_5[1]
int64_t* rbx_1 = *(rcx_4 + 0x20)
int64_t* arg_10 = rbx_1
int32_t* rdi_1 = &rbx_1[9]

if (rbx_1 != 0)
    *rdi_1 += 1
    rbx_1 = arg_10

sub_1405a5630(rcx_4, rdx_3, r8_1, 1)

if (rbx_1 != 0)
    int32_t rax = *rdi_1
    *rdi_1 -= 1
    
    if (rax == 1)
        sub_140a2f6e0(arg_10)

*(arg1 + 0x50) = 0
