// 函数: sub_140896110
// 地址: 0x140896110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == arg3)
    return 

char* r14_1 = arg2

do
    int64_t* i_4 = *(arg1 + 8)
    int64_t rbp_9 = (((((((zx.q(*r14_1) ^ 0xcbf29ce484222325) * 0x100000001b3) ^ zx.q(r14_1[1]))
        * 0x100000001b3) ^ zx.q(r14_1[2])) * 0x100000001b3) ^ zx.q(r14_1[3])) * 0x100000001b3
    int64_t rcx = *(arg1 + 0x18)
    int64_t rdx_2 = (*(arg1 + 0x30) & rbp_9) * 2
    int64_t* i_1 = *(rcx + (rdx_2 << 3) + 8)
    
    if (i_1 == i_4)
    label_1408961d6:
        
        if (*(arg1 + 0x10) == 0x555555555555555)
            std::_Xlength_error("unordered_map/set too long")
            noreturn
        
        void** rax_3 = j_sub_140a82f30(0x30)
        rax_3[2].d = *r14_1
        std::vector<struct CHN* __ptr64,class std::allocator<struct CHN* __ptr64> >::vector<struct CHN* __ptr64,class std::allocator<struct CHN* __ptr64> >(
            &rax_3[3], &r14_1[8])
        int64_t r8 = *(arg1 + 0x10)
        int32_t zmm0_1
        
        if (r8 + 1 s< 0)
            zmm0_1 = float.s((r8 + 1) u>> 1 | (zx.q((r8 + 1).d) & 1))
            zmm0_1 = zmm0_1 f+ zmm0_1
        else
            zmm0_1 = float.s(r8 + 1)
        
        int64_t rcx_6 = *(arg1 + 0x38)
        float zmm1
        
        if (rcx_6 s< 0)
            zmm1 = float.s(rcx_6 u>> 1 | (zx.q(rcx_6.d) & 1))
            zmm1 = zmm1 + zmm1
        else
            zmm1 = float.s(rcx_6)
        
        if (not(zmm0_1 f/ zmm1 f<= *arg1))
            sub_1408977a0(arg1)
            int64_t r8_1 = *(arg1 + 0x18)
            int64_t* i_5 = *(arg1 + 8)
            int64_t rax_12 = (*(arg1 + 0x30) & rbp_9) * 2
            int64_t* i = *(r8_1 + (rax_12 << 3) + 8)
            int64_t* i_2
            
            if (i != i_5)
                int32_t rax_13 = rax_3[2].d
                
                if (rax_13 == i[2].d)
                label_1408962b1:
                    i_2 = *i
                    int64_t* i_3 = i
                else
                    while (i != *(r8_1 + (rax_12 << 3)))
                        i = i[1]
                        
                        if (rax_13 == i[2].d)
                            goto label_1408962b1
                    
                    i_2 = i
                    int64_t var_40_2 = 0
            else
                i_2 = i_5
                int64_t var_40_1 = 0
            
            r8 = *(arg1 + 0x10)
            i_4 = i_2
        
        void*** rdx_6 = i_4[1]
        *(arg1 + 0x10) = r8 + 1
        *rax_3 = i_4
        rax_3[1] = rdx_6
        *rdx_6 = rax_3
        i_4[1] = rax_3
        int64_t rcx_9 = *(arg1 + 0x18)
        i_1 = (*(arg1 + 0x30) & rbp_9) * 2
        int64_t r8_2 = *(rcx_9 + (i_1 << 3))
        
        if (r8_2 == *(arg1 + 8))
            *(rcx_9 + (i_1 << 3)) = rax_3
            *(rcx_9 + (i_1 << 3) + 8) = rax_3
        else if (r8_2 == i_4)
            *(rcx_9 + (i_1 << 3)) = rax_3
        else if (*(rcx_9 + (i_1 << 3) + 8) == rdx_6)
            *(rcx_9 + (i_1 << 3) + 8) = rax_3
    else
        int32_t rcx_1 = *r14_1
        
        if (rcx_1 != i_1[2].d)
            while (i_1 != *(rcx + (rdx_2 << 3)))
                i_1 = i_1[1]
                
                if (rcx_1 == i_1[2].d)
                    goto label_14089632a
            
            i_4 = i_1
            goto label_1408961d6
    
label_14089632a:
    r14_1 = &r14_1[0x20]
while (r14_1 != arg3)
