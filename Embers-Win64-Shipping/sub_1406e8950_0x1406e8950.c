// 函数: sub_1406e8950
// 地址: 0x1406e8950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = arg3

if (arg1 != arg2)
    int64_t* rbx_1 = arg1 + 0x40
    int64_t* r14_2 = arg3 - arg1
    
    do
        *result = rbx_1[-8].d
        *(r14_2 + rbx_1) = 0
        int64_t* rcx = *rbx_1
        
        if (rcx != 0)
            if (rcx != &rbx_1[-7])
                *(r14_2 + rbx_1) = rcx
                *rbx_1 = 0
            else
                int64_t rax_3
                int64_t rdx_2
                rax_3, rdx_2 = (*(*rcx + 8))(rcx, &r14_2[-7] + rbx_1)
                *(r14_2 + rbx_1) = rax_3
                int64_t* rcx_1 = *rbx_1
                
                if (rcx_1 != 0)
                    rdx_2.b = rcx_1 != &rbx_1[-7]
                    (*(*rcx_1 + 0x20))(rcx_1, rdx_2)
                    *rbx_1 = 0
        
        rbx_1 = &rbx_1[9]
        result = &result[0x12]
    while (&rbx_1[-8] != arg2)

return result
