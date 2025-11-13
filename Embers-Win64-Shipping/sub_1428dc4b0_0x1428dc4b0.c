// 函数: sub_1428dc4b0
// 地址: 0x1428dc4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rcx = sx.q(*(arg1 + 0x28))
int64_t arg_18 = 0
int64_t arg_8 = 0
int64_t r15 = 0
int64_t rsi = 0
int64_t rbp = *(arg1 + 0x38)
int64_t r8 = rcx
int64_t r14 = *(arg1 + 0x40)

if (arg3 u> *(arg1 + 0x58))
    sub_1428a5670(0x24, 0x6c, 0x74, "crypto\rand\drbg_lib.c", 0x11c)
else if (*(arg1 + 0x138) != 0)
    int32_t rax_1 = *(arg1 + 0x90)
    
    if (rax_1 == 0)
        int64_t r9_1 = *(arg1 + 0x48)
        *(arg1 + 0x90) = 2
        
        if (r9_1 != 0 && *(arg1 + 0x150) == 0)
            rbp += r9_1
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rcx.d)
            r8 += sx.q((temp1_1 - temp0_1) s>> 1)
            r14 += *(arg1 + 0x50)
        
        int64_t rax_6 = *(arg1 + 0x140)
        int32_t var_58
        int32_t var_50
        
        if (rax_6 != 0)
            var_50 = 0
            var_58.q = r14
            rsi = rax_6(arg1, &arg_8, r8, rbp, var_58, 0)
        
        if (rsi u< rbp || rsi u> r14)
            sub_1428a5670(0x24, 0x6c, 0x6e, "crypto\rand\drbg_lib.c", 0x140)
        else
            int64_t r9_3 = *(arg1 + 0x48)
            
            if (r9_3 == 0)
            label_1428dc63d:
                var_50.q = arg2
                var_58.q = r15
                
                if ((**(arg1 + 0x138))(arg1, arg_8, rsi, arg_18, var_58, var_50, arg3) != 0)
                    *(arg1 + 0x90) = 1
                    *(arg1 + 0x68) = 0
                    __time64_t rax_16 = _time64(nullptr)
                    int32_t rcx_5 = *(arg1 + 0x80)
                    *(arg1 + 0x70) = rax_16
                    
                    if (rcx_5 != 0)
                        void* rax_17 = *(arg1 + 8)
                        
                        if (rax_17 != 0)
                            *(arg1 + 0x80) = *(rax_17 + 0x80)
                        else
                            *(arg1 + 0x80) = rcx_5 + 1
                else
                    sub_1428a5670(0x24, 0x6c, 0x6c, "crypto\rand\drbg_lib.c", 0x14f)
            else
                int64_t r10_1 = *(arg1 + 0x150)
                
                if (r10_1 == 0)
                    goto label_1428dc63d
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(*(arg1 + 0x28))
                var_58.q = *(arg1 + 0x50)
                int64_t rax_13 =
                    r10_1(arg1, &arg_18, zx.q((temp3_1 - temp2_1) s>> 1), r9_3, var_58, var_50)
                r15 = rax_13
                
                if (rax_13 u>= *(arg1 + 0x48) && rax_13 u<= *(arg1 + 0x50))
                    goto label_1428dc63d
                
                sub_1428a5670(0x24, 0x6c, 0x6f, "crypto\rand\drbg_lib.c", 0x148)
    else
        int32_t r8_1 = 0x67
        
        if (rax_1 == 2)
            r8_1 = 0x72
        
        sub_1428a5670(0x24, 0x6c, r8_1, "crypto\rand\drbg_lib.c", 0x129)
else
    sub_1428a5670(0x24, 0x6c, 0x80, "crypto\rand\drbg_lib.c", 0x122)

int64_t rdx_5 = arg_8

if (rdx_5 != 0)
    int64_t rax_20 = *(arg1 + 0x148)
    
    if (rax_20 != 0)
        rax_20(arg1, rdx_5, rsi)

int64_t rdx_6 = arg_18

if (rdx_6 != 0)
    int64_t rax_21 = *(arg1 + 0x158)
    
    if (rax_21 != 0)
        rax_21(arg1, rdx_6, r15)

int64_t* rcx_8 = *(arg1 + 0x20)

if (rcx_8 != 0)
    if (*(arg1 + 0x90) == 1)
        sub_1428a5670(0x24, 0x6c, 0x7f, "crypto\rand\drbg_lib.c", 0x165)
        rcx_8 = *(arg1 + 0x20)
        *(arg1 + 0x90) = 2
    
    sub_1428985b0(rcx_8)
    *(arg1 + 0x20) = 0

int32_t rdi
rdi.b = *(arg1 + 0x90) == 1
return zx.q(rdi)
