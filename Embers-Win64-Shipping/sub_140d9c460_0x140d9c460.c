// 函数: sub_140d9c460
// 地址: 0x140d9c460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x68)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    int64_t* rcx = &rbx[3]
    *rbx = &data_142ec3110
    rbx[1] = 0
    rbx[2] = 0
    rcx[2] = 0
    rcx[3].d = 0
    *(rcx + 0x1c) = 0x80
    int64_t* rax_1 = rcx[2]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    *rcx = 0
    rcx[1] = 0
    rbx[7].d = 0xffffffff
    *(rbx + 0x3c) = 0
    rbx[9] = 0
    rbx[0xa].d = 0
    rbx[0xb] = *arg2
    void* rax_3 = arg2[1]
    rbx[0xc] = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1

void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 == 0)
    rax_4 = nullptr
else
    rax_4[1].d = 1
    *rax_4 = &data_142d42ea8
    *(rax_4 + 0xc) = 1
    rax_4[2] = rbx

*arg1 = rbx
arg1[1] = rax_4
return arg1
