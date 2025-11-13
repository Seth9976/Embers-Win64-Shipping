// 函数: sub_140a09030
// 地址: 0x140a09030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x15]

if (rax == 0)
    rax = sub_141ee69e0(arg1)

char rax_1

if (rax != 0)
    rax_1 = sub_14243ade0(rax)

char arg_8
int64_t rcx_5
int64_t* r14_2

if (rax == 0 || rax_1 == 0 || *(arg1 + 0x439) == 0)
    rcx_5 = &arg1[0x91]
    arg_8 = 0
    *(rcx_5 + 8) = 0
    
    if (*(rcx_5 + 0xc) != 0)
        rcx_5 = sub_1405c5570(rcx_5, 0)
    
    r14_2 = arg1[0x88]
    
    if (r14_2 == 0)
        int64_t* rax_7
        rax_7, rcx_5 = sub_140a007b0(arg1)
        arg1[0x88] = rax_7
        r14_2 = rax_7
else
    arg_8 = 1
    int64_t rsi_1 = 0
    int64_t* rbx_1 = arg1[0x91]
    uint64_t r14_1 = sx.q(arg1[0x92].d) << 3 u>> 3
    
    if (rbx_1 u> &rbx_1[arg1[0x92]])
        r14_1 = 0
    
    if (r14_1 != 0)
        do
            sub_14222b820(*rbx_1)
            rsi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rsi_1 != r14_1)
    
    void* rax_4 = sub_140a007b0(arg1)
    int64_t rbx_2 = sx.q(arg1[0x92].d)
    int32_t rcx_3 = (rbx_2 + 1).d
    arg1[0x92].d = rcx_3
    
    if (rcx_3 s> *(arg1 + 0x494))
        sub_1405a4d70(&arg1[0x91])
    
    *(arg1[0x91] + (rbx_2 << 3)) = rax_4
    rcx_5 = sx.q(arg1[0x92].d)
    r14_2 = *(arg1[0x91] + (rcx_5 << 3) - 8)

if (&r14_2[0xb] != &arg1[0x8b])
    int32_t i_3 = r14_2[0xc].d
    void*** rbx_3 = r14_2[0xb]
    
    if (i_3 != 0)
        int32_t i
        
        do
            rcx_5 = sub_14222ae60(rbx_3)
            rbx_3 = &rbx_3[0x16]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg1[0x8c].d
    void* rsi_3 = arg1[0x8b]
    int32_t r8_1 = *(r14_2 + 0x64)
    r14_2[0xc].d = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        rcx_5 = sub_140a05d20(&r14_2[0xb], i_2, r8_1)
        void*** rbx_4 = r14_2[0xb]
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                rcx_5 = sub_14222a240(rbx_4, rsi_3)
                rbx_4 = &rbx_4[0x16]
                rsi_3 += 0xb0
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(r14_2 + 0x64) = 0

rcx_5.b = sbb.b(rcx_5.b, rcx_5.b, arg1[0x87].b != 0)
rcx_5.b &= 3
*(r14_2 + 0x8c) = rcx_5.b
void* const* (* var_38)(int64_t* arg1, char arg2, int64_t arg3)

if (arg_8 == 0)
    int128_t zmm0_2 = *sub_140b214c0(&var_38)
    int64_t rax_13 = *r14_2
    *(r14_2 + 0x8a) |= 4
    *(r14_2 + 0xc0) = zmm0_2
    (*(rax_13 + 0x278))(r14_2)
    (*(*r14_2 + 0x260))(r14_2)
    return sub_141ef1240(arg1) __tailcall

int32_t var_30 = 0
var_38 = sub_140a023a0
int64_t var_48 = 0
int32_t var_40 = 0
void*** rax_9 = sub_1405978f0(0x30, &var_48)

if (rax_9 != 0)
    *rax_9 = &data_142e4b650
    sub_140d3a3a0(&rax_9[1], arg1)
    *(rax_9 + 0x10) = var_38.o
    rax_9[4] = r14_2
    rax_9[5] = sub_140a387b0()
    *rax_9 = &data_142e4b6a8

return sub_14222e070(r14_2, &var_48)
