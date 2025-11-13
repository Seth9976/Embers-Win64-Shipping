// 函数: sub_1405f28a0
// 地址: 0x1405f28a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_250 = -2
uint128_t var_48 = arg3
uint128_t zmm7
uint128_t var_58 = zmm7
void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int64_t* rdi = arg2
int64_t* var_258 = arg2
int64_t* var_248 = arg2
int64_t result
int512_t zmm6

if (arg1 == 0 || *arg2 == 0)
    result, zmm6 = sub_1405d1550(rdi)
    result.b = 0
else
    int64_t* rbx_1 = arg1[0xb]
    int64_t* var_240_1 = rbx_1
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 8))(rbx_1)
    
    int64_t* rcx_1 = data_143f0f180
    int64_t* rax_4 = (*(*rcx_1 + 0x458))(rcx_1)
    int64_t* var_278 = nullptr
    int64_t r8_1 = *rax_4
    (*(r8_1 + 0x140))(rax_4, &var_278, r8_1)
    
    if (var_278 != 0)
        void* rax_5 = *rdi
        int32_t var_b0_1 = 0
        int32_t var_ac
        __builtin_memset(&var_ac, 0xff, 0x14)
        int128_t var_98_1 = data_142d3f5a0
        int64_t var_88
        __builtin_memset(&var_88, 0, 0x1a)
        void* var_188 = rax_5
        int64_t var_180_1 = 0
        int32_t var_178_1 = 0xffffffff
        int16_t var_174_1 = 0x100
        int64_t var_c8
        __builtin_memset(&var_c8, 0, 0x11)
        int32_t var_b4_1 = 0
        int16_t var_70
        var_70:1.b = *(rax_5 + 0x38) u> 1
        void var_170
        memset(&var_170, 0, 0xa8)
        int64_t rdi_3 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
        int64_t rax_6 = rdi_3 + 0x2a
        
        if (rax_6 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x2c)
            rdi_3 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
            rax_6 = rdi_3 + 0x2a
        
        data_143f02bc8 = rax_6
        void* const rcx_4 = u"ConvertTextureFormat"
        int16_t i
        
        do
            i = *rcx_4
            *(rcx_4 + rdi_3 - u"ConvertTextureFormat") = i
            rcx_4 += 2
        while (i != 0)
        void*** rcx_7 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        void* rax_7 = &rcx_7[0x27]
        
        if (rax_7 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x140)
            rcx_7 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            rax_7 = &rcx_7[0x27]
        
        data_143f02bc8 = rax_7
        data_143f02bac += 1
        *data_143f02ba0 = rcx_7
        data_143f02ba0 = &rcx_7[1]
        sub_1405d11b0(rcx_7, &var_188, rdi_3)
        data_143f02d5c = 1
        sub_1405d19b0(&data_143f02b98, &var_188)
        int64_t var_78
        data_143f02d10 = var_78:7.b
        data_143f02d11 = 0
        data_143f02d5c = 1
        void* var_270
        arg3 = _mm_cvtepi32_ps(zx.o(*((*(*arg1 + 8))(arg1, &var_270) + 4)))
        void var_2b8
        zmm7 = _mm_cvtepi32_ps(zx.o(*(*(*arg1 + 8))(arg1, &var_2b8)))
        void*** rcx_14 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        void* rax_15 = &rcx_14[5]
        
        if (rax_15 u> data_143f02bd0)
            arg3 = sub_140b0e3d0(&data_143f02bc8, 0x30)
            rcx_14 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            rax_15 = &rcx_14[5]
        
        data_143f02bc8 = rax_15
        data_143f02bac += 1
        *data_143f02ba0 = rcx_14
        data_143f02ba0 = &rcx_14[1]
        rcx_14[1] = 0
        *rcx_14 = &data_142d54998
        rcx_14[2] = 0
        rcx_14[3].d = 0
        *(rcx_14 + 0x1c) = zmm7.d
        rcx_14[4].d = arg3.d
        *(rcx_14 + 0x24) = 0x3f800000
        int128_t var_238
        __builtin_memset(&var_238, 0, 0x30)
        int128_t var_1f0_1 = zx.o(0)
        int64_t var_1d8
        __builtin_memset(&var_1d8, 0, 0x2c)
        int64_t var_1a8_1 = 0
        int32_t var_1a0_1 = 0
        int16_t var_19c_1 = 0
        char var_19a_1 = 0
        int16_t var_198_1 = 0
        uint64_t rax_18 = zx.q(data_143f02c38)
        int32_t var_1dc_1 = rax_18.d
        int32_t rsi_1 = 0
        
        if (rax_18.d != 0)
            do
                uint64_t rdi_6 = zx.q(rsi_1)
                uint64_t r14_1 = rdi_6 * 3
                int64_t* rcx_17 = *((r14_1 << 3) + 0x143f02c40)
                
                if (rcx_17 == 0)
                    *(&var_1d8 + rdi_6) = 0
                    rax_18.b = 0
                else
                    *(&var_1d8 + rdi_6) = (*(rcx_17 + 0x3c)).b
                    int64_t var_1d0
                    *(&var_1d0 + (rdi_6 << 2)) = rcx_17[8].d
                    int64_t rax_22 = (*(*rcx_17 + 0x10))()
                    
                    if (rax_22 != 0)
                        var_19c_1:1.b = 1
                    
                    if (rax_22 == 0 || *(rax_22 + 0x68) u<= 1)
                        var_19c_1:1.b = 0
                    
                    rax_18 = zx.q(*(&var_1d8 + rdi_6))
                
                if (rax_18.b != 0)
                    var_1a0_1.w = (*(*((r14_1 << 3) + 0x143f02c40) + 0x38)).w
                
                rsi_1 += 1
            while (rsi_1 u< var_1dc_1)
        
        int64_t* rcx_19 = data_143f02d00
        int32_t var_1b0_1
        
        if (rcx_19 == 0)
            var_1b0_1 = 0
        else
            var_1b0_1 = *(rcx_19 + 0x3c)
            var_1b0_1 = rcx_19[8].d
            void* rax_26 = (*(*rcx_19 + 0x10))()
            
            if (rax_26 == 0 || *(rax_26 + 0x68) u<= 1)
                var_19c_1:1.b = 0
            else
                var_19c_1:1.b = 1
        
        var_1a8_1.b = data_143f02d08
        var_1a8_1:1.b = data_143f02d09
        var_1a8_1:2.b = data_143f02d0a
        var_1a8_1:3.b = data_143f02d0b
        var_1a8_1:4.d = data_143f02d0c
        
        if (var_1b0_1 != 0)
            var_1a0_1.w = (*(data_143f02d00 + 0x38)).w
        
        var_1a0_1:2.b = data_143f02d10
        var_1a0_1:3.b = data_143f02d11
        char var_19a_2 = data_143f02d12
        int64_t var_1f8_1 = data_14395d9e8
        int64_t var_208_1 = data_14395da00
        int64_t var_200_1 = data_14395da18
        int32_t var_1e0_1 = 0
        var_238.q = data_1439c9410
        sub_1405f84a0(arg1, &var_270)
        void*** rcx_25 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        void* rax_39 = &rcx_25[4]
        
        if (rax_39 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x28)
            rcx_25 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            rax_39 = &rcx_25[4]
        
        data_143f02bc8 = rax_39
        data_143f02bac += 1
        *data_143f02ba0 = rcx_25
        data_143f02ba0 = &rcx_25[1]
        void* rdi_7 = var_270
        sub_1405eba20(rcx_25, rbx_1, rdi_7)
        int64_t* rax_43 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
        int64_t rdx_9 = *arg1
        int16_t var_2b0
        void* var_2a0
        void* var_298
        void* var_290
        void* var_288
        int128_t var_218
        
        if ((*(rdx_9 + 0x18))(arg1, rdx_9) != 5)
            if ((*(*arg1 + 0x18))(arg1) != 2)
                if ((*(*arg1 + 0x18))(arg1) == 0xd)
                    sub_1419a2ec0(rax_43, &var_290, &data_143cd9e60, 0)
                    sub_1419a2ec0(rax_43, &var_2a0, &data_143cda160, 0)
                    int64_t rax_76 = 0
                    void* r14_9 = var_290
                    
                    if (r14_9 != 0)
                        int64_t rdx_29 = sx.q(*(r14_9 + 0x10c))
                        int64_t* rsi_10 = *(var_288 + 0x10)
                        int64_t rax_77 = rsi_10[3]
                        
                        if (*(rax_77 + (rdx_29 << 3)) == 0)
                            sub_1419ccf30(rsi_10, rdx_29.d)
                            rax_77 = rsi_10[3]
                        
                        rax_76 = *(rax_77 + (rdx_29 << 3))
                    
                    var_238:8.q = rax_76
                    int64_t rax_78 = 0
                    void* rsi_11 = var_2a0
                    
                    if (rsi_11 != 0)
                        int64_t rdx_30 = sx.q(*(rsi_11 + 0x10c))
                        int64_t* r13_5 = *(var_298 + 0x10)
                        int64_t rax_79 = r13_5[3]
                        
                        if (*(rax_79 + (rdx_30 << 3)) == 0)
                            sub_1419ccf30(r13_5, rdx_30.d)
                            rax_79 = r13_5[3]
                        
                        rax_78 = *(rax_79 + (rdx_30 << 3))
                    
                    var_218.q = rax_78
                    sub_1419870b0(&data_143f02b98, &var_238, 2)
                    var_2b0 = 0x13
                    char var_2ae_3 = 1
                    int64_t var_2ac_3 = 0
                    int32_t var_2a4_3 = 0
                    int64_t* rcx_60 = data_143f0f180
                    (*(*rcx_60 + 0x5d0))(rcx_60, &var_2b8, &data_143f02b98, rdi_7, &var_2b0)
                    int64_t rdi_16 = 0
                    
                    if (r14_9 != 0)
                        int64_t rdx_33 = sx.q(*(r14_9 + 0x10c))
                        int64_t* rdi_17 = *(var_288 + 0x10)
                        int64_t rax_82 = rdi_17[3]
                        
                        if (*(rax_82 + (rdx_33 << 3)) == 0)
                            sub_1419ccf30(rdi_17, rdx_33.d)
                            rax_82 = rdi_17[3]
                        
                        rdi_16 = *(rax_82 + (rdx_33 << 3))
                    
                    int16_t* var_2d8_6
                    var_2d8_6.b = (*(*arg1 + 0x58))(arg1)
                    sub_1405eb250(r14_9, &data_143f02b98, rdi_16, &var_2b8)
                    int64_t rdi_18 = 0
                    
                    if (rsi_11 != 0)
                        int64_t rdx_34 = sx.q(*(rsi_11 + 0x10c))
                        int64_t* rdi_19 = *(var_298 + 0x10)
                        int64_t rax_86 = rdi_19[3]
                        
                        if (*(rax_86 + (rdx_34 << 3)) == 0)
                            sub_1419ccf30(rdi_19, rdx_34.d)
                            rax_86 = rdi_19[3]
                        
                        rdi_18 = *(rax_86 + (rdx_34 << 3))
                    
                    var_2d8_6.b = (*(*arg1 + 0x58))(arg1)
                    sub_1405eb250(rsi_11, &data_143f02b98, rdi_18, &var_2b8)
                    sub_1405ec8a0(&var_2b8)
            else
                sub_1419a2ec0(rax_43, &var_290, &data_143cd9e60, 0)
                sub_1419a2ec0(rax_43, &var_2a0, &data_143cda060, 0)
                int64_t rax_61 = 0
                void* r14_7 = var_290
                
                if (r14_7 != 0)
                    int64_t rdx_21 = sx.q(*(r14_7 + 0x10c))
                    int64_t* rsi_7 = *(var_288 + 0x10)
                    int64_t rax_62 = rsi_7[3]
                    
                    if (*(rax_62 + (rdx_21 << 3)) == 0)
                        sub_1419ccf30(rsi_7, rdx_21.d)
                        rax_62 = rsi_7[3]
                    
                    rax_61 = *(rax_62 + (rdx_21 << 3))
                
                var_238:8.q = rax_61
                int64_t rax_63 = 0
                void* rsi_8 = var_2a0
                
                if (rsi_8 != 0)
                    int64_t rdx_22 = sx.q(*(rsi_8 + 0x10c))
                    int64_t* r13_3 = *(var_298 + 0x10)
                    int64_t rax_64 = r13_3[3]
                    
                    if (*(rax_64 + (rdx_22 << 3)) == 0)
                        sub_1419ccf30(r13_3, rdx_22.d)
                        rax_64 = r13_3[3]
                    
                    rax_63 = *(rax_64 + (rdx_22 << 3))
                
                var_218.q = rax_63
                sub_1419870b0(&data_143f02b98, &var_238, 2)
                var_2b0 = 2
                char var_2ae_2 = 1
                int64_t var_2ac_2 = 0
                int32_t var_2a4_2 = 0
                int64_t* rcx_48 = data_143f0f180
                (*(*rcx_48 + 0x5d0))(rcx_48, &var_2b8, &data_143f02b98, rdi_7, &var_2b0)
                int64_t rdi_12 = 0
                
                if (r14_7 != 0)
                    int64_t rdx_25 = sx.q(*(r14_7 + 0x10c))
                    int64_t* rdi_13 = *(var_288 + 0x10)
                    int64_t rax_67 = rdi_13[3]
                    
                    if (*(rax_67 + (rdx_25 << 3)) == 0)
                        sub_1419ccf30(rdi_13, rdx_25.d)
                        rax_67 = rdi_13[3]
                    
                    rdi_12 = *(rax_67 + (rdx_25 << 3))
                
                int16_t* var_2d8_5
                var_2d8_5.b = (*(*arg1 + 0x58))(arg1)
                sub_1405eb250(r14_7, &data_143f02b98, rdi_12, &var_2b8)
                int64_t rdi_14 = 0
                
                if (rsi_8 != 0)
                    int64_t rdx_26 = sx.q(*(rsi_8 + 0x10c))
                    int64_t* rdi_15 = *(var_298 + 0x10)
                    int64_t rax_71 = rdi_15[3]
                    
                    if (*(rax_71 + (rdx_26 << 3)) == 0)
                        sub_1419ccf30(rdi_15, rdx_26.d)
                        rax_71 = rdi_15[3]
                    
                    rdi_14 = *(rax_71 + (rdx_26 << 3))
                
                var_2d8_5.b = (*(*arg1 + 0x58))(arg1)
                sub_1405eb250(rsi_8, &data_143f02b98, rdi_14, &var_2b8)
                sub_1405ec8a0(&var_2b8)
        else
            sub_1419a2ec0(rax_43, &var_2a0, &data_143cd9e60, 0)
            sub_1419a2ec0(rax_43, &var_290, &data_143cd9f60, 0)
            int64_t rax_45 = 0
            void* r13_1 = var_2a0
            
            if (r13_1 != 0)
                int64_t rdx_12 = sx.q(*(r13_1 + 0x10c))
                int64_t* rsi_4 = *(var_298 + 0x10)
                int64_t rax_46 = rsi_4[3]
                
                if (*(rax_46 + (rdx_12 << 3)) == 0)
                    sub_1419ccf30(rsi_4, rdx_12.d)
                    rax_46 = rsi_4[3]
                
                rax_45 = *(rax_46 + (rdx_12 << 3))
            
            var_238:8.q = rax_45
            int64_t rax_47 = 0
            void* rsi_5 = var_290
            
            if (rsi_5 != 0)
                int64_t rdx_13 = sx.q(*(rsi_5 + 0x10c))
                int64_t* r14_4 = *(var_288 + 0x10)
                int64_t rax_48 = r14_4[3]
                
                if (*(rax_48 + (rdx_13 << 3)) == 0)
                    sub_1419ccf30(r14_4, rdx_13.d)
                    rax_48 = r14_4[3]
                
                rax_47 = *(rax_48 + (rdx_13 << 3))
            
            var_218.q = rax_47
            sub_1419870b0(&data_143f02b98, &var_238, 2)
            int16_t var_268 = 3
            char var_266_1 = 1
            int64_t var_264_1 = 0
            int32_t var_25c_1 = 0
            int64_t* rcx_34 = data_143f0f180
            (*(*rcx_34 + 0x5d0))(rcx_34, &var_2b8, &data_143f02b98, rdi_7, &var_268)
            var_2b0 = 0x28
            char var_2ae_1 = 1
            int64_t var_2ac_1 = 0
            int32_t var_2a4_1 = 0
            int64_t* rcx_35 = data_143f0f180
            void var_280
            (*(*rcx_35 + 0x5d0))(rcx_35, &var_280, &data_143f02b98, rdi_7, &var_2b0)
            int64_t rdi_8 = 0
            
            if (r13_1 != 0)
                int64_t rdx_17 = sx.q(*(r13_1 + 0x10c))
                int64_t* rdi_9 = *(var_298 + 0x10)
                int64_t rax_52 = rdi_9[3]
                
                if (*(rax_52 + (rdx_17 << 3)) == 0)
                    sub_1419ccf30(rdi_9, rdx_17.d)
                    rax_52 = rdi_9[3]
                
                rdi_8 = *(rax_52 + (rdx_17 << 3))
            
            char var_2c8_1 = 1
            OBJImpl::FInit(r13_1, &data_143f02b98, rdi_8, &var_2b8, &var_280, 
                (*(*arg1 + 0x58))(arg1))
            int64_t rdi_10 = 0
            
            if (rsi_5 != 0)
                int64_t rdx_18 = sx.q(*(rsi_5 + 0x10c))
                int64_t* rdi_11 = *(var_288 + 0x10)
                int64_t rax_56 = rdi_11[3]
                
                if (*(rax_56 + (rdx_18 << 3)) == 0)
                    sub_1419ccf30(rdi_11, rdx_18.d)
                    rax_56 = rdi_11[3]
                
                rdi_10 = *(rax_56 + (rdx_18 << 3))
            
            char var_2c8_2 = 1
            OBJImpl::FInit(rsi_5, &data_143f02b98, rdi_10, &var_2b8, &var_280, 
                (*(*arg1 + 0x58))(arg1))
            sub_1405ec8a0(&var_280)
            sub_1405ec8a0(&var_2b8)
        void*** rcx_70 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        void* rax_89 = &rcx_70[4]
        
        if (rax_89 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x28)
            rcx_70 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            rax_89 = &rcx_70[4]
        
        data_143f02bc8 = rax_89
        data_143f02bac += 1
        *data_143f02ba0 = rcx_70
        data_143f02ba0 = &rcx_70[1]
        rcx_70[1] = 0
        *rcx_70 = &data_142d54988
        rcx_70[2].d = 0
        *(rcx_70 + 0x14) = 2
        rcx_70[3].d = 1
        void*** rcx_75 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        void* rax_92 = &rcx_75[2]
        
        if (rax_92 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x18)
            rcx_75 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            rax_92 = &rcx_75[2]
        
        data_143f02bc8 = rax_92
        data_143f02bac += 1
        *data_143f02ba0 = rcx_75
        data_143f02ba0 = &rcx_75[1]
        rcx_75[1] = 0
        *rcx_75 = &data_142d549b8
        data_143f02d5c = 0
        data_143f02d10.w = 0
        int64_t* rcx_78 = var_278
        (*(*rcx_78 + 0x10))(rcx_78)
        sub_1405d1550(&var_270)
        int64_t var_80
        sub_1405d1550(&var_80)
        rdi = var_258
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x10))(rbx_1)
    
    result, zmm6 = sub_1405d1550(rdi)
    result.b = 1

__security_check_cookie(rax_1 ^ &var_2f8)
zmm6.o = var_48
return result
