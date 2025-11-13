// 函数: sub_1423ec100
// 地址: 0x1423ec100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t rbp = *(*(arg1 + 8) + (zx.q(arg2.d) & 0xffffff) * 0x90 + 0x78)

if (rbp != 0)
    int32_t arg_8
    sub_140ba6ab0(arg1 + 0xf0, &arg_8, rbp)
    int64_t rax_3 = sx.q(arg_8)
    void* const rsi_3
    
    if (rax_3.d == 0xffffffff)
        rsi_3 = nullptr
    else
        rsi_3 = rax_3 * 0x60 + *(arg1 + 0xf0)
    
    int64_t* rcx_1 = rsi_3 + 8
    
    if (rsi_3 == 0)
        rcx_1 = nullptr
    
    sub_1423ebfb0(rcx_1, &arg_10)
    int32_t* r8_2 = rsi_3 + 0x3c
    
    if (rsi_3 == 0)
        r8_2 = 0x34
    
    void* rax_4 = rsi_3 + 0x10
    
    if (rsi_3 == 0)
        rax_4 = 8
    
    if (*rax_4 == *r8_2)
        sub_140d3e570(arg1 + 0xf0, rbp)

uint64_t rbx_1 = zx.q(arg2.d) & 0xffffff
void* rsi_6 = rbx_1 * 0x90 + *(arg1 + 8)

if (*(rsi_6 + 0x30) != 0)
    void* rax_6 = *(rsi_6 + 0x40)
    void* rcx_3 = rsi_6 + 0x50
    
    if (rax_6 != 0)
        rcx_3 = rax_6
    
    (*(*rcx_3 + 0x10))(rcx_3)

sub_140745b20(rsi_6 + 0x10)
void* r8_3 = arg1 + 0x18

if (*(arg1 + 0x3c) != 0)
    *(*(arg1 + 8) + sx.q(*(arg1 + 0x38)) * 0x90) = rbx_1.d

int32_t rcx_8 = -1
int32_t* rax_12 = rbx_1 * 0x90 + *(arg1 + 8)
*rax_12 = 0xffffffff

if (*(arg1 + 0x3c) s> 0)
    rcx_8 = *(arg1 + 0x38)

rax_12[1] = rcx_8
*(arg1 + 0x3c) += 1
*(arg1 + 0x38) = rbx_1.d
void* rax_13 = *(r8_3 + 0x10)

if (rax_13 != 0)
    r8_3 = rax_13

uint64_t result = rbx_1 u>> 5
*(r8_3 + (result << 2)) &= not.d(rol.d(1, rbx_1.b))
return result
