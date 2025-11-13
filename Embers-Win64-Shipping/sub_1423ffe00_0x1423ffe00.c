// 函数: sub_1423ffe00
// 地址: 0x1423ffe00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = arg2
int32_t rax = iswalpha(*arg2)
int64_t rdi
rdi.b = rax != 0

if (rax != 0)
    wint_t _C = *rbx
    
    if (_C != 0)
        do
            if (iswalnum(_C) == 0)
                int16_t rcx_2 = *rbx
                
                if ((0xfffc & (rcx_2 - 0x2b)) != 0 || rcx_2 == 0x2c)
                    int16_t result
                    result.b = 0
                    return result
            
            _C = rbx[1]
            rbx = &rbx[1]
        while (_C != 0)

return zx.q(rdi.b)
