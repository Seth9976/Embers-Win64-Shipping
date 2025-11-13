// 函数: sub_14226f910
// 地址: 0x14226f910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[0x53]
int64_t rax

if (rbx == 0)
label_14226f94c:
    rbx = data_143f4c9e0
    
    if (rbx == 0 || *(rbx + 0x30) != arg1 || rbx == 0)
        rax.b = 1
        return rax
else
    void* rax_1 = sub_14254f450()
    arg2 = *(rbx + 0x10)
    arg3 = rax_1 + 0x30
    rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s> *(arg2 + 0x38))
        goto label_14226f94c
    
    if (*(*(arg2 + 0x30) + (rax << 3)) != arg3)
        goto label_14226f94c
int64_t rcx_3 = *(sub_140d21d80((*(*arg1 + 0x150))(arg1, arg2, arg3)) + 0x18)
void* rax_4
rax_4.b = *(rbx + 0x15a8) == rcx_3
return rax_4
