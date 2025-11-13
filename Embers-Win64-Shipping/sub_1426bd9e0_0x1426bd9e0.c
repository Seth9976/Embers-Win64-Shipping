// 函数: sub_1426bd9e0
// 地址: 0x1426bd9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_8 = 0

for (int64_t* i = *(*(arg1 + 0x10) + 0x70); i != 0; i = i[0xb])
    int64_t rax
    
    if (sub_140cc16a0(&i[2], sub_140d41340()) == 0)
        rax = 0
    else
        rax = i[2]
    
    if (rax == arg2)
        break
    
    int64_t var_28
    
    if (i != 0 && ((zx.q(*(i[1] + 0x10)) u>> 0x14).b & 1) != 0)
        rdi |= 1
        int32_t var_38
        int64_t* rax_4 = (*(*i + 0x60))(i, &var_28, 0, 0, var_38)
        var_38 = 0xffffffff
        rax = sub_140a23cf0(rax_4, u"FBlackboardKeySelector", 1, 0, 0xffffffff)
    
    void* rsi_1
    
    if (i == 0 || ((zx.q(*(i[1] + 0x10)) u>> 0x14).b & 1) == 0 || rax.d == 0xffffffff)
        rsi_1.b = 0
    else
        rsi_1.b = 1
    
    if ((rdi.b & 1) != 0)
        int64_t rcx_5 = var_28
        rdi &= 0xfffffffe
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    
    if (rsi_1.b != 0)
        sub_1426bdb00(sx.q(*(i + 0x4c)) + arg1, arg3)
