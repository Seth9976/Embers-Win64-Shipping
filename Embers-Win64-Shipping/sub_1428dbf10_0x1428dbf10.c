// 函数: sub_1428dbf10
// 地址: 0x1428dbf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
int32_t r14 = 0
int64_t rbp = arg3
int64_t r13 = arg2
int64_t arg_8 = 0
int64_t* rax = sub_142897f40(&arg_8, *(arg1 + 0x60))
bool cond:1 = rbp == 0

while (true)
    if (cond:1)
        r14 = 1
        break
    
    int64_t rsi_1 = *(arg1 + 0x30)
    int32_t rdi_1 = 0
    int64_t r15_1 = arg_8
    int64_t* arg_18 = rax
    
    if (rbp u<= rsi_1)
        rsi_1 = rbp
    
    int32_t rax_10
    int32_t r8_2
    
    if (*(arg1 + 0x90) == 1)
    label_1428dbfbe:
        
        if (rsi_1 u> *(arg1 + 0x30))
            rax_10 = 0x24d
            r8_2 = 0x75
        else if (rax u> *(arg1 + 0x60))
            rax_10 = 0x251
            r8_2 = 0x66
        else
            int32_t rax_2 = data_144020d50
            
            if (*(arg1 + 0x18) != rax_2)
                *(arg1 + 0x18) = rax_2
                rdi_1 = 1
            
            int32_t rax_3 = *(arg1 + 0x6c)
            
            if (rax_3 != 0 && *(arg1 + 0x68) u>= rax_3)
                rdi_1 = 1
            
            if (*(arg1 + 0x78) s> 0)
                __time64_t rax_4 = _time64(nullptr)
                int64_t rcx_2 = *(arg1 + 0x70)
                
                if (rax_4 s< rcx_2 || rax_4 - rcx_2 s>= *(arg1 + 0x78))
                    rdi_1 = 1
            
            int32_t rax_6 = *(arg1 + 0x80)
            void* rcx_3
            
            if (rax_6 != 0)
                rcx_3 = *(arg1 + 8)
            
            if (rax_6 != 0 && rcx_3 != 0)
                if (rax_6 != *(rcx_3 + 0x80) || rdi_1 != 0)
                    goto label_1428dc03f
                
                goto label_1428dc068
            
            if (rdi_1 == 0)
                goto label_1428dc068
            
        label_1428dc03f:
            
            if (sub_1428dc780(arg1, r15_1, rax, 0) == 0)
                rax_10 = 0x26b
                r8_2 = 0x76
            else
                r15_1 = 0
                arg_18 = nullptr
            label_1428dc068:
                int32_t var_48
                var_48.q = arg_18
                
                if ((*(*(arg1 + 0x138) + 0x10))(arg1, r13, rsi_1, r15_1, var_48) == 0)
                    *(arg1 + 0x90) = 2
                    rax_10 = 0x274
                    r8_2 = 0x70
                else
                    *(arg1 + 0x68) += 1
                    r13 += rsi_1
                    int64_t temp0_1 = rbp
                    rbp -= rsi_1
                    cond:1 = temp0_1 == rsi_1
                    continue
    else
        sub_1428dce30(arg1, 0, 0, 0)
        int32_t rax_1 = *(arg1 + 0x90)
        
        if (rax_1 == 2)
            rax_10 = 0x243
            r8_2 = 0x72
        else
            if (rax_1 != 0)
                goto label_1428dbfbe
            
            rax_10 = 0x247
            r8_2 = 0x73
    
    sub_1428a5670(0x24, 0x6b, r8_2, "crypto\rand\drbg_lib.c", rax_10)
    break

if (rax != 0)
    sub_1428a7140(arg_8, rax, "crypto\rand\drbg_lib.c", 0x29a)

return zx.q(r14)
