// 函数: ?InternalSwitchTo@UMSThreadProxy@details@Concurrency@@IEAAXPEAV123@W4SwitchingProxyState@3@@Z
// 地址: 0x140b0f3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
bool cond:0 = arg1[1].d s<= 1
int64_t var_28 = 0x2e002e002f
int32_t result

if (cond:0)
label_140b0f4b2:
    sub_140a306e0(arg1, &data_142e1ac80, &data_142d40450, 0)
    sub_140a36160(arg1)
    result.b = 1
else
    while (true)
        if (sub_140a32ae0(arg1, &data_142d409b8, 0).b == 0
                && sub_140a32ae0(arg1, &var_28, 1).b == 0)
            int32_t rax_2 = sub_140a23cf0(arg1, &var_28, 0, 0, 0xffffffff)
            int32_t rbx_1 = rax_2
            
            if (rax_2 == 0xffffffff)
                goto label_140b0f4b2
            
            while (true)
                int32_t rcx_3 = arg1[1].d
                int32_t rax_3 = rcx_3 - 1
                
                if (rcx_3 == 0)
                    rax_3 = 0
                
                if (rax_3 s<= rbx_1 + 3)
                    break
                
                if (*(*arg1 + (sx.q(rbx_1) << 1) + 6) == 0x2f)
                    break
                
                int32_t rax_5 = sub_140a23cf0(arg1, &var_28, 0, 0, rbx_1 + 3)
                rbx_1 = rax_5
                
                if (rax_5 == 0xffffffff)
                    goto label_140b0f4b2
            
            int32_t i_1 = sub_140a23cf0(arg1, &data_142d5a024, 0, 1, rbx_1 - 1)
            int32_t i = i_1
            
            if (i_1 s<= 0)
                i = 0
            
            while (i != 0)
                if (rbx_1 - i s> 1)
                    int64_t rcx_13 = *arg1
                    int64_t i_2 = sx.q(i)
                    
                    if (*(rcx_13 + (i_2 << 1) + 2) != 0x2e)
                        break
                    
                    if (*(rcx_13 + (i_2 << 1) + 4) != 0x2f)
                        break
                
                int32_t i_3 = sub_140a23cf0(arg1, &data_142d5a024, 0, 1, i - 1)
                i = i_3
                
                if (i_3 s<= 0)
                    i = 0
            
            result = sub_140a23cf0(arg1, &data_142d84ee0, 0, 0, i)
            
            if (result s< 0 || result s>= rbx_1)
                int32_t rax_8 = arg1[1].d
                int32_t rbx_2 = rbx_1 - i
                int32_t r14_1 = rax_8 - 1
                
                if (rax_8 == 0)
                    r14_1 = 0
                
                int32_t r14_2 = r14_1 - i
                
                if (rbx_2 + 3 s>= 0)
                    if (rbx_2 + 3 s< r14_2)
                        r14_2 = rbx_2 + 3
                    
                    if (r14_2 != 0)
                        int32_t rcx_17 = rax_8 - r14_2
                        
                        if (rcx_17 != i)
                            int64_t r9_1 = *arg1
                            memmove(r9_1 + (sx.q(i) << 1), r9_1 + (sx.q(r14_2 + i) << 1), 
                                (rcx_17 - i) * 2)
                            rax_8 = arg1[1].d
                        
                        rax_8 -= r14_2
                        arg1[1].d = rax_8
                
                if (rax_8 s<= 1)
                    goto label_140b0f4b2
                
                continue
        
        result.b = 0
        break

__security_check_cookie(rax_1 ^ &var_58)
return result
