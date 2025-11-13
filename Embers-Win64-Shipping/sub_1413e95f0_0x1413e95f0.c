// 函数: sub_1413e95f0
// 地址: 0x1413e95f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_40 = arg2
char rax = sub_140a80f40()

if (rax != 0)
    sub_1413e9700(&data_143f02b98, arg1, arg2, arg3)
else if (data_143f138f4 != rax)
label_1413e966c:
    void var_30
    void** rax_2 = sub_1413dcad0(&var_30, nullptr, 0xff)
    void* rcx_1 = *rax_2
    *(rcx_1 + 0x10) = arg1.o
    *(rcx_1 + 0x20) = arg3
    void* rcx_2 = *rax_2
    int32_t r8_1 = rax_2[2].d
    int64_t* rdx_1 = rax_2[1]
    int64_t* rbx_1 = *(rcx_2 + 0x30)
    int64_t* arg_10 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_10
    
    sub_140778000(rcx_2, rdx_1, r8_1, 1)
    
    if (rbx_1 != 0)
        int32_t rax_3 = *rdi_1
        *rdi_1 -= 1
        
        if (rax_3 == 1)
            sub_140a2f6e0(arg_10)
else if (data_143de5480 == rax)
    sub_1413e9700(&data_143f02b98, arg1, arg2, arg3)
else
    uint32_t rax_1
    rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_1.b == 0)
        goto label_1413e966c
    
    sub_1413e9700(&data_143f02b98, arg1, arg2, arg3)

sub_1419a21e0(0)
int32_t result = *(arg2 + 0x20c)
arg3[2] = result
return result
