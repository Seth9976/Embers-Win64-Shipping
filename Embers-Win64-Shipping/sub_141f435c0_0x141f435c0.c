// 函数: sub_141f435c0
// 地址: 0x141f435c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1[0x18]
int64_t rdi = 0

if (rdx != 0 && sub_141f32b40(arg1, rdx, &data_143f3f280, arg1[0x19]) == 0)
    *(arg1 + 0x14c) &= 0x3f
    *(arg1 + 0x14d) &= 0xfe
    arg1[0x19] = 0
    arg1[0x18] = 0
    int64_t arg_8 = 0

void* rax_3
int512_t zmm0_1

if (arg1[0x15] == 0)
    rax_3, zmm0_1 = sub_141ee69e0(arg1)

if (arg1[0x15] != 0 || rax_3 != 0)
    void* rax_4
    rax_4, zmm0_1 = sub_141ee26c0(arg1)
    
    if (rax_4 != 0)
        rdi = *(rax_4 + 0x248)
    
    arg1[0x16] = rdi

return sub_141ee9b30(arg1, zmm0_1) __tailcall
