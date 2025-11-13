// 函数: sub_141f4f080
// 地址: 0x141f4f080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f46470(arg1)
void* rax = sub_140d3c6e0(&arg1[0x87])

if (rax != 0)
    void* rax_1 = sub_142591550()
    void* rdx_1 = *(rax + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int64_t* rcx_2 = *(rax + 0x650)
        
        if (rcx_2 != 0)
            sub_141e0ada0(rcx_2, arg1)
        
        void* rcx_3 = arg1[0x86]
        
        if (rcx_3 != 0)
            if (*(rax + 0x938) - *(rax + 0x964) s> 0)
                sub_141de1ba0(rcx_3, rax + 0x930, &arg1[0xa5], &arg1[0xa7])
            
            if (arg1[0x127].d - *(arg1 + 0x964) s> 0)
                sub_141de1ba0(arg1[0x86], &arg1[0x126], &arg1[0xa5], &arg1[0xa7])

return j_sub_141ee8470(arg1) __tailcall
