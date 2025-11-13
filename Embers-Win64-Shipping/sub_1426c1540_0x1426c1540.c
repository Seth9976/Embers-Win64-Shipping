// 函数: sub_1426c1540
// 地址: 0x1426c1540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xc0)

if (rax != 0 && (*(rax + 0x48) & 1) != 0)
    void* rax_1 = *(arg1 + 0xa8)
    
    if (rax_1 != 0)
    label_1426c1576:
        void* rdi_1 = *(rax_1 + 0x138)
        
        if (rdi_1 != 0)
            void* rax_2 = sub_14272b250()
            void* rcx = *(rdi_1 + 0x10)
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
                sub_1426c1940(rdi_1, *(arg1 + 0xc0), arg1)
    else
        rax_1 = sub_141ee69e0(arg1)
        
        if (rax_1 != 0)
            goto label_1426c1576

sub_1426af080(arg1)
return sub_141efdea0(arg1) __tailcall
