// 函数: sub_141e47e10
// 地址: 0x141e47e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg1[0x4d])
    return 

void* rsi_1 = arg1[4]

if (rsi_1 != 0)
    void* rax_1 = sub_142591550()
    void* rdx = *(rsi_1 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* r8
        r8.b = 1
        sub_141f3e990(arg1[4], 1, r8.b)

void* rsi_2 = arg1[0x48]

if (rsi_2 == 0)
    void* rax_5 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_5
    rsi_2 = rax_5

*(rsi_2 + 0x800) = 0
*(rsi_2 + 0x808) = 0
sub_141e07230(arg1, arg2, *(rsi_2 + 0x820), 0, (zx.o(0)).d, 1)
int32_t rcx_4
rcx_4.b = sub_140b5b8a0(arg3.d, 0) == 0

if ((arg3:4.d != 0 | rcx_4.b) != 0)
    sub_141e06f30(arg1, arg3, 0)

int512_t zmm1_1
int512_t zmm2_1
zmm1_1, zmm2_1 = sub_141e49710(arg1, arg2, *(rsi_2 + 0x824), arg3)
zmm1_1.o = arg2[0x16].d
(*(*arg1 + 0x288))(arg1, zmm1_1)
void* rsi_3 = arg1[0x4d]

if (rsi_3 == 0)
    return 

void* rax_8 = sub_1424641d0()
void* rdx_4 = *(rsi_3 + 0x10)
int64_t* rax = sx.q(*(rax_8 + 0x38))

if (rax.d s> *(rdx_4 + 0x38) || (*(rdx_4 + 0x30))[rax] != rax_8 + 0x30)
    return 

void* rbx_1 = arg1[4]

if (rbx_1 != 0)
    void* rax_9 = sub_142591550()
    void* rdx_5 = *(rbx_1 + 0x10)
    int64_t rax_10 = sx.q(*(rax_9 + 0x38))
    
    if (rax_10.d s<= *(rdx_5 + 0x38) && *(*(rdx_5 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
        void* r8_3
        r8_3.b = 1
        sub_141f3e990(arg1[4], 1, r8_3.b)

void* rbx_2 = arg1[0x48]

if (rbx_2 == 0)
    void* rax_13 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_13
    rbx_2 = rax_13

sub_141e0fe70(arg1)

if (*(rsi_3 + 0x160) s> 0)
    zmm2_1.o = 0x3f800000
    sub_141e4b6a0(rbx_2, **(rsi_3 + 0x158))
