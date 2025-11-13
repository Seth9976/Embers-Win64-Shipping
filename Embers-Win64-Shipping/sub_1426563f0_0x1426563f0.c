// 函数: sub_1426563f0
// 地址: 0x1426563f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* rsi = &arg1[0x21]
int64_t* var_f0 = rsi
rsi[1].d = 0

if (*(rsi + 0xc) != 0)
    sub_140775d60(rsi, 0)

rsi[6].d = 0xffffffff
*(rsi + 0x34) = 0
sub_14059a8e0(&rsi[2], 0)
int32_t i_2 = rsi[9].d

if (i_2 s> 0)
    int64_t r9_1 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rdx_1 = rsi[8]
        void* rax_2 = &rsi[7]
        int64_t r8_3 = (sx.q(rsi[9].d) - 1) & r9_1
        
        if (rdx_1 != 0)
            rax_2 = rdx_1
        
        r9_1 += 1
        *(rax_2 + (r8_3 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rax_3 = sub_1426a0270()
char var_98
int32_t* result
void* r8_5
result, r8_5 = sub_142640350(&var_98, (*(*arg1 + 0x150))(arg1), rax_3, 5)
void* var_90
int64_t var_88
char var_74
int64_t var_60

if (var_74 == 0)
    int64_t* var_68
    int64_t* rdi_1 = var_68
    int64_t r15
    int64_t var_28_1 = r15
    
    while (true)
        if (rdi_1 != 0)
            int32_t rax_6 = *(rdi_1 + 0xc)
            void* rax_12
            
            if (rax_6 s>= data_143e1d9b4)
                rax_12 = nullptr
            else
                int16_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(rax_6)
                uint32_t rdx_4 = zx.d(temp1_1)
                int32_t rax_8 = temp2_1 + rdx_4
                rax_12 = *(data_143e1d9a0 + (sx.q(rax_8 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_8.w) - rdx_4) * 0x18
            
            if (((*(rax_12 + 8) u>> 0x1d).b & 1) == 0)
                int32_t var_c8
                sub_140b5e4f0(&var_c8, 0x7fffffff)
                int32_t var_e8 = *(rdi_1 + 0xc)
                int64_t rax_16 = *rdi_1
                r8_5.b = 1
                int32_t var_c4 = 0xffffffff
                int32_t var_c0_1 = 0
                void var_b8
                int128_t* rax_17 = (*(rax_16 + 0x548))(rdi_1, &var_b8, r8_5, 0)
                int128_t var_e4_1 = *rax_17
                int64_t var_d4_1 = rax_17[1].q
                int32_t var_cc_1 = *(rax_17 + 0x18)
                sub_140d3a3a0(&var_c4, sub_141dc9840(rdi_1))
                var_c8 = rdi_1[0x4b].d
                int32_t var_f8
                sub_14263f2a0(rsi, &var_f8, &var_e8, nullptr)
        
        int32_t var_58
        int32_t r8_7 = var_58
        int32_t var_80
        int32_t rdx_9 = var_80
        int32_t var_78
        int32_t r14_2 = var_78 + 1
        result = zx.q(r8_7 + rdx_9)
        
        if (r14_2 s>= result.d)
        label_142656775:
            int64_t var_68_1 = 0
            char var_74_1 = 1
            break
        
        int64_t** r12_1 = sx.q(r14_2) << 3
        
        while (true)
            if (r14_2 s>= rdx_9)
                rdi_1 = *(var_60 + (sx.q(r14_2 - rdx_9) << 3))
            else
                rdi_1 = *(r12_1 + var_88)
            
            int32_t var_70 = var_70 + 1
            
            if (rdi_1 != 0)
                void* rax_26
                rax_26, r8_5 = sub_141dc9840(rdi_1)
                
                if (rax_26 != 0)
                    void* rax_33
                    
                    if ((var_98 & 1) != 0)
                        int32_t rax_27 = *(rdi_1 + 0xc)
                        
                        if (rax_27 s>= data_143e1d9b4)
                            rax_33 = nullptr
                        else
                            int16_t temp3_1
                            int32_t temp4_1
                            temp3_1:temp4_1 = sx.q(rax_27)
                            uint32_t rdx_11 = zx.d(temp3_1)
                            int32_t rax_29 = temp4_1 + rdx_11
                            rax_33 = *(data_143e1d9a0 + (sx.q(rax_29 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_29.w) - rdx_11) * 0x18
                    
                    if ((var_98 & 1) == 0 || ((*(rax_33 + 8) u>> 0x1d).b & 1) == 0)
                        int32_t rcx_20 = var_98.d
                        
                        if (((rcx_20 u>> 1).b & 1) == 0)
                            goto label_14265669f
                        
                        uint64_t rax_37 = sub_1405949a0()
                        
                        if (rax_37.b != 0)
                            rcx_20 = var_98.d
                        label_14265669f:
                            
                            if (((rcx_20 u>> 2).b & 1) == 0)
                            label_14265671b:
                                result =
                                    Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                    rax_26)
                                
                                if (result == var_90)
                                    if (rax_26 == *(var_90 + 0x30))
                                        break
                                    
                                    void* rax_38 = sub_1425bd0d0()
                                    void* rdx_13 = rdi_1[2]
                                    result = sx.q(*(rax_38 + 0x38))
                                    
                                    if (result.d s> *(rdx_13 + 0x38))
                                        break
                                    
                                    int32_t* result_1 = result
                                    result = *(rdx_13 + 0x30)
                                    
                                    if (*(result + (result_1 << 3)) != rax_38 + 0x30)
                                        break
                            else
                                if ((*(rax_26 + 0x1f4) & 0x20) == 0 || (*(rax_26 + 0x1f6) & 8) != 0)
                                    rax_37 = zx.q(*(rax_26 + 0x1f5))
                                
                                if (((*(rax_26 + 0x1f4) & 0x20) != 0
                                        && (*(rax_26 + 0x1f6) & 8) == 0) || (rax_37.b & 0x40) != 0
                                        || rax_37.b s< 0)
                                    r15.b = 1
                                else
                                    r15.b = 0
                                
                                void* rcx_22 = *(rax_26 + 0xb8)
                                char* rsi_1 = *(rax_26 + 0x248)
                                
                                if (rcx_22 != 0)
                                    rax_37 = sub_1424359b0(rcx_22)
                                
                                if (rcx_22 == 0 || rax_37 == 0 || rsi_1 == rax_37)
                                    rcx_22.b = 1
                                else
                                    rcx_22.b = 0
                                
                                if (rsi_1 == 0 || *rsi_1 == 2)
                                    rax_37.b = 1
                                else
                                    rax_37.b = 0
                                
                                if (rcx_22.b != 0 || rax_37.b != 0)
                                    rax_37.b = 1
                                
                                if (r15.b != 0 && rax_37.b != 0)
                                    goto label_14265671b
                
                r8_7 = var_58
                rdx_9 = var_80
            
            r14_2 += 1
            result = zx.q(r8_7 + rdx_9)
            r12_1 = &r12_1[1]
            
            if (r14_2 s>= result.d)
                goto label_142656775
        
        int64_t* var_68_2 = rdi_1
        var_78 = r14_2
        
        if (var_74 != 0)
            break
        
        rsi = var_f0

char var_40

if (var_40 != 0)
    char var_40_1 = 0
    int64_t var_48
    result = sub_142441560(var_90, var_48)
    
    if (var_60 != 0)
        result = sub_140a74f90(var_60)
    
    if (var_88 != 0)
        result = sub_140a74f90(var_88)

__security_check_cookie(rax_1 ^ &var_118)
return result
