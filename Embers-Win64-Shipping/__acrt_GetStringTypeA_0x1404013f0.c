// 函数: __acrt_GetStringTypeA
// 地址: 0x1404013f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t r12 = sx.q(arg4)
int32_t rdi = 0
int32_t r15_1 = arg3 s>> 2
var_58 = 0
int64_t rax_3 = sx.q(r15_1) << 2
int32_t rbx = arg3 + r12.d
int64_t r9 = rax_3 + 0xf

if (r9 u<= rax_3)
    r9 = 0xffffffffffffff0

int64_t r9_1 = r9 & 0xfffffffffffffff0
__chkstk(r9_1)
void var_88
void* rsp_1 = &var_88 - r9_1
int64_t rcx_1 = sx.q(rbx s>> 2) << 2
int64_t rax_7 = rcx_1 + 0xf

if (rax_7 u<= rcx_1)
    rax_7 = 0xffffffffffffff0

int64_t rax_8 = rax_7 & 0xfffffffffffffff0
__chkstk(rax_8)
void* rsp_2 = rsp_1 - rax_8
int32_t rax_10 = r12.d s>> 1
int64_t rax_12 = sx.q(rax_10) << 2
int64_t rcx_2 = rax_12 + 0xf

if (rcx_2 u<= rax_12)
    rcx_2 = 0xffffffffffffff0

int64_t rcx_3 = rcx_2 & 0xfffffffffffffff0
__chkstk(rcx_3)
void* rsp_3 = rsp_2 - rcx_3
int64_t rcx_4 = 0
int64_t rax_15 = sx.q(arg3)
int64_t r10_1 = rax_15 s>> 2

if (r10_1 s>= 4)
    void* rdx = rsp_1 + 0x38
    void* r8 = arg1 + 0x10
    int64_t i_3 = ((r10_1 - 4) u>> 2) + 1
    rcx_4 = i_3 << 2
    int64_t i
    
    do
        int32_t rax_16 = *(r8 - 0x10)
        rdx += 0x10
        r8 += 0x20
        *(rdx - 0x18) = rax_16
        *(rdx - 0x14) = *(r8 - 0x28)
        *(rdx - 0x10) = *(r8 - 0x20)
        *(rdx - 0xc) = *(r8 - 0x18)
        i = i_3
        i_3 -= 1
    while (i != 1)

while (rcx_4 s< r10_1)
    int32_t rax_20 = *(arg1 + (rcx_4 << 3))
    rcx_4 += 1
    *(rsp_1 + 0x30 + (rcx_4 << 2) - 4) = rax_20

int64_t rcx_5 = 0
int64_t r10_3 = sx.q(rbx) s>> 2

if (r10_3 s>= 4)
    void* rdx_1 = rsp_2 + 0x38
    void* r8_1 = arg2 + 0x10
    int64_t i_4 = ((r10_3 - 4) u>> 2) + 1
    rcx_5 = i_4 << 2
    int64_t i_1
    
    do
        int32_t rax_21 = *(r8_1 - 0x10)
        rdx_1 += 0x10
        r8_1 += 0x20
        *(rdx_1 - 0x18) = rax_21
        *(rdx_1 - 0x14) = *(r8_1 - 0x28)
        *(rdx_1 - 0x10) = *(r8_1 - 0x20)
        *(rdx_1 - 0xc) = *(r8_1 - 0x18)
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

while (rcx_5 s< r10_3)
    int32_t rax_25 = *(arg2 + (rcx_5 << 3))
    rcx_5 += 1
    *(rsp_2 + 0x30 + (rcx_5 << 2) - 4) = rax_25

int32_t rbx_2 = r12.d s>> 2
*(rsp_3 + 0x20) = rbx_2
sub_140400670(rsp_1 + 0x30, rsp_2 + 0x30, rsp_3 + 0x30, zx.q(r15_1))
void* rbx_3 = rsp_3 + 0x30
*(rsp_3 + 0x20) = &var_58
sub_140400b50(rbx_3, rsp_2 + 0x30, zx.q(r15_1), zx.q(rbx_2))
int32_t r14_1 = 0
int64_t i_5 = r12 s>> 1

if (i_5 s> 0)
    float* r8_4 = rbx_3
    void* r10_5 = arg1 - arg2
    void* r11_2 = arg2 - r8_4
    int32_t rax_27 = neg.d(var_58.d)
    void* rbx_4 = r10_5 + 0xc
    int64_t i_2
    
    do
        float zmm2_1 = (zx.o(0)).d
        *r8_4 = 0f
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_27 * 2 + r14_1)
        int32_t temp4_1
        int32_t temp5_1
        
        if ((temp3_1 ^ temp2_1) - temp2_1 s> 2)
            temp4_1:temp5_1 = sx.q(r14_1 - var_58:4.d * 2)
        
        if ((temp3_1 ^ temp2_1) - temp2_1 s<= 2 || (temp5_1 ^ temp4_1) - temp4_1 s<= 2)
            int64_t r9_8 = 0
            int64_t rdx_7 = rax_15 s>> 1
            
            if (rdx_7 s>= 4)
                float* rax_38 = r11_2 + r8_4
                int64_t j_2 = ((rdx_7 - 4) u>> 2) + 1
                r9_8 = j_2 << 2
                int64_t j
                
                do
                    float zmm1_1 = *(rax_38 + r10_5 + 4)
                    float zmm0_1 = *(rax_38 + r10_5)
                    rax_38 = &rax_38[4]
                    zmm2_1 = zmm1_1 * rax_38[-3] + zmm0_1 * rax_38[-4] + zmm2_1
                        + *(rax_38 + rbx_4 - 0x14) * rax_38[-2]
                        + *(rax_38 + rbx_4 - 0x10) * rax_38[-1]
                    j = j_2
                    j_2 -= 1
                while (j != 1)
            
            if (r9_8 s< rdx_7)
                void* rcx_12 = (r9_8 << 2) + arg1
                int64_t j_3 = rdx_7 - r9_8
                int64_t j_1
                
                do
                    rcx_12 += 4
                    zmm2_1 = zmm2_1 + *(r11_2 + neg.q(arg1) + r8_4 + rcx_12 - 4) f* *(rcx_12 - 4)
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
            
            if (not(-1f <= zmm2_1))
                zmm2_1 = -1f
            
            *r8_4 = zmm2_1
        
        r14_1 += 1
        rbx_4 -= 4
        r10_5 -= 4
        r8_4 = &r8_4[1]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    rbx_3 = rsp_3 + 0x30

*(rsp_3 + 0x20) = &var_58
sub_140400b50(rbx_3, arg2, zx.q(arg3 s>> 1), zx.q(rax_10))
int64_t rcx_14 = sx.q(var_58.d)

if (rcx_14.d s> 0 && rcx_14.d s< rax_10 - 1)
    float zmm3_1 = *(rbx_3 + (rcx_14 << 2) - 4)
    float zmm2_2 = *(rbx_3 + (rcx_14 << 2))
    float zmm4_1 = *(rbx_3 + (rcx_14 << 2) + 4)
    
    if (zmm4_1 - zmm3_1 <= (zmm2_2 - zmm3_1) * 0.699999988f)
        rdi.b = zmm3_1 - zmm4_1 <= (zmm2_2 - zmm4_1) * 0.699999988f
        rdi -= 1
    else
        rdi = 1

*arg5 = rcx_14.d * 2 - rdi
__security_check_cookie(rax_1 ^ &var_58)
return arg5
