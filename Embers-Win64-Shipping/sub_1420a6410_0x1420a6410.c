// 函数: sub_1420a6410
// 地址: 0x1420a6410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx
int64_t* arg_8 = rbx
void* rbp = nullptr
int32_t i = 0

if (*(arg1 + 0x40) s> 0)
    rbx = nullptr
    
    do
        int64_t* rcx = *(rbx + *(arg1 + 0x38))
        int64_t r8_1 = *rcx
        (*(r8_1 + 0x278))(rcx, *(*(*(arg1 + 0x28) + 0x30) + rbx), r8_1)
        i += 1
        rbx = &rbx[1]
    while (i s< *(arg1 + 0x40))

*(arg1 + 0x40) = 0

if (*(arg1 + 0x44) != 0)
    sub_1405c5570(arg1 + 0x38, 0)

void* rcx_2 = *(arg1 + 0x28)
rbx.b = 0
int64_t i_2 = sx.q(*(rcx_2 + 0x38))
int64_t* rax

if (i_2 s> 0)
    int64_t* rcx_3 = *(rcx_2 + 0x30)
    int64_t i_1
    
    do
        rax = *rcx_3
        rcx_3 = &rcx_3[1]
        rbx = zx.q(rbx.b)
        
        if ((rax[0xd].b & 0x10) != 0)
            rbx = 1
        
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

void* rsi = *(arg1 + 0x30)

if (rsi == 0)
    return 

int32_t rax_3 = *(rsi + 0xc)

if (rax_3 s< data_143e1d9b4)
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_3)
    uint32_t rdx_4 = zx.d(temp0_1)
    int32_t rax_5 = temp1_1 + rdx_4
    rbp = *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_4) * 0x18

if (((*(rbp + 8) u>> 0x1d).b & 1) != 0)
    return 

rax = sub_140d21950(rsi, sub_142545970())

if (rax != 0 && rbx.b != 0)
    int64_t r8_2 = *rax
    (*(r8_2 + 0x50))(rax, *(arg1 + 0x28), r8_2)
