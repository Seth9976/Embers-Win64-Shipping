// 函数: sub_141ad13a0
// 地址: 0x141ad13a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg4
char arg_c = 1
void* const rcx_3

if (arg1 == 0x268)
    rcx_3 = nullptr
else
    void* rdi_1 = *(arg1 - 0x248)
    
    if (rdi_1 != 0)
        void* rax_1 = sub_142591550()
        void* rdx = *(rdi_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* r8
            r8.b = 1
            sub_141f3e990(*(arg1 - 0x248), 1, r8.b)
    
    rcx_3 = *(arg1 - 0x28)
    
    if (rcx_3 == 0)
        void* rax_5 = (*(*(arg1 - 0x268) + 0x300))(arg1 - 0x268)
        *(arg1 - 0x28) = rax_5
        rcx_3 = rax_5

return sub_141ad12c0(rcx_3, arg2, arg3, &arg_8, arg5, arg6, arg7)
