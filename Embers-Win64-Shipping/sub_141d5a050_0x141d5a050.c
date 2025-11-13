// 函数: sub_141d5a050
// 地址: 0x141d5a050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg3)
sub_141d54070(arg1)
void* rax

if (arg2 != 0)
    sub_141d5c770(arg1, arg2)
    
    if (rbx.d == 0xffffffff)
        uint64_t rax_1
        rax_1.b = 1
        return rax_1
    
    rax = *(arg1 + 0xc8)
    
    if (rbx.d s>= 0 && rbx.d s< *(rax + 0x30))
        int64_t* rsi_1 = *(*(rax + 0x28) + (rbx << 3))
        
        if (rsi_1 != 0)
            *(arg1 + 0xd0) = rbx.d
            
            if ((*(*rsi_1 + 0x268))(rsi_1).b != 0)
                sub_141d5a8d0(arg1)
                int64_t var_18
                char rax_5 = sub_141d4ef40(*(arg1 + 0x110), (*(*rsi_1 + 0x260))(rsi_1, &var_18), 
                    &rsi_1[5], nullptr)
                int64_t rcx_5 = var_18
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                return zx.q(rax_5)

rax.b = 0
return rax
