// 函数: sub_141c49850
// 地址: 0x141c49850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x208) & 1) == 0)
    int64_t rax
    rax.b = 0
    return rax

arg3[8].b |= 1
*(arg3 + 0x24) = int.d(fconvert.t(*(arg1 + 0x1e8)))

if (arg3[2] != 0)
    int32_t rdx = 0
    arg3[3].d = 0
    
    if (*(arg3 + 0x1c) != 0)
        sub_1405947f0(&arg3[2], 0)
        rdx = arg3[3].d
    
    arg3[3].d = rdx
    
    if (rdx s> *(arg3 + 0x1c))
        sub_140594770(&arg3[2])

arg3[5].d = 1

if (*arg3 != u"Non-realtime Renderer")
    int32_t rdx_1 = 0
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) != 0x16)
        sub_1405947f0(arg3, 0x16)
        rdx_1 = arg3[1].d
    
    arg3[1].d = rdx_1 + 0x16
    
    if (rdx_1 + 0x16 s> *(arg3 + 0xc))
        sub_140594770(arg3)
    
    void* rcx_4 = *arg3
    __builtin_memcpy(rcx_4, u"Non-realtime Ren", 0x20)
    *(rcx_4 + 0x20) = 0x65007200650064
    *(rcx_4 + 0x28) = 0x72

arg3[4].d = *(arg1 + 0x1ec)
int64_t rdi = sx.q(arg3[7].d)
int32_t rax_4 = (rdi + 1).d
arg3[7].d = rax_4

if (rax_4 s> *(arg3 + 0x3c))
    sub_1405a4cf0(&arg3[6])

*(arg3[6] + (rdi << 2)) = 0
int64_t rdi_1 = sx.q(arg3[7].d)
int32_t rax_6 = (rdi_1 + 1).d
arg3[7].d = rax_6

if (rax_6 s> *(arg3 + 0x3c))
    sub_1405a4cf0(&arg3[6])

*(arg3[6] + (rdi_1 << 2)) = 1
int64_t rdi_2 = sx.q(arg3[7].d)
int32_t rax_8 = (rdi_2 + 1).d
arg3[7].d = rax_8

if (rax_8 s> *(arg3 + 0x3c))
    sub_1405a4cf0(&arg3[6])

*(arg3[6] + (rdi_2 << 2)) = 2
int64_t rdi_3 = sx.q(arg3[7].d)
int32_t rax_10 = (rdi_3 + 1).d
arg3[7].d = rax_10

if (rax_10 s> *(arg3 + 0x3c))
    sub_1405a4cf0(&arg3[6])

*(arg3[6] + (rdi_3 << 2)) = 3
int64_t rdi_4 = sx.q(arg3[7].d)
int32_t rax_12 = (rdi_4 + 1).d
arg3[7].d = rax_12

if (rax_12 s> *(arg3 + 0x3c))
    sub_1405a4cf0(&arg3[6])

*(arg3[6] + (rdi_4 << 2)) = 4
int64_t rdi_5 = sx.q(arg3[7].d)
int32_t rax_14 = (rdi_5 + 1).d
arg3[7].d = rax_14

if (rax_14 s> *(arg3 + 0x3c))
    sub_1405a4cf0(&arg3[6])

*(arg3[6] + (rdi_5 << 2)) = 5
int64_t rdi_6 = sx.q(arg3[7].d)
int32_t rax_16 = (rdi_6 + 1).d
arg3[7].d = rax_16

if (rax_16 s> *(arg3 + 0x3c))
    sub_1405a4cf0(&arg3[6])

*(arg3[6] + (rdi_6 << 2)) = 9
int64_t rdi_7 = sx.q(arg3[7].d)
int32_t rax_18 = (rdi_7 + 1).d
arg3[7].d = rax_18

if (rax_18 s> *(arg3 + 0x3c))
    sub_1405a4cf0(&arg3[6])

*(arg3[6] + (rdi_7 << 2)) = 0xa
int64_t rax_19
rax_19.b = 1
return rax_19
