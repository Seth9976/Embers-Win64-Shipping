// 函数: sub_142645cb0
// 地址: 0x142645cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg2 + 0xa8)

if (result == 0)
    result = sub_141ee69e0(arg2)

if (result != 0)
    void* rsi_1 = *(result + 0x120)
    
    if (rsi_1 != 0)
        void* rax = sub_14269bba0()
        void* rdx = *(rsi_1 + 0x10)
        result = sx.q(*(rax + 0x38))
        
        if (result.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (result << 3)) == rax + 0x30)
            void* r9_1 = *(rsi_1 + 0x298)
            
            if (r9_1 != 0)
                int64_t r10_1 = sx.q(*(arg2 + 0xc))
                
                if (*(r9_1 + 0x458) != *(r9_1 + 0x484))
                    void* r8_2 = r9_1 + 0x488
                    void* rcx_2 = *(r8_2 + 8)
                    
                    if (rcx_2 != 0)
                        r8_2 = rcx_2
                    
                    int32_t rax_2 = *(r8_2 + (((sx.q(*(r9_1 + 0x498)) - 1) & r10_1) << 2))
                    
                    if (rax_2 != 0xffffffff)
                        int32_t* rdx_6
                        
                        while (true)
                            rdx_6 = (sx.q(rax_2) << 5) + *(r9_1 + 0x450)
                            
                            if (*rdx_6 == r10_1.d)
                                break
                            
                            rax_2 = rdx_6[6]
                            
                            if (rax_2 == 0xffffffff)
                                goto label_142645dad
                        
                        if (rax_2 != 0xffffffff && rdx_6 != 0 && rdx_6 != -8)
                            result.b = 1
                            return result
            
        label_142645dad:
            int32_t var_48
            sub_140d3a3a0(&var_48, arg2)
            int64_t zmm0_1 = data_143dbb1f8.q
            char var_14
            char var_14_1 = var_14 & 0xfc
            int64_t var_40_1 = 0
            int64_t var_38_1 = 0
            int32_t rax_3 = data_143dbb200
            int32_t var_1c_1 = rax_3
            int32_t var_28_1 = rax_3
            int64_t var_24_1 = zmm0_1
            int64_t var_30_1 = zmm0_1
            char var_18_1 = 0
            *(rsi_1 + 0x27c)
            
            if (*(rsi_1 + 0x250) == *(rsi_1 + 0x27c))
            label_142645e8d:
                result.b = 0
            else
                void* r8_4 = rsi_1 + 0x280
                void* rcx_4 = *(r8_4 + 8)
                
                if (rcx_4 != 0)
                    r8_4 = rcx_4
                
                int32_t var_44
                int32_t rbx_1 =
                    *(r8_4 + (((sx.q(var_48) ^ sx.q(var_44)) & (sx.q(*(rsi_1 + 0x290)) - 1)) << 2))
                
                if (rbx_1 == 0xffffffff)
                label_142645e8d_1:
                    result.b = 0
                else
                    result = *(rsi_1 + 0x248)
                    
                    while (true)
                        int64_t rdi_2 = sx.q(rbx_1) << 6
                        int32_t* rcx_5 = rdi_2 + result
                        
                        if (*rcx_5 != var_48 || rcx_5[1] != var_44)
                            if (sub_140d3e110(rcx_5).b != 0)
                                result.b = 0
                            else if (sub_140d3e110(&var_48).b != 0)
                                result.b = 0
                            else
                                result.b = 1
                        else
                            result.b = 1
                        
                        if (result.b != 0)
                            break
                        
                        result = *(rsi_1 + 0x248)
                        rbx_1 = *(result + rdi_2 + 0x38)
                        
                        if (rbx_1 == 0xffffffff)
                            goto label_142645e8d_2
                    
                    if (rbx_1 == 0xffffffff)
                    label_142645e8d_2:
                        result.b = 0
                    else
                        result.b = 1
            
            if (result.b != 0)
                result.b = 1
                return result

result.b = 0
return result
