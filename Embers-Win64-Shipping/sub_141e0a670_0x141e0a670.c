// 函数: sub_141e0a670
// 地址: 0x141e0a670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x31) |= 4
int128_t zmm6 = arg2
sub_141e30570(&arg1[0x20], arg1[4])
arg1[0x3e].d = 0

if (*(arg1 + 0x1f4) s<= 0xffffffff)
    sub_1405a52a0(&arg1[0x3d], 0)

void* rdi = arg1[4]

if (rdi != 0)
    void* rax_1 = sub_142591550()
    void* rdx_1 = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* r8_1
        r8_1.b = 1
        zmm6 = sub_141f3e990(arg1[4], 1, r8_1.b)

int64_t* rcx_5 = arg1[0x48]

if (rcx_5 == 0)
    int64_t* rax_5 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_5
    rcx_5 = rax_5

int512_t zmm2
zmm2.o = zmm6
jump(*(*rcx_5 + 0x18))
