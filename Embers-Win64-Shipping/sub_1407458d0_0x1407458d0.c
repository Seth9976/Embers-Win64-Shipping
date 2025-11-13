// 函数: sub_1407458d0
// 地址: 0x1407458d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d20910()
int512_t zmm1
int512_t zmm2
zmm1, zmm2 = Concurrency::task_canceled::task_canceled(arg1)
void*** rdi = nullptr
arg1[5] = 0
*arg1 = &data_142d9f008
arg1[6] = 0
void*** rax_1 = j_sub_140a82f30(0x1e0)
void*** rax_2

if (rax_1 == 0)
    rax_2 = nullptr
else
    rax_2, zmm1 = sub_140744cf0(rax_1, 0x4000)

int64_t* rcx_2 = arg1[5]
arg1[5] = rax_2

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

arg1[7].d = 0x200
*arg1 = &data_142d9fee0
uint8_t rax_5 = (arg1[1].d u>> 4).b
*(arg1 + 0x3c) = 0x425c0000
arg1[8].d = 0x461c4000
*(arg1 + 0x44) = 0xc2700000

if ((rax_5 & 1) == 0)
    void*** rax_6
    int64_t rdx_1
    int64_t r8_1
    rax_6, rdx_1, r8_1 = j_sub_140a82f30(0x2e8)
    
    if (rax_6 != 0)
        zmm2.o = arg1[8].d
        zmm1.o = *(arg1 + 0x3c)
        rdi = sub_140744b50(rax_6, rdx_1, r8_1, arg1[7].d, *(arg1 + 0x44), 0x4000)
    
    int64_t* rcx_4 = arg1[5]
    arg1[5] = rdi
    
    if (rcx_4 != 0)
        (**rcx_4)(rcx_4, 1)

return arg1
