// 函数: sub_141c56da0
// 地址: 0x141c56da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = data_143f34a18
sub_140b34200("SetSubmixOutputVolume", rdi)
int64_t* rcx = *arg1
int512_t zmm2
zmm2.o = arg1[2].d
(*(*rcx + 0x100))(rcx, arg1[1], zmm2)
return sub_140b38680("SetSubmixOutputVolume", rdi) __tailcall
