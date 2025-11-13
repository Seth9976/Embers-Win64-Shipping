// 函数: sub_141bb6870
// 地址: 0x141bb6870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x198)

for (void* rbp_2 = &i[sx.q(*(arg1 + 0x1a0)) * 2]; i != rbp_2; i = &i[2])
    int64_t* rsi_1 = i[1]
    
    if (rsi_1 != 0)
        void* rax = sub_141b719f0(*(arg1 + 0x10), *i)
        
        if (rax != 0)
            int64_t r8_1 = *rax
            rax = (*(r8_1 + 0x140))(rax, sx.q(*(rax + 0x4c)) + arg1, r8_1)
            
            if (rax != 0)
                void* rax_1 = sub_141c04a00()
                void* rcx_2 = *(rax + 0x10)
                int64_t rdx_4 = sx.q(*(rax_1 + 0x38))
                
                if (rdx_4.d s<= *(rcx_2 + 0x38)
                        && *(*(rcx_2 + 0x30) + (rdx_4 << 3)) == rax_1 + 0x30)
                    (*(*rax + 0x2c0))(rax, rdx_4)
                    sub_141b8f9a0(rax, rsi_1)
