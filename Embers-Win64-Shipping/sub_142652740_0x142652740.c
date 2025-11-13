// 函数: sub_142652740
// 地址: 0x142652740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t* rax_2 = sub_140d3c6e0(&arg3[8])

if (rax_2 != 0)
    int64_t rax_3 = arg3[9]
    uint128_t zmm1 = zx.o(0)
    uint128_t var_88
    __builtin_memset(&var_88, 0, 0x14)
    uint128_t var_50
    int64_t* rdi_3
    
    if (rax_3 == 0)
        void var_60
        void**** rax_9 = sub_14263ecf0(rax_2, &var_60, arg3)
        
        if (&var_88 != rax_9)
            var_88.q = *rax_9
            *rax_9 = nullptr
            sub_1405aeff0(&var_88:8, &rax_9[1])
        
        int64_t* var_58
        
        if (var_58 != 0)
            var_58[1].d -= 1
            
            if (var_58[1].d == 1)
                (**var_58)(var_58)
                int32_t rdi_2 = *(var_58 + 0xc)
                *(var_58 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    (*(*var_58 + 8))(var_58, zx.q(rdi_2))
        
        rdi_3 = var_88.q
    else
        int64_t* rax_4 = arg3[0xa]
        
        if (rax_4 != 0)
            rax_4[1].d += 1
            zmm1 = var_88
        
        uint128_t zmm0 = rax_3.o
        int64_t var_70_1
        var_70_1.o = zmm1
        void* rcx_2 = _mm_bsrli_si128(zmm1, 8).q
        var_50 = zmm0
        var_88 = zmm0
        
        if (rcx_2 != 0)
            int32_t rax_5 = *(rcx_2 + 8)
            *(rcx_2 + 8) -= 1
            
            if (rax_5 == 1)
                (**rax_4)(rax_4)
                int32_t rdi_1 = *(rax_4 + 0xc)
                *(rax_4 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*rax_4 + 8))(rax_4, zx.q(rdi_1))
        
        rdi_3 = var_88.q
        (*(*rdi_3 + 8))(rdi_3)
    
    rdi_3[6].d = 0
    
    if (*(rdi_3 + 0x34) s<= 0xffffffff)
        sub_1405a51b0(&rdi_3[5], 0)
    
    int64_t r13_1 = sx.q(rdi_3[6].d)
    var_50:8.d = arg3[2].d
    var_50.q = arg3[1]
    int32_t rax_14 = (r13_1 + 1).d
    int64_t var_40_1 = 0
    int64_t var_38_1 = 0
    rdi_3[6].d = rax_14
    
    if (rax_14 s> *(rdi_3 + 0x34))
        sub_1405c4e40(&rdi_3[5])
    
    int64_t rax_15 = rdi_3[5]
    uint128_t* rcx_13 = r13_1 << 5
    int64_t var_40_2 = 0
    int64_t var_38_2 = 0
    *(rcx_13 + rax_15) = var_50
    *(rcx_13 + rax_15 + 0x10) = var_40_1.o
    int64_t rsi_1 = sx.q(rdi_3[6].d)
    var_50:8.d = *(arg3 + 0x1c)
    var_50.q = *(arg3 + 0x14)
    int32_t rax_17 = (rsi_1 + 1).d
    rdi_3[6].d = rax_17
    
    if (rax_17 s> *(rdi_3 + 0x34))
        sub_1405c4e40(&rdi_3[5])
    
    int64_t rax_18 = rdi_3[5]
    uint128_t* rcx_16 = rsi_1 << 5
    *(rcx_16 + rax_18) = var_50
    *(rcx_16 + rax_18 + 0x10) = var_40_2.o
    rdi_3[0x13].d |= 2
    int64_t rax_19 = var_88:8.q
    *arg1 = rdi_3
    arg1[1] = rax_19
    arg1[2].d = 3
else
    *arg1 = 0
    arg1[1] = 0
    arg1[2].d = 1

__security_check_cookie(rax_1 ^ &var_a8)
return arg1
