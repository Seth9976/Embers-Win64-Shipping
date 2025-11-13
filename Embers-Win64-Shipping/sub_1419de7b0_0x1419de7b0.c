// 函数: sub_1419de7b0
// 地址: 0x1419de7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142427bf0(arg1)
*arg1 = &data_1430131c8
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"ProceduralFoliageComponent", 1)
int64_t* rax_1 = sub_1419e8ca0()
void* rax_2 = sub_140d1dc20(arg2, arg1, rbx, rax_1, rax_1, 1, 0)
arg1[0x4b] = rax_2
*(rax_2 + 0xc0) = arg1
int64_t* rbx_1 = arg1[0x47]

if (rbx_1 != 0)
    (*(*rbx_1 + 0x628))(rbx_1, 0)
    (*(*rbx_1 + 0x808))(rbx_1, 0)
    sub_141f256b0(rbx_1, 0)

return arg1
