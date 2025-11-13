// 函数: sub_1426e6600
// 地址: 0x1426e6600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = *(arg2 + 0xc0)
void* r13 = *(arg2 + 0xb8)
int32_t rbx = 1

if (r12 != 0 && r13 != 0)
    int64_t var_78
    sub_1426a6430(&var_78)
    void* rax_2
    
    if (arg1[0x14] == 0)
        rax_2 = r12[0x61]
    else
        void* rax_1 = sub_14269cf80()
        
        if (rax_1 == 0)
            rax_2 = r12[0x61]
        else
            int64_t rcx_1 = sx.q(*(rax_1 + 0x38))
            rax_2 = arg1[0x14]
            
            if (rcx_1.d s> *(rax_2 + 0x38) || *(*(rax_2 + 0x30) + (rcx_1 << 3)) != rax_1 + 0x30
                    || rax_2 == 0)
                rax_2 = r12[0x61]
    
    int32_t r11_1 = *(arg1 + 0xac)
    void* var_60_1 = rax_2
    int32_t var_54_1 = arg1[0x13].d
    int32_t r9_8 = ((((((zx.d((r11_1 u>> 1).b) & 1) * 2) | (zx.d((r11_1 u>> 6).b) & 1)) * 2)
        | (zx.d((r11_1 u>> 5).b) & 1)) * 2) | (zx.d((r11_1 u>> 4).b) & 1)
    char var_58
    char r9_14 =
        (((((r9_8 * 2) | (zx.d((r11_1 u>> 2).b) & 1)) * 2) | (zx.d((r11_1 u>> 9).b) & 1)) << 2).b
        | (var_58 & 3)
    void* const r14_1
    
    if (arg1[0x11] == 0)
        r14_1 = nullptr
    else
        void* rax_17 = sub_14272ef20()
        
        if (rax_17 == 0)
            r14_1 = nullptr
        else
            r14_1 = arg1[0x11]
            int64_t rax_18 = sx.q(*(rax_17 + 0x38))
            
            if (rax_18.d s> *(r14_1 + 0x38) || *(*(r14_1 + 0x30) + (rax_18 << 3)) != rax_17 + 0x30)
                r14_1 = nullptr
    
    if (r14_1 != sub_14272e650())
        void* const r14_3
        
        if (arg1[0x11] == 0)
            r14_3 = nullptr
        else
            void* rax_29 = sub_14272ef20()
            
            if (rax_29 == 0)
                r14_3 = nullptr
            else
                r14_3 = arg1[0x11]
                int64_t rax_30 = sx.q(*(rax_29 + 0x38))
                
                if (rax_30.d s> *(r14_3 + 0x38)
                        || *(*(r14_3 + 0x30) + (rax_30 << 3)) != rax_29 + 0x30)
                    r14_3 = nullptr
        
        if (r14_3 == sub_14272e8c0())
            int64_t var_a8
            sub_1426a2930(r13, &var_a8, arg1[0x12].b)
            sub_1426bf140(&var_78, &var_a8)
            *(arg3 + 0x10) = var_a8
            int32_t var_a0
            arg3[6] = var_a0
    else
        void* rax_21 = sub_1426a2600(r13, arg1[0x12].b)
        
        if (rax_21 != 0)
            void* rax_22 = sub_142452380()
            void* rdx_5 = *(rax_21 + 0x10)
            int64_t rax_23 = sx.q(*(rax_22 + 0x38))
            
            if (rax_23.d s<= *(rdx_5 + 0x38) && *(*(rdx_5 + 0x30) + (rax_23 << 3)) == rax_22 + 0x30)
                if ((*(arg1 + 0xac) & 8) == 0)
                    void* rax_25 = *(rax_21 + 0x130)
                    int32_t* rax_26
                    
                    if (rax_25 == 0)
                        int32_t var_90_1 = data_143dbb200
                        uint64_t var_98
                        rax_26 = &var_98
                        var_98 = data_143dbb1f8.q
                    else
                        float zmm1[0x4] = *(rax_25 + 0x1d0)
                        float var_b8
                        rax_26 = &var_b8
                        var_b8 = zmm1[0]
                        uint128_t zmm0_2 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        float var_38_1[0x4] = zmm1
                        float var_b0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                        int32_t var_b4_1 = zmm0_2.d
                    
                    int32_t rax_28 = rax_26[2]
                    uint64_t var_8c = *rax_26
                    int32_t var_84_1 = rax_28
                    sub_1426bf140(&var_78, &var_8c)
                else
                    sub_1426bf120(&var_78, rax_21)
    
    char rax_34
    
    if ((1 & r9_14) == 0 || ((r9_14 & 2) != 0 && var_78 == 0))
        rax_34 = 0
    else
        rax_34 = 1
    
    if (rax_34 != 0)
        int64_t* rax_35 = sub_14272b250()
        void* rax_36 = rax_35[0x23]
        
        if (rax_36 == 0)
            (*(*rax_35 + 0x390))(rax_35)
            rax_36 = rax_35[0x23]
        
        if (*(rax_36 + 0x97) == 0)
            int64_t arg_10
            (*(*r12 + 0x770))(r12, &arg_10, &var_78, 0)
            
            if (arg4 == 2)
                int32_t rax_42 = arg_10.d
                *arg3 = rax_42
                sub_1426c30c0(arg1, arg2, data_143f721c8, rax_42)
                sub_1426c2f40(arg1, arg2, data_143f72200)
                rbx = 3
            else if (arg4 == 1)
                rbx = 0
        else
            int64_t rax_38 = sub_140d3c6e0(&arg3[7])
            r12.b = rax_38 != 0
            int64_t* rax_39 = (*(*arg1 + 0x2d8))(arg1, arg2, rax_38, &var_78)
            
            if (rax_39 != 0)
                arg3[9].b &= 0xfd
                
                if (r12.b == 0)
                    sub_140d3a3a0(&arg3[7], rax_39)
                    sub_14263c6d0(rax_39)
                else if (*(rax_39 + 0x39) == 3)
                    sub_14271c2f0(rax_39)
                
                arg3[9].b |= 2
                
                if (*(rax_39 + 0x39) == 4)
                    rbx.b = rax_39[0x21].b != 0
                else
                    rbx = 3
    
    int64_t* var_48
    
    if (var_48 != 0)
        var_48[1].d -= 1
        
        if (var_48[1].d == 1)
            (**var_48)(var_48)
            int32_t rsi_1 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t r8_10 = *var_48
                (*(r8_10 + 8))(var_48, zx.q(rsi_1), r8_10)

return zx.q(rbx)
