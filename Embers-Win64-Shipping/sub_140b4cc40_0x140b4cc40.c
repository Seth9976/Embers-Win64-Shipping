// 函数: sub_140b4cc40
// 地址: 0x140b4cc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
arg1[1] = &arg1[2]
__builtin_memset(&arg1[2], 0, 0x18)
sub_140b4e510(arg1, arg2)
(*(*arg1 + 0x80))(arg1, *(arg2 + 0x80), *(arg2 + 0x78))
*(arg1 + 0x2b) &= 0xfd
int64_t* rdi = arg1[0xc]
arg1[0x11].b = *(arg2 + 0x88)
int64_t* rdx_1 = *(arg2 + 0x60)

if (rdx_1 == 0)
    if (rdi != 0)
        int64_t rcx_3 = *rdi
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        j_sub_140a74f90(rdi)
        arg1[0xc] = rsi
else if (rdi != 0)
    sub_140b4cd20(rdi, rdx_1)
else
    int64_t* rax_3 = j_sub_140a82f30(0x10)
    
    if (rax_3 != 0)
        rsi = sub_140b4c5b0(rax_3, *(arg2 + 0x60))
    
    arg1[0xc] = rsi

return arg1
