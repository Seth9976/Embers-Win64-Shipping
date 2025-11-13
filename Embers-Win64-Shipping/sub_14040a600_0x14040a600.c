// 函数: sub_14040a600
// 地址: 0x14040a600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t rcx = sx.q(arg5)
int64_t rax_2 = rcx << 2
void* rdx = arg6
int64_t rdi = rax_2 + 0xf
var_98 = arg4
void* var_88 = rdx

if (rdi u<= rax_2)
    rdi = 0xffffffffffffff0

int64_t rdi_1 = rdi & 0xfffffffffffffff0
__chkstk(rdi_1)
void var_b8
void* rsp = &var_b8 - rdi_1
int64_t r9 = sx.q(rcx.d + arg4)
int64_t rax_5 = r9 << 2
int64_t rcx_1 = rax_5 + 0xf

if (rcx_1 u<= rax_5)
    rcx_1 = 0xffffffffffffff0

int64_t rcx_2 = rcx_1 & 0xfffffffffffffff0
__chkstk(rcx_2)
int64_t rsi = 0
int64_t rdi_2 = 0

if (rcx s>= 4)
    void* rcx_3 = rsp + 0x28
    void* rdx_2 = (rcx << 2) + -fffffffffffffff8 + arg2
    int64_t i_6 = ((rcx - 4) u>> 2) + 1
    rdi_2 = i_6 << 2
    int64_t i
    
    do
        int32_t rax_7 = *(rdx_2 + 4)
        rcx_3 += 0x10
        rdx_2 -= 0x10
        *(rcx_3 - 0x18) = rax_7
        *(rcx_3 - 0x14) = *(rdx_2 + 0x10)
        *(rcx_3 - 0x10) = *(rdx_2 + 0xc)
        *(rcx_3 - 0xc) = *(rdx_2 + 8)
        i = i_6
        i_6 -= 1
    while (i != 1)
    rdx = var_88

if (rdi_2 s< rcx)
    int32_t* rcx_5 = arg2 - 4 + ((rcx - rdi_2) << 2)
    
    do
        int32_t rax_13 = *rcx_5
        rdi_2 += 1
        rcx_5 = &rcx_5[-1]
        *(rsp + 0x20 + (rdi_2 << 2) - 4) = rax_13
    while (rdi_2 s< rcx)

int32_t r8_2 = 0
int64_t rdi_3 = 0
int128_t zmm0

if (rcx s>= 4)
    void* rcx_6 = rsp - rcx_2 + 0x28
    void* rdx_4 = rdx + (rcx << 2) - 8
    int64_t i_5 = ((rcx - 4) u>> 2) + 1
    r8_2 = (i_5 << 2).d
    rdi_3 = i_5 << 2
    int64_t i_1
    
    do
        zmm0 = *(rdx_4 + 4)
        rcx_6 += 0x10
        rdx_4 -= 0x10
        *(rcx_6 - 0x18) = (zmm0 ^ 0x80000000).d
        *(rcx_6 - 0x14) = (*(rdx_4 + 0x10) ^ 0x80000000).d
        *(rcx_6 - 0x10) = (*(rdx_4 + 0xc) ^ 0x80000000).d
        *(rcx_6 - 0xc) = (*(rdx_4 + 8) ^ 0x80000000).d
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

if (rdi_3 s< rcx)
    int64_t rax_17 = rcx - rdi_3
    int128_t* rdx_7 = var_88 - 4 + (rax_17 << 2)
    r8_2 += rax_17.d
    
    do
        zmm0 = *rdx_7
        rdi_3 += 1
        rdx_7 -= 4
        *(rsp - rcx_2 + 0x20 + (rdi_3 << 2) - 4) = (zmm0 ^ 0x80000000).d
    while (rdi_3 s< rcx)

int64_t rax_18 = sx.q(r8_2)

if (rax_18 s< r9)
    __builtin_memset(rsp - rcx_2 + 0x20 + (rax_18 << 2), 0, (r9 - rax_18) << 2)

uint32_t rcx_8 = 0
uint64_t result = zx.q(var_98 - 3)
uint64_t result_1
int128_t zmm1
int128_t zmm2

if (result.d s> 0)
    int128_t* rdi_5 = arg1 + 8
    void* rdx_8 = rsp - rcx_2 + 0x20
    void* r12_2 = arg3 - arg1
    void* var_78_1 = rdx_8
    uint64_t rax_22 = zx.q(((result.d - 1) u>> 2) + 1)
    uint64_t i_4 = zx.q(rax_22.d)
    uint64_t i_2
    
    do
        result_1.d = (*(rdi_5 - 8)).d
        result_1:4.d = (*(rdi_5 - 4)).d
        int32_t var_58_1 = (*rdi_5).d
        int32_t var_54_1 = (*(rdi_5 + 4)).d
        int128_t zmm6_1 = sub_14040ab20(rsp + 0x20, rdx_8, &result_1, rcx.d)
        zmm1 = result_1.d
        int64_t rdx_9 = rsi + rcx
        int64_t rax_24 = rsi + rcx
        rdi_5 = &rdi_5[1]
        *(rsp - rcx_2 + 0x20 + (rdx_9 << 2)) = (zmm1 ^ zmm6_1).d
        *(r12_2 + rdi_5 - 0x18) = zmm1.d
        zmm2.d = (*arg2).d f* *(rsp - rcx_2 + 0x20 + (rdx_9 << 2))
        zmm2.d = zmm2.d f+ result_1:4.d
        *(rsp - rcx_2 + 0x20 + (rdx_9 << 2) + 4) = (zmm2 ^ zmm6_1).d
        *(r12_2 + rdi_5 - 0x14) = zmm2.d
        zmm1.d = (*(rsp - rcx_2 + 0x20 + (rdx_9 << 2) + 4)).d f* *arg2
        zmm1.d = zmm1.d f+ var_58_1
        zmm0.d = (*(rsp - rcx_2 + 0x20 + (rdx_9 << 2))).d f* *(arg2 + 4)
        zmm1.d = zmm1.d f+ zmm0.d
        *(rsp - rcx_2 + 0x20 + (rax_24 << 2) + 8) = (zmm1 ^ zmm6_1).d
        *(r12_2 + rdi_5 - 0x10) = zmm1.d
        zmm0.d = (*(rsp - rcx_2 + 0x20 + (rdx_9 << 2) + 4)).d f* *(arg2 + 4)
        rdx_8 = var_78_1 + 0x10
        var_78_1 = rdx_8
        zmm2.d = (*arg2).d f* *(rsp - rcx_2 + 0x20 + (rax_24 << 2) + 8)
        zmm1.d = (*(rsp - rcx_2 + 0x20 + (rdx_9 << 2))).d f* *(arg2 + 8)
        result = rsi + rcx
        rsi += 4
        i_2 = i_4
        i_4 -= 1
        zmm2.d = zmm2.d f+ var_54_1
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        *(rsp - rcx_2 + 0x20 + (result << 2) + 0xc) = (zmm2 ^ zmm6_1).d
        *(r12_2 + rdi_5 - 0xc) = zmm2.d
    while (i_2 != 1)
    rcx_8 = (rax_22 << 2).d
    rsi = 0

int64_t r12_3 = sx.q(var_98)
int64_t r10 = sx.q(rcx_8)

if (r10 s< r12_3)
    int64_t rax_25 = r10 << 2
    void* r8_4 = rax_25 + arg1
    result = rsp - rcx_2 + 0x20 - arg1
    int128_t* r9_5 = rsp + 0x20 - rax_25 - (rsp - rcx_2 + 0x20)
    int64_t rdi_9 = ((3 - r10) << 2) - (rsp - rcx_2 + 0x20) + rsp + 0x20
    result_1 = result
    
    do
        zmm2 = *r8_4
        int64_t i_3 = 0
        
        if (rcx s>= 4)
            void* rcx_12 = result + r8_4
            
            do
                zmm0 = *(r9_5 + rcx_12)
                zmm1 = *(r9_5 + rcx_12 + 4)
                i_3 += 4
                rcx_12 += 0x10
                zmm0.d = zmm0.d f* *(rcx_12 - 0x10)
                zmm1.d = zmm1.d f* *(rcx_12 - 0xc)
                zmm2.d = zmm2.d f- zmm0.d
                zmm0.d = (*(rdi_9 + rcx_12 - 0x14)).d f* *(rcx_12 - 8)
                zmm2.d = zmm2.d f- zmm1.d
                zmm1.d = (*(rdi_9 + rcx_12 - 0x10)).d f* *(rcx_12 - 4)
                zmm2.d = zmm2.d f- zmm0.d
                zmm2.d = zmm2.d f- zmm1.d
            while (i_3 s< rcx - 3)
        
        if (i_3 s< rcx)
            void* rcx_13 = rsp + 0x20 + (i_3 << 2)
            
            do
                i_3 += 1
                rcx_13 += 4
                zmm0.d = (*(rsp - rcx_2 + 0x20 - (rsp + 0x20) - arg1 + r8_4 + rcx_13 - 4)).d f*
                    *(rcx_13 - 4)
                zmm2.d = zmm2.d f- zmm0.d
            while (i_3 s< rcx)
        
        int64_t rax_29 = r10 + rcx
        r10 += 1
        r8_4 += 4
        rdi_9 -= 4
        r9_5 -= 4
        *(rsp - rcx_2 + 0x20 + (rax_29 << 2)) = zmm2.d
        result = result_1
        *(arg3 - arg1 + r8_4 - 4) = zmm2.d
    while (r10 s< r12_3)

if (rcx s>= 4)
    void* rcx_14 = var_88 + 8
    void* rdx_12 = arg3 + ((r12_3 - 2) << 2)
    
    do
        rsi += 4
        rcx_14 += 0x10
        *(rcx_14 - 0x18) = *(rdx_12 + 4)
        int32_t rax_31 = *rdx_12
        rdx_12 -= 0x10
        *(rcx_14 - 0x14) = rax_31
        *(rcx_14 - 0x10) = *(rdx_12 + 0xc)
        *(rcx_14 - 0xc) = *(rdx_12 + 8)
        result = rcx - 3
    while (rsi s< result)

if (rsi s< rcx)
    int32_t* rcx_16 = arg3 + ((r12_3 - rsi - 1) << 2)
    
    do
        result = zx.q(*rcx_16)
        rsi += 1
        rcx_16 = &rcx_16[-1]
        *(var_88 + (rsi << 2) - 4) = result.d
    while (rsi s< rcx)

__security_check_cookie(rax_1 ^ &var_98)
return result
