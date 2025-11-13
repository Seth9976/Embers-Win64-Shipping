// 函数: sub_1405bfa10
// 地址: 0x1405bfa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405b5d50(arg1)
sub_140d3a3a0(&arg1[0x15], sub_14202a680(arg1, arg2))

if (sub_140d3e110(&arg1[0x15]) != 0)
    void* rax_2 = sub_140d3c6e0(&arg1[0x15])
    void* arg_8 = rax_2
    uint32_t r9_2 = (rax_2 u>> 4).d
    int32_t r8_2 = (0x9e3779b9 - r9_2) ^ r9_2 << 8
    int32_t rdx_4 = neg.d(r8_2 + r9_2) ^ r8_2 u>> 0xd
    int32_t r9_5 = (r9_2 - r8_2 - rdx_4) ^ rdx_4 u>> 0xc
    int32_t r8_5 = (r8_2 - r9_5 - rdx_4) ^ r9_5 << 0x10
    int32_t rdx_7 = (rdx_4 - r8_5 - r9_5) ^ r8_5 u>> 5
    int32_t r9_8 = (r9_5 - r8_5 - rdx_7) ^ rdx_7 u>> 3
    int32_t r8_8 = (r8_5 - r9_8 - rdx_7) ^ r9_8 << 0xa
    void* rax_15 = sub_1405a8f30(&data_143958130, (rdx_7 - r8_8 - r9_8) ^ r8_8 u>> 0xf, &arg_8)
    int32_t rax_16 = *(rax_15 + 0xc)
    
    if (rax_16 != 0)
        *(rax_15 + 0xc) = rax_16 + 1
    else
        void* rcx_6 = arg_8
        *(rax_15 + 0x10) = *(rcx_6 + 0x310)
        *(rcx_6 + 0x310) = rax_16.b
        void* rax_17 = sub_14226dd50(rcx_6)
        
        if (rax_17 != 0)
            void* rcx_7 = *(rax_17 + 0x70)
            
            if (rcx_7 != 0)
                *rax_15 = *(rcx_7 + 0xac)
                *(rcx_7 + 0xac) &= 0xffd77dd9
                *(rcx_7 + 0xb0) &= 0xff5fcd96
                *(rax_15 + 8) = 1
        
        *(rax_15 + 0xc) += 1
    
    int64_t* rbx_2 = *(sub_140d3c6e0(&arg1[0x15]) + 0x2b8)
    
    if (rbx_2 != 0)
        int64_t rax_21 = sub_1405cc8c0()
        int64_t r8_11 = *rbx_2
        void* rax_22 = (*(r8_11 + 0x690))(rbx_2, rax_21, r8_11)
        arg1[0x11] = rax_22
        *(rax_22 + 0x48) = arg1
    
    *(arg1 + 0x84) = arg2

return sub_140d3e110(&arg1[0x15]) __tailcall
