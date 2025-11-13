// 函数: sub_141d524e0
// 地址: 0x141d524e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t rcx = int.q(fconvert.t(1000000.0))
*arg1 = &data_143227898
__builtin_memset(&arg1[5], 0, 0x80)
arg1[0x15] = rcx
arg1[0x16] = int.q(fconvert.t(30000000.0))
arg1[0x17] = rcx
*(arg1 + 0xc4) &= 0xfffffffc
*(arg1 + 0xc1) = 1
arg1[0x1a].d = 0xffffffff
arg1[0x1b] = 0
arg1[0x1c].d = 0x42b40000
*(arg1 + 0xe4) = 0x42700000
arg1[0x1d] = data_143dbb208
arg1[0x1e].d = data_143dbb210
arg1[0x1f] = 0
arg1[0x20] = 0
arg1[0x21] = 2
arg1[0x22] = 0
arg1[0x23] = 0
sub_140b214c0(&arg1[0x24])
arg1[0x26].w = 0

if (((arg1[1].d u>> 4).b & 1) == 0)
    void*** rax_4 = j_sub_140a82f30(0x180)
    void*** r14_1
    
    if (rax_4 == 0)
        r14_1 = nullptr
    else
        r14_1 = sub_141d4baa0(rax_4)
    
    void*** rax_6 = j_sub_140a82f30(0x18)
    void*** rbx_1 = rax_6
    
    if (rax_6 == 0)
        rbx_1 = nullptr
    else
        rax_6[1].d = 1
        *(rax_6 + 0xc) = 1
        *rbx_1 = &data_142e21f50
        rbx_1[2] = r14_1
    
    void*** var_48 = r14_1
    void**** rsi_1 = &r14_1[3]
    void*** var_40 = rbx_1
    
    if (r14_1 == 0)
        rsi_1 = nullptr
    
    if (rsi_1 != 0)
        if (*rsi_1 == 0)
        label_141d526b0:
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            *rsi_1 = r14_1
            int64_t* rcx_4 = rsi_1[1]
            
            if (rbx_1 != rcx_4)
                if (rbx_1 != 0)
                    *(rbx_1 + 0xc) += 1
                    rcx_4 = rsi_1[1]
                
                if (rcx_4 != 0)
                    int32_t rax_8 = *(rcx_4 + 0xc)
                    *(rcx_4 + 0xc) -= 1
                    
                    if (rax_8 == 1)
                        (*(*rcx_4 + 8))(rcx_4, 1)
                
                rsi_1[1] = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_12 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_12 == 1)
                        (*rbx_1)[1](rbx_1, 1)
        else
            void* rcx_3 = rsi_1[1]
            
            if (rcx_3 == 0)
                goto label_141d526b0
            
            int32_t rax_7 = 0
            
            if (0 == *(rcx_3 + 8))
                *(rcx_3 + 8) = 0
            else
                rax_7 = *(rcx_3 + 8)
            
            if (rax_7 s<= 0)
                goto label_141d526b0
    
    if (&arg1[0x22] != &var_48)
        arg1[0x22] = r14_1
        var_48 = nullptr
        sub_1405aeff0(&arg1[0x23], &var_40)
    
    void*** rcx_8 = var_40
    
    if (rcx_8 != 0)
        rcx_8[1].d -= 1
        
        if (rcx_8[1].d == 1)
            void*** rbx_2 = var_40
            (**rbx_2)(rbx_2)
            int32_t rbp_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rbp_1 == 1)
                void*** rcx_10 = var_40
                (*rcx_10)[1](rcx_10, zx.q(rbp_1))
    
    uint64_t* rsi_3 = &arg1[0x22][0x22]
    int64_t* rax_17 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_17 != 0)
        *rax_17 = &data_142e33718
        sub_140d3a3a0(&rax_17[1], arg1)
        rax_17[2] = sub_141d58f50
        rax_17[4] = sub_140a387b0()
        *rax_17 = &data_142e33770
    
    if (rax_17 != 0)
        sub_140599630(rsi_3, 1)
        void arg_18
        (*(*rax_17 + 0x30))(rax_17, &arg_18)
        int64_t rbp_2 = sx.q(rsi_3[1].d)
        int32_t rax_20 = (rbp_2 + 1).d
        rsi_3[1].d = rax_20
        
        if (rax_20 s> *(rsi_3 + 0xc))
            sub_1405a4f90(rsi_3)
        
        void** rax_23 = (rbp_2 << 4) + *rsi_3
        *rax_23 = rax_17
        rax_23[1].d = 3
    
    int64_t arg_8 = 0
    arg1[0x19] = sub_141d520f0(sub_140cde0b0(), 0, 0x48, 0, 0, 0)

return arg1
