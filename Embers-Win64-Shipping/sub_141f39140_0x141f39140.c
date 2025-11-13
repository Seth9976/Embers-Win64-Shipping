// 函数: sub_141f39140
// 地址: 0x141f39140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141edf430(arg1)

if (*(arg1 + 0x2d0) == 0)
    return 

void* rax_1 = *(arg1 + 0xa8)

if (rax_1 == 0)
    rax_1 = sub_141ee69e0(arg1)

int64_t* rcx_1 = *(rax_1 + 0x1b0)
(*(*rcx_1 + 0xf0))(rcx_1, arg1)
int64_t rbx_1 = *(arg1 + 0x2d0)
char rax_3 = sub_140a80f40()

if (rax_3 != 0)
    j_sub_140a74f90(rbx_1)
else if (data_143f138f4 != rax_3)
label_141f391d1:
    void var_28
    int64_t* rax_5 = sub_141f387e0(&var_28, nullptr, 0xff)
    *(*rax_5 + 0x10) = rbx_1
    void* rcx_4 = *rax_5
    int32_t r8_1 = rax_5[2].d
    int64_t* rdx_2 = rax_5[1]
    int64_t* rbx_2 = *(rcx_4 + 0x20)
    int64_t* arg_10 = rbx_2
    int32_t* rsi_1 = &rbx_2[9]
    
    if (rbx_2 != 0)
        *rsi_1 += 1
        rbx_2 = arg_10
    
    sub_1405a5630(rcx_4, rdx_2, r8_1, 1)
    
    if (rbx_2 != 0)
        int32_t rax = *rsi_1
        *rsi_1 -= 1
        
        if (rax == 1)
            sub_140a2f6e0(arg_10)
else if (data_143de5480 == rax_3)
    j_sub_140a74f90(rbx_1)
else
    uint32_t rax_4
    rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_4.b == 0)
        goto label_141f391d1
    
    j_sub_140a74f90(rbx_1)

*(arg1 + 0x2d0) = 0
