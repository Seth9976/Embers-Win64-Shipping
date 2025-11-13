// 函数: src_simple
// 地址: 0x141c2c8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi_1

if (arg3 s>= 1)
    int64_t* rax_1 = sub_140a82f30(0x60, 0)
    
    if (rax_1 != 0)
        memset(rax_1, 0, 0x60)
        *(rax_1 + 0x14) = arg3
        rax_1[3].d = 0x22b
        
        if (sub_141c2a560(rax_1, arg2) == 0)
            int64_t rax_3 = rax_1[7]
            
            if (rax_3 != 0)
                rax_3(rax_1)
            
            __builtin_memset(rax_1, 0, 0x14)
            rax_1[0xb] = 0
            rax_1[0xa].d = 0
            arg1[4].d = 1
            int32_t rax_4 = src_process(rax_1, arg1)
            int64_t rcx_4 = rax_1[4]
            rdi_1 = rax_4
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            memset(rax_1, 0, 0x60)
        else
            rdi_1 = 0xa
        
        sub_140a74f90(rax_1)
    else
        rdi_1 = (rax_1 + 1).d
else
    rdi_1 = 0xb

return zx.q(rdi_1)
