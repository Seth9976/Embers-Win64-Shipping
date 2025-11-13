// 函数: sub_140a06420
// 地址: 0x140a06420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (rbx.d s>= arg1[0x8a].d)
    sub_140a06350(&arg1[0x89], (rbx + 1).d, 0)

int64_t* rbx_2 = (rbx << 6) + arg1[0x89]
sub_1409fb6b0(rbx_2, arg3)
sub_14086c240(&rbx_2[2], &arg3[2])
*(rbx_2 + 0x20) = *(arg3 + 0x20)
rbx_2[6] = arg3[6]
rbx_2[7].d = arg3[7].d
*(rbx_2 + 0x3c) = *(arg3 + 0x3c)
*(rbx_2 + 0x3d) = *(arg3 + 0x3d)
sub_140a092f0(arg1)
sub_140a09030(arg1)
return sub_141ee8490(arg1) __tailcall
