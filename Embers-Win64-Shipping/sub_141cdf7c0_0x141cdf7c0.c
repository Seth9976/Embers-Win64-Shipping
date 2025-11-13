// 函数: sub_141cdf7c0
// 地址: 0x141cdf7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
int32_t rax_15
int64_t zmm0

if (arg3 s< 0 || rdi.d s>= *(arg1 + 0x30))
    zmm0 = data_143dbb1f8.q
    rax_15 = data_143dbb200
else
    void* rax_1 = *(arg1 + 0x48)
    void* r8 = arg1 + 0x38
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi.d)
    
    if (not(test_bit(*(r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), rdi.d & 0x1f)))
        zmm0 = data_143dbb1f8.q
        rax_15 = data_143dbb200
    else if (sub_141cdf960(arg1 + 0x178, data_143f35cc8) == 0)
        zmm0 = data_143dbb1f8.q
        rax_15 = data_143dbb200
    else
        int64_t rbx_1 = data_143f35cc8
        void* const rcx_6
        
        if (*(arg1 + 0x180) == *(arg1 + 0x1ac))
        label_141cdf8b0:
            rcx_6 = nullptr
        else
            int32_t rax_10 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
            void* r8_1 = arg1 + 0x1b0
            void* rcx_4 = *(r8_1 + 8)
            
            if (rcx_4 != 0)
                r8_1 = rcx_4
            
            int32_t rax_12 = *(r8_1 + (((sx.q(*(arg1 + 0x1c0)) - 1) & sx.q(rax_10)) << 2))
            
            if (rax_12 == 0xffffffff)
            label_141cdf8b0_1:
                rcx_6 = nullptr
            else
                int64_t r8_2 = *(arg1 + 0x178)
                
                while (true)
                    int64_t rdx_7 = sx.q(rax_12) * 3
                    rcx_6 = r8_2 + (rdx_7 << 3)
                    
                    if (*(r8_2 + (rdx_7 << 3)) == rbx_1)
                        break
                    
                    rax_12 = *(rcx_6 + 0x10)
                    
                    if (rax_12 == 0xffffffff)
                        goto label_141cdf8b0_2
                
                if (rax_12 == 0xffffffff)
                label_141cdf8b0_2:
                    rcx_6 = nullptr
        
        int64_t rdx_8 = rdi * 3
        int64_t rax_14 = **(*(rcx_6 + 8) + 0x18)
        zmm0 = *(rax_14 + (rdx_8 << 2))
        rax_15 = *(rax_14 + (rdx_8 << 2) + 8)

*arg2 = zmm0
arg2[1].d = rax_15
return arg2
