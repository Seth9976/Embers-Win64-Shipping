// 函数: sub_141da2320
// 地址: 0x141da2320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x3a8)
int64_t rdi = *(arg1 + 0x3a0)
int64_t r14 = 0
int64_t var_38 = 0
int32_t var_30 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_38, rbx, 0)
    r14 = var_38
    memcpy(r14, rdi, rbx * 2)
else
    int32_t var_2c_1 = 0

int16_t* r8_3 = *arg2
int64_t r9 = sx.q(arg2[1].d)
int16_t* rcx_2 = r8_3
void* rdx_2 = &r8_3[r9]

if (r8_3 != rdx_2)
    do
        if (*rcx_2 == 0x5f)
            int32_t rcx_4 = ((rcx_2 - r8_3) s>> 1).d
            
            if (rcx_4 != 0xffffffff)
                int32_t temp0_1 = r9.d
                int32_t rdi_1 = (r9 - 1).d
                
                if (temp0_1 == 0)
                    rdi_1 = 0
                
                int16_t* r15_1 = &data_142d40450
                
                if (temp0_1 != 0)
                    r15_1 = r8_3
                
                if (rcx_4 s< 0)
                    rdi_1 = 0
                else if (rcx_4 s< rdi_1)
                    rdi_1 = rcx_4
                
                int64_t var_48 = 0
                int32_t rbx_1 = 0
                int32_t var_40_1 = 0
                int64_t rsi_1 = 0
                int32_t var_3c_1 = 0
                int32_t rbp_1 = 0
                
                if (r15_1 != 0 && *r15_1 != 0 && rdi_1 s> 0)
                    if (rdi_1 + 1 s> 0)
                        sub_1405947f0(&var_48, rdi_1 + 1)
                        rbp_1 = var_3c_1
                        rbx_1 = var_40_1
                        rsi_1 = var_48
                    
                    rbx_1 = rbx_1 + 1 + rdi_1
                    
                    if (rbx_1 s> rbp_1)
                        sub_140594770(&var_48)
                        rbp_1 = var_3c_1
                        rsi_1 = var_48
                    
                    UnDecorator::getReferenceType(rsi_1, r15_1, rdi_1 * 2)
                    *(rsi_1 + (sx.q(rbx_1) << 1) - 2) = 0
                
                if (r14 != 0)
                    sub_140a74f90(r14)
                
                var_38 = rsi_1
                int32_t var_2c_2 = rbp_1
                int32_t var_30_1 = rbx_1
            
            break
        
        rcx_2 = &rcx_2[1]
    while (rcx_2 != rdx_2)

int64_t r8
int64_t var_58 = r8
uint64_t result = sub_141da2520(arg1, &var_38, arg2, 0xffffffff)
int64_t rcx_10 = var_38

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10) __tailcall
