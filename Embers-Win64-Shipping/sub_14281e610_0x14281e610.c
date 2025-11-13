// 函数: sub_14281e610
// 地址: 0x14281e610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t* rdi_1 = *arg1
    int64_t rbp_1 = arg1[1]
    
    if (rdi_1 != rbp_1)
        do
            int64_t* rcx = *rdi_1
            (*(*rcx + 8))(rcx)
            rdi_1 = &rdi_1[1]
        while (rdi_1 != rbp_1)
        
        rdi_1 = *arg1
    
    sub_14281d950(rdi_1, arg1[1])
    arg1[1] = *arg1
    sub_14281dfa0(arg1, arg2)

return arg1
