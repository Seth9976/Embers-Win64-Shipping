// 函数: sub_1413f11a0
// 地址: 0x1413f11a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg2 + 0x220)

if (rbx == 0)
    return 

int64_t var_30_1 = rbx
char rax_1 = sub_140a80f40()

if (rax_1 != 0)
    sub_1413cd530(arg1, rbx, 0)
else if (data_143f138f4 != rax_1)
label_1413f121d:
    void var_28
    int64_t* rax_3 = sub_1413db870(&var_28, nullptr, 0xff)
    *(*rax_3 + 0x10) = arg1.o
    void* rcx_3 = *rax_3
    int32_t r8_1 = rax_3[2].d
    int64_t* rdx_1 = rax_3[1]
    int64_t* rbx_1 = *(rcx_3 + 0x28)
    int64_t* arg_18 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_18
    
    sub_1405e48c0(rcx_3, rdx_1, r8_1, 1)
    
    if (rbx_1 != 0)
        int32_t rax = *rdi_1
        *rdi_1 -= 1
        
        if (rax == 1)
            sub_140a2f6e0(arg_18)
else if (data_143de5480 == rax_1)
    sub_1413cd530(arg1, rbx, 0)
else
    uint32_t rax_2
    rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_2.b == 0)
        goto label_1413f121d
    
    sub_1413cd530(arg1, rbx, 0)

*(arg2 + 0x220) = 0
