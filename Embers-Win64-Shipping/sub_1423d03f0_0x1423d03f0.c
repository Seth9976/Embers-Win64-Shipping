// 函数: sub_1423d03f0
// 地址: 0x1423d03f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = *arg2
sub_1423d01f0(arg1, &arg_8)
void* const rbx = arg_8

if (rbx != 0)
    void* rax_1 = sub_140d21d80(rbx)
    
    if (rax_1 != 0)
        void* rax_2 = sub_140cddea0()
        void* rcx_1 = *(rax_1 + 0x10)
        int64_t rdx_1 = sx.q(*(rax_2 + 0x38))
        
        if (rdx_1.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_1 << 3)) == rax_2 + 0x30)
            int64_t rax_4 = *arg2
            
            if (rax_1 != rax_4 && *(arg1 + 0x160) != rax_1 && (*(rax_4 + 8) & 1) == 0)
                rbx = nullptr

*arg2 = rbx
return arg1
