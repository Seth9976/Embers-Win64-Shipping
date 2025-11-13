// 函数: sub_142071bc0
// 地址: 0x142071bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg3[1].d
int64_t* result

if (arg7 s< 3)
    result.b = 0
else
    int32_t rsi_1 = *(arg1 + 0x30)
    int32_t rdx = *(arg1 + 0x34)
    int64_t rdi_1
    
    if (rsi_1 == 0xffffffff)
        rdi_1 = 0
    else if (rdx != 0xffffffff)
        rdi_1.b = arg6 - rsi_1 u<= arg6 - rdx
    else
        rdi_1 = 1
    
    uint64_t r14_1 = 0x10000
    int32_t rax_2 = 0
    
    if (rsi_1 == arg6)
        rdi_1 = 0
    
    if (rdx == arg6)
        rdi_1 = 1
    
    uint64_t r9 = 0
    
    if (arg6 != 0xffffffff)
        rax_2 = arg6
    
    *(arg1 + (rdi_1 << 2) + 0x30) = rax_2
    void* rdi_4 = ((rdi_1 + 1) << 4) + arg1
    uint32_t r10_1 = 0x11
    
    if (r8 u<= 0x10000)
        r14_1 = zx.q(r8)
    
    int32_t rsi_3 = (r14_1 * 3).d << 3
    uint32_t rax_3
    
    do
        uint32_t r8_2 = (r10_1 + r9.d) u>> 1
        rax_3 = r8_2
        int32_t temp1_1 = *(&data_143a2e1d0 + (zx.q(r8_2 - 1) << 2))
        
        if (rsi_3 u> temp1_1)
            rax_3 = r10_1
        
        if (rsi_3 u> temp1_1)
            r9 = zx.q(r8_2)
        
        r10_1 = rax_3
    while (rax_3 - r9.d u> 1)
    result = *rdi_4
    void* rbp_1
    
    if (result != 0)
        rbp_1 = rdi_4 + 8
    
    if (result == 0 || *(rdi_4 + 8) == 0)
        rbp_1 = rdi_4 + 8
    label_142071cdb:
        
        if (result != 0 && *(rdi_4 + 8) != 0)
            int64_t* result_1 = result
            result[1].d += 1
            void* rax_5 = *(rdi_4 + 8)
            void* var_50_1 = rax_5
            
            if (rax_5 != 0)
                *(rax_5 + 8) += 1
            
            sub_142065280(&data_143f42700, &result_1)
        
        sub_140a80f40()
        uint128_t var_68
        
        if (data_143f42b68 == 0xffffffff)
            var_68 = zx.o(0)
        else
            sub_142053d50(&data_143f42700, &var_68, rsi_3)
        
        sub_1405d1600(rdi_4, &var_68)
        sub_1405d1600(rbp_1, &var_68:8)
        sub_1405ec8a0(&var_68:8)
        result, arg5 = sub_1405d1550(&var_68)
    else if (*(&data_143a2e1d0 + (r9 << 2)) != result[3].d)
        goto label_142071cdb
    
    if (r14_1.d == 0)
        result.b = 0
    else
        if (data_143f01c92 == 0 || *(data_143f41238 + 4) s<= 0)
            result.b = 0
        else
            result.b = 1
        
        int64_t r8_4 = *rdi_4
        uint128_t zmm0
        
        if (result.b == 0)
            int64_t* rcx_17 = data_143f0f180
            uint64_t* rax_11 = (*(*rcx_17 + 0x130))(rcx_17, &data_143f02b98, r8_4, 0, rsi_3, 1)
            int64_t* rcx_18 = *arg3
            uint64_t* r8_5 = rax_11
            
            if (r14_1.d != 0)
                void* r9_2 = *arg4 - rcx_18
                uint64_t i_1 = zx.q(r14_1.d)
                uint64_t i
                
                do
                    zmm0 = zx.o(*rcx_18)
                    int32_t rax_12 = rcx_18[1].d
                    rcx_18 += 0xc
                    *r8_5 = zmm0.q
                    r8_5[1].d = rax_12
                    int32_t rax_13 = *(r9_2 + rcx_18 - 4)
                    *(r8_5 + 0xc) = *(r9_2 + rcx_18 - 0xc)
                    *(r8_5 + 0x14) = rax_13
                    r8_5 = &r8_5[3]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            int64_t* rcx_19 = data_143f0f180
            (*(*rcx_19 + 0x138))(rcx_19, &data_143f02b98, *rdi_4)
            result.b = 0
        else
            int64_t var_48 = r8_4
            int32_t var_40_1 = rsi_3
            int64_t* var_30_1 = arg4
            
            if (*(arg2 + 0x10) == 0)
                void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_6 = &rcx_11[6]
                
                if (rax_6 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x38)
                    rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_6 = &rcx_11[6]
                
                *(arg2 + 0x30) = rax_6
                int64_t* rax_7 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                zmm0 = var_48.o
                *rax_7 = rcx_11
                *(arg2 + 8) = &rcx_11[1]
                rcx_11[1] = 0
                *(rcx_11 + 0x10) = zmm0
                *rcx_11 = &data_1432abda8
                *(rcx_11 + 0x20) = arg3.o
            else
                sub_14204b270(&var_48, arg5, r8_4)
            
            r8_4.b = 1
            int64_t* arg_18
            sub_141980430(arg2, &arg_18, r8_4.b)
            int64_t* rcx_16 = arg_18
            
            if (rcx_16 != 0)
                rcx_16[9].d -= 1
                
                if (rcx_16[9].d == 1)
                    sub_140a2f6e0(rcx_16)
            
            result.b = 1

return result
