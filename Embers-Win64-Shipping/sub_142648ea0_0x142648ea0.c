// 函数: sub_142648ea0
// 地址: 0x142648ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg1[0x191].d)

if (r10.d == 0)
    int512_t zmm2
    zmm2.o = data_142d3f660
    *arg1 = 0.o
    __builtin_memcpy(&arg1[1], 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x"
    "00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x20)
    int128_t var_18
    arg1[3] = var_18
    return 

int32_t r11 = (r10 - 1).d
void* rax = arg1[0x190].q
void* rdx = &arg1[4]

if (rax != 0)
    rdx = rax

int64_t rax_2 = sx.q(r11) << 6
*arg1 = *(rdx + rax_2)
arg1[1] = *(rdx + rax_2 + 0x10)
arg1[2] = *(rdx + rax_2 + 0x20)
arg1[3] = *(rdx + rax_2 + 0x30)
int32_t rax_3 = arg1[0x191].d
int32_t rcx_1 = rax_3 - r11

if (rcx_1 != 1)
    void* rax_4 = arg1[0x190].q
    void* r9_1 = &arg1[4]
    
    if (rax_4 != 0)
        r9_1 = rax_4
    
    memmove((sx.q(r11) << 6) + r9_1, (r10 << 6) + r9_1, (rcx_1 - 1) << 6)
    rax_3 = arg1[0x191].d

arg1[0x191].d = rax_3 - 1
return sub_1409da9e0(&arg1[4]) __tailcall
