// 函数: sub_1413cc560
// 地址: 0x1413cc560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[0x44] != 0)
    return 

int64_t rax_2 = (*(*arg2 + 0x538))(arg2)
arg2[0x44] = rax_2
int64_t var_30_1 = rax_2
char rax_3 = sub_140a80f40()

if (rax_3 != 0)
    sub_1413cd530(arg1, rax_2, 1)
else if (data_143f138f4 != rax_3)
label_1413cc5e4:
    void var_28
    int64_t* rax_5 = sub_1413da600(&var_28, nullptr, 0xff)
    *(*rax_5 + 0x10) = arg1.o
    void* rcx_3 = *rax_5
    int32_t r8_2 = rax_5[2].d
    int64_t* rdx = rax_5[1]
    int64_t* rbx_1 = *(rcx_3 + 0x28)
    int64_t* arg_18 = rbx_1
    int32_t* rdi_2 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_2 += 1
        rbx_1 = arg_18
    
    sub_1405e48c0(rcx_3, rdx, r8_2, 1)
    
    if (rbx_1 != 0)
        int32_t rax = *rdi_2
        *rdi_2 -= 1
        
        if (rax == 1)
            sub_140a2f6e0(arg_18)
else if (data_143de5480 == rax_3)
    sub_1413cd530(arg1, rax_2, 1)
else
    uint32_t rax_4
    rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_4.b == 0)
        goto label_1413cc5e4
    
    sub_1413cd530(arg1, rax_2, 1)
