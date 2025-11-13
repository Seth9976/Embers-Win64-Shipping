// 函数: sub_141e633a0
// 地址: 0x141e633a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = nullptr
void* rcx = arg1[0xc]

if (rcx != 0)
    void* rax_1 = sub_14238e570(rcx)
    
    if (rax_1 != 0)
        void* rax_2 = sub_140bdf2e0()
        void* rcx_1 = *(rax_1 + 0x10)
        int64_t rdx_1 = sx.q(*(rax_2 + 0x38))
        
        if (rdx_1.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_1 << 3)) == rax_2 + 0x30)
            rbx = rax_1

sub_141e63330(arg1)
void* arg_8 = rbx
return sub_1405a9f90(&arg1[0xf], &arg_8)
