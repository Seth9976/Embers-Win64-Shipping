// 函数: sub_142b935d0
// 地址: 0x142b935d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38
int64_t var_28 = __security_cookie ^ &var_38

if (arg1 == 0)
    int64_t rax_1
    rax_1.b = 0
    __security_check_cookie(var_28 ^ &var_38)
    return rax_1

int64_t rbx = sx.q(*arg1)
int32_t rax_2 = rbx.d

if (rbx.d s< 0)
    rax_2 = neg.d(rax_2)

int64_t rbp = sx.q(arg1[1])
var_38 = rax_2
int32_t rax_3 = rbp.d

if (rbp.d s< 0)
    rax_3 = neg.d(rax_3)

int64_t r15 = sx.q(arg1[2])
int32_t var_34 = rax_3
int32_t rax_4 = r15.d

if (r15.d s< 0)
    rax_4 = neg.d(rax_4)

int64_t r12 = sx.q(arg1[3])
int32_t var_30 = rax_4
int32_t rax_5 = r12.d

if (r12.d s< 0)
    rax_5 = neg.d(rax_5)

int32_t rcx_2 = 0
int32_t var_2c = rax_5
int32_t r11 = 0x7fffffff
int32_t* rdx = &var_38
int32_t r8 = 0x7fffffff
int64_t i_1 = 4
int32_t rax_6
int64_t i

do
    rax_6 = *rdx
    
    if (rax_6 s> rcx_2)
        rcx_2 = rax_6
    
    if (rax_6 != 0 && rax_6 s< r8)
        r8 = rax_6
    
    rdx = &rdx[1]
    i = i_1
    i_1 -= 1
while (i != 1)

if (rcx_2 s> 0x7fffffff)
    rax_6.b = 0
else
    int32_t r8_3
    int32_t r9_3
    
    if (rcx_2 s<= 0x5a82)
        var_38.o = *arg1
        r8_3 = var_30
        r9_3 = var_38
    label_142b9385b:
        uint32_t r11_2 = (var_38.q u>> 0x20).d
        uint32_t r10_2 = (var_30.q u>> 0x20).d
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r10_2 * r9_3 - r11_2 * r8_3)
        int32_t rcx_15 = temp5_1 ^ temp4_1
        
        if (rcx_15 == temp4_1)
            rax_6.b = 0
        else if (divs.dp.d(sx.q(r11_2 * r11_2 + r10_2 * r10_2 + r8_3 * r8_3 + r9_3 * r9_3), 
                rcx_15 - temp4_1) s> 0x32)
            rax_6.b = 0
        else
            rax_6.b = 1
    else
        int32_t rdi_1 = 1
        int32_t rsi_1 = 1
        int64_t r9_1 = sx.q(r8)
        uint32_t r14_2 = (((sx.q(rcx_2) << 0x10) + 0x2d41) u/ 0x5a82).d
        int64_t r10 = sx.q(r14_2)
        int64_t rcx_6 = r10
        
        if (r8 s< 0)
            r9_1 = neg.q(r9_1)
            rsi_1 = -1
        
        if (r14_2 s< 0)
            rcx_6 = neg.q(rcx_6)
            rsi_1 = neg.d(rsi_1)
        
        if (rcx_6 == 0)
            rax_6 = 0x7fffffff
        else
            rax_6 = divu.dp.q(0:((rcx_6 u>> 1) + (r9_1 << 0x10)), rcx_6)
        
        if (rsi_1 s< 0)
            rax_6 = neg.d(rax_6)
        
        if (rax_6 != 0)
            int32_t r8_1 = 1
            int64_t rdx_4 = rbx
            int64_t rcx_7 = r10
            
            if (rbx.d s< 0)
                rdx_4 = neg.q(rdx_4)
                r8_1 = -1
            
            if (r14_2 s< 0)
                rcx_7 = neg.q(rcx_7)
                r8_1 = neg.d(r8_1)
            
            if (rcx_7 == 0)
                r9_3 = 0x7fffffff
            else
                r9_3 = divu.dp.q(0:((rcx_7 u>> 1) + (rdx_4 << 0x10)), rcx_7)
            
            if (r8_1 s< 0)
                r9_3 = neg.d(r9_3)
            
            var_38 = r9_3
            int32_t r8_2 = 1
            int64_t rdx_8 = rbp
            int64_t rcx_8 = r10
            
            if (rbp.d s< 0)
                rdx_8 = neg.q(rdx_8)
                r8_2 = -1
            
            if (r14_2 s< 0)
                rcx_8 = neg.q(rcx_8)
                r8_2 = neg.d(r8_2)
            
            int32_t rax_18
            
            if (rcx_8 == 0)
                rax_18 = 0x7fffffff
            else
                rax_18 = divu.dp.q(0:((rcx_8 u>> 1) + (rdx_8 << 0x10)), rcx_8)
            
            if (r8_2 s< 0)
                rax_18 = neg.d(rax_18)
            
            int32_t var_34_1 = rax_18
            int32_t rbx_1 = 1
            int64_t rdx_12 = r15
            int64_t rcx_9 = r10
            
            if (r15.d s< 0)
                rdx_12 = neg.q(rdx_12)
                rbx_1 = -1
            
            if (r14_2 s< 0)
                rcx_9 = neg.q(rcx_9)
                rbx_1 = neg.d(rbx_1)
            
            if (rcx_9 == 0)
                r8_3 = 0x7fffffff
            else
                r8_3 = divu.dp.q(0:((rcx_9 u>> 1) + (rdx_12 << 0x10)), rcx_9)
            
            if (rbx_1 s< 0)
                r8_3 = neg.d(r8_3)
            
            var_30 = r8_3
            int64_t rcx_10 = r12
            
            if (r12.d s< 0)
                rcx_10 = neg.q(rcx_10)
                rdi_1 = -1
            
            if (r14_2 s< 0)
                r10 = neg.q(r10)
                rdi_1 = neg.d(rdi_1)
            
            if (r10 != 0)
                r11 = divu.dp.q(0:((r10 u>> 1) + (rcx_10 << 0x10)), r10)
            
            if (rdi_1 s< 0)
                r11 = neg.d(r11)
            
            int32_t var_2c_1 = r11
            goto label_142b9385b
        
        rax_6.b = 0

__security_check_cookie(var_28 ^ &var_38)
return rax_6
