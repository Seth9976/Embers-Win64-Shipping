// 函数: sub_14118aed0
// 地址: 0x14118aed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = sx.q(*(arg2 + 0x70))
void* rsi = nullptr
char r8 = 1

if (i_1 s> 0)
    void* rax_1 = *(arg2 + 0x68)
    void* r10_1 = arg2
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int64_t rax_2 = 0
    int64_t i
    
    do
        if (r8 == 0 || *(rax_2 + r10_1 + 0x44) u<= 0 || *(rax_2 + r10_1 + 0x48) u<= 0)
            r8 = 0
        else
            r8 = 1
        
        rax_2 += 0x68
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (r8 == 0)
        return 0

void* rax_4 = *(arg1 + 0x10)
int64_t rbx = 0x1d50
*(rax_4 + 0x497c) |= 4

if (((*(arg2 + 0x9c) u>> 0xd).b & 7) != 1)
    rbx = 0x1d40

int64_t* rbx_1 = rbx + *(arg1 + 0x10)
void* rax_7 = j_sub_140a82f30(0xa0)

if (rax_7 != 0)
    rsi = sub_140819f30(rax_7, arg2)

int64_t rdi_1 = sx.q(rbx_1[1].d)
int32_t rax_9 = (rdi_1 + 1).d
rbx_1[1].d = rax_9

if (rax_9 s> *(rbx_1 + 0xc))
    sub_140638870(rbx_1)

*(*rbx_1 + (rdi_1 << 3)) = rsi
void* rax_11 = *(arg1 + 0x18)

if (rax_11 != 0)
    *(rsi + 0x90) = *(rax_11 + 0x18)

int64_t var_60 = *(arg1 + 0x28)
void* rax_14 = *(arg1 + 0x10)
void* var_68 = rsi
int32_t rcx_2 = *(rax_14 + 0x1548)

if (sub_140a80f40() == 0)
    uint32_t rax_16
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_16.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_16.b == 0))
        void var_38
        int64_t* rax_17 = sub_141188d00(&var_38, nullptr, 0xff)
        void* rcx_6 = *rax_17
        *(rcx_6 + 0x10) = var_68.o
        *(rcx_6 + 0x20) = rcx_2.q
        void* rcx_7 = *rax_17
        int32_t r8_1 = rax_17[2].d
        int64_t* rdx_4 = rax_17[1]
        int64_t* rbx_2 = *(rcx_7 + 0x30)
        int64_t* arg_18 = rbx_2
        int32_t* rdi_2 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rdi_2 += 1
            rbx_2 = arg_18
        
        sub_14119c2b0(rcx_7, rdx_4, r8_1, 1)
        
        if (rbx_2 != 0)
            int32_t rax_18 = *rdi_2
            *rdi_2 -= 1
            
            if (rax_18 == 1)
                sub_140a2f6e0(arg_18)
    else
        arg3.o = zx.o(rcx_2.q)
        int128_t var_50 = var_68.o
        int64_t var_40_1 = (arg3.o).q
        sub_14117e050(&var_50, arg3)
else
    sub_14117e050(&var_68, arg3)

return 1
