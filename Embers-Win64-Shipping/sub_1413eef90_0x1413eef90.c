// 函数: sub_1413eef90
// 地址: 0x1413eef90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x1b0)
char var_30 = arg3
int32_t result

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        if (data_143de5480 == 0)
            goto label_1413eefbc
        
        uint32_t rax_2
        rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_2.b != 0)
            goto label_1413eefbc
    
    void var_28
    int64_t* rax_3 = sub_1413dcec0(&var_28, nullptr, 0xff)
    *(*rax_3 + 0x10) = rbx.o
    void* rcx_3 = *rax_3
    int32_t r8_1 = rax_3[2].d
    int64_t* rdx = rax_3[1]
    int64_t* rbx_1 = *(rcx_3 + 0x28)
    int64_t* arg_10 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_10
    
    result = sub_1405e48c0(rcx_3, rdx, r8_1, 1)
    
    if (rbx_1 != 0)
        result = *rdi_1
        *rdi_1 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_10)
else
label_1413eefbc:
    result = sub_1419a2d00()
    
    if (data_1439b6afc s> 0)
        result = sub_1419a2570(&data_1439c9260)
    
    if (arg3 != 0 && rbx != 0)
        jump(*(*rbx + 0x250))

return result
