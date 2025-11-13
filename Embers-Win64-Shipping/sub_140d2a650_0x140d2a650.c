// 函数: sub_140d2a650
// 地址: 0x140d2a650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0
EnterCriticalSection(&data_143e1d620)
int32_t arg_20
sub_140ba6ab0(&data_1439aaaa0, &arg_20, arg1)
int64_t rax = sx.q(arg_20)
void* const rdi_2

if (rax.d == 0xffffffff)
    rdi_2 = nullptr
else
    rdi_2 = rax * 0x60 + data_1439aaaa0

int64_t* rsi = rdi_2 + 8

if (rdi_2 == 0)
    rsi = nullptr

if (rsi != 0)
    int64_t* rdx_6
    
    if (rsi[1].d == *(rsi + 0x34))
    label_140d2a72e:
        rdx_6 = nullptr
    else
        int32_t rax_3 = sub_140b5ead0(arg2.d) + arg2:4.d
        void* r8_1 = &rsi[7]
        void* rcx_1 = *(r8_1 + 8)
        
        if (rcx_1 != 0)
            r8_1 = rcx_1
        
        int32_t rax_5 = *(r8_1 + (((sx.q(rsi[9].d) - 1) & sx.q(rax_3)) << 2))
        
        if (rax_5 == 0xffffffff)
        label_140d2a72e_1:
            rdx_6 = nullptr
        else
            while (true)
                rdx_6 = (sx.q(rax_5) << 5) + *rsi
                
                if (*rdx_6 == arg2)
                    break
                
                rax_5 = rdx_6[3].d
                
                if (rax_5 == 0xffffffff)
                    goto label_140d2a72e_2
            
            if (rax_5 == 0xffffffff)
            label_140d2a72e_2:
                rdx_6 = nullptr
    
    void* rbp_1 = &rdx_6[1]
    
    if (rdx_6 == 0)
        rbp_1 = nullptr
    
    if (rbp_1 != 0)
        int64_t* rbp_2 = *rbp_1
        int32_t rax_6
        
        if (rbp_2 != 0)
            sub_1408f5450(rbp_2, arg3)
            sub_1408f4c10(rbp_2)
            rax_6 = rbp_2[1].d
            r14.b = rax_6 s> 0
        
        if (rbp_2 == 0 || rax_6 s<= 0)
            sub_140d2a2a0(rsi, arg2)
    
    int32_t* rdx_9 = rdi_2 + 0x3c
    
    if (rdi_2 == 0)
        rdx_9 = 0x34
    
    void* rax_7 = rdi_2 + 0x10
    
    if (rdi_2 == 0)
        rax_7 = 8
    
    if (*rax_7 == *rdx_9)
        sub_140d2a0e0(&data_1439aaaa0, arg1)
        
        if (data_1439aaaa8 == data_1439aaad4)
            sub_140d2af80(&data_143e1d990, &data_1439aaa90)

LeaveCriticalSection(&data_143e1d620)
return zx.q(r14.b)
