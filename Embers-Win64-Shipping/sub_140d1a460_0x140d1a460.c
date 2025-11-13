// 函数: sub_140d1a460
// 地址: 0x140d1a460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143e1d620)
int32_t arg_18
sub_140ba6ab0(&data_1439aaaa0, &arg_18, arg1)
int64_t rax = sx.q(arg_18)
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
    label_140d1a52e:
        rdx_6 = nullptr
    else
        int32_t rax_3 = sub_140b5ead0(arg2.d) + arg2:4.d
        void* r8_1 = &rsi[7]
        void* rcx_1 = *(r8_1 + 8)
        
        if (rcx_1 != 0)
            r8_1 = rcx_1
        
        int32_t rax_5 = *(r8_1 + (((sx.q(rsi[9].d) - 1) & sx.q(rax_3)) << 2))
        
        if (rax_5 == 0xffffffff)
        label_140d1a52e_1:
            rdx_6 = nullptr
        else
            while (true)
                rdx_6 = (sx.q(rax_5) << 5) + *rsi
                
                if (*rdx_6 == arg2)
                    break
                
                rax_5 = rdx_6[3].d
                
                if (rax_5 == 0xffffffff)
                    goto label_140d1a52e_2
            
            if (rax_5 == 0xffffffff)
            label_140d1a52e_2:
                rdx_6 = nullptr
    
    void* rcx_2 = &rdx_6[1]
    
    if (rdx_6 == 0)
        rcx_2 = nullptr
    
    if (rcx_2 != 0)
        uint64_t* rcx_3 = *rcx_2
        
        if (rcx_3 != 0)
            rcx_3[1].d = 0
            
            if (*(rcx_3 + 0xc) != 0)
                sub_1405a5410(rcx_3, 0)
        
        sub_140d2a2a0(rsi, arg2)
    
    void* rdx_8 = rdi_2 + 0x3c
    
    if (rdi_2 == 0)
        rdx_8 = 0x34
    
    void* rax_6 = rdi_2 + 0x10
    
    if (rdi_2 == 0)
        rax_6 = 8
    
    if (*rax_6 == *rdx_8)
        sub_140d2a0e0(&data_1439aaaa0, arg1)
        
        if (data_1439aaaa8 == data_1439aaad4)
            sub_140d2af80(&data_143e1d990, &data_1439aaa90)

return LeaveCriticalSection(&data_143e1d620) __tailcall
