// 函数: sub_14240d5b0
// 地址: 0x14240d5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
void* result

if (((*(sub_140d21d80(arg1) + 0x50) u>> 0x16).b & 1) == 0)
    int32_t r10_1 = (data_143a303d8).d
    void* r9_1 = &data_143a303c0
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t rcx = 0
    int32_t var_120 = 0
    int32_t r8_2 = 0
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    int32_t var_11c_1 = 1
    void* var_118_1 = &data_143a303c0
    int32_t var_110_1 = 0xffffffff
    int64_t var_10c_1 = 0
    
    if (r10_1 != 0)
        void* rax_3 = data_143a303d0
        
        if (rax_3 != 0)
            r9_1 = rax_3
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_14240d6cb:
            int32_t rax_10 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
            int32_t var_11c_2 = rax_10
            int32_t rax_11
            
            if (rax_10 == 0)
                rax_11 = 0x20
            else
                rax_11 = 0x1f - temp0_2
            
            var_10c_1.d = r8_2 - rax_11 + 0x1f
            
            if (r8_2 - rax_11 + 0x1f s> r10_1)
                var_10c_1.d = r10_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8_2 += 0x20
                rcx += 1
                var_10c_1:4.d = r8_2
                var_120 = rcx
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                var_110_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_14240d6cb
            
            var_10c_1.d = r10_1
    
    double zmm2[0x2] = var_110_1.o
    int64_t* var_c8_1 = &data_143a303b0
    double var_b8_1[0x2] = var_120.o
    uint32_t rax_14 = (zmm2[0] u>> 0x20).d
    double var_a8_1[0x2] = zmm2
    double var_f0[0x2] = (&data_143a303b0).o
    int64_t var_d0_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_128
    
    if (rax_14 s< r10_1)
        int32_t i = var_b8_1[1]:4.d
        int64_t r14
        int64_t var_38_1 = r14
        
        do
            int64_t* rax_16 = sub_140d3c6e0((sx.q(i) << 4) + *var_f0[0])
            
            if (rax_16 != 0 && (*(rax_16[2] + 0xcc) & 0x82000001) == 0
                    && (*(*rax_16 + 0x260))(rax_16, arg1) != 0)
                int32_t j = 0
                
                if (rax_16[8].d s> 0)
                    int64_t* rdi_1 = nullptr
                    
                    do
                        int64_t rax_20 = rax_16[7]
                        int16_t* const rcx_6
                        
                        if (*(rdi_1 + rax_20 + 8) == 0)
                            rcx_6 = &data_142d40450
                        else
                            rcx_6 = *(rdi_1 + rax_20)
                        
                        bool cond:2_1 = sub_140a54510(rcx_6, arg2) == 0
                        int64_t rax_22 = rax_16[7]
                        r14.b = cond:2_1
                        int16_t* const rcx_7
                        
                        if (*(rdi_1 + rax_22 + 8) == 0)
                            rcx_7 = &data_142d40450
                        else
                            rcx_7 = *(rdi_1 + rax_22)
                        
                        int32_t rax_23
                        rax_23.b = sub_140a54510(rcx_7, &data_142d6bbe8) == 0
                        
                        if (r14.b == 1 || rax_23.b == 1)
                            int64_t var_f8 = rax_16[2]
                            void* const rdx_6
                            
                            if (rax_16[5] == 0)
                                rdx_6 = nullptr
                            else
                                void* rax_25 = sub_140d41340()
                                
                                if (rax_25 == 0)
                                    rdx_6 = nullptr
                                else
                                    rdx_6 = rax_16[5]
                                    int64_t rax_26 = sx.q(*(rax_25 + 0x38))
                                    
                                    if (rax_26.d s> *(rdx_6 + 0x38)
                                            || *(*(rdx_6 + 0x30) + (rax_26 << 3)) != rax_25 + 0x30)
                                        rdx_6 = nullptr
                            
                            void* const var_100 = rdx_6
                            var_120.q = &var_100
                            int64_t* var_118_2 = &var_f8
                            sub_140bd29a0(&var_98, &var_128, &var_120, nullptr)
                        
                        j += 1
                        rdi_1 = &rdi_1[2]
                    while (j s< rax_16[8].d)
            
            var_b8_1[1].d &= not.d(var_f0[1]:4.d)
            sub_14059bdd0(&var_f0[1])
            i = var_b8_1[1]:4.d
        while (i s< *(var_b8_1[0] i+ 0x18))
    
    void* rax_31 = sub_140cde0b0()
    void* rbx_2 = *(arg1 + 0x10)
    void* result_1
    
    if (rbx_2 == 0)
    label_14240d915:
        result_1 = nullptr
    else
        int64_t rdi_2 = var_98
        
        while (true)
            sub_140865c40(&var_98, &var_128, rbx_2)
            int64_t rcx_12 = sx.q(var_128)
            void* const rax_32
            
            if (rcx_12.d == 0xffffffff)
                rax_32 = nullptr
            else
                rax_32 = rdi_2 + rcx_12 * 0x18
            
            int64_t* rcx_14 = rax_32 + 8
            
            if (rax_32 == 0)
                rcx_14 = nullptr
            
            if (rcx_14 != 0)
                int64_t* rdi_3 = *rcx_14
                var_128.q = 0
                
                if ((1 & sub_140b5b8a0(0, 0)) != 0)
                    sub_140d19010(rax_31, 
                        NewObject with empty name can't be used to create default subobjects (inside of "
                    "UObject derived class constructor) as it produces incon")
                
                result_1 = sub_140d2dfc0(rdi_3, rax_31, 0, 0, 0, 0, 0, 0, 0)
                break
            
            rbx_2 = *(rbx_2 + 0x40)
            
            if (rbx_2 == 0)
                goto label_14240d915
    
    int32_t var_50_2 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    int64_t var_90
    var_90.d = 0
    int32_t var_68_2 = 0xffffffff
    int32_t var_64_2 = 0
    int64_t var_88
    sub_14059a8e0(&var_88, 0)
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    int64_t rcx_19 = var_98
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_178)
return result
