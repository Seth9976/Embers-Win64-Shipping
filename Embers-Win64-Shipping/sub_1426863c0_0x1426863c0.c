// 函数: sub_1426863c0
// 地址: 0x1426863c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x4a8)
int32_t rbx = 0

if (rax != 0)
    void* rcx = *(rax + 8)
    
    if (rcx != 0)
        void* rax_1 = sub_14260fdc0(rcx, arg2)
        
        if (rax_1 != 0)
            rbx = *(rax_1 + 0x20)

return zx.q(rbx)
