// 函数: sub_140976c70
// 地址: 0x140976c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = data_143de5480
int64_t rbx = data_143ced148
int64_t rcx

if (rdx == 0)
    rcx = 0
else
    uint32_t rax_1 = GetCurrentThreadId()
    rdx = data_143de5480
    rcx.b = rax_1 != data_143de5470

uint128_t zmm0
zmm0.q = _mm_cvtepi32_pd(zx.q(*(rbx + (rcx << 2)))).q f* 10000.0
zmm0.q = zmm0.q f+ 0.5
int64_t rcx_1 = int.q(zmm0.q)

if (rcx_1 != -0x8000000000000000 && not(float.d(rcx_1) f== zmm0.q))
    zmm0.q = float.d(rcx_1 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))

int64_t rdi = data_143ced1a8
int64_t rbx_1 = int.q(zmm0.q)
int64_t rcx_3

if (rdx == 0)
    rcx_3 = 0
else
    rcx_3.b = GetCurrentThreadId() != data_143de5470

uint128_t zmm6 = *(rdi + (rcx_3 << 2))

while (true)
    bool z_1
    
    if (0 == *(arg1 + 0x28))
        *(arg1 + 0x28) = 0
        z_1 = true
    else
        int64_t rax_5
        rax_5.b = *(arg1 + 0x28)
        z_1 = false
    
    if (z_1)
        break
    
    int64_t* rcx_4 = *(arg1 + 0x30)
    void* rax_6 = rcx_4[0x11]
    
    if (rax_6 != 0 && *(rax_6 + 0x1acc) == 7)
        break
    
    int64_t* rax_8 = (*(*rcx_4 + 0x438))()
    
    if (rax_8 != 0)
        int64_t rax_9 = *rax_8
        int64_t var_90_1 = (zx.o(0)).q
        int64_t var_b8 = 0
        int32_t var_b0_1 = 0
        int128_t var_a8_1
        __builtin_memset(&var_a8_1, 0, 0x14)
        char rax_10 = (*(rax_9 + 0x78))(rax_8, 0, rbx_1)
        int64_t* rcx_6 = *(arg1 + 0x38)
        int32_t rax_20
        
        if (rax_10 == 0)
            int32_t rax_22 = (*(*rcx_6 + 0xb8))(rcx_6)
            
            if (rax_22 u<= 0x31 && test_bit(0x2000000000081, sx.q(rax_22)))
                if (zmm6.d f< 0f)
                    continue
                else
                    sub_140b732d0(zmm6.d)
                    continue
            
            if (rax_22 == 0x19)
                continue
            else if (rax_22 == 0x16)
                continue
            else
                int32_t var_98_2 = rax_22
                int64_t performanceCount
                QueryPerformanceCounter(&performanceCount)
                int32_t rax_23 = 0
                zmm0.q = float.d(performanceCount)
                zmm0.q = zmm0.q f* data_143d796f8
                zmm0.q = zmm0.q f+ 0x4170000000000000
                uint64_t var_90_2 = zmm0.q
                
                if (0 == *(arg1 + 0x24))
                    *(arg1 + 0x24) = 0
                else
                    rax_23 = *(arg1 + 0x24)
                
                int64_t rdx_6 = sx.q(rax_23)
                int32_t rdi_3 = (rdx_6 + 1).d & *(arg1 + 8)
                rax_20 = 0
                
                if (0 == *(arg1 + 0x20))
                    *(arg1 + 0x20) = 0
                else
                    rax_20 = *(arg1 + 0x20)
                
                if (rdi_3 == rax_20)
                    rax_20.b = 1
                else
                    sub_14094de10((sx.q(*(arg1 + 8)) & rdx_6) * 0x30 + *(arg1 + 0x10), &var_b8)
                    *(arg1 + 0x24)
                    *(arg1 + 0x24) = rdi_3
                    rax_20.b = 0
            
            goto label_140976fba
        
        int32_t arg_10 = 0
        void var_d8
        int64_t* rax_12 = (*(*rcx_6 + 0x90))(rcx_6, &var_d8)
        void* rcx_7 = rax_12[1]
        int64_t rdx_2 = *rax_12
        int64_t var_c8_1 = rdx_2
        
        if (rcx_7 != 0)
            *(rcx_7 + 8) += 1
        
        void* rax_13 = var_a8_1:8.q
        
        if (rcx_7 != 0)
            rax_13 = rcx_7
        
        var_a8_1.q = rdx_2
        var_a8_1:8.q = rax_13
        int64_t* var_d0
        
        if (var_d0 != 0)
            var_d0[1].d -= 1
            
            if (var_d0[1].d == 1)
                (**var_d0)(var_d0)
                int32_t temp2_1 = *(var_d0 + 0xc)
                *(var_d0 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_d0 + 8))(var_d0, 1)
        
        var_b0_1 = 0x400
        sub_1405daba0(&var_b8)
        int64_t r14_1 = var_b8
        int32_t r8_3
        
        if ((*(*rax_8 + 0x60))(rax_8, r14_1, zx.q(var_b0_1), &arg_10, var_a8_1.q, 0) == 0)
            int64_t* rcx_12 = *(arg1 + 0x38)
            int32_t rax_19 = (*(*rcx_12 + 0xb8))(rcx_12)
            
            if (rax_19 u> 0x19 || not(test_bit(0x2400081, rax_19)))
                r8_3 = arg_10
                int32_t var_98_1 = rax_19
            label_140976eff:
                rax_20.b = sub_14095ac30(arg1, &var_b8, r8_3).b == 0
            label_140976fba:
                
                if (rax_20.b != 0 && not(zmm6.d f< 0f))
                    sub_140b732d0(zmm6.d)
                
                r14_1 = var_b8
        else
            r8_3 = arg_10
            
            if (r8_3 != 0)
                goto label_140976eff
        int64_t* rdi_5 = var_a8_1:8.q
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                (**rdi_5)(rdi_5)
                int32_t temp4_1 = *(rdi_5 + 0xc)
                *(rdi_5 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rdi_5 + 8))(rdi_5, 1)
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
    else
        sub_140b732d0(0x3cf5c28f.d)

return 0
