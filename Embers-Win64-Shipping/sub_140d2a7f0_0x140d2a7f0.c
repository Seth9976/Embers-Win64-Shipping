// 函数: sub_140d2a7f0
// 地址: 0x140d2a7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = arg1
int64_t rbx = arg2
int32_t* rbp
rbp.b = 0
EnterCriticalSection(&data_143e1d620)
int32_t arg_20
sub_140ba6ab0(&data_1439aaaa0, &arg_20, r14)
int64_t rax = sx.q(arg_20)
void* const r13_2

if (rax.d == 0xffffffff)
    r13_2 = nullptr
else
    r13_2 = rax * 0x60 + data_1439aaaa0

arg_20.q = r13_2
int64_t* rdi = r13_2 + 8

if (r13_2 == 0)
    rdi = nullptr

if (rdi != 0)
    int64_t* rdx_6
    
    if (rdi[1].d == *(rdi + 0x34))
    label_140d2a8de:
        rdx_6 = nullptr
    else
        int32_t rax_3 = sub_140b5ead0(rbx.d) + arg2:4.d
        void* r8_1 = &rdi[7]
        void* rcx_1 = *(r8_1 + 8)
        
        if (rcx_1 != 0)
            r8_1 = rcx_1
        
        int32_t rax_5 = *(r8_1 + (((sx.q(rdi[9].d) - 1) & sx.q(rax_3)) << 2))
        
        if (rax_5 == 0xffffffff)
        label_140d2a8de_1:
            rdx_6 = nullptr
        else
            while (true)
                rdx_6 = (sx.q(rax_5) << 5) + *rdi
                
                if (*rdx_6 == rbx)
                    break
                
                rax_5 = rdx_6[3].d
                
                if (rax_5 == 0xffffffff)
                    goto label_140d2a8de_2
            
            if (rax_5 == 0xffffffff)
            label_140d2a8de_2:
                rdx_6 = nullptr
    
    void* rsi_1 = &rdx_6[1]
    
    if (rdx_6 == 0)
        rsi_1 = nullptr
    
    if (rsi_1 != 0)
        int64_t* rsi_2 = *rsi_1
        
        if (rsi_2 == 0)
            sub_140d2a2a0(rdi, rbx)
        else
            int32_t rax_6 = rsi_2[1].d
            int32_t r14_1 = rax_6 - 1
            
            if (r14_1 s>= 0)
                int64_t r15_2 = sx.q(r14_1) << 4
                int64_t r12_1 = r15_2
                int32_t temp1_1
                
                do
                    rbp = *rsi_2 + r15_2
                    int64_t rax_7
                    
                    if (arg3 != 0)
                        rax_7 = sub_140d3c6e0(rbp)
                    
                    if (arg3 != 0 && arg3 == rax_7)
                    label_140d2a972:
                        int32_t rdx_12 = rsi_2[1].d
                        int32_t rcx_7 = rdx_12 - r14_1 - 1
                        
                        if (rcx_7 s>= 1)
                            rcx_7 = 1
                        
                        if (rcx_7 != 0)
                            int64_t rax_10 = *rsi_2
                            memcpy(rax_10 + r12_1, (sx.q(rdx_12 - rcx_7) << 4) + rax_10, rcx_7 << 4)
                            rdx_12 = rsi_2[1].d
                        
                        rsi_2[1].d = rdx_12 - 1
                        sub_1405a5010(rsi_2)
                    else
                        if ((rbp[3] == 0 & sub_140b5b8a0(rbp[2], 0)) != 0)
                            goto label_140d2a972
                        
                        if (sub_140d3c740(rbp, 1) == 0)
                            goto label_140d2a972
                    
                    r12_1 -= 0x10
                    r15_2 -= 0x10
                    temp1_1 = r14_1
                    r14_1 -= 1
                while (temp1_1 - 1 s>= 0)
                rax_6 = rsi_2[1].d
                rbx = arg2
                r13_2 = arg_20.q
            
            rbp.b = rax_6 s> 0
            
            if (rax_6 s<= 0)
                sub_140d2a2a0(rdi, rbx)
            
            r14 = arg1
    
    void* rdx_14 = r13_2 + 0x3c
    
    if (r13_2 == 0)
        rdx_14 = 0x34
    
    void* rax_12 = r13_2 + 0x10
    
    if (r13_2 == 0)
        rax_12 = 8
    
    if (*rax_12 == *rdx_14)
        sub_140d2a0e0(&data_1439aaaa0, r14)
        
        if (data_1439aaaa8 == data_1439aaad4)
            sub_140d2af80(&data_143e1d990, &data_1439aaa90)

LeaveCriticalSection(&data_143e1d620)
return zx.q(rbp.b)
