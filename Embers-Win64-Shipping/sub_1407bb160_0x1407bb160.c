// 函数: sub_1407bb160
// 地址: 0x1407bb160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 0x34) == 0)
    return 

int64_t* rcx_5

if (*(arg1 + 0xd0) == *(arg1 + 0xfc))
label_1407bb202:
    rcx_5 = nullptr
else
    int64_t r11_1 = *(arg3 + 0x18)
    void* r9_1 = arg1 + 0x100
    void* r8 = *(r9_1 + 8)
    
    if (r8 != 0)
        r9_1 = r8
    
    int32_t rax_6 =
        *(r9_1 + ((sx.q((r11_1 u>> 0x20).d * 0x17 + r11_1.d) & (sx.q(*(arg1 + 0x110)) - 1)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_1407bb202_1:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = sx.q(rax_6) * 0x50 + *(arg1 + 0xc8)
            
            if (*rcx_5 == r11_1)
                break
            
            rax_6 = rcx_5[9].d
            
            if (rax_6 == 0xffffffff)
                goto label_1407bb202_2
        
        if (rax_6 == 0xffffffff)
        label_1407bb202_2:
            rcx_5 = nullptr

void* rdi_1 = &rcx_5[1]

if (rcx_5 == 0)
    rdi_1 = nullptr

for (int64_t* i = *(rdi_1 + 0x20); i != &i[sx.q(*(rdi_1 + 0x28))]; i = &i[1])
    int64_t rax = *i
    
    if (rax != *(rdi_1 + 0x30))
        *(rdi_1 + 0x38) = rax
        break

if (*(rdi_1 + 0x38) == 0)
    int64_t* rax_7 = j_sub_140a82f30(0x20)
    int64_t* rbx_1 = rax_7
    
    if (rax_7 == 0)
        rbx_1 = nullptr
    else
        int32_t r9_3 = *(rdi_1 + 0xc) * *(rdi_1 + 4)
        int32_t r8_4 = *(rdi_1 + 8) * *rdi_1
        __builtin_memset(rax_7, 0, 0x1c)
        sub_1407b4e80(rax_7, 4, r8_4, r9_3, 0xd, 0x10008)
    
    *(rdi_1 + 0x38) = rbx_1
    int64_t rbx_2 = sx.q(*(rdi_1 + 0x28))
    int32_t rax_8 = (rbx_2 + 1).d
    *(rdi_1 + 0x28) = rax_8
    
    if (rax_8 s> *(rdi_1 + 0x2c))
        sub_1405a4d70(rdi_1 + 0x20)
    
    *(*(rdi_1 + 0x20) + (rbx_2 << 3)) = *(rdi_1 + 0x38)

if (*(arg3 + 0x35) != 0)
    return 

int64_t* rsi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_9 = *(*(rdi_1 + 0x38) + 8)
void* rax_10 = &rsi_3[1]

if (rax_10 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rsi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rsi_3[1]

*(arg2 + 0x30) = rax_10
*rsi_3 = rcx_9
void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_11 = &rcx_13[6]

if (rax_11 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_11 = &rcx_13[6]

*(arg2 + 0x30) = rax_11
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_13
*(arg2 + 8) = &rcx_13[1]
*rcx_13 = &data_142da7798
rcx_13[2].d = 1
rcx_13[3] = rsi_3
rcx_13[4].d = 2
*(rcx_13 + 0x24) = 3
rcx_13[5] = 0
rcx_13[1] = 0
void*** rcx_19 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
int64_t rsi_6 = *(*(rdi_1 + 0x38) + 8)
void* rax_15 = &rcx_19[6]

if (rax_15 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x40)
    rcx_19 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    rax_15 = &rcx_19[6]

*(arg2 + 0x30) = rax_15
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_19
*(arg2 + 8) = &rcx_19[1]
rcx_19[1] = 0
*rcx_19 = &data_142da7778
rcx_19[2] = rsi_6
*(rcx_19 + 0x20) = zx.o(0)
int64_t* rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_23 = *(*(rdi_1 + 0x38) + 8)
void* rax_19 = &rdi_4[1]

if (rax_19 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_19 = &rdi_4[1]

*(arg2 + 0x30) = rax_19
*rdi_4 = rcx_23
void*** rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_20 = &rcx_27[6]

if (rax_20 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_20 = &rcx_27[6]

*(arg2 + 0x30) = rax_20
void**** rax_21 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_21 = rcx_27
*(arg2 + 8) = &rcx_27[1]
rcx_27[1] = 0
*rcx_27 = &data_142da7798
rcx_27[2].d = 1
rcx_27[3] = rdi_4
rcx_27[4].d = 2
*(rcx_27 + 0x24) = 3
rcx_27[5] = 0
