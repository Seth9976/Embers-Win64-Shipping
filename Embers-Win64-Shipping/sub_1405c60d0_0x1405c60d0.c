// 函数: sub_1405c60d0
// 地址: 0x1405c60d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0xe0)
int512_t zmm2

if (rbx == 0)
    *(arg1 + 0xf0) = 0
else
    int64_t* rcx = *(arg1 + 0xf0)
    int64_t rax_1
    
    if (rcx != 0)
        rax_1 = sub_141bb9010(rcx)
    
    if (rcx == 0 || rax_1 != rbx)
        void* rax_2
        rax_2, zmm2 = sub_142121cc0(rbx, arg1)
        *(arg1 + 0xf0) = rax_2

*arg3 = *(arg1 + 0xf0)
int64_t rbx_1 = *(arg1 + 0xe8)
void* rbp = *(arg1 + 0xf0)
int64_t result = sub_1422e34d0(arg1 + 0x28, arg2 + 0x2b0)

if (rbp != 0)
    zmm2.o = *(arg2 + 0x4c8)
    result = sub_142131b70(rbp, rbx_1)

*(arg2 + 0x258) |= 2
return result
