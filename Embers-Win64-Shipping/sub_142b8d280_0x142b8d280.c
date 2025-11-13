// 函数: sub_142b8d280
// 地址: 0x142b8d280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    return 0

void* result = sub_142a7dd00(0x50)
void* rax_1 = sub_142a7dd00(0x453c0)
int64_t rax_2 = sub_142a7dd00(0x10000)

if (result == 0 || rax_1 == 0 || rax_2 == 0)
    sub_142a7dcd0(result)
    sub_142a7dcd0(rax_1)
    sub_142a7dcd0(rax_2)
    *arg3 = 7
    return nullptr

memset(result, 0, 0x50)
*(result + 0x24) = arg1
*(result + 0x28) = arg2
*(result + 0x2c) = 0x110000
int32_t r10_1 = 0
*(result + 0x48) = rax_1
int32_t i_1 = 0
*(rax_1 + 0x23300) = rax_2
int32_t i_10 = 0x80
*(rax_1 + 0x23314) = 0x4000
*(rax_1 + 0x23308) = arg1
*(rax_1 + 0x2330c) = arg2
*(rax_1 + 0x23328) = 0x110000
*(rax_1 + 0x2331c) = 0
*(rax_1 + 0x2332c) = 0

if (rax_2 u> rax_1 + 0x23300 || rax_2 + 0x1fc u< rax_1 + 0x23300)
    int64_t rcx_1
    int64_t rdi_1
    rdi_1, rcx_1 = __memfill_u32(rax_2, arg1, 0x80)
    i_1 = 0x80

int64_t i_15 = sx.q(i_1)

if (i_15 s< 0x80)
    int64_t i = i_15 << 2
    i_1 += 0x80 - i_15.d
    
    do
        *(i + *(rax_1 + 0x23300)) = arg1
        i += 4
    while (i s< 0x200)

if (i_1 s< 0xc0 && 0xc0 - i_1 u>= 4)
    int64_t rdi_2 = *(rax_1 + 0x23300)
    
    if (rdi_2 + (sx.q(i_1) << 2) u> rax_1 + 0x23300 || rdi_2 + 0x2fc u< rax_1 + 0x23300)
        int32_t rcx_3 = (0xc0 - i_1) & 0x80000003
        
        if (rcx_3 s< 0)
            rcx_3 = ((rcx_3 - 1) | 0xfffffffc) + 1
        
        int64_t i_17 = sx.q(i_1)
        
        do
            i_1 += 4
        while (i_1 s< 0xc0 - rcx_3)
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(0xc0 - rcx_3 - i_17.d + 3)
        int64_t rcx_9
        int64_t rdi_4
        rdi_4, rcx_9 = __memfill_u32(rdi_2 + (i_17 << 2), arg2, 
            sx.q((temp1_1 + (temp0_1 & 3)) s>> 2) << 4 u>> 2)

int64_t i_11 = sx.q(i_1)

if (i_11 s< 0xc0)
    int64_t i_2 = i_11 << 2
    
    do
        *(i_2 + *(rax_1 + 0x23300)) = arg2
        i_2 += 4
    while (i_2 s< 0x300)

int64_t rax_17 = *(rax_1 + 0x23300)
int32_t rdx_3 = 0xc0

if (rax_17 + 0x300 u> rax_1 + 0x23300 || rax_17 + 0x3fc u< rax_1 + 0x23300)
    int64_t rcx_10
    int64_t rdi_6
    rdi_6, rcx_10 = __memfill_u32(rax_17 + 0x300, arg1, 0x40)
    rdx_3 = 0x100

int64_t rcx_11 = sx.q(rdx_3)

if (rcx_11 s< 0x100)
    int64_t i_3 = rcx_11 << 2
    
    do
        *(i_3 + *(rax_1 + 0x23300)) = arg1
        i_3 += 4
    while (i_3 s< 0x400)

int64_t i_16 = 4
*(rax_1 + 0x23324) = 0xc0
int32_t rcx_12 = 4
*(rax_1 + 0x23318) = 0x100
int32_t i_4 = 0
void* rax_21 = rax_1 + 0x23330

do
    *(rax_21 - 0x22ab0) = i_4
    i_4 += 0x20
    *rax_21 = 1
    rax_21 += 4
while (i_4 s< 0x80)

if (i_4 s< 0xc0)
    __builtin_memset(rax_1 + 0x23340, 0, zx.q(((0xbf - i_4) u>> 5) + 1) << 2)
    rcx_12 = ((0xbf - i_4) u>> 5) + 5
    i_4 += (((0xbf - i_4) u>> 5) + 1) << 5

*(rax_1 + (sx.q(rcx_12) << 2) + 0x23330) = 0x881d

if (i_4 + 0x20 s< 0x100)
    __builtin_memset(rax_1 + ((sx.q(rcx_12 + 1) + 0x8ccc) << 2), 0, 
        zx.q(((0xff - (i_4 + 0x20)) u>> 5) + 1) << 2)

void* rax_24 = rax_1 + 0x890
int64_t i_12 = 0x81
int64_t i_5

do
    __builtin_memcpy(rax_24, 
        "\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x"
    "00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00"
    "00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00", 
        0x40)
    rax_24 += 0x40
    i_5 = i_12
    i_12 -= 1
while (i_5 != 1)
__builtin_memcpy(rax_24, 
    "\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\x"
"c0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x
        00", 
    0x30)
int64_t i_13 = 0x24
void* rax_25 = rax_1 + 0x2900
int64_t i_6

do
    __builtin_memset(rax_25, 0xff, 0x40)
    rax_25 += 0x40
    i_6 = i_13
    i_13 -= 1
while (i_6 != 1)
void* rax_26 = rax_1 + 0x3200
int64_t i_7

do
    __builtin_memcpy(rax_26, 
        "\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x"
    "00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00"
    "00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00\xc0\x00\x00\x00", 
        0x40)
    rax_26 += 0x40
    i_7 = i_16
    i_16 -= 1
while (i_7 != 1)
*(rax_1 + 0x23320) = 0xa60
int64_t i_8 = 0
*(rax_1 + 0x23310) = 0xaa0

do
    *(rax_1 + (i_8 << 2)) = r10_1
    r10_1 += 0x40
    i_8 += 1
while (i_8 s< 0x20)

void* rax_27 = rax_1 + 0x80
int64_t i_14 = 0x20
int64_t i_9

do
    __builtin_memcpy(rax_27, 
        "\x60\x0a\x00\x00\x60\x0a\x00\x00\x60\x0a\x00\x00\x60\x0a\x00\x00\x60\x0a\x00\x00\x60\x0a\x00\x"
    "00\x60\x0a\x00\x00\x60\x0a\x00\x00\x60\x0a\x00\x00\x60\x0a\x00\x00\x60\x0a\x00\x00\x60\x0a\x00"
    "00\x60\x0a\x00\x00\x60\x0a\x00\x00\x60\x0a\x00\x00\x60\x0a\x00\x00", 
        0x40)
    rax_27 += 0x40
    i_9 = i_14
    i_14 -= 1
while (i_9 != 1)

do
    if (*arg3 s<= 0)
        if (i_10 u<= 0x10ffff)
            void* rdi_11 = *(result + 0x48)
            
            if (rdi_11 == 0 || *(rdi_11 + 0x2332c) != 0)
                *arg3 = 0x1e
            else
                int32_t rax_30
                
                if ((i_10 & 0xfffffc00) != 0xd800)
                    int64_t rax_33 = sx.q(i_10 s>> 0xb)
                    rax_30 = *(rdi_11 + (rax_33 << 2))
                    
                    if (rax_30 != *(rdi_11 + 0x23320))
                        goto label_142b8d726
                    
                    rax_30 = sub_142b8c470(rdi_11)
                    
                    if (rax_30 s< 0)
                        *arg3 = 7
                    else
                        *(rdi_11 + (rax_33 << 2)) = rax_30
                    label_142b8d726:
                        
                        if (rax_30 s>= 0)
                            goto label_142b8d73a
                        
                        *arg3 = 7
                else
                    rax_30 = 0x800
                label_142b8d73a:
                    void* rsi_1 = rdi_11 + (sx.q(rax_30 + (i_10 s>> 5 & 0x3f)) << 2)
                    int64_t rcx_21 = sx.q(*(rsi_1 + 0x880))
                    
                    if (rcx_21.d == *(rdi_11 + 0x23324)
                            || *(rdi_11 + (rcx_21 s>> 5 << 2) + 0x23330) != 1)
                        int32_t rax_38 = sub_142b8c320(rdi_11, rcx_21.d)
                        rcx_21 = sx.q(rax_38)
                        
                        if (rax_38 s>= 0)
                            int64_t rax_40 = rcx_21 s>> 5
                            *(rdi_11 + (rax_40 << 2) + 0x23330) += 1
                            int64_t r8_1 = sx.q(*(rsi_1 + 0x880))
                            int64_t rax_42 = r8_1 s>> 5
                            int32_t temp6_1 = *(rdi_11 + (rax_42 << 2) + 0x23330)
                            *(rdi_11 + (rax_42 << 2) + 0x23330) -= 1
                            
                            if (temp6_1 == 1)
                                *(rdi_11 + (r8_1 s>> 5 << 2) + 0x23330) = neg.d(*(rdi_11 + 0x2331c))
                                *(rdi_11 + 0x2331c) = r8_1.d
                            
                            *(rsi_1 + 0x880) = rcx_21.d
                            goto label_142b8d7b8
                        
                        *arg3 = 7
                    else
                    label_142b8d7b8:
                        
                        if (rcx_21.d s< 0)
                            *arg3 = 7
                        else
                            *(*(rdi_11 + 0x23300) + (sx.q((i_10 & 0x1f) + rcx_21.d) << 2)) = arg1
        else
            *arg3 = 1
    
    i_10 += 0x20
while (i_10 s< 0x800)

return result
