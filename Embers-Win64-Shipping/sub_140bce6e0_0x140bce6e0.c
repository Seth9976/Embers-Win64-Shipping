// 函数: sub_140bce6e0
// 地址: 0x140bce6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_140b5ead0(arg2.d)
void* r8 = arg1[8]
int32_t rbp = 0
int64_t rdx_3 = sx.q(arg1[9].d - 1) & sx.q(rax_1 + (arg2 u>> 0x20).d)
void* rax_4 = &arg1[7]

if (r8 != 0)
    rax_4 = r8

int32_t i = *(rax_4 + (rdx_3 << 2))
void* rsi = rax_4 + (rdx_3 << 2)

for (; i != 0xffffffff; i = *rsi)
    void* r9_1 = *arg1
    int64_t r11_2 = sx.q(i) << 5
    void* r10_1 = r11_2 + r9_1
    
    if (*(r11_2 + r9_1) != arg2)
        rsi = r10_1 + 0x18
    else
        if (arg1[1].d != *(arg1 + 0x34))
            void* r8_1 = arg1[8]
            int64_t rdx_5 = sx.q(arg1[9].d - 1) & sx.q(*(r10_1 + 0x1c))
            void* rax_9 = &arg1[7]
            
            if (r8_1 != 0)
                rax_9 = r8_1
            
            void* r8_2 = rax_9 + (rdx_5 << 2)
            
            for (int32_t j = *(rax_9 + (rdx_5 << 2)); j != 0xffffffff; j = *r8_2)
                if (j == i)
                    *r8_2 = *(r10_1 + 0x18)
                    break
                
                r8_2 = r9_1 + 0x18 + (sx.q(j) << 5)
        
        void* r9_2 = &arg1[2]
        int32_t r8_4 = rol.d(1, i.b)
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = i
        
        int32_t* rdx_8 = *arg1
        rdx_8[sx.q(i) * 8] = 0xffffffff
        int32_t rax_14
        
        if (*(arg1 + 0x34) s<= 0)
            rax_14 = -1
        else
            rax_14 = arg1[6].d
        
        rdx_8[sx.q(i) * 8 + 1] = rax_14
        *(arg1 + 0x34) += 1
        arg1[6].d = i
        void* rax_15 = *(r9_2 + 0x10)
        
        if (rax_15 != 0)
            r9_2 = rax_15
        
        if (i s< 0)
            i += 0x1f
        
        int64_t rax_16 = sx.q(i s>> 5)
        *(r9_2 + (rax_16 << 2)) &= not.d(r8_4)
        rbp += 1

return zx.q(rbp)
