// 函数: sub_141dc5110
// 地址: 0x141dc5110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_142458280()
void* rbx = rax[0x23]

if (rbx != 0)
label_141dc514e:
    void* rax_1 = sub_142458280()
    void* rdx_2 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        *arg1 = *(rbx + 0x40)
        return arg1
else
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rbx = rax[0x23]
    
    if (rbx != 0)
        goto label_141dc514e

void arg_8
*arg1 = *sub_140b58260(&arg_8, &data_142d40450, 1)
return arg1
