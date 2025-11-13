// 函数: sub_1417cfa60
// 地址: 0x1417cfa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_20 = 0
int64_t* (* var_28)(void* arg1) = sub_1417cfbc0
void*** rax = sub_140a84c80(0, 0x30, 0)
void*** var_38 = rax
void*** rdi = rax

if (rax != 0)
    *rdi = &data_142e33ea8
    sub_140d3a3a0(&rdi[1], arg1 - 0x408)
    *(rdi + 0x10) = var_28.o
    rdi[5] = sub_140a387b0()
    *rdi = &data_142e33f00

int64_t* rax_2 = sub_140958da0(&var_28, nullptr, 0xff)
int64_t* rbx_2 = *rax_2 + 0x10
*rbx_2 = 0
rbx_2[1].d = 0

if (&var_38 != rbx_2 && rdi != 0)
    void** r8_1 = *rdi
    r8_1[8](rdi, rbx_2, r8_1)

rbx_2[2].d = 2
void* rcx_3 = *rax_2
int32_t r8_2 = rax_2[2].d
int64_t* rdx_3 = rax_2[1]
int64_t* rbx_3 = *(rcx_3 + 0x30)
int64_t* arg_18 = rbx_3
int32_t* rsi_1 = &rbx_3[9]

if (rbx_3 != 0)
    *rsi_1 += 1
    rdi = var_38
    rbx_3 = arg_18

uint64_t result = sub_140978a40(rcx_3, rdx_3, r8_2, 1)

if (rbx_3 != 0)
    result = zx.q(*rsi_1)
    *rsi_1 -= 1
    
    if (result.d == 1)
        result = sub_140a2f6e0(arg_18)
    
    rdi = var_38

if (rdi != 0)
    (*rdi)[7](rdi, 0)
    result = sub_140a84c80(rdi, 0, 0)
    
    if (result != 0)
        return sub_140a74f90(result)

return result
