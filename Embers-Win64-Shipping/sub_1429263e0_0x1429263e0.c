// 函数: sub_1429263e0
// 地址: 0x1429263e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t r14 = sx.q(*(sub_140687ad0(arg1) + 4))

if (arg4 u>= r14)
    char* rbx_1 = arg3
    
    do
        int32_t rax_1 = sub_142890eb0(arg1)
        int32_t* rax_2 = sub_142890ec0(arg1)
        uint8_t* rdx = arg2 - arg3 + rbx_1
        
        if (rax_1 == 0)
            sub_14295b840(rbx_1, rdx, rax_2)
        else
            sub_14295c5e0(rbx_1, rdx, rax_2)
        
        rbx_1 = &rbx_1[r14]
    while (rbx_1 - arg3 u<= arg4 - r14)

return 1
