// 函数: sub_141ac4ea0
// 地址: 0x141ac4ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

ModQueryFile(arg1)
int64_t i_5 = sx.q(arg1[3].d)
int32_t rbp = 0
arg1[0xc].d = 0

if (i_5.d s> *(arg1 + 0x64))
    sub_1405dadb0(&arg1[0xb], i_5.d)

arg1[0x12].d = 0

if (i_5.d s> *(arg1 + 0x94))
    sub_1405dadb0(&arg1[0x11], i_5.d)

if (i_5.d s> 0)
    int64_t r12_1 = sx.q(arg1[0xc].d)
    int32_t rax_1 = (r12_1 + i_5).d
    arg1[0xc].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x64))
        sub_1406105e0(&arg1[0xb])
    
    memset(arg1[0xb] + (r12_1 << 2), 0, i_5 << 2)
    *arg1[0xb] = 0x3f800000
    int64_t r14_1 = sx.q(arg1[0x12].d)
    int32_t rax_4 = (r14_1 + 1).d
    arg1[0x12].d = rax_4
    
    if (rax_4 s> *(arg1 + 0x94))
        sub_1405a4cf0(&arg1[0x11])
    
    *(arg1[0x11] + (r14_1 << 2)) = 0
    
    if (i_5.d s> 0)
        int64_t rbx_1 = 0
        uint64_t i_4 = zx.q(i_5.d)
        uint64_t i
        
        do
            sub_141e29640(arg1[2] + rbx_1, arg2)
            rbx_1 += 0x10
            i = i_4
            i_4 -= 1
        while (i != 1)

int32_t r14_2 = 0
arg1[0xe].d = 0

if (*(arg1 + 0x74) != i_5.d)
    sub_1405dadb0(&arg1[0xd], i_5.d)
    r14_2 = arg1[0xe].d

int32_t rax_6 = r14_2 + i_5.d
arg1[0xe].d = rax_6

if (rax_6 s> *(arg1 + 0x74))
    sub_1406105e0(&arg1[0xd])

int64_t i_3 = i_5
memset(arg1[0xd] + (sx.q(r14_2) << 2), 0, i_5 << 2)
int32_t rbx_2 = 0
arg1[0xa].d = 0

if (*(arg1 + 0x54) != i_5.d)
    sub_1405a5220(&arg1[9], i_5.d)
    rbx_2 = arg1[0xa].d

int32_t rax_8 = rbx_2 + i_5.d
arg1[0xa].d = rax_8

if (rax_8 s> *(arg1 + 0x54))
    sub_1405c4f50(&arg1[9])

memset(sx.q(rbx_2) * 0x30 + arg1[9], 0, i_5 * 0x30)
int32_t i_1 = 0
*(arg1 + 0x34) = 0xffffffff

if (arg1[0xa].d s> 0)
    do
        int64_t* rbx_5 = sx.q(i_1) * 0x30 + arg1[9]
        sub_141defc90(rbx_5, zx.o(0)[0])
        sub_141defc80(rbx_5, *(arg1 + 0x31))
        sub_141defe60(rbx_5, arg1[7])
        i_1 += 1
    while (i_1 s< arg1[0xa].d)

int64_t result = sub_141defc30(arg1[9], 0x3f800000)

if (arg1[8] != 0)
    sub_141a9a220(&arg1[0xf], i_5.d)
    int64_t rbx_6 = sx.q(arg1[0x10].d)
    int32_t rax_11 = (rbx_6 + i_5).d
    arg1[0x10].d = rax_11
    
    if (rax_11 s> *(arg1 + 0x84))
        sub_1405c4fe0(&arg1[0xf])
    
    result = memset((rbx_6 << 6) + arg1[0xf], 0, i_5 << 6)
    
    if (i_5.d s> 0)
        int32_t* r14_3 = nullptr
        int64_t i_2
        
        do
            int64_t rcx_25 = arg1[0xf]
            void* rbx_7 = r14_3 + rcx_25
            *(r14_3 + rcx_25) = rbp
            int64_t rsi = sx.q(*(rbx_7 + 0x38))
            int64_t r15_1 = sx.q(*(arg1[8] + 0x40))
            int32_t rax_13 = (rsi + r15_1).d
            *(rbx_7 + 0x38) = rax_13
            
            if (rax_13 s> *(rbx_7 + 0x3c))
                sub_1406105e0(rbx_7 + 0x30)
            
            result = memset(*(rbx_7 + 0x30) + (rsi << 2), 0, r15_1 << 2)
            rbp += 1
            r14_3 = &r14_3[0x10]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)

return result
