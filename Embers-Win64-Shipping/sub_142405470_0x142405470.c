// 函数: sub_142405470
// 地址: 0x142405470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x2b4) & 1) == 0)
    sub_142403b00(arg1)

int64_t rbx = *(arg2 + 4)
int32_t i = 0
int128_t zmm6 = zx.o(0)
void* const rcx_3

if (*(arg1 + 0x218) == *(arg1 + 0x244))
labelid_20:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = arg1 + 0x248
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x258)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_142405520:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(arg1 + 0x210)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 5
            rcx_3 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == rbx)
                break
            
            rax_4 = *(rcx_3 + 0x20)
            
            if (rax_4 == 0xffffffff)
                goto label_142405520_1
        
        if (rax_4 == 0xffffffff)
        label_142405520_1:
            rcx_3 = nullptr

void* r14 = rcx_3 + 8

if (rcx_3 == 0)
    r14 = nullptr

if (r14 != 0)
    if (*(r14 + 8) s> 0)
        void* rsi_1 = nullptr
        
        do
            int64_t r15_1 = *r14
            void* rbx_1 = rsi_1 + r15_1
            int64_t var_68 = *(rsi_1 + r15_1 + 0x10)
            int64_t var_60_1 = *(rbx_1 + 0x18)
            void* rax_7 = *(rbx_1 + 0x20)
            void* var_58_1 = rax_7
            
            if (rax_7 != 0)
                *(rax_7 + 8) += 1
            
            if (sub_142415bf0(arg1, &var_68, nullptr) == 0)
                if (arg3 == 0 || (*arg2 & 2) != 0)
                    var_68 = *(rbx_1 + 0x10)
                    int64_t var_60_2 = *(rbx_1 + 0x18)
                    void* rax_11 = *(rbx_1 + 0x20)
                    void* var_58_2 = rax_11
                    
                    if (rax_11 != 0)
                        *(rax_11 + 8) += 1
                    
                    float zmm0
                    zmm0, zmm6 = sub_142411a80(arg1, &var_68)
                    zmm6.d = zmm6.d f+ zmm0 f* *(rsi_1 + r15_1 + 8)
                
                if ((*arg2 & 1) != 0)
                    sub_141b6d510(arg4, rbx_1 + 0x10)
            
            i += 1
            rsi_1 += 0x28
        while (i s< *(r14 + 8))
    
    if ((*(r14 + 0x10) & 1) != 0)
        zmm6 ^= data_142d3f780

return zmm6.d
