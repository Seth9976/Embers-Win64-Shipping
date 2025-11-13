// 函数: sub_142082360
// 地址: 0x142082360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 0x20)
int32_t rbp = 0
int32_t i = 0

if (*(r14 + 0x38) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* const rbx_2 = *(rsi_1 + *(r14 + 0x30))
        void* rax_1
        int64_t rax_2
        void* rdx_1
        
        if (rbx_2 != 0)
            rax_1 = sub_1424ce360()
            rdx_1 = *(rbx_2 + 0x10)
            rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rbx_2 == 0 || rax_2.d s> *(rdx_1 + 0x38)
                || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rbx_2 = nullptr
        
        if (rbx_2 == arg1)
            return zx.q(rbp)
        
        if (rbx_2 != 0 && ((*(rbx_2 + 0x68) u>> 2).b & 1) == 0 && *(rbx_2 + 0x90) == *(arg1 + 0x90))
            rbp += 1
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(r14 + 0x38))

return 0
