// 函数: sub_1408c4d10
// 地址: 0x1408c4d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0xc8) s> 0)
    int64_t rcx = *(arg1 + 0xc0)
    void* r14_1 = nullptr
    
    do
        void* rax_1 = r14_1 + rcx
        int32_t j = 0
        
        if (*(rax_1 + 0x18) s> 0)
            int64_t rbx_1 = 0
            
            do
                sub_1408c4d10(*(*(rax_1 + 0x10) + rbx_1), arg2)
                rcx = *(arg1 + 0xc0)
                rbx_1 += 8
                rax_1 = r14_1 + rcx
                j += 1
            while (j s< *(rax_1 + 0x18))
        
        i += 1
        r14_1 += 0x50
    while (i s< *(arg1 + 0xc8))

uint64_t result = sub_1408c0320(arg1)

if (result.b == 0 && *(arg1 + 0x1c8) s< 4)
    int32_t i_1 = 0
    
    if (*(arg1 + 0xc8) s> 0)
        int64_t r12_1 = 0
        
        do
            result = *(arg1 + 0xc0)
            uint64_t j_3 = zx.q(*(r12_1 + result + 0x48))
            
            if (j_3.d s> 0)
                void*** rbx_2 = data_143ceb928
                int128_t zmm9
                
                if (rbx_2 == 0)
                    void*** rax_2 = j_sub_140a82f30(zx.q((&rbx_2[6]).d))
                    
                    if (rax_2 == 0)
                        rbx_2 = nullptr
                        data_143ceb928 = 0
                    else
                        void*** rax_3
                        rax_3, zmm9 = sub_1408b9380(rax_2)
                        rbx_2 = rax_3
                        data_143ceb928 = rax_3
                
                int64_t r8_1 = *(arg1 + 0x2a0)
                int64_t var_58 = r8_1
                
                if (r8_1 != 0)
                    int64_t r15_1 = sx.q(*(arg1 + 0x1c8)) * 0x50
                    int64_t* r13_2 = &rbx_2[2][sx.q(*(arg1 + 0x1c8)) * 0xa]
                    int32_t arg_8
                    sub_1408be510(r13_2, &arg_8, r8_1)
                    int64_t rax_5 = sx.q(arg_8)
                    int64_t* rax_7
                    
                    if (rax_5.d != 0xffffffff)
                        void* rcx_7 = *r13_2 + rax_5 * 0x18
                        rax_7 = rcx_7 + 8
                        
                        if (rcx_7 == 0)
                            rax_7 = nullptr
                    
                    if (rax_5.d != 0xffffffff && rax_7 != 0)
                    label_1408c4f24:
                        int64_t* rcx_11 = *rax_7
                        
                        if (rcx_11 != 0)
                            sub_1408bd910(rcx_11, j_3.d)
                    else
                        int64_t* rax_8 = j_sub_140a82f30(0x20)
                        
                        if (rax_8 == 0)
                            rax_8 = nullptr
                        else
                            *rax_8 = 0
                            rax_8[1] = 0
                            rax_8[2].d = 0xffffffff
                            *(rax_8 + 0x14) = 0
                        
                        void* rcx_8 = rbx_2[2]
                        int64_t* var_50 = rax_8
                        int64_t* var_48 = &var_58
                        int64_t** var_40_1 = &var_50
                        void arg_20
                        sub_1408b8a60(rcx_8 + r15_1, &arg_20, &var_48, nullptr)
                        int64_t* rbx_4 = &rbx_2[2][sx.q(*(arg1 + 0x1c8)) * 0xa]
                        int32_t arg_18
                        sub_1408be510(rbx_4, &arg_18, var_58)
                        int64_t rax_9 = sx.q(arg_18)
                        
                        if (rax_9.d != 0xffffffff)
                            void* rax_11 = *rbx_4 + rax_9 * 0x18
                            
                            if (rax_11 != 0)
                                rax_7 = rax_11 + 8
                                
                                if (rax_7 != 0)
                                    goto label_1408c4f24
                
                uint64_t j_2 = j_3
                uint64_t j_1
                
                do
                    result, zmm9 = sub_1408bc6b0(arg1, arg2, i_1, zmm9)
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
            
            i_1 += 1
            r12_1 += 0x50
        while (i_1 s< *(arg1 + 0xc8))

return result
