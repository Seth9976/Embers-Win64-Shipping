// 函数: sub_140da7e40
// 地址: 0x140da7e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = arg3 - arg1[0xb].d

if (arg3 - arg1[0xb].d s>= 0 && r8_1 s< arg1[0xd].d)
    int32_t* rcx = arg1[0xc] + sx.q(r8_1) * 0x18
    
    if (rcx != 0)
        int64_t rax_3 = sx.q(*rcx)
        
        if (rax_3.d != 0xffffffff)
            *arg2 = *(rax_3 * 0x68 + *arg1 + 0x20)
            arg2[1] = 1
            return arg2

arg2[1] = 0
return arg2
