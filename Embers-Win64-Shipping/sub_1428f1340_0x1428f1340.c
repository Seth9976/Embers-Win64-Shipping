// 函数: sub_1428f1340
// 地址: 0x1428f1340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 == 0)
    if (arg1 != 0)
        void* rax_1 = *(arg1 + 0x138)
        
        if (rax_1 != 0)
            void* rcx = *(rax_1 + 0x10)
            
            if (rcx != 0)
                sub_1428c3460(rcx)
                *(*(arg1 + 0x138) + 0x10) = arg2
    
    return 1

if (arg1 != 0)
    void* rdi_1 = *(arg1 + 0x138)
    
    if (rdi_1 != 0)
    label_1428f13d6:
        int32_t* rax_5 = *(rdi_1 + 0x10)
        
        if (rax_5 != 0)
            return sub_1428f2d50(rax_5, arg2, arg3)
        
        rax_5 = sub_1428c3670()
        *(rdi_1 + 0x10) = rax_5
        
        if (rax_5 != 0)
            return sub_1428f2d50(rax_5, arg2, arg3)
    else
        void* rax_4 = sub_1428db530(&data_143516fb0)
        *(arg1 + 0x138) = rax_4
        rdi_1 = rax_4
        
        if (rax_4 != 0)
            goto label_1428f13d6

return 0
