// 函数: sub_141e8de00
// 地址: 0x141e8de00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_2

if (arg1[1].d != *(arg1 + 0x34))
    void* r10_1 = arg1[8]
    void* rbx_1 = &arg1[7]
    
    if (r10_1 != 0)
        rbx_1 = r10_1
    
    rbx_2 = *(rbx_1 + (((sx.q(arg1[9].d) - 1) & sx.q(arg3)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_2 == 0xffffffff)
label_141e8dedb:
    *arg2 = 0xffffffff
else
    int64_t rax_2 = *arg1
    
    while (true)
        int64_t rdi_2 = sx.q(rbx_2) << 5
        void* const rsi_2
        
        if (*(rdi_2 + rax_2) == 0)
            rsi_2 = nullptr
        else
            void* rax_3 = sub_142484770()
            
            if (rax_3 == 0)
                rsi_2 = nullptr
            else
                rsi_2 = *(rdi_2 + rax_2)
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s> *(rsi_2 + 0x38) || *(*(rsi_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                    rsi_2 = nullptr
        
        int64_t rdx_1
        
        if (*arg4 == 0)
            rdx_1 = 0
        else
            void* rax_6 = sub_142484770()
            
            if (rax_6 == 0)
                rdx_1 = 0
            else
                rdx_1 = *arg4
                int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                
                if (rax_7.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                    rdx_1 = 0
        
        if (rsi_2 == rdx_1)
            *arg2 = rbx_2
            break
        
        rax_2 = *arg1
        rbx_2 = *(rdi_2 + rax_2 + 0x18)
        
        if (rbx_2 == 0xffffffff)
            goto label_141e8dedb

return arg2
