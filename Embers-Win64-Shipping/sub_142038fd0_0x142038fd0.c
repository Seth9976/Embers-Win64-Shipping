// 函数: sub_142038fd0
// 地址: 0x142038fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_1425b9240()
void* rax_1 = rax[0x23]

if (rax_1 == 0)
    int64_t r9_1 = *rax
    int512_t entry_zmm1
    int512_t entry_zmm2
    (*(r9_1 + 0x390))(rax, entry_zmm1, entry_zmm2, r9_1)
    rax_1 = rax[0x23]

char rax_2 = *(rax_1 + 0x38)
int16_t* entry_result

if (rax_2 != 3)
    char entry_r8
    
    if (rax_2 != 1)
        if (rax_2 != 2 || entry_r8 == 1)
            *entry_result = 0x101
            return entry_result
    else if (entry_r8 != 0)
        *entry_result = 0x101
        return entry_result

*entry_result = 0x100
return entry_result
