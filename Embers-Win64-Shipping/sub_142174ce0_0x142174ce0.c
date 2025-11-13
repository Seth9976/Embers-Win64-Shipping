// 函数: sub_142174ce0
// 地址: 0x142174ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x98))

if (rdx.d != 0)
    int32_t r15_1 = 0
    int32_t rdi_1 = 0
    int64_t rbx_1 = 0
    int64_t r14
    r14.b = **(arg1 + 0x90) != arg2
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< rdx)
            int64_t rcx = *(arg1 + 0x90) + (rbx_1 << 3)
            
            do
                int32_t rax_3
                rax_3.b = *rcx != arg2
                
                if (zx.d(r14.b) != rax_3)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx += 8
            while (rbx_1 s< rdx)
        
        int32_t rbp_2 = rdi_1 - r9_1.d
        
        if (r14.b != 0)
            if (r15_1 != r9_1.d)
                int64_t rcx_1 = *(arg1 + 0x90)
                memmove(rcx_1 + (sx.q(r15_1) << 3), rcx_1 + (r9_1 << 3), rbp_2 << 3)
            
            r15_1 += rbp_2
        
        r14.b ^= 1
    while (rbx_1 s< rdx)
    
    *(arg1 + 0x98) = r15_1

int64_t var_58
uint64_t result = (*(*arg2 + 0x2d0))(arg2, &var_58)
int64_t* var_50

if (var_58 != 0)
    uint128_t zmm0 = var_58.o
    uint128_t var_48 = zmm0
    int64_t* rbx_2 = _mm_bsrli_si128(zmm0, 8).q
    var_50 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int64_t* rdi_2 = var_48:8.q
    
    if (*(arg1 + 0x100) s<= 0)
        result = sub_142173fa0(arg1 + 0xa0, &var_48)
    else
        result = zx.q(*(arg1 + 0xa8))
        int64_t* r15_2 = var_48.q
        void* rcx_7
        
        if (result.d == *(arg1 + 0xd4))
        label_142174e7b:
            rcx_7 = nullptr
        else
            int32_t result_1 = (*(*r15_2 + 0x88))(r15_2)
            void* rcx_5 = *(arg1 + 0xe0)
            void* r8_3 = arg1 + 0xd8
            result = sx.q(result_1)
            
            if (rcx_5 != 0)
                r8_3 = rcx_5
            
            int32_t rbx_3 = *(r8_3 + (((sx.q(*(arg1 + 0xe8)) - 1) & result) << 2))
            
            if (rbx_3 == 0xffffffff)
            label_142174e7b_1:
                rcx_7 = nullptr
            else
                result = *(arg1 + 0xa0)
                int64_t rsi_3
                
                while (true)
                    rsi_3 = sx.q(rbx_3) << 5
                    int64_t* rcx_6 = *(result + rsi_3)
                    result = (*(*rcx_6 + 0x80))(rcx_6, r15_2)
                    
                    if (result.b != 0)
                        break
                    
                    result = *(arg1 + 0xa0)
                    rbx_3 = *(result + rsi_3 + 0x18)
                    
                    if (rbx_3 == 0xffffffff)
                        goto label_142174e7b_2
                
                if (rbx_3 == 0xffffffff)
                label_142174e7b_2:
                    rcx_7 = nullptr
                else
                    rcx_7 = *(arg1 + 0xa0) + rsi_3
        
        int64_t* rsi_4 = rcx_7 + 0x10
        
        if (rcx_7 == 0)
            rsi_4 = nullptr
        
        if (rsi_4 != 0)
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            int128_t zmm6
            zmm6.q = float.d(performanceCount)
            zmm6.q = zmm6.q f* data_143d796f8
            zmm6.q = zmm6.q f+ 16777216.0
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            int64_t rbp_3 = sx.q(*(arg1 + 0xf8))
            int32_t rax_8 = (rbp_3 + 1).d
            *(arg1 + 0xf8) = rax_8
            
            if (rax_8 s> *(arg1 + 0xfc))
                sub_1405a4df0(arg1 + 0xf0)
            
            result = *(arg1 + 0xf0)
            int64_t rcx_11 = rbp_3 * 3
            *(result + (rcx_11 << 3)) = r15_2
            *(result + (rcx_11 << 3) + 8) = rdi_2
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            *(result + (rcx_11 << 3) + 0x10) = zmm6.q
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    result = (**rdi_2)(rdi_2)
                    int32_t temp5_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        result = (*(*rdi_2 + 8))(rdi_2, 1)
            
            *rsi_4 = 0
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            result = (**rdi_2)(rdi_2)
            int32_t temp3_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rcx_18 = *(arg1 + 0x6e8)

if (rcx_18 != 0)
    result = (*(*rcx_18 + 0x290))(rcx_18, arg2)

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        result = (**var_50)(var_50)
        int32_t temp1_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_50 + 8))(var_50, 1)

return result
