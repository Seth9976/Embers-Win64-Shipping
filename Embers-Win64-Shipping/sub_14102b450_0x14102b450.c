// 函数: sub_14102b450
// 地址: 0x14102b450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg4
sub_141017de0(arg1, sub_141017c10(arg1))
int32_t* rax = *(arg1 + 0x898)
*rax += arg3
int32_t rsi_2 = *(arg1 + 0x890) * arg3 + *(arg1 + 0x894)

if (rdi u<= 1)
    rdi = 1

*(arg1 + 0x3b80) += 1

if (*(arg1 + 0x134) != 0)
    void* r9 = *(*(arg1 + 0x138) + 0x20)
    
    if (*(r9 + 0x838) != 0)
        void* rax_2 = *(r9 + 0x850)
        
        if (rax_2 != 0)
            *(rax_2 + 0x10) += 1
            void* rax_3 = *(r9 + 0x850)
            *(rax_3 + 0x14) += arg3 * rdi
            void* r9_1 = *(r9 + 0x850)
            *(r9_1 + 0x18) += rsi_2 * rdi

sub_1410388f0(arg1 + 0x250)
int64_t* rcx_2 = *(*(arg1 + 0x1c8) + 0x30)
return (*(*rcx_2 + 0x60))(rcx_2, zx.q(rsi_2), zx.q(rdi), zx.q(arg2), 0)
