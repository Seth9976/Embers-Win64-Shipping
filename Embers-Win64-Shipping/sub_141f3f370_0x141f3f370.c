// 函数: sub_141f3f370
// 地址: 0x141f3f370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = data_143f393d0
sub_140b34200("InitAnim", r14)
void* rax = arg1[0x86]

if (rax != 0 && (arg1[0x11].b & 1) != 0)
    uint64_t rbp
    uint64_t arg_18 = rbp
    arg1[0xe4].w = 0
    int64_t rbx_1 = sx.q(arg1[0xa8].d)
    uint64_t rax_1 = zx.q(*(rax + 0x170))
    
    if (rax_1.d s> rbx_1.d)
        arg1[0xa8].d = rax_1.d
        
        if (rax_1.d s> *(arg1 + 0x544))
            sub_1406105e0(&arg1[0xa7])
        
        memset(arg1[0xa7] + (rbx_1 << 2), 0, sx.q(rax_1.d - rbx_1.d) << 2)
    else if (rax_1.d s< rbx_1.d && rax_1.d != rbx_1.d)
        arg1[0xa8].d = rax_1.d
        sub_1405dac90(&arg1[0xa7])
    
    if (arg1[0x13c] != 0)
        sub_1405a6220(sub_140a242a0(), &arg1[0x13c])
        (*(*arg1 + 0x9d0))(arg1, 0)
    
    void* rbx_2
    
    if (arg1[0xc9] == 0)
        rbp.b = 0
    else
        rax_1 = sub_14245f6d0()
        
        if (rax_1 == 0)
            rbp.b = 0
        else
            void* rdx_3 = arg1[0xc9]
            int64_t r8_4 = rax_1 + 0x30
            rax_1 = sx.q(*(rax_1 + 0x38))
            
            if (rax_1.d s> *(rdx_3 + 0x38))
                rbp.b = 0
            else if (*(*(rdx_3 + 0x30) + (rax_1 << 3)) != r8_4 || rdx_3 == 0)
                rbp.b = 0
            else
                rax_1 = arg1[0xca]
                
                if (rax_1 == 0)
                    rbp.b = 0
                else
                    rbx_2 = *(rax_1 + 0x10)
                    void* const rdx_4
                    
                    if (rdx_3 == 0)
                        rdx_4 = nullptr
                    else
                        rax_1 = sub_14245f6d0()
                        
                        if (rax_1 == 0)
                            rdx_4 = nullptr
                        else
                            rdx_4 = arg1[0xc9]
                            int64_t r8_5 = rax_1 + 0x30
                            rax_1 = sx.q(*(rax_1 + 0x38))
                            
                            if (rax_1.d s> *(rdx_4 + 0x38))
                                rdx_4 = nullptr
                            else if (*(*(rdx_4 + 0x30) + (rax_1 << 3)) != r8_5)
                                rdx_4 = nullptr
                    
                    if (rbx_2 == rdx_4)
                        rbp.b = 0
                    else
                        rbp.b = 1
    
    void* rdx_5 = arg1[0xca]
    void* const r8_6
    
    if (rdx_5 == 0)
        r8_6 = nullptr
    else
        r8_6 = *(rdx_5 + 0x28)
    
    void* rsi_1
    
    if (rdx_5 == 0 || r8_6 != 0)
        rsi_1.b = 0
        
        if (r8_6 == 0 || *(rdx_5 + 0x28) == *(arg1[0x86] + 0x60))
            rbx_2.b = 0
        else
            rbx_2.b = 1
    else
        rsi_1.b = 1
        rbx_2.b = 0
    
    if (r8_6 != 0 && rbx_2.b == 0)
        rax_1 = sub_141e44a60(r8_6, arg1[0x86])
    
    if (r8_6 == 0 || rbx_2.b != 0 || rax_1.b != 0)
        rax_1.b = 0
    else
        rax_1.b = 1
    
    arg1[0x10d].d = 0
    
    if (rbp.b != 0 || rbx_2.b != 0 || rax_1.b != 0 || rsi_1.b != 0)
        sub_141f365a0(arg1)
    
    sub_141f450c0(arg1, arg1[0xab].d)
    void* rax_5 = arg1[0x15]
    
    if (rax_5 == 0)
        rax_5 = sub_141ee69e0(arg1)
    
    void* rax_7
    
    if (*(rax_5 + 0x11a) != 2 || (*(arg1 + 0x71c) & 5) != 0)
        void* rax_6 = sub_142458a60()
        rax_7 = *(rax_6 + 0x118)
        
        if (rax_7 == 0)
            int64_t rdx_8 = *rax_6
            (*(rdx_8 + 0x390))(rax_6, rdx_8)
            rax_7 = *(rax_6 + 0x118)
    
    if ((*(rax_5 + 0x11a) == 2 && (*(arg1 + 0x71c) & 5) == 0) || *(rax_7 + 0x57) != 0)
        rbx_2.b = 1
    else
        rbx_2.b = 0
    
    char rax_8 = sub_141f3fb10(arg1, arg2, rbx_2.b ^ 1)
    
    if (sub_140d3e110(&arg1[0x87]) == 0 && (rax_8 != 0 || arg1[0xca] == 0))
        if (rbx_2.b == 0)
            sub_140780b40(&arg1[0xcf], arg1[0x86] + 0x1b8)
            sub_141f3a7d0(arg1, arg1[0x86], &arg1[0xcf], &arg1[(sx.q(arg1[0x92].d) + 0x45) * 2])
            arg1[0xb5].b |= 0x40
            sub_141f5dd50(arg1)
        else
            sub_141f4b670(arg1, zx.o(0), 0)
            (*(*arg1 + 0x8d8))(arg1, 0)
        
        if (rax_8 != 0)
            sub_1405a9f90(&arg1[0x132], 0)
    
    sub_1405c6ac0(arg1, 0, 0)

return sub_140b38680("InitAnim", r14) __tailcall
