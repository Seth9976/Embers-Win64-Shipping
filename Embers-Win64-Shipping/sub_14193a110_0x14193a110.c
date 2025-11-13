// 函数: sub_14193a110
// 地址: 0x14193a110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_14193a410(arg1 + 8, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    int64_t r9_2 = rax << 4
    int64_t* r9_3 = r9_2 + *(arg1 + 8)
    
    if (r9_2 != neg.q(*(arg1 + 8)))
        void* rcx_1 = *r9_3
        void* rax_1 = *(arg1 + 0x58)
        
        if (rcx_1 == rax_1)
            int64_t rdx_1 = *(rax_1 + 0x80)
            
            if (rdx_1 != 0)
                *(arg1 + 0x58) = rdx_1
        
        if (rcx_1 != *(arg1 + 0x60))
            void* rdx_2 = *(rcx_1 + 0x78)
            
            if (rdx_2 != 0)
                *(rdx_2 + 0x80) = *(rcx_1 + 0x80)
            
            void* rdx_3 = *(rcx_1 + 0x80)
            
            if (rdx_3 != 0)
                *(rdx_3 + 0x78) = *(rcx_1 + 0x78)
            
            *(rcx_1 + 0x78) = 0
            *(rcx_1 + 0x80) = 0
            void* rax_4 = *(arg1 + 0x60)
            *(rcx_1 + 0x78) = rax_4
            
            if (rax_4 != 0)
                *(rax_4 + 0x80) = rcx_1
            
            *(arg1 + 0x60) = rcx_1
        
        void* rax_5 = *r9_3
        
        if (rax_5 != -0x88)
            return *(rax_5 + 0x88)

if (arg3 == 0)
    return sub_14193a210(arg1, arg2)

return sub_14193a270(arg1, arg2)
