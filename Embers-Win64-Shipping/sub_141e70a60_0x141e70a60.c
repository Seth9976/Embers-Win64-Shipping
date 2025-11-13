// 函数: sub_141e70a60
// 地址: 0x141e70a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
arg1[1].d = 0
arg1[2] = 0
arg1[3] = 0
arg1[4].b = *(arg2 + 8)
char rax_1 = *(arg2 + 9)
*(arg1 + 0x21) = rax_1
int64_t* rcx = *(arg2 + 0x10)
arg1[5] = rcx

if (rax_1 != 0)
    void arg_8
    int64_t rbx_1 = *sub_140b58260(&arg_8, u"NonRealtimeAudioRenderer", 1)
    j_sub_140b3db50()
    int64_t* rax_3 = sub_140b407e0(&data_143de7d78, rbx_1)
    int64_t rdx_1 = *rax_3
    *arg1 = (*(rdx_1 + 0x48))(rax_3, rdx_1)
else if (rcx == 0)
    int64_t* rcx_3 = *(arg4 + 0x60)
    int64_t rax_7 = (*(*rcx_3 + 0x48))(rcx_3)
    *arg1 = rax_7
    
    if (rax_7 == 0)
        void*** rax_8 = j_sub_140a82f30(0xac0)
        void*** rax_4
        
        if (rax_8 == 0)
            rax_4 = nullptr
        else
            int64_t* rcx_4 = *(arg4 + 0x60)
            int64_t rdx_2 = *rcx_4
            rax_4 = sub_141c4d970(rax_8, (*(rdx_2 + 0x50))(rcx_4, rdx_2))
        
        *arg1 = rax_4
else
    *arg1 = (*(*rcx + 0x48))()

int64_t* rax_10 = sub_142475900()
void* rdx_4 = rax_10[0x23]
int32_t r8

if (rdx_4 != 0)
label_141e70b4f:
    void* i = *(rdx_4 + 0x110)
    r8 = -1
    
    for (void* rdx_8 = (sx.q(*(rdx_4 + 0x118)) << 5) + i; i != rdx_8; i += 0x20)
        int32_t rax_11 = r8
        r8 = *(i + 0x18)
        
        if (r8 s<= rax_11)
            r8 = rax_11
else
    int64_t rdx_5 = *rax_10
    (*(rdx_5 + 0x390))(rax_10, rdx_5)
    rdx_4 = rax_10[0x23]
    
    if (rdx_4 != 0)
        goto label_141e70b4f
    
    r8 = 0

if (sub_141e7f2f0(*arg1, arg3, r8) == 0)
    sub_141e895d0(*arg1)
    int64_t* rcx_16 = *arg1
    
    if (rcx_16 != 0)
        (**rcx_16)(rcx_16, 1)
    
    *arg1 = 0
else
    int64_t* rax_13
    char r8_1
    rax_13, r8_1 = sub_142475900()
    void* rbp_1 = rax_13[0x23]
    
    if (rbp_1 == 0)
        int64_t rdx_10 = *rax_13
        r8_1 = (*(rdx_10 + 0x390))(rax_13, rdx_10)
        rbp_1 = rax_13[0x23]
    
    void* rcx_9 = data_143f5b298
    int32_t rcx_10
    
    if (rcx_9 == 0)
        rcx_10 = 0
    else
        void* rax_14
        rax_14, r8_1 = sub_1423dd380(rcx_9)
        rcx_10 = *(rax_14 + 0xa8)
    
    if (rcx_10 s>= 0)
        int32_t rax_16 = *(rbp_1 + 0x118) - 1
        
        if (rcx_10 s< rax_16)
            rax_16 = rcx_10
        
        rsi = rax_16
    
    sub_141e86f70(*arg1, *((sx.q(rsi) << 5) + *(rbp_1 + 0x110) + 0x18), r8_1)
    int64_t* rcx_14 = *arg1
    (*(*rcx_14 + 0x30))(rcx_14)

return arg1
