// 函数: sub_142881a40
// 地址: 0x142881a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x80)
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* rbp = nullptr
int32_t r14
r14.b = arg4 != 0
int32_t r14_2 = (r14 + 1) & arg1[0x4a]
int64_t* rsi

if (arg4 == 0)
    rsi = *(arg1 + 0x448)
else
    rsi = *(arg1 + 0x478)

void* const rdi = 0x16a0

if (arg4 == 0)
    rdi = 0x1698

void* rdi_1 = rdi + arg1
int32_t rax_3 = sub_1428916c0(sub_142891580(rsi))
int64_t result

if (rax_3 s< 0)
    result = 0
else
    int64_t var_68 = sx.q(rax_3)
    
    if (r14_2 != 0)
        goto label_142881b10
    
    int64_t* rax_5 = sub_142891ee0()
    rbp = rax_5
    
    if (rax_5 == 0)
        sub_142891ea0(rbp)
        result = 0
    else
        int32_t rax_6
        rax_6, arg5 = sub_142891c30(rax_5, rsi)
        
        if (rax_6 == 0)
            sub_142891ea0(rbp)
            result = 0
        else
            rsi = rbp
        label_142881b10:
            int64_t rax_13
            
            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
                rax_13 = *rdi_1
            else
                char* rdx_1 = *(arg1 + 0x16b0)
                char* rax_8 = &rdx_1[2]
                
                if (arg4 == 0)
                    rax_8 = rdx_1
                
                char* rcx_4 = &rdx_1[2]
                
                if (arg4 == 0)
                    rcx_4 = rdx_1
                
                char var_4f_1 = *rcx_4
                int32_t var_4e_1 = *(rdi_1 + 2)
                int16_t var_4a_1 = *(rdi_1 + 6)
                rax_13 = rax_8[1].q
            
            int32_t rcx_5 = *arg1
            int64_t var_60 = rax_13
            char var_58_1 = *(arg2 + 4)
            char var_57_1 = (rcx_5 s>> 8).b
            char var_56_1 = rcx_5.b
            int64_t rcx_6 = *(arg2 + 8)
            char var_54_1 = rcx_6.b
            uint8_t var_55_1 = (rcx_6 u>> 8).b
            
            if (arg4 != 0 || (**(arg1 + 0xa8) & 0x100) != 0)
            label_142881c6a:
                
                if (sub_142891c10(rsi, &var_60, 0xd) s<= 0)
                    sub_142891ea0(rbp)
                    result = 0
                else if (sub_142891c10(rsi, *(arg2 + 0x28), *(arg2 + 8)) s<= 0)
                    sub_142891ea0(rbp)
                    result = 0
                else if (sub_1428930f0(rsi, arg3, &var_68, arg5, arg6) s<= 0)
                    sub_142891ea0(rbp)
                    result = 0
                else
                label_142881c9e:
                    sub_142891ea0(rbp)
                    
                    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
                        void* rax_32 = rdi_1 + 7
                        
                        do
                            char temp1_1 = *rax_32
                            *rax_32 += 1
                            
                            if (temp1_1 != 0xff)
                                break
                            
                            rax_32 -= 1
                        while (rax_32 - rdi_1 s>= 0)
                    
                    result = 1
            else
                if ((sub_142890eb0(sub_140687ad0(*(arg1 + 0x430))) & 0xf0007) != 2)
                    goto label_142881c6a
                
                if (sub_14288f580(rsi) == 0)
                    goto label_142881c6a
                
                void* r8 = *(arg1 + 0xa8)
                
                if (sub_14288eb20(rsi, arg3, &var_68, &var_60, *(arg2 + 0x28), 
                        var_68 + *(arg2 + 8), *(arg2 + 0x10), r8 + 0x10, *(r8 + 8), arg4.b) s> 0)
                    goto label_142881c9e
                
                sub_142891ea0(rbp)
                result = 0

__security_check_cookie(rax_1 ^ &var_b8)
return result
