// 函数: sub_142193c80
// 地址: 0x142193c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x408)

if (r8 != 0)
    int32_t i = 0
    
    if (*(r8 + 0x48) s> 0)
        int64_t* r12_1 = nullptr
        void* rax
        
        do
            void* rsi_1 = *(r12_1 + *(r8 + 0x40))
            rax = r8
            
            if (rsi_1 != 0)
                int32_t j = 0
                
                if (*(rsi_1 + 0x48) s> 0)
                    void** rbx_1 = nullptr
                    
                    do
                        void* rcx = *(rbx_1 + *(rsi_1 + 0x40))
                        
                        if (rcx != 0)
                            sub_142193980(rcx, arg2, *(arg1 + 0x408) + 0xf8, arg1 + 0x410)
                        
                        j += 1
                        rbx_1 = &rbx_1[1]
                    while (j s< *(rsi_1 + 0x48))
                    
                    rax = *(arg1 + 0x408)
            
            i += 1
            r12_1 = &r12_1[1]
            r8 = rax
        while (i s< *(rax + 0x48))

int64_t rbx_2 = sx.q(*(arg1 + 0x418))

if (rbx_2.d == 0)
    return 

int32_t rax_3 = arg2[1].d
int32_t rdx_1 = rax_3 + rbx_2.d

if (rdx_1 s> *(arg2 + 0xc))
    sub_1405c5570(arg2, rdx_1)
    rax_3 = arg2[1].d

memcpy(*arg2 + (sx.q(rax_3) << 3), *(arg1 + 0x410), (rbx_2 << 3).d)
arg2[1].d += rbx_2.d
