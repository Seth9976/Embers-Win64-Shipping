// 函数: sub_142395890
// 地址: 0x142395890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
EnterCriticalSection(arg1 + 0x580)
int32_t rax_2 = *(arg2 + 0xc)
void* const rax_9

if (rax_2 s>= data_143e1d9b4)
    rax_9 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_2)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_4 = temp1_1 + rdx_1
    rax_9 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_1) * 0x18

uint64_t result = zx.q(*(rax_9 + 8) u>> 0x1d)

if ((result.b & 1) != 0 || (*(arg2 + 8) & 0x18000) != 0)
    result = sx.q(*(arg1 + 0x348))
    int32_t rsi_1 = 0
    
    if (result.d s> 0)
        uint64_t result_1 = result
        result = *(arg1 + 0x340)
        int64_t rcx_5 = 0
        
        do
            int64_t* rdi_1 = *result
            
            if (rdi_1 != 0 && *rdi_1 == arg2)
                int64_t var_38_1 = 0
                int32_t var_30_1 = 0
                int32_t var_2c_1 = 0xc
                void var_98
                sub_142395540(rdi_1, &var_98)
                sub_142398030(arg1, &var_98)
                *(*(arg1 + 0x340) + (sx.q(rsi_1) << 3)) = 0
                sub_140f23e90(&rdi_1[0xd])
                int64_t rcx_10 = rdi_1[0xb]
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                int64_t rcx_11 = rdi_1[9]
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                rdi_1[2] = &data_143336548
                sub_14239a450(&rdi_1[4])
                int64_t* rcx_13 = rdi_1[6]
                
                if (rcx_13 != 0)
                    rcx_13[1].d -= 1
                    
                    if (rcx_13[1].d == 1)
                        (**rcx_13)(rcx_13, 1)
                
                sub_142380ea0(&rdi_1[3])
                rdi_1[2] = &data_142fe1158
                result = j_sub_140a74f90(rdi_1)
                
                if (var_38_1 != 0)
                    result = sub_140a74f90(var_38_1)
                
                break
            
            rsi_1 += 1
            rcx_5 += 1
            result += 8
        while (rcx_5 s< result_1)

if (arg1 != -0x580)
    result = LeaveCriticalSection(arg1 + 0x580)

__security_check_cookie(rax_1 ^ &var_b8)
return result
