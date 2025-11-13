// 函数: sub_1403d0620
// 地址: 0x1403d0620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg2

if (rsi == 0)
    if (arg2[2].d s> 0)
        int64_t i = 0
        
        do
            uint64_t rsi_1 = zx.q(*(arg1 + 0x1c0))
            void* rbx_1 = *(arg2[3] + (i << 3))
            
            if (rsi_1 != 0 && arg1 != 0 && rbx_1 != 0)
                sub_1403cc370(arg1, rbx_1, rsi_1)
                sub_1403be770(arg1, rbx_1, rsi_1.d)
                rbx_1 = *(arg2[3] + (i << 3))
            
            png_free(arg1, rbx_1)
            i += 1
        while (i s< sx.q(arg2[2].d))
    
    if (*(arg2 + 0x14) != 0)
        png_free(arg1, arg2[3])
    
    int32_t rbx_2 = *(arg1 + 0x1c0)
    uint64_t rbx_3 = zx.q(rbx_2 - *(arg1 + 0x178))
    
    if (rbx_2 u> *(arg1 + 0x178) && rbx_3.d != 0)
        void* rsi_2 = *(arg1 + 0x1b8)
        
        if (rsi_2 != 0)
            sub_1403cc370(arg1, rsi_2, rbx_3)
            sub_1403be770(arg1, rsi_2, rbx_3.d)
    
    sub_14036f070(arg1 + 0x160)
    *(arg1 + 0x1a8) = 0
else if (arg1 != 0)
    int64_t rdi_1 = arg2[1]
    
    if (rdi_1 != 0)
        sub_1403cc370(arg1, rsi, rdi_1)
        return sub_1403be770(arg1, rsi, rdi_1.d) __tailcall
