// 函数: sub_14239a090
// 地址: 0x14239a090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5480 != 0)
    GetCurrentThreadId()

int32_t rax = data_143f597dc
data_143f597dc += 1
uint64_t result = zx.q(rax + 1)

if (result.d == 1)
    int32_t rbx_1 = 0
    int64_t r12
    r12.b = 0
    int64_t r14_1 = 0
    int32_t r15_1 = 0
    int32_t var_8c_1 = 0
    int64_t var_98 = 0
    int64_t var_88 = 0
    int32_t i_2 = 0
    int32_t var_78_1 = 0xffffffff
    result = sub_140d3cc80(sub_1425b0810(), &var_88, 1, 0x10, 0)
    int32_t i = i_2
    int32_t i_1 = var_78_1 + 1
    int64_t r8_1 = var_88
    int32_t i_3 = i_1
    
    if (i_1 s< i)
        do
            result = sx.q(i_1)
            
            if (*(r8_1 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            i_3 = result.d
            i_1 = result.d
        while (result.d s< i)
    
    while (i_1 s>= 0)
        if (i_1 s>= i)
            break
        
        int64_t* rdi_1 = *(r8_1 + (sx.q(i_1) << 3))
        
        if (rdi_1 != 0)
            if ((*(*rdi_1 + 0x2b8))(rdi_1) != 0)
                r12 = 1
                
                if ((*(*rdi_1 + 0x2c0))(rdi_1) != 0)
                    int64_t rsi_1 = sx.q(rbx_1)
                    rbx_1 = (rsi_1 + 1).d
                    
                    if (rbx_1 s> r15_1)
                        sub_1405a4d70(&var_98)
                        r15_1 = var_8c_1
                        r14_1 = var_98
                    
                    *(r14_1 + (rsi_1 << 3)) = rdi_1
            
            r8_1 = var_88
            i = i_2
            i_1 = i_3
        
        result = zx.q(i_1 + 1)
        i_3 = result.d
        i_1 = result.d
        
        if (result.d s< i)
            do
                result = sx.q(i_1)
                
                if (*(r8_1 + (result << 3)) != 0)
                    break
                
                result = zx.q(i_1 + 1)
                i_3 = result.d
                i_1 = result.d
            while (result.d s< i)
    
    if (r8_1 != 0)
        result = sub_140a74f90(r8_1)
    
    int128_t zmm0_1 = data_143a2ff94
    int128_t zmm6 = zmm0_1
    
    if (rbx_1 != 0)
        int128_t zmm7 = zx.o(0)
        int128_t zmm8 = 0x3c23d70a
        
        while (zmm6.d f> zmm7.d || not(zmm0_1.d f> zmm7.d))
            sub_140b73230(zmm8)
            result, zmm6, zmm7, zmm8 = sub_1419a21e0(0)
            int32_t rdi_2 = 0
            zmm6.d = zmm6.d f+ -0.00999999978f
            bool cond:1_1 = rbx_1 == 0
            
            if (rbx_1 s> 0)
                int64_t* rsi_2 = nullptr
                
                do
                    int64_t* rcx_7 = *(rsi_2 + r14_1)
                    
                    if (rcx_7 != 0)
                        result = (*(*rcx_7 + 0x2c0))(rcx_7)
                    
                    if (rcx_7 == 0 || result.b == 0)
                        int32_t rcx_10 = rbx_1 - rdi_2 - 1
                        
                        if (rcx_10 s>= 1)
                            rcx_10 = 1
                        
                        if (rcx_10 != 0)
                            memcpy(r14_1 + (sx.q(rdi_2) << 3), r14_1 + (sx.q(rbx_1 - rcx_10) << 3), 
                                rcx_10 << 3)
                        
                        result = sub_1405c53d0(&var_98)
                        rbx_1 -= 1
                        rdi_2 -= 1
                        r14_1 = var_98
                        rsi_2 -= 8
                    
                    rdi_2 += 1
                    rsi_2 = &rsi_2[1]
                while (rdi_2 s< rbx_1)
                
                cond:1_1 = rbx_1 == 0
            
            if (cond:1_1)
                break
            
            zmm0_1 = data_143a2ff94
    
    if (r12.b != 0)
        result = sub_1419a21e0(0)
    
    if (r14_1 != 0)
        return sub_140a74f90(r14_1)

return result
