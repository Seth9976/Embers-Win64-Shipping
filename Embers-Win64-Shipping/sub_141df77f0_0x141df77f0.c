// 函数: sub_141df77f0
// 地址: 0x141df77f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
void* const rax_5

if (arg1 == 0)
    rax_5 = nullptr
else
    void* rsi_1 = arg1[4]
    
    if (rsi_1 != 0)
        void* rax_1 = sub_142591550()
        void* rdx_1 = *(rsi_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* r8_1
            r8_1.b = 1
            sub_141f3e990(arg1[4], 1, r8_1.b)
    
    rax_5 = arg1[0x48]
    
    if (rax_5 == 0)
        rax_5 = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = rax_5

sub_141e0e060(arg1, *(rax_5 + 0xc0))
int64_t result = sub_141e0e840(arg1)
int32_t rdx_2 = arg1[0x10].d

if (rdx_2 s> 0)
    int64_t* rsi_2 = nullptr
    int32_t rbp_1 = 1
    
    do
        result = arg1[0xf]
        int64_t* r14_1 = *(rsi_2 + result)
        
        if (r14_1 != 0 && *r14_1 == 0)
            sub_141df5a80(arg1, r14_1)
            sub_141df36a0(r14_1, 1)
            int32_t rcx_7 = arg1[0x10].d
            int32_t rax_7 = rcx_7 - rdi
            
            if (rax_7 != 1)
                int64_t rcx_8 = arg1[0xf]
                memmove(rcx_8 + (sx.q(rdi) << 3), rcx_8 + (sx.q(rbp_1) << 3), (rax_7 - 1) << 3)
                rcx_7 = arg1[0x10].d
            
            arg1[0x10].d = rcx_7 - 1
            result = sub_1405c53d0(&arg1[0xf])
            rdx_2 = arg1[0x10].d
            rdi -= 1
            rbp_1 -= 1
            rsi_2 -= 8
            
            if (rdx_2 == 0)
                result = sub_1405a9f90(&arg1[0xd], 0)
                rdx_2 = arg1[0x10].d
        
        rdi += 1
        rbp_1 += 1
        rsi_2 = &rsi_2[1]
    while (rdi s< rdx_2)

return result
