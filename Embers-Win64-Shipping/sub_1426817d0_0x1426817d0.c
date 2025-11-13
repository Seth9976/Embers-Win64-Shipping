// 函数: sub_1426817d0
// 地址: 0x1426817d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
sub_140b33630("Pathfinding")
int64_t* rax_2 = sub_140d3c6e0(&arg3[0x10])

if (rax_2 == 0 || rax_2[0x95] == 0)
    *arg1 = nullptr
    arg1[1] = 0
    arg1[2].d = 1
    sub_140b37f60("Pathfinding")
else
    int64_t* rbx_1 = *(arg3 + 0x48)
    uint128_t zmm6 = zx.o(0)
    int32_t var_98_1 = 1
    uint32_t var_a8[0x4] = zx.o(0)
    int64_t* rsi_1
    
    if (rbx_1 != 0)
        int32_t rax_3
        int32_t* rcx_1
        
        if (rbx_1[0xe].d != data_143f71588.d)
            rcx_1 = rbx_1[0xf]
            
            if (rcx_1 != 0)
                rax_3 = sub_14268a5a0(rcx_1, &data_143f71588)
        
        if (rbx_1[0xe].d == data_143f71588.d || (rcx_1 != 0 && rax_3.b != 0))
            rax_3.b = 1
        else
            rax_3.b = 0
        
        rsi_1 = nullptr
        
        if (rax_3.b != 0)
            rsi_1 = rbx_1
    
    uint32_t var_70[0x4]
    int64_t* rbx_3
    uint32_t zmm0_1[0x4]
    
    if (rbx_1 != 0 && rsi_1 != 0)
        int64_t* rax_4 = *(arg3 + 0x50)
        
        if (rax_4 != 0)
            rax_4[1].d += 1
            zmm6 = var_a8
        
        zmm0_1 = rbx_1.o
        int64_t* var_90_1
        var_90_1.o = zmm6
        void* rcx_2 = _mm_bsrli_si128(zmm6, 8).q
        var_70 = zmm0_1
        var_a8 = zmm0_1
        
        if (rcx_2 != 0)
            int32_t rax_5 = *(rcx_2 + 8)
            *(rcx_2 + 8) -= 1
            
            if (rax_5 == 1)
                (**rax_4)(rax_4)
                int32_t rdi_1 = *(rax_4 + 0xc)
                *(rax_4 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*rax_4 + 8))(rax_4, zx.q(rdi_1))
        
        (*(*rsi_1 + 8))(rsi_1)
        rbx_3 = var_a8[0].q
        goto label_1426819c7
    
    void*** var_80
    void**** rax_9 = sub_14266e3b0(rax_2, &var_80, arg3)
    
    if (&var_a8 != rax_9)
        void*** rax_10 = *rax_9
        *rax_9 = nullptr
        var_a8[0].q = rax_10
        sub_1405aeff0(&var_a8[2], &rax_9[1])
    
    int64_t* var_78
    
    if (var_78 != 0)
        var_78[1].d -= 1
        
        if (var_78[1].d == 1)
            (**var_78)(var_78)
            int32_t rdi_2 = *(var_78 + 0xc)
            *(var_78 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*var_78 + 8))(var_78, zx.q(rdi_2))
    
    rbx_3 = var_a8[0].q
    
    if (rbx_3 != 0)
        int32_t rax_14
        int32_t* rcx_10
        
        if (rbx_3[0xe].d != data_143f71588.d)
            rcx_10 = rbx_3[0xf]
            
            if (rcx_10 != 0)
                rax_14 = sub_14268a5a0(rcx_10, &data_143f71588)
        
        if (rbx_3[0xe].d == data_143f71588.d || (rcx_10 != 0 && rax_14.b != 0))
            rax_14.b = 1
        else
            rax_14.b = 0
        
        rsi_1 = nullptr
        
        if (rax_14.b != 0)
            rsi_1 = rbx_3
        
    label_1426819c7:
        
        if (rsi_1 != 0)
            void* rdi_3 = *(arg3 + 0x20)
            
            if (rdi_3 != 0)
                sub_1426496f0(rsi_1, (arg3[0xd]).b)
                int64_t* rcx_12 = *(rdi_3 + 0x10)
                int32_t var_b8
                void* r9_1 = (*(*rcx_12 + 0x78))(rcx_12, &var_b8, &arg3[5])
                zmm0_1 = arg3[2]
                zmm0_1[0] = zmm0_1[0] f- var_b8
                int512_t zmm3
                zmm3.o = 0x7fffffff
                uint32_t zmm2[0x4] = arg3[3]
                uint32_t zmm1_1[0x4] = arg3[4]
                int32_t var_b4
                zmm2[0] = zmm2[0] f- var_b4
                int32_t var_b0
                zmm1_1[0] = zmm1_1[0] f- var_b0
                
                if (_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> 9.99999975e-05f)
                label_142681ab3:
                    int64_t rax_19 = sub_140d3c6e0(arg3)
                    zmm3.o = arg3[0xc]
                    int64_t var_c8_1 = rax_19
                    int32_t rax_20 =
                        sub_142681b90(rax_2[0x95], &arg3[2], &var_b8, r9_1, rsi_1, rdi_3)
                    var_98_1 = rax_20
                    
                    if (rax_20 != 1 && rbx_3 != 0 && ((rbx_3[0x13].d u>> 2).b & 1) != 0)
                        var_98_1 = (arg3[0xe] & 1) | 2
                else
                    if (_mm_and_ps(zmm2, 0x7fffffff)[0] f> 9.99999975e-05f)
                        goto label_142681ab3
                    
                    if (_mm_and_ps(zmm1_1, 0x7fffffff)[0] f> 9.99999975e-05f)
                        goto label_142681ab3
                    
                    rbx_3[6].d = 0
                    
                    if (*(rbx_3 + 0x34) s<= 0xffffffff)
                        sub_1405a51b0(&rbx_3[5], 0)
                    
                    int64_t rsi_2 = sx.q(rbx_3[6].d)
                    zmm0_1 = zx.o(var_b8.q)
                    var_70[2] = var_b0
                    var_70[0].q = zmm0_1.q
                    int32_t rax_17 = (rsi_2 + 1).d
                    int64_t var_60_1 = 0
                    int64_t var_58_1 = 0
                    rbx_3[6].d = rax_17
                    
                    if (rax_17 s> *(rbx_3 + 0x34))
                        sub_1405c4e40(&rbx_3[5])
                    
                    int64_t rax_18 = rbx_3[5]
                    uint32_t (* rcx_16)[0x4] = rsi_2 << 5
                    var_98_1 = 3
                    *(rcx_16 + rax_18) = var_70
                    *(rcx_16 + rax_18 + 0x10) = var_60_1.o
    
    int64_t rdx_12 = var_a8[2].q
    *arg1 = rbx_3
    arg1[1] = rdx_12
    arg1[2].d = var_98_1
    sub_140b37f60("Pathfinding")

__security_check_cookie(rax_1 ^ &var_f8)
return arg1
