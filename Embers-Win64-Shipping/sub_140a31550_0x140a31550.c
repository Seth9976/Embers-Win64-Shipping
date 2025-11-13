// 函数: sub_140a31550
// 地址: 0x140a31550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int16_t* const rsi = &data_142d40450
int32_t rbp = 0
int32_t rax

if (arg1[1].d != 0)
    int64_t* rax_1 = *arg1
    int16_t* const rcx
    
    if (rax_1[1].d == 0)
        rcx = &data_142d40450
    else
        rcx = *rax_1
    
    rax = sub_140a54510(rcx, u"abovenormal")

if (arg1[1].d != 0 && rax == 0)
    rbp = rax + 1
else if (arg1[1].d != 0)
    int16_t** rax_2 = *arg1
    
    if (rax_2[1].d != 0)
        rsi = *rax_2
    
    if (sub_140a54510(rsi, u"belownormal") == 0)
        rbp = 2

void* rsi_1 = data_143cf8c40

if (*(rsi_1 + 0x7b8) s<= 0)
    return 

void* rdi_1 = rsi_1 + 0x10

do
    if (i s> *(rsi_1 + 0x7cc))
        int64_t* rcx_2 = *rdi_1
        (**rcx_2)(rcx_2, zx.q(rbp))
    
    i += 1
    rdi_1 += 0x18
while (i s< *(rsi_1 + 0x7b8))
