// 函数: sub_140be4130
// 地址: 0x140be4130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0x20
int64_t* result = arg1
char* var_158
int64_t var_148
void* const var_138
int64_t var_130
int32_t arg_10
char arg_18
char arg_20

if (data_143e1ab40 == 0)
    arg_10 = 1
    sub_140b58260(&arg_20, u"ObjectRedirects", 1)
    var_158 = &arg_20
    int32_t* var_150_1 = &arg_10
    sub_140bd2b60(&data_1439a9af0, &arg_18, &var_158, nullptr)
    arg_10 = 2
    sub_140b58260(&arg_20, u"ClassRedirects", 1)
    var_158 = &arg_20
    int32_t* var_150_2 = &arg_10
    sub_140bd2b60(&data_1439a9af0, &arg_18, &var_158, nullptr)
    arg_10 = 4
    sub_140b58260(&arg_20, u"StructRedirects", 1)
    var_158 = &arg_20
    int32_t* var_150_3 = &arg_10
    sub_140bd2b60(&data_1439a9af0, &arg_18, &var_158, nullptr)
    arg_10 = 8
    sub_140b58260(&arg_20, u"EnumRedirects", 1)
    var_158 = &arg_20
    int32_t* var_150_4 = &arg_10
    sub_140bd2b60(&data_1439a9af0, &arg_18, &var_158, nullptr)
    arg_10 = 0x10
    sub_140b58260(&arg_20, u"FunctionRedirects", 1)
    var_158 = &arg_20
    int32_t* var_150_5 = &arg_10
    sub_140bd2b60(&data_1439a9af0, &arg_18, &var_158, nullptr)
    arg_10 = 0x20
    sub_140b58260(&arg_20, u"PropertyRedirects", 1)
    var_158 = &arg_20
    int32_t* var_150_6 = &arg_10
    sub_140bd2b60(&data_1439a9af0, &arg_18, &var_158, nullptr)
    arg_10 = 0x40
    sub_140b58260(&arg_20, u"PackageRedirects", 1)
    var_158 = &arg_20
    int32_t* var_150_7 = &arg_10
    sub_140bd2b60(&data_1439a9af0, &arg_18, &var_158, nullptr)
    var_138 = nullptr
    var_130 = 0
    sub_140be5530(&var_138)
    sub_140c3b5b0(&var_138)
    sub_140c7b6b0(&var_138)
    var_148 = 0
    int32_t var_140_1 = 0
    sub_1405947f0(&var_148, 0x18)
    int32_t rax = var_140_1 + 0x18
    var_140_1 = rax
    
    if (rax s> 0)
        sub_140594770(&var_148)
    
    UnDecorator::getReferenceType(var_148, u"RegisterNativeRedirects", 0x30)
    sub_140bd8190(&var_138)
    int64_t rcx_14 = var_148
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    sub_140bd6610(&var_138)
    result = arg1
    data_143e1ab40 = 1

void* rcx_16 = data_143ddb400

if (rcx_16 != 0)
    result = sub_140af5690(rcx_16, u"CoreRedirects", 0, 1, result)
    
    if (result != 0)
        void* r9_1 = &result[2]
        int32_t rdi = *(r9_1 + 0x18)
        int32_t rcx_17 = 0
        int32_t r13 = 0
        var_148 = 0
        int32_t r8_8 = 0
        int64_t var_140_2 = 0
        int32_t var_100 = 0
        int32_t var_fc = 1
        void* var_f8 = r9_1
        int32_t var_f0 = 0xffffffff
        int64_t var_ec = 0
        
        if (rdi != 0)
            void* rax_1 = *(r9_1 + 0x10)
            
            if (rax_1 != 0)
                r9_1 = rax_1
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rdi - 1)
            int32_t rdx_11 = *r9_1
            
            if (rdx_11 != 0)
            label_140be4517:
                int32_t rax_8 = neg.d(rdx_11) & rdx_11
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
                int32_t var_fc_1 = rax_8
                
                if (rax_8 != 0)
                    rbx = 0x1f - temp0_2
                
                var_ec.d = r8_8 - rbx + 0x1f
                
                if (r8_8 - rbx + 0x1f s> rdi)
                    var_ec.d = rdi
            else
                while (true)
                    int64_t rdx_12 = sx.q(rcx_17)
                    r8_8 += 0x20
                    rcx_17 += 1
                    var_ec:4.d = r8_8
                    var_100 = rcx_17
                    
                    if (rdx_12.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_11 = *(r9_1 + (rdx_12 << 2) + 4)
                    var_f0 = 0xffffffff
                    
                    if (rdx_11 != 0)
                        goto label_140be4517
                
                var_ec.d = rdi
        
        double zmm4[0x2] = var_f0.o
        int64_t* result_2 = result
        int128_t zmm0 = var_100.o
        int64_t* result_1 = result
        double var_110[0x2] = zmm4
        int128_t var_120 = zmm0
        int16_t var_60 = 0
        int128_t zmm3 = var_120
        int128_t var_88 = zmm3
        int128_t var_98 = result_1.o
        double rcx_19 = zmm4[0]
        zmm0.q = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
        int128_t var_78 = zmm0
        
        if ((rcx_19 u>> 0x20).d s< *(zmm3.q + 0x18))
            int32_t i = var_88:0xc.d
            
            do
                int64_t* rbx_1 = var_98.q
                void* const r15_1 = 0x18
                var_158 = nullptr
                int64_t var_150_8 = 0
                int64_t var_a8 = 0
                int64_t var_a0_1 = 0
                int64_t rdi_2 = sx.q(i) * 0x30
                int64_t var_d0 = 0
                int32_t var_c8_1 = 0
                arg_10.b = 0
                arg_18 = 0
                arg_20 = 0
                void* rdx_14 = *rbx_1 + rdi_2
                int32_t rax_12 = *(rdx_14 + 0x20)
                int32_t rcx_21 = rax_12 - 1
                
                if (rax_12 == 0)
                    rcx_21 = 0
                
                if (rcx_21 s<= 0)
                    r15_1 = 8
                
                int16_t** r15_2 = r15_1 + rdx_14
                int16_t* rcx_22
                
                if (r15_2[1].d == 0)
                    rcx_22 = &data_142d40450
                else
                    rcx_22 = *r15_2
                
                sub_140b0e8d0(rcx_22, u"InstanceOnly=", &arg_10)
                int16_t* rcx_23
                
                if (r15_2[1].d == 0)
                    rcx_23 = &data_142d40450
                else
                    rcx_23 = *r15_2
                
                sub_140b0e8d0(rcx_23, u"Removed=", &arg_18)
                int16_t* rcx_24
                
                if (r15_2[1].d == 0)
                    rcx_24 = &data_142d40450
                else
                    rcx_24 = *r15_2
                
                sub_140b0e8d0(rcx_24, u"MatchSubstring=", &arg_20)
                int16_t* rcx_25
                
                if (r15_2[1].d == 0)
                    rcx_25 = &data_142d40450
                else
                    rcx_25 = *r15_2
                
                sub_140b2acc0(rcx_25, u"OldName=", &var_158, 1)
                int16_t* rcx_26
                
                if (r15_2[1].d == 0)
                    rcx_26 = &data_142d40450
                else
                    rcx_26 = *r15_2
                
                sub_140b2acc0(rcx_26, u"NewName=", &var_a8, 1)
                int16_t* rcx_27
                
                if (r15_2[1].d == 0)
                    rcx_27 = &data_142d40450
                else
                    rcx_27 = *r15_2
                
                sub_140b2acc0(rcx_27, u"OverrideClassName=", &var_d0, 1)
                int64_t rbx_3 = *(rdi_2 + *rbx_1)
                void* rcx_33
                
                if (data_1439a9af8 == data_1439a9b24)
                label_140be478a:
                    rcx_33 = nullptr
                else
                    int32_t rax_15 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
                    void* rcx_31 = data_1439a9b30
                    void* rax_17 = &data_1439a9b28
                    
                    if (rcx_31 != 0)
                        rax_17 = rcx_31
                    
                    int32_t rax_18 = *(rax_17 + ((sx.q(data_1439a9b38 - 1) & sx.q(rax_15)) << 2))
                    
                    if (rax_18 == 0xffffffff)
                    label_140be478a_1:
                        rcx_33 = nullptr
                    else
                        int64_t r8_16 = data_1439a9af0
                        int64_t rdx_18
                        
                        while (true)
                            int64_t rdx_17 = sx.q(rax_18) * 5
                            rdx_18 = rdx_17 << 2
                            
                            if (*(r8_16 + (rdx_17 << 2)) == rbx_3)
                                break
                            
                            rax_18 = *(r8_16 + rdx_18 + 0xc)
                            
                            if (rax_18 == 0xffffffff)
                                goto label_140be478a_2
                        
                        rcx_33 = rdx_18 + r8_16
                        
                        if (rax_18 == 0xffffffff)
                        label_140be478a_2:
                            rcx_33 = nullptr
                
                int32_t* rax_19 = rcx_33 + 8
                
                if (rcx_33 == 0)
                    rax_19 = nullptr
                
                if (rax_19 != 0)
                    int32_t r12_1 = *rax_19
                    
                    if (arg_10.b != 0)
                        r12_1 |= 0x10000
                    
                    if (arg_18 != 0)
                        r12_1 |= 0x20000
                    
                    if (arg_20 != 0)
                        r12_1 |= 0x40000
                    
                    int64_t rbx_4 = sx.q(r13)
                    r13 = (rbx_4 + 1).d
                    var_140_2.d = r13
                    
                    if (r13 s> var_140_2:4.d)
                        sub_140775640(&var_148)
                        r13 = var_140_2.d
                    
                    int64_t r14_2 = rbx_4 * 0xa0
                    int32_t* r14_3 = r14_2 + var_148
                    
                    if (r14_2 == neg.q(var_148))
                        r14_3 = nullptr
                    else
                        __builtin_memset(&result_1, 0, 0x18)
                        int64_t rbx_5
                        int64_t* result_3
                        int64_t rdi_3
                        
                        if (sub_140bdb840(&var_a8, &result_1, &var_120, &var_120:8) != 0)
                            rbx_5 = var_120:8.q
                            rdi_3 = var_120.q
                            result_3 = result_1
                        else
                            rbx_5 = 0
                            rdi_3 = 0
                            result_3 = nullptr
                        
                        __builtin_memset(&var_100, 0, 0x18)
                        
                        if (sub_140bdb840(&var_158, &var_100, &var_f8, &var_f0) == 0)
                            int64_t var_b8_1 = 0
                        
                        *r14_3 = r12_1
                        void* rcx_37 = &r14_3[0x18]
                        __builtin_memset(&r14_3[1], 0, 0x18)
                        *(r14_3 + 0x1c) = result_3
                        *(r14_3 + 0x24) = rdi_3
                        *(r14_3 + 0x2c) = rbx_5
                        __builtin_memset(&r14_3[0xd], 0, 0x18)
                        *(r14_3 + 0x50) = 0
                        *(r14_3 + 0x58) = 0
                        *(rcx_37 + 0x1c) = 0x80
                        void* rax_22 = *(rcx_37 + 0x10)
                        
                        if (rax_22 != 0)
                            rcx_37 = rax_22
                        
                        *rcx_37 = 0
                        *(rcx_37 + 8) = 0
                        r14_3[0x20] = 0xffffffff
                        r14_3[0x21] = 0
                        *(r14_3 + 0x90) = 0
                        r14_3[0x26] = 0
                        sub_140be32e0(r14_3)
                    
                    if (var_c8_1 s> 1)
                        __builtin_memset(&result_1, 0, 0x18)
                        
                        if (sub_140bdb840(&var_d0, &result_1, &var_120, &var_120:8) == 0)
                            __builtin_memset(&result_1, 0, 0x18)
                        
                        int64_t zmm1_1 = var_120:8.q
                        *(r14_3 + 0x34) = result_1.o
                        *(r14_3 + 0x44) = zmm1_1
                    
                    int16_t** var_168_1
                    var_168_1.d = 0xffffffff
                    int32_t rax_24 = sub_140a23cf0(r15_2, u"ValueChanges=", 1, 0, 0xffffffff)
                    
                    if (rax_24 != 0xffffffff)
                        var_168_1.d = rax_24
                        int32_t rax_25 = sub_140a23cf0(r15_2, &data_142dc30a4, 0, 0, var_168_1.d)
                        int32_t r8_20 = r15_2[1].d
                        int32_t rbx_6 = r8_20 - 1
                        
                        if (r8_20 == 0)
                            rbx_6 = 0
                        
                        int32_t rcx_42
                        
                        if (rax_25 s>= 0)
                            rcx_42 = rbx_6
                            
                            if (rax_25 s< rbx_6)
                                rcx_42 = rax_25
                        else
                            rcx_42 = 0
                        
                        int64_t r9_8 = sx.q(rcx_42)
                        
                        if (sx.q(rax_25) + 0x7fffffff s< r9_8)
                            rbx_6 = rcx_42
                        else if (sx.q(rax_25) + 0x7fffffff s< sx.q(rbx_6))
                            rbx_6 = rax_25 + 0x7fffffff
                        
                        int16_t* rax_27
                        
                        if (r8_20 == 0)
                            rax_27 = &data_142d40450
                        else
                            rax_27 = *r15_2
                        
                        void* r15_3 = &rax_27[r9_8]
                        var_138 = nullptr
                        int32_t rbx_7 = rbx_6 - rcx_42
                        int32_t rax_28 = 0
                        var_130:4.d = 0
                        int32_t rdx_25 = 0
                        var_130.d = 0
                        void* const rdi_4 = nullptr
                        
                        if (r15_3 != 0 && *r15_3 != 0 && rbx_7 s> 0)
                            if (rbx_7 + 1 s> 0)
                                sub_1405947f0(&var_138, rbx_7 + 1)
                                rax_28 = var_130:4.d
                                rdx_25 = var_130.d
                                rdi_4 = var_138
                            
                            int32_t rsi_2 = rbx_7 + 1 + rdx_25
                            var_130.d = rsi_2
                            
                            if (rsi_2 s> rax_28)
                                sub_140594770(&var_138)
                                rsi_2 = var_130.d
                                rdi_4 = var_138
                            
                            UnDecorator::getReferenceType(rdi_4, r15_3, rbx_7 * 2)
                            *(rdi_4 + (sx.q(rsi_2) << 1) - 2) = 0
                        
                        var_138 = nullptr
                        var_130 = 0
                        
                        if (sub_140be34e0(r14_3, rdi_4) == 0)
                            int64_t r15_4 = var_148
                            void* r14_6 = sx.q(r13 - 1) * 0xa0 + r15_4
                            *(r14_6 + 0x98) = 0
                            int64_t rcx_48 = *(r14_6 + 0x90)
                            
                            if (rcx_48 != 0)
                                sub_140a74f90(rcx_48)
                            
                            sub_1405e1b50(r14_6 + 0x50, 0)
                            int64_t rcx_50 = *(r14_6 + 0x70)
                            
                            if (rcx_50 != 0)
                                sub_140a74f90(rcx_50)
                            
                            int64_t rcx_51 = *(r14_6 + 0x50)
                            
                            if (rcx_51 != 0)
                                sub_140a74f90(rcx_51)
                            
                            if (0 != 0)
                                memmove(r14_6, sx.q(r13) * 0xa0 + r15_4, 0)
                            
                            var_140_2.d = r13 - 1
                            sub_140ca2bb0(&var_148)
                            r13 = var_140_2.d
                        
                        if (rdi_4 != 0)
                            sub_140a74f90(rdi_4)
                
                int64_t rcx_55 = var_d0
                
                if (rcx_55 != 0)
                    sub_140a74f90(rcx_55)
                
                int64_t rcx_56 = var_a8
                
                if (rcx_56 != 0)
                    sub_140a74f90(rcx_56)
                
                char* rcx_57 = var_158
                
                if (rcx_57 != 0)
                    sub_140a74f90(rcx_57)
                
                var_88:8.d &= not.d(var_98:0xc.d)
                sub_14059bdd0(&var_98:8)
                i = var_88:0xc.d
            while (i s< *(var_88.q + 0x18))
            
            if (var_60.b != 0 && var_60:1.b != 0)
                sub_140a6d3f0(result, result[1].d - *(result + 0x34), 1)
        
        char rax_37 = sub_140bd8190(&var_148)
        sub_140bd6610(&var_148)
        return zx.q(rax_37)

result.b = 0
return result
