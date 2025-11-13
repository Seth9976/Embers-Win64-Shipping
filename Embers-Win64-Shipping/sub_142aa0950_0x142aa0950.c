// 函数: sub_142aa0950
// 地址: 0x142aa0950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1d8 = -2
void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t rbx = sx.q(arg3)
bool cond:0 = arg3 s>= 0

if (arg3 s<= 0)
    goto label_142aa09ae

void* rcx = *(arg1 + 0x28)
int64_t result

if (rcx == 0)
    cond:0 = arg3 s>= 0
label_142aa09ae:
    
    if (not(cond:0))
        rbx = zx.q(std::_WChar_traits<wchar_t>::length(arg2))
    
    if (rbx.d != 0)
        void* rcx_2 = *(arg1 + 0x58)
        
        if (rcx_2 == 0)
            void* r8_2 = *(arg1 + 0x50)
            
            if (r8_2 == 0 || *(r8_2 + 8) == 0)
                goto label_142aa0a46
            
            int32_t r9_1
            r9_1.b = arg4 != 0
            void var_1c8
            sub_142b15620(&var_1c8, arg1, r8_2, r9_1 + 0x19)
            int32_t var_d4
            
            if (var_d4 == 0)
                sub_142b15d30(&var_1c8)
            label_142aa0a46:
                int32_t r12_1 = 1
                
                if (arg4 == 0)
                    r12_1 = arg4
                
                int32_t result_2 = rbx.d
                int64_t rsi_1 = sx.q(rbx.d)
                void* rbp_2 = arg2 - 2 + (rsi_1 << 1)
                
                do
                    rbx = zx.q(rbx.d - 1)
                    rsi_1 -= 1
                    rbp_2 -= 2
                    uint32_t rdx_3 = zx.d(*(arg2 + (rsi_1 << 1)))
                    
                    if ((rdx_3 & 0xfffffc00) == 0xdc00 && rbx.d s> 0)
                        uint32_t rcx_7 = zx.d(*rbp_2)
                        
                        if ((rcx_7 & 0xfffffc00) == 0xd800)
                            rbx = zx.q(rbx.d - 1)
                            rsi_1 -= 1
                            rbp_2 -= 2
                            rdx_3 += (rcx_7 - 0xd7f7) << 0xa
                    
                    int64_t* rcx_8 = *(arg1 + 0x28)
                    uint32_t rax_6
                    
                    if (rcx_8 == 0)
                        void* rcx_9 = *(arg1 + 0x58)
                        
                        if (rcx_9 != 0)
                            rax_6 = sub_142a9f280(rcx_9, rdx_3)
                        else if (rdx_3 s< 0x110000)
                            rax_6.b = sub_142a9f8f0(arg1, rdx_3).b & 1
                        else
                            rax_6.b = 0
                    else
                        rax_6 = (*(*rcx_8 + 8))(rcx_8, rdx_3)
                    
                    if (r12_1 != sx.d(rax_6.b))
                        break
                    
                    result_2 = rbx.d
                while (rbx.d s> 0)
                
                result = zx.q(result_2)
            else
                int32_t result_1 = sub_142b16370(&var_1c8, arg2, rbx.d, arg4)
                sub_142b15d30(&var_1c8)
                result = zx.q(result_1)
        else
            result = sub_142b16370(rcx_2, arg2, rbx.d, arg4)
    else
        result = 0
else
    result = (sub_142b14b10(rcx, arg2, arg2 + (rbx << 1), arg4) - arg2) s>> 1

__security_check_cookie(rax_1 ^ &var_1f8)
return result
