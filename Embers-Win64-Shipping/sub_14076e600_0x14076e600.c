// 函数: sub_14076e600
// 地址: 0x14076e600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (*(arg1 + 0x1c8) == 0)
    return 

void var_28
sub_141e7c8f0(sub_141e7c7a0(), &var_28, rbx.d)

if (sub_141e80b60(&var_28) != 0)
    void* var_20
    uint128_t zmm1
    zmm1.d = _mm_cvtepi32_ps(zx.o(*(var_20 + 0xc))).d f* *(arg1 + 0x1d0)
    zmm1.d = zmm1.d f* 0.00200000009f
    zmm1.d = zmm1.d f- 0.5f
    void*** rax_6 = j_sub_140a82f30(0x40)
    void*** rsi_2
    
    if (rax_6 == 0)
        rsi_2 = nullptr
    else
        rsi_2 = sub_140745180(rax_6, arg1 + 0x118, int.d(zmm1.d) s>> 1 << 3, rbx.d, *(arg1 + 0x1c0))
    
    int32_t var_38
    sub_140598750(arg1 + 0xc8, &var_38)
    int64_t var_48
    var_48.d = var_38
    int32_t* var_30
    *var_30 = rbx.d
    *(var_30 + 8) = rsi_2
    var_30[4] = 0xffffffff
    void arg_8
    sub_140753180(arg1 + 0xc8, &arg_8, *var_30, var_30, var_48.d, nullptr)
    void* const rcx_9
    
    if (*(arg1 + 0xd0) == *(arg1 + 0xfc))
    label_14076e750:
        rcx_9 = nullptr
    else
        void* rcx_7 = *(arg1 + 0x108)
        void* r8_4 = arg1 + 0x100
        
        if (rcx_7 != 0)
            r8_4 = rcx_7
        
        int32_t rax_10 = *(r8_4 + (((sx.q(*(arg1 + 0x110)) - 1) & rbx) << 2))
        
        if (rax_10 == 0xffffffff)
        label_14076e750_1:
            rcx_9 = nullptr
        else
            int64_t r8_5 = *(arg1 + 0xc8)
            
            while (true)
                int64_t rdx_7 = sx.q(rax_10) * 3
                rcx_9 = r8_5 + (rdx_7 << 3)
                
                if (*(r8_5 + (rdx_7 << 3)) == rbx.d)
                    break
                
                rax_10 = *(rcx_9 + 0x10)
                
                if (rax_10 == 0xffffffff)
                    goto label_14076e750_2
            
            if (rax_10 == 0xffffffff)
            label_14076e750_2:
                rcx_9 = nullptr
    
    sub_140771e80(*(rcx_9 + 8))

sub_141e71cd0(&var_28)
