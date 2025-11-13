// 函数: sub_141e630f0
// 地址: 0x141e630f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10
char* rax
int512_t result
rax, result = sub_141e5ec20(nullptr, &arg_10)

if (arg_10 != 0)
    EnterCriticalSection(&data_143f39aa0)
    int512_t entry_zmm2
    sub_141e563a0(rax, nullptr, entry_zmm2)
    LeaveCriticalSection(&data_143f39aa0)

if (rax != 0 && *rax != 0)
    char* rdx_6
    
    if (*(rax + 0x10) == *(rax + 0x3c))
    label_141e6319e:
        rdx_6 = nullptr
    else
        void* rcx_1 = *(rax + 0x48)
        void* r8_1 = &rax[0x40]
        
        if (rcx_1 != 0)
            r8_1 = rcx_1
        
        int32_t rax_3 = *(r8_1 + (((sx.q(*(rax + 0x50)) - 1) & zx.q(arg1)) << 2))
        
        if (rax_3 == 0xffffffff)
        label_141e6319e_1:
            rdx_6 = nullptr
        else
            while (true)
                rdx_6 = (sx.q(rax_3) << 4) + *(rax + 8)
                
                if (*rdx_6 == arg1)
                    break
                
                rax_3 = *(rdx_6 + 8)
                
                if (rax_3 == 0xffffffff)
                    goto label_141e6319e_2
            
            if (rax_3 == 0xffffffff)
            label_141e6319e_2:
                rdx_6 = nullptr
    
    void* rax_4 = &rdx_6[4]
    
    if (rdx_6 == 0)
        rax_4 = nullptr
    
    if (rax_4 != 0)
        result.o = *rax_4
        return result

result.o = 0xbf800000
return result
