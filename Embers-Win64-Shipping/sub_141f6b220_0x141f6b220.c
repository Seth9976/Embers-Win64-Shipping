// 函数: sub_141f6b220
// 地址: 0x141f6b220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* arg_10 = arg2
int64_t r8
r8.b = 1
int32_t result = sub_140b0f6c0(&arg_10, u"CustomLODData")

if (result.b != 0)
    int64_t* rsi_1 = nullptr
    int64_t r14_1 = 0
    int32_t arg_20
    int32_t rax_5
    
    if (sub_140b2ab20(arg_10, u"LOD=", &arg_20) == 0)
        rax_5 = arg_20
    else
        int64_t var_38
        sub_140a2e390(&var_38, u"%d", zx.q(arg_20))
        r14_1 = var_38
        int32_t var_30
        int32_t rax_2
        
        if (var_30 == 0)
            rax_2 = 0
        else
            rax_2 = var_30 - 1
        
        rax_5 = arg_20
        arg_10 = &arg_10[4 + sx.q(rax_2)]
        
        if (rax_5 s> 0xffffffff)
            sub_142397ac0(arg1, rax_5 + 1, rax_5 + 1)
            rax_5 = arg_20
    
    void* rbp_3 = sx.q(rax_5) * 0x90 + *(arg1 + 0x460)
    result = sub_141f6b3f0(rbp_3, &arg_10)
    int16_t* rbx_1 = arg_10
    
    if (rbx_1 != 0)
        result = 0x43280420
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while ((*u"ColorVertexData")[rdi_1] != 0)
        
        int16_t i = *rbx_1
        void* rbx_2 = &rbx_1[1]
        
        while (i != 0)
            result.w = sbb.w(i - 0x61, i - 0x61, zx.d(i) - 0x61 u< 0x1a)
            result.w &= 0x20
            
            if (i - result.w == 0x43)
                result = sub_140a546e0(rbx_2, &(*u"ColorVertexData")[1], sx.q(rdi_1.d - 1))
                
                if (result == 0)
                    if (rbx_2 != 2)
                        int32_t rdx_2 = arg_20
                        arg_10 = rbx_2 - 2
                        sub_141f6f2b0(arg1, rdx_2)
                        void*** rax_8 = j_sub_140a82f30(0x40)
                        
                        if (rax_8 != 0)
                            rsi_1 = sub_1422877b0(rax_8)
                        
                        *(rbp_3 + 0x30) = rsi_1
                        result = sub_1422a3630(rsi_1, arg_10)
                    
                    break
            
            i = *rbx_2
            rbx_2 += 2
    
    if (r14_1 != 0)
        return sub_140a74f90(r14_1)

return result
