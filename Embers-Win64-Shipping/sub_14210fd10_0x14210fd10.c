// 函数: sub_14210fd10
// 地址: 0x14210fd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int64_t* r10_2 = *(arg1 + 0x490)
    int64_t* rcx_1 = r10_2
    void* rdx_3 = &r10_2[sx.q(*(arg1 + 0x498))]
    
    if (r10_2 != rdx_3)
        do
            if (*rcx_1 == arg3)
                return zx.q(((rcx_1 - r10_2) s>> 3).d)
            
            rcx_1 = &rcx_1[1]
        while (rcx_1 != rdx_3)
else if (arg2 == 1)
    int64_t* r10_1 = *(arg1 + 0x4a0)
    int64_t* rdx = r10_1
    void* rcx = &r10_1[sx.q(*(arg1 + 0x4a8))]
    
    if (r10_1 != rcx)
        do
            if (*rdx == arg3)
                return zx.q(((rdx - r10_1) s>> 3).d)
            
            rdx = &rdx[1]
        while (rdx != rcx)

return 0xffffffff
