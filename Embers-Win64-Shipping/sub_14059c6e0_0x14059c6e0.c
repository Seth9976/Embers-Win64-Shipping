// 函数: sub_14059c6e0
// 地址: 0x14059c6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = data_143f5b298
void* rax_1
int64_t rax_2
void* rcx_1

if (rbx != 0)
    rax_1 = sub_1424ad0c0()
    rcx_1 = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

void* rax_4

if (rbx != 0 && rax_2.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
    rax_4 = sub_142004920(rbx)
    goto label_14059c72f

if (data_143de5451 != 0)
    rax_4 = data_143f5e920
label_14059c72f:
    
    if (rax_4 != 0)
        int32_t result
        result.b = sub_14243ac50(rax_4) - 1 u<= 1
        return result

int64_t rax_6
rax_6.b = false
return 0xffffff00
