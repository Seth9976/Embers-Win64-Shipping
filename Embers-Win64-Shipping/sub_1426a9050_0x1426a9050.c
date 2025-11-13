// 函数: sub_1426a9050
// 地址: 0x1426a9050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
bool rdx = sub_140b5b8a0(arg2.d, 0).b == 0
int64_t result
result.b = arg_10:4.d != 0

if ((rdx | result.b) != 0)
    void* const rcx_4
    
    if (*(arg1 + 0x218) == *(arg1 + 0x244))
    labelid_e:
        rcx_4 = nullptr
    else
        int32_t rax_2 = sub_140b5ead0(arg2.d) + arg_10:4.d
        void* r8_1 = arg1 + 0x248
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        int32_t rax_4 = *(r8_1 + (((sx.q(*(arg1 + 0x258)) - 1) & sx.q(rax_2)) << 2))
        
        if (rax_4 == 0xffffffff)
        label_1426a9100:
            rcx_4 = nullptr
        else
            int64_t r8_2 = *(arg1 + 0x210)
            
            while (true)
                int64_t rdx_4 = sx.q(rax_4) * 5
                rcx_4 = r8_2 + (rdx_4 << 2)
                
                if (*(r8_2 + (rdx_4 << 2)) == arg2)
                    break
                
                rax_4 = *(rcx_4 + 0xc)
                
                if (rax_4 == 0xffffffff)
                    goto label_1426a9100_1
            
            if (rax_4 == 0xffffffff)
            label_1426a9100_1:
                rcx_4 = nullptr
    
    result = rcx_4 + 8
    
    if (rcx_4 == 0)
        result = 0
    
    int128_t zmm6
    
    if (arg4 == 0 || result == 0)
        void* rax_5 = *(arg1 + 0xa8)
        
        if (rax_5 == 0)
            rax_5 = sub_141ee69e0(arg1)
        
        zmm6.d = arg3.d f+ *(rax_5 + 0x520)
        int32_t var_38 = zmm6.d
        return sub_1426a2080(arg1 + 0x210, &arg_10, &var_38)
    
    zmm6.d = arg3.d f+ *result
    *result = zmm6.d

return result
