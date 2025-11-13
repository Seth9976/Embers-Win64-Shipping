// 函数: sub_14271d5f0
// 地址: 0x14271d5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_14272b570()
void* rcx = rax[0x23]

if (rcx == 0)
    int64_t r8_1 = *rax
    int512_t entry_zmm1
    (*(r8_1 + 0x390))(rax, entry_zmm1, r8_1)
    rcx = rax[0x23]

char* entry_result
*entry_result = *(rcx + 0x44)
*(entry_result + 4) = *(rcx + 0x48)
return entry_result
