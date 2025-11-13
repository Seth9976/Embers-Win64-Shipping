// 函数: sub_141c63f10
// 地址: 0x141c63f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t rax_3 = *(arg1 + 0x7d8)
int64_t r12 = sx.q(arg2)

if (rax_3 s< 3)
    int64_t r15_1 = sx.q(rax_3)
    int32_t rax_4 = r15_1.d + 3 - rax_3
    *(arg1 + 0x7d8) = rax_4
    
    if (rax_4 s> *(arg1 + 0x7dc))
        sub_1405a4d70(arg1 + 0x7d0)
    
    memset(*(arg1 + 0x7d0) + (r15_1 << 3), 0, sx.q(3 - rax_3) << 3)

int32_t rax_5 = *(arg1 + 0x7e8)

if (rax_5 s< 3)
    int64_t rsi_2 = sx.q(rax_5)
    int32_t rax_6 = rsi_2.d + 3 - rax_5
    *(arg1 + 0x7e8) = rax_6
    
    if (rax_6 s> *(arg1 + 0x7ec))
        sub_1405a4f90(arg1 + 0x7e0)
    
    memset((rsi_2 << 4) + *(arg1 + 0x7e0), 0, sx.q(3 - rax_5) << 4)

void* rbx = *(*(arg1 + 0x7d0) + (r12 << 3))
int16_t* const r12_1 = &data_142d40450
int64_t* result

if (rbx == 0)
label_141c6421f:
    void* rax_32 = sub_140d30a00(arg5, 0)
    void* rdi_1 = rax_32
    void* rax_33
    int64_t rax_34
    void* rdx_11
    
    if (rax_32 != 0)
        rax_33 = sub_1425a1cd0()
        rdx_11 = *(rdi_1 + 0x10)
        rax_34 = sx.q(*(rax_33 + 0x38))
    
    if (rax_32 == 0 || rax_34.d s> *(rdx_11 + 0x38)
            || *(*(rdx_11 + 0x30) + (rax_34 << 3)) != rax_33 + 0x30)
        TEB* gsbase
        
        if (data_143f35038
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f35038)
            
            if (data_143f35038 == 0xffffffff)
                sub_1405947f0(&data_143f35028, 0x1e)
                int32_t rax_78 = data_143f35030 + 0x1e
                bool cond:0_1 = rax_78 s<= data_143f35034
                data_143f35030 = rax_78
                
                if (not(cond:0_1))
                    sub_140594770(&data_143f35028)
                
                UnDecorator::getReferenceType(data_143f35028, /Engine/EngineSounds/Submixes", 0x3c)
                atexit(sub_142cf70f0)
                _Init_thread_footer(&data_143f35038)
        
        int32_t rax_38 = arg3[1].d
        int32_t rcx_33
        
        if (rax_38 == 0)
            rcx_33 = 0x42d40450
        else
            rcx_33 = (*arg3).d
        
        if (rax_38 != 0)
            *arg3
        
        int32_t var_188_1 = rcx_33
        int16_t* const r8_6 = &data_142d40450
        
        if (data_143f35030 != 0)
            r8_6 = data_143f35028
        
        int64_t var_a8
        sub_140a2e390(&var_a8, u"%s/%s.%s", r8_6)
        void var_68
        int128_t var_78 = *sub_140a1dfc0(&var_a8, &var_68)
        sub_140d2c760(arg5, &var_78)
        int64_t rcx_37 = var_a8
        
        if (rcx_37 != 0)
            sub_140a74f90(rcx_37)
        
        void* rax_40 = sub_140d30a00(arg5, 0)
        rdi_1 = rax_40
        void* rax_41
        int64_t rax_42
        void* rdx_14
        
        if (rax_40 != 0)
            rax_41 = sub_1425a1cd0()
            rdx_14 = *(rdi_1 + 0x10)
            rax_42 = sx.q(*(rax_41 + 0x38))
        
        if (rax_40 == 0 || rax_42.d s> *(rdx_14 + 0x38)
                || *(*(rdx_14 + 0x30) + (rax_42 << 3)) != rax_41 + 0x30)
            if (arg3[1].d != 0)
                r12_1 = *arg3
            
            void* rax_44 = sub_1425a1cd0()
            void var_98
            uint64_t rbx_6 = *sub_140b58260(&var_98, r12_1, 1)
            uint32_t rcx_43
            rcx_43.b = (rbx_6 u>> 0x20).d == 0
            
            if ((rcx_43.b & sub_140b5b8a0(rbx_6.d, 0)) != 0)
                sub_140d19010(rax_44, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
            
            void* rax_48 = sub_140d2dfc0(sub_1425a1cd0(), rax_44, rbx_6, 0, 0, 0, 0, 0, 0)
            rdi_1 = rax_48
            *(rax_48 + 0x40) &= 0xfe
            *(rdi_1 + 0x40) |= arg4
    
    int32_t rax_50 = *(rdi_1 + 0xc)
    void* const rax_57
    
    if (rax_50 s>= data_143e1d9b4)
        rax_57 = nullptr
    else
        int16_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rax_50)
        uint32_t rdx_18 = zx.d(temp1_1)
        int32_t rax_52 = temp2_1 + rdx_18
        rax_57 =
            *(data_143e1d9a0 + (sx.q(rax_52 s>> 0x10) << 3)) + sx.q(zx.d(rax_52.w) - rdx_18) * 0x18
    
    *(rax_57 + 8) |= 0x40000000
    int32_t rdx_20 = 0
    int64_t* rax_58 = *(arg1 + 0x7d0)
    int64_t rcx_50 = 0
    void* var_148_1
    int64_t* var_140
    
    while (true)
        if (rdi_1 == *rax_58)
            void** rax_61 = (sx.q(rdx_20) << 4) + *(arg1 + 0x7e0)
            int64_t* rcx_51 = rax_61[1]
            void* rdx_21 = *rax_61
            var_148_1 = rdx_21
            var_140 = rcx_51
            
            if (rcx_51 != 0)
                rcx_51[1].d += 1
            
            if (rdx_21 != 0)
                break
        else
            rdx_20 += 1
            rcx_50 += 1
            rax_58 = &rax_58[1]
            
            if (rcx_50 s< 3)
                continue
            else
                var_140 = nullptr
        
        void*** rax_62 = j_sub_140a82f30(0x3b0)
        void*** rbx_7 = rax_62
        
        if (rax_62 == 0)
            rbx_7 = nullptr
        else
            rax_62[1].d = 1
            *(rax_62 + 0xc) = 1
            *rbx_7 = &data_14320ad40
            sub_141c4e480(&rbx_7[2], arg1)
        
        int64_t* var_e0_1 = rbx_7
        uint128_t zmm0_1 = (&rbx_7[2]).o
        uint128_t var_128 = zmm0_1
        void* rax_63 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_63 != 0)
            *(rax_63 + 8) += 1
        
        var_148_1 = var_128.q
        var_128.q = 0
        sub_1405aeff0(&var_140, &var_128:8)
        void* rcx_54 = var_128:8.q
        
        if (rcx_54 != 0)
            int32_t rax_65 = *(rcx_54 + 8)
            *(rcx_54 + 8) -= 1
            
            if (rax_65 == 1)
                int64_t* rbx_8 = var_128:8.q
                (**rbx_8)(rbx_8)
                int32_t rax_67 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (rax_67 == 1)
                    int64_t* rcx_56 = var_128:8.q
                    (*(*rcx_56 + 8))(rcx_56, 1)
        
        if (var_e0_1 != 0)
            var_e0_1[1].d -= 1
            
            if (var_e0_1[1].d == 1)
                (**var_e0_1)(var_e0_1)
                int32_t rax_71 = *(var_e0_1 + 0xc)
                *(var_e0_1 + 0xc) -= 1
                
                if (rax_71 == 1)
                    (*(*var_e0_1 + 8))(var_e0_1, 1)
        
        break
    
    sub_140868ad0(arg1 + 0x980, rdi_1)
    int64_t rax_73 = *(arg1 + 0x7d0)
    int64_t* rcx_60 = var_140
    uint128_t zmm1_2 = var_148_1.o
    uint128_t var_118 = zmm1_2
    *(rax_73 + (r12 << 3)) = rdi_1
    uint128_t* r15_4 = (r12 << 4) + *(arg1 + 0x7e0)
    
    if (rcx_60 != 0)
        rcx_60[1].d += 1
        zmm1_2 = var_118
    
    result = &var_118
    
    if (&var_118 != r15_4)
        uint128_t var_58_1 = zmm1_2
        var_118 = *r15_4
        *r15_4 = zmm1_2
    
    void* rcx_61 = var_118:8.q
    
    if (rcx_61 != 0)
        result = zx.q(*(rcx_61 + 8))
        *(rcx_61 + 8) -= 1
        
        if (result.d == 1)
            int64_t* rbx_10 = var_118:8.q
            (**rbx_10)(rbx_10)
            result = zx.q(*(rbx_10 + 0xc))
            *(rbx_10 + 0xc) -= 1
            
            if (result.d == 1)
                int64_t* rcx_63 = var_118:8.q
                result = (*(*rcx_63 + 8))(rcx_63, 1)
    
    if (*(var_148_1 + 0x398) == 0)
        *(var_148_1 + 0x398) = rdi_1
        result = sub_141c61c20(var_148_1)
    
    int64_t* rcx_65 = var_140
    
    if (rcx_65 != 0)
        result = zx.q(rcx_65[1].d)
        rcx_65[1].d -= 1
        
        if (result.d == 1)
            int64_t* rbx_11 = var_140
            result = (**rbx_11)(rbx_11)
            int32_t rsi_3 = *(rbx_11 + 0xc)
            *(rbx_11 + 0xc) -= 1
            
            if (rsi_3 == 1)
                int64_t* rcx_67 = var_140
                result = (*(*rcx_67 + 8))(rcx_67, zx.q(rsi_3))
else
    result = arg5
    
    if (*result != 0)
        int16_t* var_d8
        sub_140b63b70(result, &var_d8)
        int64_t var_90
        int64_t* rax_8
        int128_t zmm1_1
        rax_8, zmm1_1 = sub_140d21e10(rbx, &var_90, 0)
        int16_t* rdx_4
        
        if (rax_8[1].d == 0)
            rdx_4 = &data_142d40450
        else
            rdx_4 = *rax_8
        
        int16_t* const rcx_9 = &data_142d40450
        int32_t var_d0
        
        if (var_d0 != 0)
            rcx_9 = var_d8
        
        result = sub_140a54510(rcx_9, rdx_4)
        int16_t* rcx_10 = var_d8
        int32_t rdi
        rdi.b = result.d == 0
        
        if (rcx_10 != 0)
            result, zmm1_1 = sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = var_90
        
        if (rcx_11 != 0)
            result, zmm1_1 = sub_140a74f90(rcx_11)
        
        if (rdi.b == 0)
            int32_t rax_9 = *(rbx + 0xc)
            void* const rax_15
            
            if (rax_9 s>= data_143e1d9b4)
                rax_15 = nullptr
            else
                int16_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q(rax_9)
                uint32_t rdx_6 = zx.d(temp3_1)
                int32_t rax_11 = temp4_1 + rdx_6
                rax_15 = *(data_143e1d9a0 + (sx.q(rax_11 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_11.w) - rdx_6) * 0x18
            
            *(rax_15 + 8) &= 0xbfffffff
            int64_t rcx_16 = *(arg1 + 0x7e0)
            int64_t rbx_2 = r12 * 2
            int64_t* rax_16 = *(rcx_16 + (rbx_2 << 3) + 8)
            int64_t rdx_8 = *(rcx_16 + (rbx_2 << 3))
            
            if (rax_16 != 0)
                rax_16[1].d += 1
                rcx_16 = *(arg1 + 0x7e0)
            
            if (rdx_8 != 0)
                void* rcx_17 = *(rcx_16 + (rbx_2 << 3))
                void* rax_17 = *(rcx_17 + 0x18)
                int64_t* rax_18 = *(rcx_17 + 0x20)
                int64_t* var_f8 = rax_18
                
                if (rax_18 != 0)
                    *(rax_18 + 0xc) += 1
                
                void* var_138_1 = nullptr
                int64_t* var_130
                sub_141c4d620(&var_130, &var_f8)
                void* rax_19 = var_138_1
                
                if (var_130 != 0)
                    rax_19 = rax_17
                
                int64_t* rcx_19 = var_f8
                
                if (rcx_19 != 0)
                    int32_t rax_20 = *(rcx_19 + 0xc)
                    *(rcx_19 + 0xc) -= 1
                    
                    if (rax_20 == 1)
                        int64_t* rcx_20 = var_f8
                        (*(*rcx_20 + 8))(rcx_20, 1)
                
                if (rax_19 != 0)
                    int64_t rcx_21 = *(arg1 + 0x7e0)
                    int64_t var_b8 = *(rcx_21 + (rbx_2 << 3))
                    void* rax_23 = *(rcx_21 + (rbx_2 << 3) + 8)
                    void* var_b0_1 = rax_23
                    
                    if (rax_23 != 0)
                        *(rax_23 + 0xc) += 1
                    
                    sub_141c6bce0(rax_19, &var_b8, zmm1_1)
                
                int64_t* rcx_23 = var_130
                
                if (rcx_23 != 0)
                    rcx_23[1].d -= 1
                    
                    if (rcx_23[1].d == 1)
                        int64_t* rbx_3 = var_130
                        (**rbx_3)(rbx_3)
                        int32_t rax_26 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (rax_26 == 1)
                            int64_t* rcx_25 = var_130
                            (*(*rcx_25 + 8))(rcx_25, 1)
            
            if (rax_16 != 0)
                rax_16[1].d -= 1
                
                if (rax_16[1].d == 1)
                    (**rax_16)(rax_16)
                    int32_t rax_30 = *(rax_16 + 0xc)
                    *(rax_16 + 0xc) -= 1
                    
                    if (rax_30 == 1)
                        (*(*rax_16 + 8))(rax_16, 1)
            
            goto label_141c6421f

__security_check_cookie(rax_1 ^ &var_1a8)
return result
