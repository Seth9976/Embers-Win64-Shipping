// 函数: sub_1417a0f40
// 地址: 0x1417a0f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].w = 0x103
void* rsi = &arg1[3]
arg1[2].w = 0x100
*arg1 = &data_142fc9038
__builtin_memset(rsi, 0, 0x100)
__builtin_memset(&arg1[0x23], 0, 0x60)
sub_1417b55e0(arg2 + 0x118, &arg1[0x23])
arg1[2].b = *(arg2 + 0x10)
void* rbp = rsi
void* r15 = arg2 - rsi + 0x18
int64_t i_1 = 8
int64_t i

do
    sub_1417a9aa0(rbp, r15 + rbp)
    int64_t* j = *rsi
    
    for (void* r9_3 = &j[sx.q(*(rsi + 8)) * 2]; j != r9_3; j = &j[2])
        void* rax_1 = *j
        void* rcx_2 = nullptr
        char rdx_2 = *(rax_1 + 8)
        
        if (rdx_2 == 1)
            rcx_2 = rax_1
        
        int32_t rcx_3
        
        if (rcx_2 == 0)
            void* const rcx_4 = nullptr
            
            if (rdx_2 == 0)
                rcx_4 = rax_1
            
            if (rcx_4 == 0)
                void* rcx_5 = nullptr
                
                if (rdx_2 == 2)
                    rcx_5 = rax_1
                
                int32_t rcx_6 = (neg.q(rcx_5)).d
                rcx_3 = sbb.d(rcx_6, rcx_6, rcx_5 != 0) & 2
            else
                rcx_3 = 1
        else
            rcx_3 = 0
        
        int64_t rcx_9
        
        switch (rcx_3)
            case 0
                rcx_9 = arg1[0x23]
            case 1
                rcx_9 = arg1[0x27]
            case 2
                rcx_9 = arg1[0x2b]
        
        *(rcx_9 + (zx.q(j[1].w) << 3)) = rax_1
    
    rbp += 0x20
    rsi += 0x20
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
