// 函数: sub_14218b9d0
// 地址: 0x14218b9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* rax_2 = *(arg1 + 0x408)
uint64_t result

if (rax_2 == 0 || *(rax_2 + 0x70) s<= 1 || *(rax_2 + 0xb3) == 1)
    result = 0
else
    void* rbx_1 = *(arg1 + 0xa8)
    int32_t result_1 = 0
    
    if (rbx_1 != 0)
    label_14218ba48:
        void* var_48_1 = nullptr
        int32_t var_40_1 = 0
        int32_t var_3c_1 = 8
        int64_t* var_c8
        int64_t* rax_4 = sub_1424373a0(rbx_1, &var_c8)
        int32_t rcx_1 = rax_4[1].d
        void var_a8
        int32_t rax_17
        
        if (rcx_1 s< 0 || rcx_1 s>= *(*rax_4 + 8))
            int64_t rdi_2 = sx.q(*(rbx_1 + 0x110))
            
            if (rdi_2.d == 0)
                rax_17 = var_40_1
            else
                int32_t rcx_9 = var_40_1
                int32_t rdx_6 = rcx_9 + rdi_2.d
                
                if (rdx_6 s> var_3c_1)
                    sub_140869520(&var_a8, rdx_6)
                    rcx_9 = var_40_1
                
                void* rdx_7 = &var_a8
                
                if (var_48_1 != 0)
                    rdx_7 = var_48_1
                
                memcpy(rdx_7 + sx.q(rcx_9) * 0xc, *(rbx_1 + 0x108), (rdi_2 * 0xc).d)
                rax_17 = var_40_1 + rdi_2.d
                int32_t var_40_2 = rax_17
        else
            sub_1424373a0(rbx_1, &var_c8)
            int32_t i_1
            int32_t i = i_1
            
            while (i s>= 0)
                int64_t* rdx_2 = var_c8
                
                if (i s>= rdx_2[1].d)
                    break
                
                int64_t* rax_7 = sub_140d3c6e0(*rdx_2 + (sx.q(i) << 3))
                
                if (rax_7 != 0 && (*(rax_7 + 0x294) & 2) != 0 && (*(*rax_7 + 0x6a8))(rax_7) != 0)
                    int64_t rdi_1 = sx.q(var_40_1)
                    int32_t rax_10 = (rdi_1 + 1).d
                    var_40_1 = rax_10
                    
                    if (rax_10 s> var_3c_1)
                        sub_14085a560(&var_a8, rdi_1.d)
                    
                    void* rdx_4 = &var_a8
                    
                    if (var_48_1 != 0)
                        rdx_4 = var_48_1
                    
                    void var_b8
                    (*(*rax_7 + 0x6f8))(rax_7, rdx_4 + rdi_1 * 0xc, &var_b8)
                
                i = i_1 + 1
                i_1 = i
            
            rax_17 = var_40_1
        
        float zmm3
        
        if (rax_17 == 0)
            zmm3 = (zx.o(0)).d
        else
            zmm3 = 4.39804651e+12f
        
        void* rdx_9 = &var_a8
        
        if (var_48_1 != 0)
            rdx_9 = var_48_1
        
        void* rax_19 = rdx_9 + sx.q(rax_17) * 0xc
        float zmm0
        
        if (rdx_9 != rax_19)
            float zmm4 = *arg2
            float zmm5 = arg2[1]
            int128_t zmm6 = arg2[2]
            
            do
                float zmm2 = *(rdx_9 + 4) - zmm5
                float zmm1 = *rdx_9 - zmm4
                zmm0 = *(rdx_9 + 8) f- zmm6.d
                rdx_9 += 0xc
                zmm3 = _mm_min_ss(zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0, zmm3)
            while (rdx_9 != rax_19)
        
        void* r10_1 = *(arg1 + 0x408)
        int32_t rdx_10 = 1
        int64_t rax_20 = sx.q(*(r10_1 + 0x70))
        result_1 = (rax_20 - 1).d
        
        if (rax_20.d s> 1)
            int64_t rcx_14 = 1
            float* rax_22 = *(r10_1 + 0x68) + 4
            
            do
                zmm0 = *rax_22
                
                if (zmm3 < zmm0 * zmm0)
                    result_1 = rdx_10 - 1
                    break
                
                rdx_10 += 1
                rcx_14 += 1
                rax_22 = &rax_22[1]
            while (rcx_14 s< rax_20)
        
        if (var_48_1 != 0)
            sub_140a74f90(var_48_1)
    else
        void* rax_3 = sub_141ee69e0(arg1)
        rbx_1 = rax_3
        
        if (rax_3 != 0)
            goto label_14218ba48
    
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_e8)
return result
