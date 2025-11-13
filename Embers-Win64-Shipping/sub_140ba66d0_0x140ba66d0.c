// 函数: sub_140ba66d0
// 地址: 0x140ba66d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg2
int64_t rsi = 0
int64_t* rbx_1 = sx.q(arg1) * 0x38 + r9
int32_t r8 = rbx_1[1].d

if (r8 s>= 0)
    goto label_140ba6711

int32_t r8_1 = not.d(r8)
rsi = *(sx.q(r8_1) * 0x38 + r9 + 0x20)

if (rsi == 0)
    rsi = sub_140ba66d0(zx.q(r8_1))
label_140ba6711:
    
    if (rsi == 0 && rbx_1[1].d != rsi.d)
        return 0

int64_t var_28
int64_t* rax_4 = sub_140b63b70(rbx_1 + 0xc, &var_28)
int16_t* const rdi = &data_142d40450
int16_t* rbp

if (rax_4[1].d == 0)
    rbp = &data_142d40450
else
    rbp = *rax_4

void* rax_6 = sub_140d2ee50(sub_140cddea0(), nullptr, rbp, 0)
int64_t rcx_4 = var_28

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

if (rax_6 != 0)
    int64_t var_18
    int64_t* rax_7 = sub_140b63b70(rbx_1 + 0x14, &var_18)
    
    if (rax_7[1].d != 0)
        rdi = *rax_7
    
    void* rax_9 = sub_140d2ee50(sub_140bdf2e0(), rax_6, rdi, 0)
    int64_t rcx_7 = var_18
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    if (rax_9 != 0 && ((*(rax_9 + 8) u>> 0xa).b & 1) == 0 && *(rax_9 + 0x118) != 0)
        int32_t var_38_1 = 0
        return sub_140d2f0c0(rax_9, rsi, *rbx_1, 0, 0, 0)

return 0
