// 函数: sub_1426da930
// 地址: 0x1426da930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[2] == 0)
    return 

int64_t rax = sub_14273b6f0()

if (rax == 0)
    return 

void* rdx = arg1[2]
int64_t r8_1 = rax + 0x30
rax = sx.q(*(rax + 0x38))

if (rax.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax << 3)) != r8_1 || rdx == 0)
    return 

int64_t rsi_1 = sub_14273b020()
void* const rdx_1

if (arg1[2] == 0)
    rdx_1 = nullptr
else
    rax = sub_14273b6f0()
    
    if (rax == 0)
        rdx_1 = nullptr
    else
        rdx_1 = arg1[2]
        int64_t r8_2 = rax + 0x30
        rax = sx.q(*(rax + 0x38))
        
        if (rax.d s> *(rdx_1 + 0x38))
            rdx_1 = nullptr
        else if (*(*(rdx_1 + 0x30) + (rax << 3)) != r8_2)
            rdx_1 = nullptr

if (rsi_1 == 0)
    return 

rax = sx.q(*(rsi_1 + 0x38))

if (rax.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax << 3)) != rsi_1 + 0x30 || arg1[1].d s<= 0)
    return 

int64_t* rsi_2

if (arg1[2] == 0)
    rsi_2 = nullptr
else
    void* rax_1 = sub_14273b6f0()
    
    if (rax_1 == 0)
        rsi_2 = nullptr
    else
        rsi_2 = arg1[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> rsi_2[7].d || *(rsi_2[6] + (rax_2 << 3)) != rax_1 + 0x30)
            rsi_2 = nullptr

int64_t* r15_1 = rsi_2[0x23]

if (r15_1 == 0)
    (*(*rsi_2 + 0x390))(rsi_2)
    r15_1 = rsi_2[0x23]

int32_t rcx_5 = arg1[1].d
int32_t rdx_4 = arg2[1].d + rcx_5

if (rdx_4 s> *(arg2 + 0xc))
    sub_140638cc0(arg2, rdx_4)
    rcx_5 = arg1[1].d

void* rsi_3 = *arg1
void* r12_1 = rsi_3 + (sx.q(rcx_5) << 3)

while (rsi_3 != r12_1)
    int64_t r9_1 = *r15_1
    void var_28
    int64_t* rax_7 =
        (*(r9_1 + 0x278))(r15_1, &var_28, (sx.q(*(rsi_3 + 4) * 2) s>> 1) + arg1[3], r9_1)
    int64_t rbp_1 = sx.q(arg2[1].d)
    int32_t rcx_8 = (rbp_1 + 1).d
    arg2[1].d = rcx_8
    
    if (rcx_8 s> *(arg2 + 0xc))
        sub_140638a00(arg2)
    
    int64_t rax_8 = *arg2
    int64_t rdx_8 = rbp_1 * 3
    *(rax_8 + (rdx_8 << 2)) = *rax_7
    rsi_3 += 8
    *(rax_8 + (rdx_8 << 2) + 8) = rax_7[1].d
