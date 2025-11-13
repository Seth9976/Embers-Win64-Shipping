// 函数: sub_14040a160
// 地址: 0x14040a160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t rcx = sx.q(arg5)
int64_t r15 = rcx << 2
int64_t r14 = sx.q(arg4)
int64_t rax_2 = r15 + 0xf

if (rax_2 u<= r15)
    rax_2 = 0xffffffffffffff0

int64_t rax_3 = rax_2 & 0xfffffffffffffff0
__chkstk(rax_3)
void var_98
void* rsp = &var_98 - rax_3
int64_t rcx_2 = sx.q((rcx + r14).d) << 2
var_78 = rsp + 0x20
int64_t rax_5 = rcx_2 + 0xf

if (rax_5 u<= rcx_2)
    rax_5 = 0xffffffffffffff0

int64_t rax_6 = rax_5 & 0xfffffffffffffff0
__chkstk(rax_6)
int64_t rcx_3 = 0
void* r11 = rsp + 0x20

if (rcx s>= 4)
    void* rdx = rsp + 0x28
    void* r8_1 = arg2 + ((rcx - 2) << 2)
    int64_t i_9 = ((rcx - 4) u>> 2) + 1
    rcx_3 = i_9 << 2
    int64_t i
    
    do
        int32_t rax_7 = *(r8_1 + 4)
        rdx += 0x10
        r8_1 -= 0x10
        *(rdx - 0x18) = rax_7
        *(rdx - 0x14) = *(r8_1 + 0x10)
        *(rdx - 0x10) = *(r8_1 + 0xc)
        *(rdx - 0xc) = *(r8_1 + 8)
        i = i_9
        i_9 -= 1
    while (i != 1)

if (rcx_3 s< rcx)
    int32_t* rdx_4 = arg2 + ((rcx - rcx_3 - 1) << 2)
    
    do
        int32_t rax_11 = *rdx_4
        rcx_3 += 1
        rdx_4 = &rdx_4[-1]
        *(r11 + (rcx_3 << 2) - 4) = rax_11
    while (rcx_3 s< rcx)

int64_t rcx_4 = 0

if (rcx s>= 4)
    void* rdx_5 = rsp - rax_6 + 0x28
    void* r8_3 = arg6 - 8 + (rcx << 2)
    int64_t i_10 = ((rcx - 4) u>> 2) + 1
    rcx_4 = i_10 << 2
    int64_t i_1
    
    do
        int32_t rax_12 = *(r8_3 + 4)
        rdx_5 += 0x10
        r8_3 -= 0x10
        *(rdx_5 - 0x18) = rax_12
        *(rdx_5 - 0x14) = *(r8_3 + 0x10)
        *(rdx_5 - 0x10) = *(r8_3 + 0xc)
        *(rdx_5 - 0xc) = *(r8_3 + 8)
        i_1 = i_10
        i_10 -= 1
    while (i_1 != 1)

if (rcx_4 s< rcx)
    int32_t* rdx_9 = arg6 + ((rcx - rcx_4 - 1) << 2)
    
    do
        int32_t rax_16 = *rdx_9
        rcx_4 += 1
        rdx_9 = &rdx_9[-1]
        *(rsp - rax_6 + 0x20 + (rcx_4 << 2) - 4) = rax_16
    while (rcx_4 s< rcx)

int64_t r9_4 = 0

if (r14 s>= 4)
    void* r8_6 = r15 - arg1 + rsp - rax_6 + 0x20
    int64_t i_7 = ((r14 - 4) u>> 2) + 1
    r9_4 = i_7 << 2
    void* rcx_5 = arg1 + 4
    int64_t i_2
    
    do
        int32_t rax_17 = *(rcx_5 - 4)
        rcx_5 += 0x10
        *(r8_6 + rcx_5 - 0x14) = rax_17
        *(r8_6 + rcx_5 - 0x10) = *(rcx_5 - 0x10)
        *(r8_6 + rcx_5 - 0xc) = *(rcx_5 - 0xc)
        *((rcx << 2) + 8 - arg1 + rsp - rax_6 + 0x20 + rcx_5 - 0x10) = *(rcx_5 - 8)
        i_2 = i_7
        i_7 -= 1
    while (i_2 != 1)

if (r9_4 s< r14)
    void* rcx_6 = arg1 + (r9_4 << 2)
    int64_t i_8 = r14 - r9_4
    int64_t i_3
    
    do
        int32_t rax_21 = *rcx_6
        rcx_6 += 4
        *(rcx_6 + r15 - arg1 + rsp - rax_6 + 0x20 - 4) = rax_21
        i_3 = i_8
        i_8 -= 1
    while (i_3 != 1)

int64_t rcx_7 = 0

if (rcx s>= 4)
    void* rdx_13 = arg6 + 8
    void* r8_9 = arg1 + ((r14 - 2) << 2)
    int64_t i_11 = ((rcx - 4) u>> 2) + 1
    rcx_7 = i_11 << 2
    int64_t i_4
    
    do
        int32_t rax_22 = *(r8_9 + 4)
        rdx_13 += 0x10
        r8_9 -= 0x10
        *(rdx_13 - 0x18) = rax_22
        *(rdx_13 - 0x14) = *(r8_9 + 0x10)
        *(rdx_13 - 0x10) = *(r8_9 + 0xc)
        *(rdx_13 - 0xc) = *(r8_9 + 8)
        i_4 = i_11
        i_11 -= 1
    while (i_4 != 1)

if (rcx_7 s< rcx)
    void* rdx_17 = arg1 + ((r14 - rcx_7 - 1) << 2)
    
    do
        int32_t rax_26 = *rdx_17
        rcx_7 += 1
        rdx_17 -= 4
        *(arg6 + (rcx_7 << 2) - 4) = rax_26
    while (rcx_7 s< rcx)

uint32_t r13_1 = 0
uint64_t result = zx.q(r14.d - 3)
float zmm0
float zmm1

if (result.d s> 0)
    void* rdx_18 = rsp - rax_6 + 0x20
    void* rsi_2 = arg1 - arg3
    void* rdi_2 = arg3 + 4
    uint64_t rax_30 = zx.q(((result.d - 1) u>> 2) + 1)
    uint64_t i_13 = zx.q(rax_30.d)
    r13_1 = (rax_30 << 2).d
    uint64_t i_5
    
    do
        int64_t var_58 = 0
        int64_t var_50_1 = 0
        result = sub_14040ab20(r11, rdx_18, &var_58, rcx.d)
        r11 = var_78
        zmm1 = var_58:4.d
        zmm0 = var_58.d f+ *(rsi_2 + rdi_2 - 4)
        rdi_2 += 0x10
        rdx_18 += 0x10
        *(rdi_2 - 0x14) = zmm0
        *(rdi_2 - 0x10) = zmm1 f+ *(rsi_2 + rdi_2 - 0x10)
        *(rdi_2 - 0xc) = var_50_1.d f+ *(rsi_2 + rdi_2 - 0xc)
        *(rdi_2 - 8) = var_50_1:4.d f+ *(rsi_2 + rdi_2 - 8)
        i_5 = i_13
        i_13 -= 1
    while (i_5 != 1)

int64_t rcx_9 = sx.q(r13_1)

if (rcx_9 s< r14)
    void* r13_2 = var_78
    result = rcx_9 << 2
    int64_t r11_3 = r13_2 - result - (rsp - rax_6 + 0x20)
    int64_t r9_11 = ((3 - rcx_9) << 2) - (rsp - rax_6 + 0x20) + r13_2
    int64_t i_12 = r14 - rcx_9
    void* result_1 = result + rsp - rax_6 + 0x20
    int64_t i_6
    
    do
        int64_t r10_4 = 0
        float zmm2 = (zx.o(0)).d
        
        if (rcx s>= 4)
            result = result_1
            int64_t j_2 = ((rcx - 4) u>> 2) + 1
            r10_4 = j_2 << 2
            int64_t j
            
            do
                zmm1 = *(r11_3 + result + 4)
                zmm0 = *(r11_3 + result)
                result += 0x10
                zmm2 = zmm1 f* *(result - 0xc) + zmm0 f* *(result - 0x10) + zmm2
                    + *(r9_11 + result - 0x14) f* *(result - 8)
                    + *(r9_11 + result - 0x10) f* *(result - 4)
                j = j_2
                j_2 -= 1
            while (j != 1)
        
        if (r10_4 s< rcx)
            void* rcx_13 = (r10_4 << 2) + r13_2
            int64_t j_3 = rcx - r10_4
            int64_t j_1
            
            do
                result = neg.q(r13_2) + result_1
                rcx_13 += 4
                zmm2 = *(result + rcx_13 - 4) f* *(rcx_13 - 4) + zmm2
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        
        zmm2 = zmm2 f+ *(arg1 - (rsp - rax_6 + 0x20) + result_1)
        result_1 += 4
        r9_11 -= 4
        r11_3 -= 4
        *(result_1 + arg3 - (rsp - rax_6 + 0x20) - 4) = zmm2
        i_6 = i_12
        i_12 -= 1
    while (i_6 != 1)

__security_check_cookie(rax_1 ^ &var_78)
return result
