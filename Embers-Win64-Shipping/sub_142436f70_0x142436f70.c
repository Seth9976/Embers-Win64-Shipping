// 函数: sub_142436f70
// 地址: 0x142436f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg1 + 0x30)
int32_t i = 0

if (*(r15 + 0xa0) s<= 0)
    return 

int64_t* rsi_1 = nullptr

do
    void* r14_1 = *(rsi_1 + *(r15 + 0x98))
    
    if (r14_1 != 0)
        void* rax_1 = sub_1425455a0()
        void* rdx = *(r14_1 + 0x10)
        int64_t rax = sx.q(*(rax_1 + 0x38))
        
        if (rax.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax << 3)) == rax_1 + 0x30)
            int64_t rbp_1 = sx.q(arg2[1].d)
            int32_t rax_2 = (rbp_1 + 1).d
            arg2[1].d = rax_2
            
            if (rax_2 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rbp_1 << 3)) = r14_1
    
    i += 1
    rsi_1 = &rsi_1[1]
while (i s< *(r15 + 0xa0))
