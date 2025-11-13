// 函数: sub_1423484f0
// 地址: 0x1423484f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d96150(arg1 + 0x120, arg2)
int512_t zmm1
zmm1.o = arg4
(*(*(arg1 - 0xc8) + 0x108))(arg1 - 0xc8, zmm1)
int64_t* rcx_2 = *(arg1 - 0x30)

if (rcx_2 != 0)
    zmm1.o = arg4
    (*(*rcx_2 + 0x38))(rcx_2, zmm1)

int64_t* rcx_3 = *(arg1 - 0x98)

if (rcx_3 != 0 && (*(*rcx_3 + 0x30))(rcx_3, zmm1) != 0)
    int64_t* rcx_4 = *(arg1 - 0x98)
    
    if (*((*(*rcx_4 + 0x30))(rcx_4, zmm1) + 0x1b0) != 0)
        int64_t* rcx_5 = *(arg1 - 0x98)
        void* rdi = **(data_143e29f28 + 0x20)
        *((*(*rcx_5 + 0x30))(rcx_5) + 0x1b0)
        jump(*(rdi + 0x140))

jump(*(**(data_143e29f28 + 0x20) + 0x140))
