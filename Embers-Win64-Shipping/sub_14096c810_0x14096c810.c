// 函数: sub_14096c810
// 地址: 0x14096c810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_28
sub_1409634d0(&var_28, arg4)
int64_t* r14 = var_28

if (r14 != 0)
    void* const rcx_4
    
    if (*(arg1 + 0x90) == *(arg1 + 0xbc))
    label_14096c8c0:
        rcx_4 = nullptr
    else
        int32_t rax_3 = sub_140b5ead0(arg4.d) + arg4:4.d
        void* r8 = arg1 + 0xc0
        void* rcx_2 = *(r8 + 8)
        
        if (rcx_2 != 0)
            r8 = rcx_2
        
        int32_t rax_5 = *(r8 + (((sx.q(*(arg1 + 0xd0)) - 1) & sx.q(rax_3)) << 2))
        
        if (rax_5 == 0xffffffff)
        label_14096c8c0_1:
            rcx_4 = nullptr
        else
            int64_t r8_1 = *(arg1 + 0x88)
            
            while (true)
                int64_t rdx_4 = sx.q(rax_5) * 3
                rcx_4 = r8_1 + (rdx_4 << 3)
                
                if (*(r8_1 + (rdx_4 << 3)) == arg4)
                    break
                
                rax_5 = *(rcx_4 + 0x10)
                
                if (rax_5 == 0xffffffff)
                    goto label_14096c8c0_2
            
            if (rax_5 == 0xffffffff)
            label_14096c8c0_2:
                rcx_4 = nullptr
    
    void* rdx_5 = rcx_4 + 8
    
    if (rcx_4 == 0)
        rdx_5 = nullptr
    
    if (rdx_5 != 0)
        (*(*r14 + 0xd0))(r14, rdx_5)

sub_14095ebe0(arg5, arg2, zx.q(arg3))
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rdi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_20 + 8))(var_20, zx.q(rdi_1))

return sub_140745b20(arg5) __tailcall
