// 函数: sub_140a660b0
// 地址: 0x140a660b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rbp = &data_142d40450
int32_t r14 = 1
int32_t rax_1
int32_t rcx_1

if (*arg1 != 0)
    int16_t* const rcx
    
    if (*(arg2 + 0x28) == 0)
        rcx = &data_142d40450
    else
        rcx = *(arg2 + 0x20)
    
    rax_1 = sub_140a54510(rcx, u"Hant")
    rcx_1 = 1

if (*arg1 == 0 || rax_1 != 0)
    rcx_1 = 0

int32_t r15 = 4
int32_t rax_2 = 4
int32_t rbx = 2

if (*(arg2 + 0x38) s<= 1)
    rax_2 = 0

int32_t r12 = 2

if (*(arg2 + 0x28) s<= 1)
    r12 = 0

int32_t rax_4

if (*arg1 != 0)
    if (*(arg3 + 0x28) != 0)
        rbp = *(arg3 + 0x20)
    
    rax_4 = sub_140a54510(rbp, u"Hant")

if (*arg1 == 0 || rax_4 != 0)
    r14 = 0

if (*(arg3 + 0x38) s<= 1)
    r15 = 0

if (*(arg3 + 0x28) s<= 1)
    rbx = 0

int32_t result
result.b = r12 + rax_2 + rcx_1 u>= rbx + r14 + r15
return result
