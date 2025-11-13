// 函数: sub_140d21b20
// 地址: 0x140d21b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143e1d620)
int32_t arg_18
sub_140ba6ab0(&data_1439aaaa0, &arg_18, arg1)
int64_t rax = sx.q(arg_18)
int64_t result = 0
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x60 + data_1439aaaa0

int64_t* rdi_1 = rax_3 + 8

if (rax_3 == 0)
    rdi_1 = nullptr

if (rdi_1 != 0)
    int64_t* rdx_6
    
    if (rdi_1[1].d == *(rdi_1 + 0x34))
    label_140d21bee:
        rdx_6 = nullptr
    else
        int32_t rax_6 = sub_140b5ead0(arg2.d) + arg2:4.d
        void* r8_1 = &rdi_1[7]
        void* rcx_1 = *(r8_1 + 8)
        
        if (rcx_1 != 0)
            r8_1 = rcx_1
        
        int32_t rax_8 = *(r8_1 + (((sx.q(rdi_1[9].d) - 1) & sx.q(rax_6)) << 2))
        
        if (rax_8 == 0xffffffff)
        label_140d21bee_1:
            rdx_6 = nullptr
        else
            while (true)
                rdx_6 = (sx.q(rax_8) << 5) + *rdi_1
                
                if (*rdx_6 == arg2)
                    break
                
                rax_8 = rdx_6[3].d
                
                if (rax_8 == 0xffffffff)
                    goto label_140d21bee_2
            
            if (rax_8 == 0xffffffff)
            label_140d21bee_2:
                rdx_6 = nullptr
    
    void* rax_9 = &rdx_6[1]
    
    if (rdx_6 == 0)
        rax_9 = nullptr
    
    if (rax_9 != 0)
        result = *rax_9

LeaveCriticalSection(&data_143e1d620)
return result
