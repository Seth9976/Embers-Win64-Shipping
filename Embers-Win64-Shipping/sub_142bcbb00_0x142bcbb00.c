// 函数: sub_142bcbb00
// 地址: 0x142bcbb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r10 = *(arg2 + 0x140)
int32_t r9 = 0
int32_t rcx = *(arg2 + 0x13c)
int32_t result = 3

if (rcx == 0)
    goto label_142bcbb6e

int32_t* rdx = r10

while (*rdx != arg3)
    r9 += 1
    rdx = &rdx[4]
    
    if (r9 u>= rcx)
        goto label_142bcbb6e

int32_t rcx_1 = *(arg1 + 0xc)
int32_t rdx_1 = r10[zx.q(r9) * 4 + 3]
int32_t result_2

if (rcx_1 u<= rdx_1)
    result_2 = sub_142b970b0(arg1, rdx_1 - rcx_1)

int32_t result_1

if (rcx_1 u> rdx_1 || result_2 != 0)
    result = 0x53
label_142bcbb6e:
    result_1 = result
    
    if (result == 0)
        goto label_142bcbb87
else
    result_1 = result_2
label_142bcbb87:
    int32_t rax_2 = sub_142b96dd0(arg1, &result_1)
    result = result_1
    
    if (result == 0)
        int32_t rbp_2 = rax_2 & 0xffffff00
        
        if ((rbp_2 & 0xfffffeff) == 0)
            void* const rdx_4 = &data_143687f58
            
            if ((rax_2.b & 4) == 0)
                rdx_4 = &data_143687f20
            
            char r9_1
            result, r9_1 = sub_142b96aa0(arg1, rdx_4, arg2 + 0x148)
            result_1 = result
            
            if (result == 0)
                int32_t rax_3 = *(arg2 + 0x150)
                int32_t rcx_5 = rax_3
                
                if (rax_3 s< 0)
                    rcx_5 = neg.d(rcx_5)
                
                if (rcx_5 s> 0x7fff)
                    *(arg2 + 0x150) = (rax_3 s>> 0x1f & 0xffff0002) + 0x7fff
                
                int32_t rax_7 = *(arg2 + 0x154)
                int32_t rcx_6 = rax_7
                
                if (rax_7 s< 0)
                    rcx_6 = neg.d(rcx_6)
                
                if (rcx_6 s> 0x7fff)
                    *(arg2 + 0x154) = (rax_7 s>> 0x1f & 0xffff0002) + 0x7fff
                
                uint32_t rsi_2 = zx.d(rax_2.b)
                char r9_2
                result, r9_2 = sub_142bcc230(arg1, rsi_2, arg2 + 0x15c, r9_1, arg6, arg5, arg4)
                result_1 = result
                
                if (result == 0)
                    char r9_3
                    result, r9_3 = sub_142bcc230(arg1, rsi_2, arg2 + 0x16c, r9_2)
                    result_1 = result
                    
                    if (result == 0)
                        if (rbp_2 != 0x100)
                            *(arg2 + 0x17c) = *(arg2 + 0x15c)
                            *(arg2 + 0x18c) = *(arg2 + 0x16c)
                        else
                            char r9_4
                            result, r9_4 = sub_142bcc230(arg1, rsi_2, arg2 + 0x17c, r9_3)
                            result_1 = result
                            
                            if (result == 0)
                                return sub_142bcc230(arg1, rsi_2, arg2 + 0x18c, r9_4)
return result
