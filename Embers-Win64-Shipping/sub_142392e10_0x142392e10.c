// 函数: sub_142392e10
// 地址: 0x142392e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
EnterCriticalSection(arg1 + 0x580)
int32_t var_3c = 0xc
int32_t i = 0
int64_t var_48 = 0
int32_t var_40 = 0
void var_a8

if (*(arg1 + 0x348) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t* r8_1 = *(r14_1 + *(arg1 + 0x340))
        
        if (r8_1 != 0)
            int32_t rcx_1 = *(*r8_1 + 0xc)
            void* const rax_7
            
            if (rcx_1 s>= data_143e1d9b4)
                rax_7 = nullptr
            else
                uint32_t rax_4 = zx.d(rcx_1.w)
                
                if (rcx_1 s< 0)
                    rcx_1 += 0xffff
                    rax_4 -= 0x10000
                
                rax_7 = *(data_143e1d9a0 + (sx.q(rcx_1 s>> 0x10) << 3)) + sx.q(rax_4) * 0x18
            
            if (((*(rax_7 + 8) u>> 0x1d).b & 1) != 0)
                sub_142395540(r8_1, &var_a8)
                int64_t rax_10 = *(arg1 + 0x340)
                void* rdi_1 = *(r14_1 + rax_10)
                
                if (rdi_1 != 0)
                    sub_140f23e90(rdi_1 + 0x68)
                    int64_t rcx_7 = *(rdi_1 + 0x58)
                    
                    if (rcx_7 != 0)
                        sub_140a74f90(rcx_7)
                    
                    int64_t rcx_8 = *(rdi_1 + 0x48)
                    
                    if (rcx_8 != 0)
                        sub_140a74f90(rcx_8)
                    
                    *(rdi_1 + 0x10) = &data_143336548
                    sub_14239a450(rdi_1 + 0x20)
                    int64_t* rcx_10 = *(rdi_1 + 0x30)
                    
                    if (rcx_10 != 0)
                        rcx_10[1].d -= 1
                        
                        if (rcx_10[1].d == 1)
                            (**rcx_10)(rcx_10, 1)
                    
                    sub_142380ea0(rdi_1 + 0x18)
                    *(rdi_1 + 0x10) = &data_142fe1158
                    j_sub_140a74f90(rdi_1)
                    rax_10 = *(arg1 + 0x340)
                
                *(r14_1 + rax_10) = 0
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x348))

sub_142392c90(arg1 + 0x210, &var_a8)
int64_t result = sub_142398030(arg1, &var_a8)

if (var_48 != 0)
    result = sub_140a74f90(var_48)

if (arg1 != -0x580)
    result = LeaveCriticalSection(arg1 + 0x580)

__security_check_cookie(rax_1 ^ &var_c8)
return result
