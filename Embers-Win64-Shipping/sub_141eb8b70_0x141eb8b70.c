// 函数: sub_141eb8b70
// 地址: 0x141eb8b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg2[1].d s<= 0)
    return 

int64_t* rsi_1 = nullptr

do
    void* r8_1 = *(rsi_1 + *arg2)
    
    if (r8_1 != 0)
        int64_t rbp_1 = sx.q(*(arg1 + 0x68))
        void* rbx_1 = arg1 + 0x50
        int32_t r15_1 = *(r8_1 + 0xc)
        int32_t rax_1 = (rbp_1 + 1).d
        *(rbx_1 + 0x18) = rax_1
        
        if (rax_1 s> *(rbx_1 + 0x1c))
            sub_140dbc4b0(rbx_1, rbp_1.d)
        
        void* rax = *(rbx_1 + 0x10)
        
        if (rax != 0)
            rbx_1 = rax
        
        *(rbx_1 + (rbp_1 << 2)) = r15_1
    
    i += 1
    rsi_1 = &rsi_1[1]
while (i s< arg2[1].d)
