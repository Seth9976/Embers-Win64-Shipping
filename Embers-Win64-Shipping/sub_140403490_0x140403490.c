// 函数: sub_140403490
// 地址: 0x140403490
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
int32_t var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
uint64_t rbx = zx.q(arg14)
int64_t r13 = sx.q(arg2)
int64_t r12 = sx.q(arg3)
int32_t rdx = 0
int64_t rsi = arg4

if (arg9 s> 0)
    rdx = arg9

int32_t rax_3 = 0
int32_t var_b4 = r12.d
var_b8 = r13.d

if (rdx s>= 8)
    rax_3 = 8

void* r8 = arg1
int32_t rdx_1 = rdx - rax_3
int32_t var_a0 = r13.d
int32_t var_88 = 0
uint32_t var_ac = 0
int32_t var_b0 = rdx_1

if (rbx.d == 2)
    uint32_t r9 = zx.d(*(r12 - r13 + &data_143700570))
    var_ac = r9
    
    if (r9 s<= rdx_1)
        int32_t rdx_2 = rdx_1 - r9
        int32_t r9_1 = 0
        
        if (rdx_2 s>= 8)
            r9_1 = 8
        
        var_88 = r9_1
        var_b0 = rdx_2 - r9_1
    else
        var_ac = 0

int64_t rax_4 = sx.q(*(r8 + 8))
int64_t rcx_2 = rax_4 << 2
int64_t rax_5 = rcx_2 + 0xf

if (rax_5 u<= rcx_2)
    rax_5 = 0xffffffffffffff0

int64_t rax_6 = rax_5 & 0xfffffffffffffff0
__chkstk(rax_6)
void var_178
void* rsp_1 = &var_178 - rax_6
int64_t rax_8 = rcx_2 + 0xf

if (rax_8 u<= rcx_2)
    rax_8 = 0xffffffffffffff0

int64_t rax_9 = rax_8 & 0xfffffffffffffff0
__chkstk(rax_9)
void* rsp_2 = rsp_1 - rax_9
int64_t rax_11 = rcx_2 + 0xf

if (rax_11 u<= rcx_2)
    rax_11 = 0xffffffffffffff0

int64_t rax_12 = rax_11 & 0xfffffffffffffff0
__chkstk(rax_12)
void* rsp_3 = rsp_2 - rax_12
int64_t rax_14 = rcx_2 + 0xf

if (rax_14 u<= rcx_2)
    rax_14 = 0xffffffffffffff0

int64_t rax_15 = rax_14 & 0xfffffffffffffff0
__chkstk(rax_15)
int32_t rdx_4 = arg15
void* rsp_4 = rsp_3 - rax_15
int64_t var_80 = r13

if (r13.d s< r12.d)
    int32_t i_4 = r12.d - var_b8
    int64_t rdi = r13 * 2
    void* r9_3 = rsp_4 + 0xc0 + (r13 << 2)
    uint32_t r14 = (rbx << 3).d
    uint64_t i_3 = zx.q(i_4)
    int32_t r10_1 = i_4 - 1
    uint64_t i
    
    do
        void* rcx_4 = *(r8 + 0x20)
        int32_t rax_21 =
            ((sx.d(*(rcx_4 + rdi + 2)) - sx.d(*(rcx_4 + rdi))) * 3) << arg15.b << 3 s>> 4
        
        if (r14 s> rax_21)
            rax_21 = r14
        
        *(rsp_3 + 0xc0 - (rsp_4 + 0xc0) + r9_3) = rax_21
        void* rax_22 = *(r8 + 0x20)
        int32_t r8_7 = ((sx.d(*(rax_22 + rdi + 2)) - sx.d(*(rax_22 + rdi)))
            * rol.d(rol.d(1, rdx_4.b), 3) * (arg6 - rdx_4 - 5) * r10_1 * rbx.d) s>> 6
        *r9_3 = r8_7
        void* rax_24 = *(arg1 + 0x20)
        
        if ((sx.d(*(rax_24 + rdi + 2)) - sx.d(*(rax_24 + rdi))) << arg15.b == 1)
            *r9_3 = r8_7 - r14
        
        r8 = arg1
        r10_1 -= 1
        rdi += 2
        r9_3 += 4
        i = i_3
        i_3 -= 1
    while (i != 1)
    r12 = zx.q(var_b4)
    r13 = zx.q(var_b8)
    rdx_4 = arg15

int32_t r8_9 = var_b0
int32_t rax_25 = 1
int64_t r11_1 = sx.q(r12.d)
int32_t rcx_10 = *(r8 + 0x34) - 1
int32_t var_8c = 1
int32_t var_90 = rcx_10
int64_t var_40 = r11_1

do
    int32_t rdi_1 = 0
    int32_t r9_4 = 0
    int32_t r14_2 = (rcx_10 + rax_25) s>> 1
    
    if (r12.d s> r13.d)
        int64_t r8_10 = rsi + (r11_1 << 2)
        void* r13_5 = rsp_4 + 0xc0 - rsi
        uint64_t i_2 = zx.q(var_b4 - var_b8)
        void* r10_5 = sx.q(r14_2) * rax_4 + *(arg1 + 0x38) + r11_1
        void* r11_2 = *(arg1 + 0x20) + (r11_1 << 1)
        uint64_t i_1
        
        do
            int32_t rcx_11 = sx.d(*(r11_2 - 2))
            int32_t rax_28 = sx.d(*r11_2)
            r11_2 -= 2
            uint32_t rcx_12 = zx.d(*(r10_5 - 1))
            r10_5 -= 1
            r8_10 -= 4
            int32_t rax_33 = ((rax_28 - rcx_11) * rcx_12 * rbx.d) << rdx_4.b s>> 2
            
            if (rax_33 s> 0)
                int32_t temp1_1 = rax_33
                rax_33 += *(r13_5 + r8_10)
                rdx_4 = arg15
                
                if (temp1_1 + *(r13_5 + r8_10) s< 0)
                    rax_33 = 0
            
            int32_t rax_34 = rax_33 + *r8_10
            
            if (rax_34 s>= *(rsp_3 + 0xc0 - rsi + r8_10) || rdi_1 != 0)
                int32_t rcx_15 = *(arg5 - rsi + r8_10)
                rdi_1 = 1
                
                if (rax_34 s< rcx_15)
                    rcx_15 = rax_34
                
                r9_4 += rcx_15
            else if (rax_34 s>= (rbx << 3).d)
                r9_4 += (rbx << 3).d
            
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        rax_25 = var_8c
        rcx_10 = var_90
        r8_9 = var_b0
        r12 = zx.q(var_b4)
        r13 = zx.q(var_b8)
        r11_1 = var_40
    
    if (r9_4 s<= r8_9)
        rax_25 = r14_2 + 1
        var_8c = rax_25
    else
        rcx_10 = r14_2 - 1
        var_90 = rcx_10
    
    rsi = arg4
while (rax_25 s<= rcx_10)

int32_t rcx_16 = var_b8
int64_t r13_6 = sx.q(rax_25)
int32_t r11_3 = rcx_16
int64_t rsi_2 = sx.q(rax_25 - 1)

if (rcx_16 s< r12.d)
    int64_t r8_11 = var_80
    void* var_98_1 = arg4 - (rsp_4 + 0xc0)
    void* r9_5 = rsp_4 + 0xc0 + (r8_11 << 2)
    
    do
        int64_t rax_37 = *(arg1 + 0x20)
        void* rdx_10 = *(arg1 + 0x38)
        char rcx_18 = arg15.b
        int32_t r10_7 = sx.d(*(rax_37 + (r8_11 << 1) + 2)) - sx.d(*(rax_37 + (r8_11 << 1)))
        int32_t r8_16 = (zx.d(*(rdx_10 + r8_11 + rsi_2 * rax_4)) * r10_7 * rbx.d) << rcx_18 s>> 2
        int32_t rdx_11
        
        if (r13_6.d s< *(arg1 + 0x34))
            rdx_11 = (zx.d(*(r13_6 * rax_4 + rdx_10 + var_80)) * r10_7 * rbx.d) << rcx_18 s>> 2
        else
            rdx_11 = *(arg5 - (rsp_4 + 0xc0) + r9_5)
        
        if (r8_16 s> 0)
            int32_t temp4_1 = r8_16
            r8_16 += *r9_5
            
            if (temp4_1 + *r9_5 s< 0)
                r8_16 = 0
        
        if (rdx_11 s> 0)
            int32_t temp6_1 = rdx_11
            rdx_11 += *r9_5
            
            if (temp6_1 + *r9_5 s< 0)
                rdx_11 = 0
        
        if (rsi_2 s> 0)
            r8_16 += *(var_98_1 + r9_5)
        
        int32_t rax_45 = *(var_98_1 + r9_5)
        int32_t rcx_19 = var_a0
        *(rsp_1 + 0xc0 - (rsp_4 + 0xc0) + r9_5) = r8_16
        int32_t rdx_17 = rdx_11 + rax_45
        
        if (rax_45 s> 0)
            rcx_19 = r11_3
        
        int32_t rdx_18 = rdx_17 - r8_16
        
        if (rdx_17 - r8_16 s< 0)
            rdx_18 = 0
        
        r8_11 = var_80 + 1
        r11_3 += 1
        *(rsp_2 + 0xc0 - (rsp_4 + 0xc0) + r9_5) = rdx_18
        r9_5 += 4
        var_80 = r8_11
        var_a0 = rcx_19
    while (r11_3 s< var_b4)
    
    r12 = zx.q(var_b4)
    rcx_16 = var_b8

*(rsp_4 + 0xb8) = arg19
*(rsp_4 + 0xb0) = arg18
*(rsp_4 + 0xa8) = arg17
*(rsp_4 + 0xa0) = arg16
*(rsp_4 + 0x98) = arg15
*(rsp_4 + 0x90) = rbx.d
*(rsp_4 + 0x88) = arg13
*(rsp_4 + 0x80) = arg12
*(rsp_4 + 0x78) = arg11
*(rsp_4 + 0x70) = var_88
*(rsp_4 + 0x68) = arg8
*(rsp_4 + 0x60) = var_ac
*(rsp_4 + 0x58) = arg7
*(rsp_4 + 0x50) = rax_3
*(rsp_4 + 0x48) = arg10
*(rsp_4 + 0x40) = var_b0
*(rsp_4 + 0x38) = arg5
*(rsp_4 + 0x30) = rsp_3 + 0xc0
*(rsp_4 + 0x28) = rsp_2 + 0xc0
*(rsp_4 + 0x20) = rsp_1 + 0xc0
int64_t result = sub_140403a80(arg1, zx.q(rcx_16), zx.q(r12.d), zx.q(var_a0))
__security_check_cookie(rax_1 ^ &var_b8)
return result
