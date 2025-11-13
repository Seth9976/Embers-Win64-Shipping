// 函数: sub_142911b50
// 地址: 0x142911b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x48)
void* r14 = *(arg1 + 0x10)
void* rdi = *(arg1 + 0x28)

if (r14 != 0)
    void* rax_1 = *(arg1 + 0x18)
    
    if (rax_1 != 0)
        void* r14_1 = *(r14 + 0x28)
        int64_t r15 = *(*(rax_1 + 0x28) + 0x20)
        char rax_3 = *(rdi + 0x30)
        
        if (rax_3 != 1)
            if (rax_3 != 2)
                return 0
            
            int64_t rax_7 = *(rdi + 0x58)
            
            if (rax_7 == 0 || *(rdi + 0x38) == 0)
                return 0
            
            if (arg2 != 0)
                if (*arg3 != rax_7)
                    return 0
                
                int32_t rbx_1 = 0
                int64_t r13_1 = sx.q(sub_1428c1b20(r14_1))
                int64_t rax_9 = sub_1428a6730(r13_1)
                
                if (rax_9 != 0 && sub_14291a7a0(rax_9, r15, r14_1) s> 0)
                    int32_t var_48
                    var_48.q = *(rdi + 0x38)
                    
                    if (sub_14294ac90(arg2, *arg3, rax_9, r13_1, var_48, *(rdi + 0x48), 
                            *(rdi + 0x50), *(rdi + 0x40)) != 0)
                        rbx_1 = 1
                        *arg3 = *(rdi + 0x58)
                
                sub_1428a6890(rax_9, r13_1, "crypto\dh\dh_pmeth.c", 0x1da)
                return rbx_1
            
            *arg3 = rax_7
        else if (arg2 != 0)
            int32_t rax_5
            
            if (*(rdi + 0x10) == 0)
                rax_5 = sub_14291a780(arg2, r15, r14_1)
            else
                rax_5 = sub_14291a7a0(arg2, r15, r14_1)
            
            if (rax_5 s< 0)
                return rax_5
            
            *arg3 = sx.q(rax_5)
        else
            *arg3 = sx.q(sub_1428c1b20(r14_1))
        
        return 1

sub_1428a5670(5, 0x70, 0x6c, "crypto\dh\dh_pmeth.c", 0x1ac)
return 0
