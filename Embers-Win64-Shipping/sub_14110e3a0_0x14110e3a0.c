// 函数: sub_14110e3a0
// 地址: 0x14110e3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_14139bef0(arg2)
int64_t* result_1 = result

if (*(result + 0x3a4) != 0 && *(arg1 + 0x3b0) s>= 3)
    int64_t rdx = *(result[8] + 8)
    int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax = &rbx_3[1]
    int128_t zmm6
    
    if (rax u> *(arg2 + 0x38))
        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x10)
        rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax = &rbx_3[1]
    
    *(arg2 + 0x30) = rax
    *rbx_3 = rdx
    void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_4[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_4[5]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    int32_t i = 0
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_4
    *(arg2 + 8) = &rcx_4[1]
    rcx_4[1] = 0
    result = &data_142d549c8
    *rcx_4 = &data_142d549c8
    rcx_4[2].d = 1
    rcx_4[3] = rbx_3
    rcx_4[4].d = 0
    
    if (*(arg1 + 0xa8) s> 0)
        int64_t r12_1 = 0
        int128_t var_38_1 = zmm6
        zmm6 = 0x3f800000
        
        do
            int32_t rbx_6 = *(arg2 + 0x8c)
            void* r15_2 = *(arg1 + 0xa0) + r12_1
            int32_t rax_4 = *(r15_2 + 0xad8)
            
            if (rbx_6 != rax_4)
                bool cond:0_1 = *(arg2 + 0x14) u> 0
                *(arg2 + 0x8c) = rax_4
                
                if (cond:0_1)
                    void*** rdx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_5 = &rdx_3[3]
                    
                    if (rax_5 u> *(arg2 + 0x38))
                        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_5 = &rdx_3[3]
                    
                    *(arg2 + 0x30) = rax_5
                    int64_t* rax_6 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_6 = rdx_3
                    int32_t rax_7 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_3[1]
                    rdx_3[1] = 0
                    *rdx_3 = &data_142f11588
                    rdx_3[2].d = rax_7
                else
                    *(arg2 + 0x90) = rax_4
            
            result, zmm6 = sub_1410f5f00(arg1, arg2, result_1[0xd] + 8, r15_2, 
                zmm6.d f/ float.s(zx.q(result_1[0x74].d)), 1)
            
            if (*(arg2 + 0x8c) != rbx_6)
                bool cond:1_1 = *(arg2 + 0x14) u> 0
                *(arg2 + 0x8c) = rbx_6
                
                if (cond:1_1)
                    void*** rdx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_9 = &rdx_9[3]
                    
                    if (rax_9 u> *(arg2 + 0x38))
                        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_9 = &rdx_9[3]
                    
                    *(arg2 + 0x30) = rax_9
                    void**** rax_10 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_10 = rdx_9
                    result = zx.q(*(arg2 + 0x8c))
                    *(arg2 + 8) = &rdx_9[1]
                    rdx_9[1] = 0
                    *rdx_9 = &data_142f11588
                    rdx_9[2].d = result.d
                else
                    *(arg2 + 0x90) = rbx_6
            
            i += 1
            r12_1 += 0x5240
        while (i s< *(arg1 + 0xa8))

return result
