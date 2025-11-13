// 函数: sub_141f5b060
// 地址: 0x141f5b060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141edf430(arg1)
int64_t rdx = *(arg1 + 0x288)

if (rdx == 0)
    return 

void* rax_1 = *(arg1 + 0xa8)

if (rax_1 == 0)
    rax_1 = sub_141ee69e0(arg1)
    rdx = *(arg1 + 0x288)

int64_t* rcx_1 = *(rax_1 + 0x1b0)
(*(*rcx_1 + 0x1c0))(rcx_1, rdx)
int64_t rbx_1 = *(arg1 + 0x288)

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        if (data_143de5480 == 0)
            goto label_141f5b0c3
        
        uint32_t rax_4
        rax_4.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_4.b != 0)
            goto label_141f5b0c3
        
        goto label_141f5b115
    
label_141f5b115:
    void var_28
    int64_t* rax_5 = sub_141f5a110(&var_28, nullptr, 0xff)
    *(*rax_5 + 0x10) = rbx_1
    void* rcx_5 = *rax_5
    int32_t r8_1 = rax_5[2].d
    int64_t* rdx_2 = rax_5[1]
    int64_t* rbx_2 = *(rcx_5 + 0x20)
    int64_t* arg_10 = rbx_2
    int32_t* rsi_1 = &rbx_2[9]
    
    if (rbx_2 != 0)
        *rsi_1 += 1
        rbx_2 = arg_10
    
    sub_1405a5630(rcx_5, rdx_2, r8_1, 1)
    
    if (rbx_2 != 0)
        int32_t rax = *rsi_1
        *rsi_1 -= 1
        
        if (rax == 1)
            sub_140a2f6e0(arg_10)
else
label_141f5b0c3:
    
    if (rbx_1 != 0)
        j_sub_140a74f90(rbx_1)

*(arg1 + 0x288) = 0
