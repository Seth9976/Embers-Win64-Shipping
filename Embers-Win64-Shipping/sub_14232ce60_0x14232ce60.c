// 函数: sub_14232ce60
// 地址: 0x14232ce60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *arg1
int32_t i = 0

if (rax[1].d s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        int64_t rdx_1 = *rax
        int64_t* rcx = *(rbx_1 + rdx_1)
        
        if (rcx != 0)
            (*(*rcx + 0x18))(rcx, 1)
            rdx_1 = **arg1
        
        *(rbx_1 + rdx_1) = 0
        i += 1
        rax = *arg1
        rbx_1 = &rbx_1[1]
    while (i s< rax[1].d)

int64_t* result = arg1[1]
int64_t* rcx_1 = *result

if (rcx_1 != 0)
    (*(*rcx_1 + 0x18))(rcx_1, 1)
    result = arg1[1]

*result = 0
return result
