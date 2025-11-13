// 函数: sub_140ae8df0
// 地址: 0x140ae8df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ae8260(arg1, arg2, arg3)

if ((arg1[5].b & 1) != 0)
    int64_t rcx = arg2[8]
    
    if (rcx != 0)
        arg2[8] = sub_140a84c80(rcx, 0, 0)
    
    arg2[9].d = 0
    zmm1 = sub_140a6d3f0(arg2, arg2[1].d - *(arg2 + 0x34), 0)

sub_140a647c0(arg1, &arg2[0xa], zmm1)

if ((arg1[5].b & 1) != 0)
    int64_t rcx_3 = arg2[0x12]
    
    if (rcx_3 != 0)
        arg2[0x12] = sub_140a84c80(rcx_3, 0, 0)
    
    arg2[0x13].d = 0
    sub_1405b67e0(&arg2[0xa], arg2[0xb].d - *(arg2 + 0x84), 0)

return arg1
