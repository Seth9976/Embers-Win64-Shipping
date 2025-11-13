// 函数: sub_1426ab730
// 地址: 0x1426ab730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t arg_8 = 0

for (int64_t* i = *(*(arg1 + 0x10) + 0x70); i != 0; i = i[0xb])
    int64_t rax
    
    if (sub_140cc16a0(&i[2], sub_140d41340()) == 0)
        rax = 0
    else
        rax = i[2]
    
    if (rax == arg2)
        break
    
    rax = i[8]
    
    if (not(test_bit(rax, 0xd)) && not(test_bit(rax, 0x10)))
        int64_t var_28
        
        if (((zx.q(*(i[1] + 0x10)) u>> 0x14).b & 1) != 0)
            rsi |= 1
            int32_t var_38
            int64_t* rax_4 = (*(*i + 0x60))(i, &var_28, 0, 0, var_38)
            var_38 = 0xffffffff
            rax = sub_140a23cf0(rax_4, u"FBlackboardKeySelector", 1, 0, 0xffffffff)
        
        int64_t* rdi_1
        
        if (((zx.q(*(i[1] + 0x10)) u>> 0x14).b & 1) == 0 || rax.d == 0xffffffff)
            rdi_1.b = 0
        else
            rdi_1.b = 1
        
        if ((rsi.b & 1) != 0)
            int64_t rcx_5 = var_28
            rsi &= 0xfffffffe
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
        
        if (rdi_1.b != 0)
            sub_140664c50(arg3, arg1 + 0x10 + sx.q(*(i + 0x4c)))
