// 函数: sub_1426e01a0
// 地址: 0x1426e01a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[0x13].d & 0x6000) != 0)
    uint8_t rax = sub_1426b6270(arg2, sub_1426b2820(arg1), zx.d(*(arg1 + 0x59)))
    char rcx_1 = *(arg1 + 0x64)
    
    if (rax == 0)
        if (((rcx_1 - 1) & 0xfd) != 0)
            return 0
        
        rcx_1 = 0
        uint8_t rax_7 = (arg1[0x13].d u>> 0xd).b
        
        if ((rax_7 & 3) != 0)
            void* rdx_3 = arg1[0xd]
            
            if (rdx_3 != 0 && (rax_7 & 2) != 0)
                *(rdx_3 + 0x250)
                rcx_1 = sub_142730550(arg1, rdx_3)
            else if ((rax_7 & 1) != 0)
                rcx_1 = sub_142730500(arg1, arg1[0xe])
        
        if (rcx_1 == ((arg1[0xc].d u>> 7).b & 1))
            return 0
    else
        if (rcx_1 - 2 u> 1)
            return 0
        
        rcx_1 = 0
        uint8_t rax_3 = (arg1[0x13].d u>> 0xd).b
        
        if ((rax_3 & 3) != 0)
            void* rdx_1 = arg1[0xd]
            
            if (rdx_1 != 0 && (rax_3 & 2) != 0)
                *(rdx_1 + 0x250)
                rcx_1 = sub_142730550(arg1, rdx_1)
            else if ((rax_3 & 1) != 0)
                rcx_1 = sub_142730500(arg1, arg1[0xe])
        
        if (rcx_1 != ((arg1[0xc].d u>> 7).b & 1))
            return 0

return 1
