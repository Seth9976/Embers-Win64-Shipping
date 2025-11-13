// 函数: sub_1426b4710
// 地址: 0x1426b4710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t arg_8 = 0
int64_t* rbx_1 = *(*(arg1 + 0x10) + 0x70)

if (rbx_1 == 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t rax_3

while (true)
    if (sub_140cc16a0(&rbx_1[2], sub_140d41340()) == 0)
        rax_3 = 0
    else
        rax_3 = rbx_1[2]
    
    if (rax_3 != arg2)
        rax_3 = rbx_1[8]
        
        if (not(test_bit(rax_3, 0xd)) && not(test_bit(rax_3, 0x10)))
            int64_t var_18
            
            if (((zx.q(*(rbx_1[1] + 0x10)) u>> 0x14).b & 1) != 0)
                rsi |= 1
                int32_t var_28
                int64_t* rax_5 = (*(*rbx_1 + 0x60))(rbx_1, &var_18, 0, 0, var_28)
                var_28 = 0xffffffff
                rax_3 = sub_140a23cf0(rax_5, u"FBlackboardKeySelector", 1, 0, 0xffffffff)
            
            int64_t* rdi_1
            
            if (((zx.q(*(rbx_1[1] + 0x10)) u>> 0x14).b & 1) == 0 || rax_3.d == 0xffffffff)
                rdi_1.b = 0
            else
                rdi_1.b = 1
            
            if ((rsi.b & 1) != 0)
                int64_t rcx_5 = var_18
                rsi &= 0xfffffffe
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
            
            if (rdi_1.b != 0)
                rax_3.b = 1
                break
        
        rbx_1 = rbx_1[0xb]
        
        if (rbx_1 != 0)
            continue
    
    rax_3.b = 0
    break

return rax_3
