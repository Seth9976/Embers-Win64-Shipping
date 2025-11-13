// 函数: sub_1419c23e0
// 地址: 0x1419c23e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].w = 0
*arg1 = &data_142fdd510
int64_t rbx = sx.q(data_143f13788)
int32_t rax = (rbx + 1).d
bool cond:0 = rax s<= data_143f1378c
data_143f13788 = rax

if (not(cond:0))
    sub_1405a4d70(&data_143f13780)

void* rcx = &arg1[0xe]
int64_t rdi = 0
*(data_143f13780 + (rbx << 3)) = arg1
*arg1 = &data_14300ea08
arg1[1].b = 1
__builtin_memset(&arg1[2], 0, 0x30)
arg1[8] = &data_142efce08
__builtin_memset(&arg1[9], 0, 0x14)
arg1[0xc] = 0
arg1[0xd] = 0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
*(rcx + 8) = 0
arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
arg1[0x14] = 0
arg1[0x15].d = 0
arg1[0x16] = 0
arg1[0x17] = 0
__builtin_memset(arg1 + 0xc4, 0, 0x21)
__builtin_memset(&arg1[0x1d], 0, 0x28)
InitializeCriticalSection(&arg1[0x22])
SetCriticalSectionSpinCount(&arg1[0x22], 0xfa0)
__builtin_memset(&arg1[0x27], 0, 0x28)
void* rcx_3 = &arg1[0x35]
arg1[0x2c] = &data_142efce08
__builtin_memset(&arg1[0x2d], 0, 0x14)
arg1[0x30] = 0
arg1[0x31] = 0
arg1[0x32].d = 0xffffffff
arg1[0x33] = 0
arg1[0x34] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_3 = *(rcx_3 + 0x10)

if (rax_3 != 0)
    rcx_3 = rax_3

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x39].d = 0xffffffff
*(arg1 + 0x1cc) = 0
arg1[0x3b] = 0
arg1[0x3c].d = 0
arg1[0x3d].d = 0
arg1[0x3e] = 0
char rax_4 = data_143de5480
int64_t rbx_1 = data_143f20220
int64_t rcx_4

if (rax_4 == 0)
    rcx_4 = 0
else
    bool cond:1_1 = GetCurrentThreadId() != data_143de5470
    rax_4 = data_143de5480
    rcx_4.b = cond:1_1

int32_t rdx_2 = *(rbx_1 + (rcx_4 << 2))
int32_t zmm0

if (rdx_2 == 0)
    int64_t rbx_5 = data_143f20250
    int64_t rcx_8
    
    if (rax_4 == 0)
        rcx_8 = 0
    else
        rcx_8.b = GetCurrentThreadId() != data_143de5470
    
    *(arg1 + 0xd4) = *(rbx_5 + (rcx_8 << 2))
    int64_t rbx_6 = data_143f20298
    int64_t rcx_9
    
    if (data_143de5480 == 0)
        rcx_9 = 0
    else
        rcx_9.b = GetCurrentThreadId() != data_143de5470
    
    zmm0 = *(rbx_6 + (rcx_9 << 2))
    *(arg1 + 0xdc) = 1
else
    void* rbx_3
    
    if (rdx_2 == 2)
        int64_t rbx_4 = data_143f20238
        int64_t rcx_6
        
        if (rax_4 == 0)
            rcx_6 = 0
        else
            rcx_6.b = GetCurrentThreadId() != data_143de5470
        
        *(arg1 + 0xd4) = *(rbx_4 + (rcx_6 << 2))
        rbx_3 = data_143f20280
    else
        int64_t rbx_2 = data_143f20250
        int64_t rcx_5
        
        if (rax_4 == 0)
            rcx_5 = 0
        else
            rcx_5.b = GetCurrentThreadId() != data_143de5470
        
        *(arg1 + 0xd4) = *(rbx_2 + (rcx_5 << 2))
        rbx_3 = data_143f20298
    
    if (data_143de5480 == 0)
        zmm0 = *rbx_3
    else
        int64_t rcx_7
        rcx_7.b = GetCurrentThreadId() != data_143de5470
        zmm0 = *(rbx_3 + (rcx_7 << 2))

arg1[0x1b].d = zmm0
int64_t rbx_7 = data_143f20250
int64_t rcx_10

if (data_143de5480 == 0)
    rcx_10 = 0
else
    rcx_10.b = GetCurrentThreadId() != data_143de5470

*(arg1 + 0xd4) = *(rbx_7 + (rcx_10 << 2))
int64_t rbx_8 = data_143f20298
int64_t rcx_11

if (data_143de5480 == 0)
    rcx_11 = 0
else
    rcx_11.b = GetCurrentThreadId() != data_143de5470

arg1[0x1b].d = *(rbx_8 + (rcx_11 << 2))
void*** rax_18 = sub_140a84c80(0, 0x20, 0)

if (rax_18 != 0)
    *rax_18 = &data_142d40dc0
    rax_18[1] = sub_1419d4290
    rax_18[3] = sub_140a387b0()
    *rax_18 = &data_142d40e18

if (rax_18 != 0)
    sub_140599630(&data_14399ff28, 1)
    void arg_8
    (*rax_18)[6](rax_18, &arg_8)
    int64_t rbp_1 = sx.q(data_14399ff30)
    int32_t rax_21 = (rbp_1 + 1).d
    bool cond:12_1 = rax_21 s<= data_14399ff34
    data_14399ff30 = rax_21
    
    if (not(cond:12_1))
        sub_1405a4f90(&data_14399ff28)
    
    void**** rax_24 = (rbp_1 << 4) + data_14399ff28
    *rax_24 = rax_18
    rax_24[1].d = 2

char rax_26 = data_143de5480
int64_t rbx_10 = data_143f20340
int64_t rcx_13

if (rax_26 == 0)
    rcx_13 = 0
else
    bool cond:13_1 = GetCurrentThreadId() != data_143de5470
    rax_26 = data_143de5480
    rcx_13.b = cond:13_1

int64_t rbx_11

if (*(rbx_10 + (rcx_13 << 2)) != 0)
    rbx_11 = data_143f20358
    
    if (rax_26 != 0)
        rdi.b = GetCurrentThreadId() != data_143de5470

if (*(rbx_10 + (rcx_13 << 2)) == 0 || *(rbx_11 + (rdi << 2)) != 0)
    *(arg1 + 0xde) = 1
else
    *(arg1 + 0xde) = 0

return arg1
