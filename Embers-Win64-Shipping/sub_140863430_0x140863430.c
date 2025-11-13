// 函数: sub_140863430
// 地址: 0x140863430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*arg1 = &data_142d44d70
int64_t arg_8

if (data_143de5432 == 0)
    void* rcx = data_143e1a338
    
    if (rcx == 0)
        void* rax_1 = sub_140cde0b0()
        sub_140d19010(rax_1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        arg_8 = 0
        void* rax_3 = sub_140d2dfc0(sub_140baa6d0(), rax_1, 0, 0, 0, 0, 0, 0, 0)
        data_143e1a338 = rax_3
        int32_t rax_4 = *(rax_3 + 0xc)
        void* const rax_11
        
        if (rax_4 s>= data_143e1d9b4)
            rax_11 = nullptr
        else
            int16_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rax_4)
            uint32_t rdx_2 = zx.d(temp1_1)
            int32_t rax_6 = temp2_1 + rdx_2
            rax_11 =
                *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18
        
        *(rax_11 + 8) |= 0x40000000
        rcx = data_143e1a338
    
    sub_140b9aa70(rcx, arg1)
    arg1[1].b = 1

arg1[2] = arg2
int64_t i_3 = 7
*arg1 = &data_142ddc568
int64_t i_4 = 7
void* rbx_2 = &arg1[3]
int64_t i

do
    sub_1423b9d00(rbx_2)
    *rbx_2 = &data_142ddc548
    rbx_2 += 0x30
    i = i_4
    i_4 -= 1
while (i != 1)
arg1[0x2d] = 0
void* rcx_8 = &arg1[0x2f]
arg1[0x2e] = 0
void* r8 = &arg1[0x37]
*(rcx_8 + 0x10) = 0
*(rcx_8 + 0x18) = 0
*(rcx_8 + 0x1c) = 0x80
void* rax_12 = *(rcx_8 + 0x10)

if (rax_12 != 0)
    rcx_8 = rax_12

void* rax_13 = r8 + 0x20
*rcx_8 = 0
*(rcx_8 + 8) = 0
arg1[0x33].d = 0xffffffff
*(arg1 + 0x19c) = 0
arg1[0x35] = 0
arg1[0x36].d = 0
int64_t i_1

do
    *r8 = 0
    void* rdx_5 = rax_13 - 0x10
    *(rax_13 - 0x18) = 0
    r8 += 0x50
    *rax_13 = 0
    *(rax_13 + 8) = 0
    *(rax_13 + 0xc) = 0x80
    void* rcx_9 = *rax_13
    rax_13 += 0x50
    
    if (rcx_9 != 0)
        rdx_5 = rcx_9
    
    *rdx_5 = 0
    *(rdx_5 + 8) = 0
    *(rax_13 - 0x40) = 0xffffffff
    *(rax_13 - 0x3c) = 0
    *(rax_13 - 0x30) = 0
    *(rax_13 - 0x28) = 0
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
arg1[0x7d].d = 0xffffffff
*(arg1 + 0x3ec) = 0
arg1[0x8a] = 0
arg1[0x8b].d = 0
*(arg1 + 0x45c) = 8
InitializeSRWLock(&arg1[0x8d])
arg1[0x8e] = 0
void* rcx_11 = &arg1[0x90]
arg1[0x8f] = 0
int32_t i_2 = 0
*(rcx_11 + 0x10) = 0
*(rcx_11 + 0x18) = 0
*(rcx_11 + 0x1c) = 0x80
void* rax_14 = *(rcx_11 + 0x10)

if (rax_14 != 0)
    rcx_11 = rax_14

*rcx_11 = 0
*(rcx_11 + 8) = 0
void* rcx_12 = &arg1[0x9c]
arg1[0x94].d = 0xffffffff
*(arg1 + 0x4a4) = 0
arg1[0x96] = 0
arg1[0x97].d = 0
void* rbx_4 = arg1 + 0x22
__builtin_memset(&arg1[0x98], 0, 0x20)
*(rcx_12 + 0x10) = 0
*(rcx_12 + 0x18) = 0
*(rcx_12 + 0x1c) = 0x80
void* rax_15 = *(rcx_12 + 0x10)

if (rax_15 != 0)
    rcx_12 = rax_15

*rcx_12 = 0
*(rcx_12 + 8) = 0
arg1[0xa0].d = 0xffffffff
*(arg1 + 0x504) = 0
arg1[0xa2] = 0
arg1[0xa3].d = 0
arg1[0xa4].b = 1

do
    char rax_16 = i_2.b
    *(rbx_4 - 2) = rax_16
    bool cond:1_1 = data_14396ff28 != 0
    *(rbx_4 + 0x1e) = arg1
    
    if (cond:1_1)
        rax_16 = 6
    
    *(rbx_4 - 1) = rax_16
    *rbx_4 = (*rbx_4 & 0xf7) | 0x16
    sub_1423c6c10(rbx_4 - 0xa, *(arg2 + 0x30))
    i_2 += 1
    rbx_4 += 0x30
while (i_2 s< 7)

void* rax_18 = sub_140cde0b0()
sub_140d19010(rax_18, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8 = 0
arg1[0x8c] = sub_140d2dfc0(sub_1408734b0(), rax_18, 0, 0, 0, 0, 0, 0, 0)
return arg1
