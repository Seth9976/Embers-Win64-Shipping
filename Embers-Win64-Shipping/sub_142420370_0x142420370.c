// 函数: sub_142420370
// 地址: 0x142420370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
*(arg1 + 0x50) = 0

if (*(arg1 + 0x54) != 0)
    sub_140638cc0(arg1 + 0x48, 0)
    r8 = *(arg1 + 0x50)

int32_t* rdx = *(arg1 + 0x48)
int64_t zmm0 = *(arg1 + 8)
int32_t* rcx_1 = rdx
float i = *(arg1 + 0xc)
float i_1 = i
int32_t var_20 = 0
int64_t rdi = sx.q(r8) * 3
void* rax_1 = &rdx[rdi]
int64_t rdx_2

if (rdx != rax_1)
    while (zmm0.d f!= *rcx_1 || i f!= rcx_1[1] || not(0f f== rcx_1[2]))
        rcx_1 = &rcx_1[3]
        
        if (rcx_1 == rax_1)
            goto label_14242042b
    
    int64_t rax_2
    int64_t rdx_1
    rdx_1:rax_2 = muls.dp.q(0x2aaaaaaaaaaaaaab, rcx_1 - rdx)
    rdx_2 = rdx_1 s>> 1

if (rdx == rax_1 || rdx_2.d + (rdx_2 u>> 0x3f).d == 0xffffffff)
label_14242042b:
    *(arg1 + 0x50) = r8 + 1
    
    if (r8 + 1 s> *(arg1 + 0x54))
        sub_140638a00(arg1 + 0x48)
    
    int64_t rcx_4 = *(arg1 + 0x48)
    *(rcx_4 + (rdi << 2)) = zmm0.d.q
    *(rcx_4 + (rdi << 2) + 8) = 0

int32_t* rdx_5 = *(arg1 + 0x48)
int64_t r8_1 = sx.q(*(arg1 + 0x50))
int32_t* rcx_5 = rdx_5
zmm0.d = (*(arg1 + 8)).d f+ *(arg1 + 0x38)
i = *(arg1 + 0xc)
int64_t rdi_1 = r8_1 * 3
float i_2 = i
void* rax_6 = &rdx_5[rdi_1]
int32_t var_20_1 = 0
int64_t rdx_7

if (rdx_5 != rax_6)
    while (zmm0.d f!= *rcx_5 || i f!= rcx_5[1] || not(0f f== rcx_5[2]))
        rcx_5 = &rcx_5[3]
        
        if (rcx_5 == rax_6)
            goto label_1424204c8
    
    int64_t rax_7
    int64_t rdx_6
    rdx_6:rax_7 = muls.dp.q(0x2aaaaaaaaaaaaaab, rcx_5 - rdx_5)
    rdx_7 = rdx_6 s>> 1

if (rdx_5 == rax_6 || rdx_7.d + (rdx_7 u>> 0x3f).d == 0xffffffff)
label_1424204c8:
    int32_t rax_10 = (r8_1 + 1).d
    *(arg1 + 0x50) = rax_10
    
    if (rax_10 s> *(arg1 + 0x54))
        sub_140638a00(arg1 + 0x48)
    
    int64_t rcx_8 = *(arg1 + 0x48)
    *(rcx_8 + (rdi_1 << 2)) = zmm0.d.q
    *(rcx_8 + (rdi_1 << 2) + 8) = 0

int32_t* rdx_10 = *(arg1 + 0x48)
int64_t r8_2 = sx.q(*(arg1 + 0x50))
int32_t* rcx_9 = rdx_10
zmm0.d = (*(arg1 + 8)).d f+ *(arg1 + 0x38)
i = *(arg1 + 0x3c) f+ *(arg1 + 0xc)
int64_t rdi_2 = r8_2 * 3
int32_t var_20_2 = 0
void* rax_11 = &rdx_10[rdi_2]
float i_3 = i
int64_t rdx_12

if (rdx_10 != rax_11)
    while (zmm0.d f!= *rcx_9 || i f!= rcx_9[1] || not(0f f== rcx_9[2]))
        rcx_9 = &rcx_9[3]
        
        if (rcx_9 == rax_11)
            goto label_14242056e
    
    int64_t rax_12
    int64_t rdx_11
    rdx_11:rax_12 = muls.dp.q(0x2aaaaaaaaaaaaaab, rcx_9 - rdx_10)
    rdx_12 = rdx_11 s>> 1

if (rdx_10 == rax_11 || rdx_12.d + (rdx_12 u>> 0x3f).d == 0xffffffff)
label_14242056e:
    int32_t rax_15 = (r8_2 + 1).d
    *(arg1 + 0x50) = rax_15
    
    if (rax_15 s> *(arg1 + 0x54))
        sub_140638a00(arg1 + 0x48)
    
    int64_t rcx_12 = *(arg1 + 0x48)
    *(rcx_12 + (rdi_2 << 2)) = zmm0.d.q
    *(rcx_12 + (rdi_2 << 2) + 8) = 0

int32_t* rdx_15 = *(arg1 + 0x48)
int64_t r8_3 = sx.q(*(arg1 + 0x50))
int32_t* rcx_13 = rdx_15
zmm0.d = (*(arg1 + 0x3c)).d f+ *(arg1 + 0xc)
i = *(arg1 + 8)
int64_t rdi_3 = r8_3 * 3
void* rax_16 = &rdx_15[rdi_3]
int32_t var_20_3 = 0
int32_t var_24 = zmm0.d
uint32_t result
int64_t rdx_17

if (rdx_15 != rax_16)
    while (i f!= *rcx_13 || zmm0.d f!= rcx_13[1] || not(0f f== rcx_13[2]))
        rcx_13 = &rcx_13[3]
        
        if (rcx_13 == rax_16)
            goto label_14242060f
    
    int64_t rax_17
    int64_t rdx_16
    rdx_16:rax_17 = muls.dp.q(0x2aaaaaaaaaaaaaab, rcx_13 - rdx_15)
    rdx_17 = rdx_16 s>> 1
    result = (rdx_17 u>> 0x3f).d

if (rdx_15 == rax_16 || rdx_17.d + result == 0xffffffff)
label_14242060f:
    int32_t rax_19 = (r8_3 + 1).d
    *(arg1 + 0x50) = rax_19
    
    if (rax_19 s> *(arg1 + 0x54))
        sub_140638a00(arg1 + 0x48)
    
    int64_t rcx_16 = *(arg1 + 0x48)
    result = 0
    *(rcx_16 + (rdi_3 << 2)) = i.q
    *(rcx_16 + (rdi_3 << 2) + 8) = 0

return result
