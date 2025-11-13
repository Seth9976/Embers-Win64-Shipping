// 函数: sub_141e5e360
// 地址: 0x141e5e360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_40 = 0
int64_t var_30 = 0
int64_t var_28 = 0
int64_t* r8_2

if (*(arg1 + 0x120) == *(arg1 + 0x14c))
label_141e5e419:
    r8_2 = nullptr
else
    int32_t rax_1 = sub_140cde1f0(arg3)
    void* r8 = arg1 + 0x150
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_3 = *(r8 + (((sx.q(*(arg1 + 0x160)) - 1) & sx.q(rax_1)) << 2))
    
    if (rax_3 == 0xffffffff)
    label_141e5e419_1:
        r8_2 = nullptr
    else
        while (true)
            r8_2 = sx.q(rax_3) * 0x68 + *(arg1 + 0x118)
            
            if (*r8_2 == *arg3 && r8_2[1] == arg3[1])
                break
            
            rax_3 = r8_2[0xc].d
            
            if (rax_3 == 0xffffffff)
                goto label_141e5e419_2
        
        if (rax_3 == 0xffffffff)
        label_141e5e419_2:
            r8_2 = nullptr

void* rdi_1 = &r8_2[2]

if (r8_2 == 0)
    rdi_1 = nullptr

if (rdi_1 == 0)
label_141e5e4b5:
    arg2[1].q = 0
    *arg2 = 0.o
    *(arg2 + 0x18) = 0
    arg2[2].q = 0
else
    int64_t* rcx_8
    
    if (*(rdi_1 + 8) == *(rdi_1 + 0x34))
    label_141e5e48e:
        rcx_8 = nullptr
    else
        int32_t rax_6 = sub_140b5ead0(arg4.d) + arg4:4.d
        void* r8_3 = rdi_1 + 0x38
        void* rcx_5 = *(r8_3 + 8)
        
        if (rcx_5 != 0)
            r8_3 = rcx_5
        
        int32_t rax_8 = *(r8_3 + (((sx.q(*(rdi_1 + 0x48)) - 1) & sx.q(rax_6)) << 2))
        
        if (rax_8 == 0xffffffff)
        label_141e5e48e_1:
            rcx_8 = nullptr
        else
            while (true)
                rcx_8 = sx.q(rax_8) * 0x38 + *rdi_1
                
                if (*rcx_8 == arg4)
                    break
                
                rax_8 = rcx_8[6].d
                
                if (rax_8 == 0xffffffff)
                    goto label_141e5e48e_2
            
            if (rax_8 == 0xffffffff)
            label_141e5e48e_2:
                rcx_8 = nullptr
    
    void* rdx_6 = &rcx_8[1]
    
    if (rcx_8 == 0)
        rdx_6 = nullptr
    
    if (rdx_6 == 0)
        goto label_141e5e4b5
    
    sub_141e4f110(arg2, rdx_6)

sub_1408464b0(&var_30)
return arg2
