// 函数: sub_140a404b0
// 地址: 0x140a404b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = (*(*arg1 + 0xc0))(arg1, arg3, zx.q(arg4) & 1)

if (result == 0)
    return result

int64_t* rax_2 = (*(*arg1 + 0xd0))(arg1, arg2, 0, arg5 & 1)
int64_t rsi

if (rax_2 != 0)
    int64_t rax_4 = (*(*result + 0x40))(result)
    int64_t rbp_1 = rax_4
    
    if (rax_4 s>= 1)
        int64_t r14_1 = rax_4
        
        if (r14_1 s>= 0x100000)
            r14_1 = 0x100000
        
        int64_t rax_5 = sub_140a82f30(sx.q(r14_1.d), 0)
        int64_t temp0_1
        
        do
            int64_t r9_1 = *result
            rsi = rbp_1
            
            if (r14_1 s<= rbp_1)
                rsi = r14_1
            
            (*(r9_1 + 0x20))(result, rax_5, rsi, r9_1)
            int64_t r9_2 = *rax_2
            (*(r9_2 + 0x28))(rax_2, rax_5, rsi, r9_2)
            temp0_1 = rbp_1
            rbp_1 -= rsi
        while (temp0_1 != rsi)
        sub_140a74f90(rax_5)
    
    rsi.b = 1
else
    rsi.b = 0

if (rax_2 != 0)
    int64_t r8_3 = *rax_2
    (*r8_3)(rax_2, 1, r8_3)

int64_t r8_4 = *result
(*r8_4)(result, 1, r8_4)
return zx.q(rsi.b)
