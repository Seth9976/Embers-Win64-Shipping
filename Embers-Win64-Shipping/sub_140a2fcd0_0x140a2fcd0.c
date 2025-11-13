// 函数: sub_140a2fcd0
// 地址: 0x140a2fcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax

if (*arg2 != 0)
    int64_t rbx_1 = -1
    int64_t rax_1 = -1
    
    do
        rax_1 += 1
    while (arg2[rax_1] != 0)
    
    int32_t rcx = arg1[1].d
    
    if (arg3 != 1)
        wchar16* _String1
        
        if (rcx == 0)
            _String1 = &data_142d40450
        else
            _String1 = *arg1
        
        rax = wcsncmp(_String1, arg2, sx.q(rax_1.d))
    else if (rcx == 0)
        rax = sub_140a546e0(&data_142d40450, arg2, sx.q(rax_1.d))
    else
        rax = sub_140a546e0(*arg1, arg2, sx.q(rax_1.d))
    
    if (rax == 0)
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        int32_t rax_2 = arg1[1].d
        int32_t rdi_1 = rax_2 - 1
        
        if (rax_2 == 0)
            rdi_1 = 0
        
        if (rbx_1.d s>= 0)
            if (rbx_1.d s< rdi_1)
                rdi_1 = rbx_1.d
            
            if (rdi_1 != 0)
                if (rax_2 != rdi_1)
                    int64_t rcx_2 = *arg1
                    memmove(rcx_2, rcx_2 + (sx.q(rdi_1) << 1), (rax_2 - rdi_1) * 2)
                    rax_2 = arg1[1].d
                
                arg1[1].d = rax_2 - rdi_1
                sub_1405a50a0(arg1)
        
        rax_2.b = 1
        return rax_2

rax.b = 0
return rax
