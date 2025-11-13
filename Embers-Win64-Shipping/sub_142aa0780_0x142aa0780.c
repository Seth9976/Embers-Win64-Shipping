// 函数: sub_142aa0780
// 地址: 0x142aa0780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1e8 = -2
void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int64_t rbp = sx.q(arg3)
bool cond:0 = arg3 s>= 0

if (arg3 s<= 0)
    goto label_142aa07e0

void* rcx = *(arg1 + 0x28)
int64_t result

if (rcx == 0)
    cond:0 = arg3 s>= 0
label_142aa07e0:
    
    if (not(cond:0))
        rbp = zx.q(std::_WChar_traits<wchar_t>::length(arg2))
    
    if (rbp.d != 0)
        void* rcx_2 = *(arg1 + 0x58)
        
        if (rcx_2 == 0)
            void* r8_2 = *(arg1 + 0x50)
            int32_t i = 0
            
            if (r8_2 == 0 || *(r8_2 + 8) == 0)
                goto label_142aa0878
            
            int32_t r9_1
            r9_1.b = arg4 != 0
            void var_1d8
            sub_142b15620(&var_1d8, arg1, r8_2, r9_1 + 0x29)
            int32_t var_e4
            
            if (var_e4 == 0)
                sub_142b15d30(&var_1d8)
            label_142aa0878:
                int32_t r12_1 = 1
                
                if (arg4 == 0)
                    r12_1 = arg4
                
                int32_t r15_1 = 0
                int64_t rdi_1 = 0
                
                do
                    uint32_t rdx_5 = zx.d(arg2[rdi_1])
                    i += 1
                    rdi_1 += 1
                    
                    if ((rdx_5 & 0xfffffc00) == 0xd800 && rdi_1 != sx.q(rbp.d))
                        uint32_t rcx_7 = zx.d(arg2[rdi_1])
                        
                        if ((rcx_7 & 0xfffffc00) == 0xdc00)
                            i += 1
                            rdi_1 += 1
                            rdx_5 = ((rdx_5 - 0xd7f7) << 0xa) + rcx_7
                    
                    int64_t* rcx_8 = *(arg1 + 0x28)
                    int32_t rax_6
                    
                    if (rcx_8 == 0)
                        void* rcx_9 = *(arg1 + 0x58)
                        
                        if (rcx_9 != 0)
                            rax_6 = sub_142a9f280(rcx_9, rdx_5)
                        else if (rdx_5 s< 0x110000)
                            rax_6.b = sub_142a9f8f0(arg1, rdx_5).b & 1
                        else
                            rax_6.b = 0
                    else
                        rax_6 = (*(*rcx_8 + 8))(rcx_8, rdx_5)
                    
                    if (r12_1 != sx.d(rax_6.b))
                        break
                    
                    r15_1 = i
                while (i s< rbp.d)
                
                result = zx.q(r15_1)
            else
                int32_t result_1 = sub_142b15e50(&var_1d8, arg2, rbp.d, arg4)
                sub_142b15d30(&var_1d8)
                result = zx.q(result_1)
        else
            result = sub_142b15e50(rcx_2, arg2, rbp.d, arg4)
    else
        result = 0
else
    result = (sub_142b14670(rcx, arg2, &arg2[rbp], arg4) - arg2) s>> 1

__security_check_cookie(rax_1 ^ &var_208)
return result
