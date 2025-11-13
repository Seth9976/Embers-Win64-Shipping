// 函数: sub_140d2a3f0
// 地址: 0x140d2a3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = arg1
int32_t* rsi
rsi.b = 0
EnterCriticalSection(&data_143e1d620)
int32_t var_48
sub_140ba6ab0(&data_1439aaaa0, &var_48, r14)
int64_t rax = sx.q(var_48)
void* const rbp_2

if (rax.d == 0xffffffff)
    rbp_2 = nullptr
else
    rbp_2 = rax * 0x60 + data_1439aaaa0

int64_t* r12 = rbp_2 + 8

if (rbp_2 == 0)
    r12 = nullptr

if (r12 != 0)
    int64_t* rdx_6
    
    if (r12[1].d == *(r12 + 0x34))
    label_140d2a4de:
        rdx_6 = nullptr
    else
        int32_t rax_3 = sub_140b5ead0(arg2.d) + arg2:4.d
        void* r8_1 = &r12[7]
        void* rcx_1 = *(r8_1 + 8)
        
        if (rcx_1 != 0)
            r8_1 = rcx_1
        
        int32_t rax_5 = *(r8_1 + (((sx.q(r12[9].d) - 1) & sx.q(rax_3)) << 2))
        
        if (rax_5 == 0xffffffff)
        label_140d2a4de_1:
            rdx_6 = nullptr
        else
            while (true)
                rdx_6 = (sx.q(rax_5) << 5) + *r12
                
                if (*rdx_6 == arg2)
                    break
                
                rax_5 = rdx_6[3].d
                
                if (rax_5 == 0xffffffff)
                    goto label_140d2a4de_2
            
            if (rax_5 == 0xffffffff)
            label_140d2a4de_2:
                rdx_6 = nullptr
    
    void* r15_1 = &rdx_6[1]
    
    if (rdx_6 == 0)
        r15_1 = nullptr
    
    if (r15_1 != 0)
        int64_t* r15_2 = *r15_1
        
        if (r15_2 == 0)
            sub_140d2a2a0(r12, arg2)
        else
            int32_t* rax_6 = *r15_2
            rsi = rax_6
            void* r14_3 = &rax_6[sx.q(r15_2[1].d) * 4]
            var_48.q = rax_6
            
            if (rax_6 != r14_3)
                do
                    if (*(rsi + 8) == arg4 && arg3 != 0 && arg3 == sub_140d3cab0(rsi))
                        rsi = (rsi - var_48.q) s>> 4
                        
                        if (rsi.d != 0xffffffff)
                            int32_t rdx_7 = r15_2[1].d
                            int32_t rcx_5 = rdx_7 - rsi.d - 1
                            
                            if (rcx_5 s>= 1)
                                rcx_5 = 1
                            
                            if (rcx_5 != 0)
                                memcpy((sx.q(rsi.d) << 4) + *r15_2, 
                                    (sx.q(rdx_7 - rcx_5) << 4) + *r15_2, rcx_5 << 4)
                                rdx_7 = r15_2[1].d
                            
                            r15_2[1].d = rdx_7 - 1
                        
                        break
                    
                    rsi = &rsi[4]
                while (rsi != r14_3)
            
            sub_1408f4c10(r15_2)
            int32_t rax_9 = r15_2[1].d
            rsi.b = rax_9 s> 0
            
            if (rax_9 s<= 0)
                sub_140d2a2a0(r12, arg2)
            
            r14 = arg1
    
    int32_t* rdx_13 = rbp_2 + 0x3c
    
    if (rbp_2 == 0)
        rdx_13 = 0x34
    
    int32_t* rax_10 = rbp_2 + 0x10
    
    if (rbp_2 == 0)
        rax_10 = 8
    
    if (*rax_10 == *rdx_13)
        sub_140d2a0e0(&data_1439aaaa0, r14)
        
        if (data_1439aaaa8 == data_1439aaad4)
            sub_140d2af80(&data_143e1d990, &data_1439aaa90)

LeaveCriticalSection(&data_143e1d620)
return zx.q(rsi.b)
