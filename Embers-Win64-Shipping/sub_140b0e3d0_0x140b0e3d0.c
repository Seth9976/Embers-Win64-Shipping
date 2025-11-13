// 函数: sub_140b0e3d0
// 地址: 0x140b0e3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx_1

if (arg1[2] == 0)
    rbx_1 = 0x3f0

int32_t rax_3

if (arg1[2] != 0 || arg2 + 0x10 s> 0x3f0)
    rax_3 = (arg2 + 0x1000f) & 0xffff0000
    rbx_1 = zx.q(rax_3)

int64_t* rdx_1

if ((arg1[2] == 0 && arg2 + 0x10 s<= 0x3f0) || rax_3 != 0x10000)
    rdx_1 = sub_140a82f30(rbx_1, 0)
else
    int64_t* rax_4 = sub_14059e7c0(&data_143de6788)
    rdx_1 = rax_4
    
    if (rax_4 == 0)
        rdx_1 = sub_140a82f70(0x10000, rdx_1)

rdx_1[1].d = (rbx_1 - 0x10).d
*rdx_1 = arg1[2]
arg1[2] = rdx_1
*arg1 = &rdx_1[2]
void* result = sx.q(rdx_1[1].d) + &rdx_1[2]
arg1[1] = result
return result
