// 函数: sub_140dbe300
// 地址: 0x140dbe300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_1439ae51c
*arg2 = rax
*(arg2 + 0x128) = 0
*(arg2 + 0x130) = 0
*(arg2 + 0x134) = 4
arg2[0x138] = 0
__builtin_memset(&arg2[0x140], 0, 0x20)
int512_t zmm1 = sub_140dbf070(arg1, arg2, 0, 0, arg5, rax)
int64_t* r14 = *(*arg1 + sx.q(arg1[1].d) * 0x10 - 8)

if (r14 != 0)
    int32_t rax_2 = r14[1].d
    
    if (rax_2 == 0)
        r14 = nullptr
    else
        r14[1].d = rax_2 + 1

int32_t i = *(arg2 + 0x130) - 1
int64_t rsi_1 = sx.q(i) * 0x48

while (i s>= 0)
    char rax_5
    rax_5, zmm1 = sub_140db4940(arg2, i, arg3, 1, zmm1)
    
    if (rax_5 == 0)
        void* rcx_3 = &arg2[8]
        void* rax_6 = *(rcx_3 + 0x120)
        
        if (rax_6 != 0)
            rcx_3 = rax_6
        
        if (*(arg6 + 0x38) == *(rcx_3 + rsi_1 + 0x38))
            char rax_8 = *(arg4 + 0x30)
            
            if (rax_8 == 3)
                break
            
            if (rax_8 == 2)
                sub_140db4940(arg2, i, arg3, 0, zmm1)
                break
    
    i -= 1
    rsi_1 -= 0x48
    
    if (rax_5 != 0)
        break

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        int64_t rdx_3 = *r14
        (*rdx_3)(r14, rdx_3)
        int32_t temp1_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *r14
            (*(r8_2 + 8))(r14, 1, r8_2)

return arg2
