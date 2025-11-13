// 函数: sub_142a738f0
// 地址: 0x142a738f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2

if (arg1 != arg2)
    sub_142a74570(arg1)
    int512_t zmm1_1 = sub_142a73f90(arg1)
    int32_t rax_1 = *(arg2 + 0x78)
    *(arg1 + 0x78) = rax_1
    
    if (rax_1 s<= 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_10
        
        if (*(arg2 + 0x10) != 0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3 =
                j_sub_142a7dd00(0x40)
            arg_10 = rax_3
            
            if (rax_3 != 0)
                rax_3 = sub_142a479b0(rax_3, *(arg2 + 0x10))
            
            *(arg1 + 0x10) = rax_3
            
            if (rax_3 != 0)
                *(arg1 + 8) = sub_142aea9e0(nullptr, rax_3, arg1 + 0x78)
            else
                *(arg1 + 0x78) = 7
        else
            *(arg1 + 0x10) = 0
            *(arg1 + 8) = sub_142aea410(*(arg1 + 8), *(arg2 + 8), 0, 1, zmm1_1, arg1 + 0x78)
        
        if (*(arg1 + 0x78) s<= 0)
            *(arg1 + 0x18) = *(arg2 + 0x18)
            sub_142a48100(arg1 + 0x28, arg2 + 0x28)
            *(arg1 + 0x7c) = *(arg2 + 0x7c)
            *(arg1 + 0x80) = *(arg2 + 0x80)
            *(arg1 + 0x84) = *(arg2 + 0x84)
            *(arg1 + 0x90) = *(arg2 + 0x90)
            *(arg1 + 0x98) = *(arg2 + 0x98)
            *(arg1 + 0xa0) = *(arg2 + 0xa0)
            *(arg1 + 0xa4) = *(arg2 + 0xa4)
            *(arg1 + 0xa8) = *(arg2 + 0xa8)
            sub_142a9dc70(*(arg1 + 0xb0), *(arg2 + 0xb0))
            *(arg1 + 0xb8) = *(arg2 + 0xb8)
            int128_t* rax_14 = *(arg2 + 0xc0)
            int128_t* rcx_5 = *(arg1 + 0xc0)
            *rcx_5 = *rax_14
            rcx_5[1] = rax_14[1]
            *(arg1 + 0xc8) = *(arg2 + 0xc8)
            sub_142aeb1d0(*(arg1 + 0x20), *(arg2 + 0x20), arg1 + 0x78)
            sub_142ae7d80(*(arg1 + 0x88), *(arg2 + 0x88), arg1 + 0x78)
            int64_t r13_1 = sx.q(*(*(arg2 + 0x68) + 8))
            int128_t* r14_1 = 0x20
            uint64_t rax_17 = 0x20 * r13_1
            
            if (mulu.dp.q(0x20, r13_1) u>> 0x40 != zx.o(0))
                rax_17 = -1
            
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_18 =
                j_sub_142a7dd00(rax_17)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rsi_1 = rax_18
            arg_10 = rax_18
            
            if (rax_18 == 0)
                rsi_1 = nullptr
            else if (r13_1 != 0)
                memset(rax_18, 0, r13_1 << 5)
            
            *(arg1 + 0x70) = rsi_1
            
            if (rsi_1 != 0)
                int32_t rsi_2 = 1
                int64_t r15_1 = 1
                
                if (1 s< r13_1)
                    do
                        if (*(arg1 + 0x78) s> 0)
                            return arg1
                        
                        void* rax_19 = sub_142ae72d0(*(arg2 + 0x68), rsi_2)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_20 =
                            j_sub_142a7dd00(0xc8)
                        arg_10 = rax_20
                        
                        if (rax_20 != 0)
                            rax_20 = sub_142a9d8c0(rax_20, rax_19)
                        
                        if (rax_20 == 0)
                            *(arg1 + 0x78) = 7
                            break
                        
                        sub_142ae7110(*(arg1 + 0x68), rax_20, arg1 + 0x78)
                        int128_t* rcx_13 = *(arg2 + 0x70)
                        int64_t rax_21 = *(arg1 + 0x70)
                        *(r14_1 + rax_21) = *(rcx_13 + r14_1)
                        *(r14_1 + rax_21 + 0x10) = *(rcx_13 + r14_1 + 0x10)
                        rsi_2 += 1
                        r15_1 += 1
                        r14_1 = &r14_1[2]
                    while (r15_1 s< r13_1)
                
                int32_t arg_8 = 0xffffffff
                void* rax_22 = sub_142a86e70(*(arg2 + 0xd0), &arg_8)
                void* rsi_3 = rax_22
                
                if (rax_22 != 0)
                    while (*(arg1 + 0x78) s<= 0)
                        void* r14_2 = *(rsi_3 + 0x10)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_23 =
                            j_sub_142a7dd00(0x40)
                        arg_10 = rax_23
                        
                        if (rax_23 != 0)
                            rax_23 = sub_142a479b0(rax_23, r14_2)
                        
                        if (rax_23 != 0)
                            sub_142a86f70(*(arg1 + 0xd0), rax_23, *(rsi_3 + 8), arg1 + 0x78)
                        else
                            *(arg1 + 0x78) = 7
                        
                        void* rax_24 = sub_142a86e70(*(arg2 + 0xd0), &arg_8)
                        rsi_3 = rax_24
                        
                        if (rax_24 == 0)
                            break
            else
                *(arg1 + 0x78) = 7

return arg1
