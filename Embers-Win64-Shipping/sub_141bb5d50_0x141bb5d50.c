// 函数: sub_141bb5d50
// 地址: 0x141bb5d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx

if (*(arg1 + 0x28) == 0)
    rbx.b = 0
else
    int64_t* rcx = arg1[2].q
    
    if (rcx == 0)
        rbx.b = 0
    else if ((*(*rcx + 0x28))(rcx).b == 0)
        rbx.b = 0
    else
        rbx.b = 1

uint64_t result

if (arg2[0xa] == 0)
    result.b = 0
else
    int64_t* rcx_1 = *(arg2 + 0x20)
    
    if (rcx_1 == 0)
        result.b = 0
    else if ((*(*rcx_1 + 0x28))(rcx_1).b == 0)
        result.b = 0
    else
        result.b = 1

if (rbx.b == result.b)
    if (rbx.b != 0)
        int64_t rbx_1 = 0
        int64_t rdi = 0
        
        if (arg2[0xa] != 0)
            int64_t* rcx_2 = *(arg2 + 0x20)
            void arg_8
            
            if (rcx_2 != 0)
                rdi = *(*(*rcx_2 + 0x30))(rcx_2, &arg_8)
        
        if (*(arg1 + 0x28) != 0)
            int64_t* rcx_3 = arg1[2].q
            void arg_10
            
            if (rcx_3 != 0)
                rbx_1 = *(*(*rcx_3 + 0x30))(rcx_3, &arg_10)
        
        result.b = rbx_1 == rdi
        return result
    
    if (*(arg1 + 0x1c) == arg2[7].b)
        result = zx.q(*(arg1 + 0x18))
        
        if (result.b == arg2[6].b)
            if (result.b == 0)
                result.b = 1
                return result
            
            uint32_t zmm0[0x4] = *arg1
            zmm0[0] = zmm0[0] f- *arg2
            
            if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f))
                zmm0 = *(arg1 + 4)
                zmm0[0] = zmm0[0] f- arg2[1]
                
                if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f))
                    zmm0 = *(arg1 + 8)
                    zmm0[0] = zmm0[0] f- arg2[2]
                    
                    if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f))
                        zmm0 = *(arg1 + 0xc)
                        zmm0[0] = zmm0[0] f- arg2[3]
                        
                        if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
                                && not(arg2[4][0] f!= arg1[1].d)
                                && not(arg2[5][0] f!= *(arg1 + 0x14)))
                            result.b = 1
                            return result

result.b = 0
return result
