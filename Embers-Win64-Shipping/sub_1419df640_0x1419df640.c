// 函数: sub_1419df640
// 地址: 0x1419df640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = *arg2
int64_t* rdx = arg1[1]
char* rcx = *rdx

if (&rcx[1] u> rdx[1])
    (*(*arg1 + 0x150))(arg1, rbx, 1)
else
    *rbx = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 1

if ((arg1[5].b & 1) != 0)
    char rax_4 = *rbx
    void*** rax_5
    
    if (rax_4 == 1)
        rax_5 = j_sub_140a82f30(0x10)
        
        if (rax_5 == 0)
        label_1419df6e5:
            rax_5 = nullptr
            goto label_1419df6e7
        
        *rax_5 = &data_143013818
        rax_5[1] = 0
    label_1419df6e7:
        int64_t* rcx_2 = *(rbx + 8)
        
        if (rcx_2 != rax_5)
            *(rbx + 8) = rax_5
            
            if (rcx_2 != 0)
                (**rcx_2)(rcx_2, 1)
    else if (rax_4 == 2)
        rax_5 = j_sub_140a82f30(0x28)
        
        if (rax_5 == 0)
            goto label_1419df6e5
        
        *rax_5 = &data_1430103e0
        __builtin_memset(&rax_5[1], 0, 0x18)
        rax_5[4].b = 1
        goto label_1419df6e7

int64_t* rcx_3 = *(rbx + 8)

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3, arg1)

return arg1
