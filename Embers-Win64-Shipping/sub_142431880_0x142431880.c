// 函数: sub_142431880
// 地址: 0x142431880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rax_2 = sub_142452380()
int32_t var_98 = 5
char var_40 = 0
void* var_90
sub_142442440(&var_90)
sub_1405ab0f0(&var_90, arg1, rax_2)
char var_40_1 = 1
int32_t zmm0 = sub_1405b0c60(&var_98)
char i

if (i == 0)
    int64_t* var_68
    int64_t* rdi_1 = var_68
    int128_t zmm6 = 0x3d4ccccd
    
    do
        if (rdi_1 != 0)
            zmm6 = sub_141ddd150(rdi_1, zmm6, zmm0)
        
        int32_t var_58
        int32_t r8_1 = var_58
        int32_t var_80
        int32_t rdx_1 = var_80
        void* r15_1 = var_90
        int32_t var_78
        int32_t rsi_2 = var_78 + 1
        
        if (rsi_2 s>= r8_1 + rdx_1)
        label_142431ae8:
            int64_t var_68_1 = 0
            char var_74 = 1
            break
        
        int64_t r14_1 = sx.q(rsi_2) << 3
        
        while (true)
            int64_t var_60
            int64_t var_88
            
            if (rsi_2 s>= rdx_1)
                rdi_1 = *(var_60 + (sx.q(rsi_2 - rdx_1) << 3))
            else
                rdi_1 = *(r14_1 + var_88)
            int32_t var_70 = var_70 + 1
            
            if (rdi_1 != 0)
                void* rax_9
                rax_9, zmm0 = sub_141dc9840(rdi_1)
                
                if (rax_9 != 0)
                    void* const rax_16
                    
                    if ((var_98.b & 1) != 0)
                        int32_t rax_10 = *(rdi_1 + 0xc)
                        
                        if (rax_10 s>= data_143e1d9b4)
                            rax_16 = nullptr
                        else
                            int16_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(rax_10)
                            uint32_t rdx_3 = zx.d(temp0_1)
                            int32_t rax_12 = temp1_1 + rdx_3
                            rax_16 = *(data_143e1d9a0 + (sx.q(rax_12 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_12.w) - rdx_3) * 0x18
                    
                    if ((var_98.b & 1) == 0 || ((*(rax_16 + 8) u>> 0x1d).b & 1) == 0)
                        int32_t rcx_11 = var_98
                        
                        if (((rcx_11 u>> 1).b & 1) == 0)
                            goto label_1424319f0
                        
                        uint64_t rax_20 = sub_1405949a0()
                        
                        if (rax_20.b != 0)
                            rcx_11 = var_98
                        label_1424319f0:
                            
                            if (((rcx_11 u>> 2).b & 1) == 0)
                            label_142431a98:
                                
                                if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                        rax_9) == r15_1)
                                    if (rax_9 == *(r15_1 + 0x30))
                                        break
                                    
                                    void* rax_22
                                    rax_22, zmm0 = sub_1425bd0d0()
                                    void* rdx_6 = rdi_1[2]
                                    int64_t rax_23 = sx.q(*(rax_22 + 0x38))
                                    
                                    if (rax_23.d s> *(rdx_6 + 0x38))
                                        break
                                    
                                    if (*(*(rdx_6 + 0x30) + (rax_23 << 3)) != rax_22 + 0x30)
                                        break
                            else
                                if ((*(rax_9 + 0x1f4) & 0x20) == 0 || (*(rax_9 + 0x1f6) & 8) != 0)
                                    rax_20 = zx.q(*(rax_9 + 0x1f5))
                                
                                char r9_1
                                
                                if (((*(rax_9 + 0x1f4) & 0x20) != 0 && (*(rax_9 + 0x1f6) & 8) == 0)
                                        || (rax_20.b & 0x40) != 0 || rax_20.b s< 0)
                                    r9_1 = 1
                                else
                                    r9_1 = 0
                                
                                void* rdx_5 = *(rax_9 + 0xb8)
                                char* r8_3 = *(rax_9 + 0x248)
                                uint8_t rcx_12
                                
                                if (rdx_5 != 0)
                                    rax_20 = sx.q(*(rdx_5 + 0x168))
                                    
                                    if (rax_20.d s< 0 || rax_20.d s>= *(rdx_5 + 0x160))
                                        rcx_12 = 0
                                    else
                                        rcx_12 = 1
                                
                                int64_t rcx_14
                                
                                if (rdx_5 == 0 || rcx_12 == 0)
                                    rcx_14 = 0
                                else
                                    rcx_14 = rax_20 * 0x78 + *(rdx_5 + 0x158)
                                
                                if (rcx_14 == 0 || r8_3 == rcx_14)
                                    rcx_14.b = 1
                                else
                                    rcx_14.b = 0
                                
                                if (r8_3 == 0 || *r8_3 == 2)
                                    rax_20.b = 1
                                else
                                    rax_20.b = 0
                                
                                if (rcx_14.b != 0 || rax_20.b != 0)
                                    rax_20.b = 1
                                
                                if (r9_1 != 0 && rax_20.b != 0)
                                    goto label_142431a98
                
                r8_1 = var_58
                rdx_1 = var_80
            
            rsi_2 += 1
            r14_1 += 8
            
            if (rsi_2 s>= r8_1 + rdx_1)
                goto label_142431ae8
        
        int64_t* var_68_2 = rdi_1
        var_78 = rsi_2
    while (i == 0)

int64_t result = sub_142442440(&var_90)
__security_check_cookie(rax_1 ^ &var_b8)
return result
