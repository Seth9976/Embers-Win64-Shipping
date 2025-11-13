// 函数: sub_1428a4f10
// 地址: 0x1428a4f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = sub_1428a50d0()

if (rax != 0)
    int32_t rax_1 = *(rax + 0x204)
    
    if (rax_1 != *(rax + 0x200))
        int32_t rax_3 = (rax_1 + 1) & 0x8000000f
        
        if (rax_3 s< 0)
            rax_3 = ((rax_3 - 1) | 0xfffffff0) + 1
        
        int64_t rcx = sx.q(rax_3)
        int32_t r13_1 = *(rax + (rcx << 2) + 0x40)
        *(rax + 0x204) = rax_3
        *(rax + ((rcx + 0x10) << 2)) = 0
        
        if (arg1 != 0 && arg2 != 0)
            void* rax_6 = *(rax + (rcx << 3) + 0x140)
            
            if (rax_6 != 0)
                *arg1 = rax_6
                *arg2 = *(rax + (rcx << 2) + 0x1c0)
            else
                *arg1 = &data_1434eb494
                *arg2 = 0
        
        if (arg3 != 0)
            char* rax_8 = *(rax + ((rcx + 0x10) << 3))
            
            if (rax_8 != 0)
                *arg3 = rax_8
                
                if (arg4 != 0)
                    *arg4 = *(rax + (rcx << 2) + 0x100)
            else
                *arg3 = &data_1437020ab
                
                if (arg4 != 0)
                    *arg4 = 0
        else
            void* rsi_1 = rax + (rcx << 2)
            
            if ((*(rsi_1 + 0x100) & 1) != 0)
                sub_1428a6780(*(rax + ((rcx + 0x10) << 3)))
                *(rax + ((rcx + 0x10) << 3)) = arg3
            
            *(rsi_1 + 0x100) = 0
        
        return zx.q(r13_1)

return 0
