// 函数: sub_141dd9580
// 地址: 0x141dd9580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_142458280()
void* rbx = rax[0x23]
int64_t result

if (rbx != 0)
label_141dd95bd:
    void* rax_1 = sub_142458280()
    void* rdx_2 = *(rbx + 0x10)
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (result << 3)) == rax_1 + 0x30
            && (*(rbx + 0x50) == 1 || arg1 != 3))
        result.b = 1
        return result
else
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rbx = rax[0x23]
    
    if (rbx != 0)
        goto label_141dd95bd

result.b = 0
return result
