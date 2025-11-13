// 函数: sub_1421771f0
// 地址: 0x1421771f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result
int32_t var_d8
void* var_d0
int32_t arg_10

if ((arg2[5].b & 2) == 0)
    sub_1421754d0(*(arg1 + 0x310) + 0x1a8)
    int512_t zmm1 = sub_142175400(*(arg1 + 0x310) + 0x1f8)
    sub_1408d84f0(*(arg1 + 0x310) + 0x248)
    int64_t* rcx_18 = arg2[1]
    arg_10 = 0
    int32_t* rdx_11 = *rcx_18
    
    if (&rdx_11[1] u> rcx_18[1])
        int32_t* rdx_12 = &arg_10
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(arg2, rdx_12, zmm1)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_12, 4)
    else
        result = zx.q(*rdx_11)
        arg_10 = result.d
        *rcx_18 += 4
    
    int32_t r15_1 = 0
    
    if (arg_10 s> 0)
        uint64_t* var_e8
        var_d0 = &var_e8
        
        do
            uint64_t* rax_21 = j_sub_140a82f30(0x30)
            uint64_t* rdi_1 = rax_21
            
            if (rax_21 == 0)
                rdi_1 = nullptr
            else
                __builtin_memset(rax_21, 0, 0x14)
                rax_21[3] = 0
                rax_21[4] = 0
                rax_21[5].b = 1
            
            var_e8 = rdi_1
            void*** rax_22 = j_sub_140a82f30(0x18)
            
            if (rax_22 == 0)
                rax_22 = nullptr
            else
                rax_22[1].d = 1
                *(rax_22 + 0xc) = 1
                *rax_22 = &data_143214be8
                rax_22[2] = rdi_1
            
            sub_14215e140(arg2, var_e8, zmm1)
            int64_t* rcx_21 = data_143f5b298
            int64_t r9_3
            r9_3.b = 1
            int32_t var_f8
            int64_t var_f0
            (*(*rcx_21 + 0x400))(rcx_21, *(*(arg1 + 0x130) + 0x58), var_e8, r9_3, var_f8, var_f0)
            uint64_t* rax_24 = var_e8
            void* rcx_22 = *(arg1 + 0x310)
            uint64_t* var_90 = rax_24
            void* var_88_1 = &rax_24[2]
            void arg_20
            sub_14215abc0(rcx_22 + 0x1f8, &arg_20, &var_90, nullptr)
            void* rsi_1 = *(arg1 + 0x310)
            uint64_t* rdi_2 = var_e8
            int32_t var_80
            sub_140598750(rsi_1 + 0x248, &var_80)
            var_f0 = 0
            int32_t* var_78
            *var_78 = rdi_2[2].d
            int32_t rax_27 = var_80
            *(var_78 + 8) = rdi_2
            var_78[4] = 0xffffffff
            var_f8 = rax_27
            void var_98
            sub_140bdabf0(rsi_1 + 0x248, &var_98, *var_78, var_78, var_f8, nullptr)
            var_d8.q = var_e8
            void var_94
            result, zmm1 = sub_14215ad30(*(arg1 + 0x310) + 0x1a8, &var_94, &var_d8, nullptr)
            
            if (rax_22 != 0)
                rax_22[1].d -= 1
                
                if (rax_22[1].d == 1)
                    result = (**rax_22)(rax_22)
                    int32_t temp3_1 = *(rax_22 + 0xc)
                    *(rax_22 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*rax_22)[1](rax_22, 1)
            
            r15_1 += 1
        while (r15_1 s< arg_10)
else
    if (arg3 != 0)
        arg4 = sub_142165f20(arg1 + 0x330, 0)
    
    void* rax = *(arg1 + 0x310)
    arg_10 = *(rax + 0x1b0) - *(rax + 0x1dc)
    int64_t* rcx_3 = arg2[1]
    int32_t* rdx = *rcx_3
    
    if (&rdx[1] u> rcx_3[1])
        int32_t* rdx_1 = &arg_10
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_1, arg4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_1, 4)
    else
        arg_10 = *rdx
        *rcx_3 += 4
    
    int32_t rbx_1 = 0
    int64_t* r9_2 = *(arg1 + 0x310) + 0x1a8
    var_d8 = 0
    int32_t r11_1 = r9_2[5].d
    void* r8 = &r9_2[2]
    int32_t var_d4_1 = 1
    int32_t rcx_5 = 0
    var_d0 = r8
    int32_t var_c8_1 = 0xffffffff
    int64_t var_c4_1 = 0
    
    if (r11_1 != 0)
        void* rax_4 = *(r8 + 0x10)
        
        if (rax_4 != 0)
            r8 = rax_4
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_4 = *r8
        
        if (rdx_4 != 0)
        label_142177306:
            int32_t rax_11 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
            int32_t var_d4_2 = rax_11
            int32_t rax_12
            
            if (rax_11 == 0)
                rax_12 = 0x20
            else
                rax_12 = 0x1f - temp0_2
            
            var_c4_1.d = rcx_5 - rax_12 + 0x1f
            
            if (rcx_5 - rax_12 + 0x1f s> r11_1)
                var_c4_1.d = r11_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rbx_1)
                rcx_5 += 0x20
                rbx_1 += 1
                var_c4_1:4.d = rcx_5
                var_d8 = rbx_1
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r8 + (rdx_5 << 2) + 4)
                var_c8_1 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_142177306
            
            var_c4_1.d = r11_1
    
    uint128_t zmm4 = var_c8_1.o
    int64_t* var_48_1 = r9_2
    uint128_t zmm0 = var_d8.o
    uint128_t var_58_1 = zmm4
    int16_t var_a0_1 = 0
    arg4.o = zmm4
    var_c8_1.o = zmm0
    arg4.o = _mm_unpackhi_pd(arg4.o, zmm4.q)
    result = zmm0.q
    zmm0.q = (arg4.o).q
    int32_t rcx_7 = _mm_bsrli_si128(zmm4, 4).d
    var_d8.o = r9_2.o
    uint128_t var_b8_1 = zmm0
    
    if (rcx_7 s< result[6])
        int32_t i_1
        int32_t i = i_1
        
        do
            arg4 = sub_14215e140(arg2, *(*var_d8.q + sx.q(i) * 0x28 + 0x10), arg4)
            var_c4_1:4.d &= not.d(var_d0:4.d)
            sub_14059bdd0(&var_d0)
            result = var_c8_1.q
            i = i_1
        while (i s< result[6])
        
        if (var_a0_1.b != 0 && var_a0_1:1.b != 0)
            return sub_1405e1160(r9_2, r9_2[1].d - *(r9_2 + 0x34), 1)
return result
