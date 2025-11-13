// 函数: sub_1420e6170
// 地址: 0x1420e6170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x128) == 0)
    int64_t result
    result.b = 0
    return result

void* rcx

if (sub_140d23dc0(arg1, 0x30) == 0)
    rcx = *(arg1 + 0x20)
else
    rcx = nullptr

int64_t arg_8
int64_t rdi
void arg_10

if (sub_14243ade0(rcx) == 0)
    rdi = *sub_1420e4d10(arg1, &arg_10)
else
    int64_t rax_2 = sx.q(*(arg1 + 0xb0))
    
    if (rax_2.d s< 0 || rax_2.d s>= *(arg1 + 0x60))
        if ((*(arg1 + 0xba) & 2) == 0)
            int64_t var_28
            sub_140d30800(arg1 + 0x38, &var_28)
            int64_t var_18
            int64_t* rax_4 = sub_140baf760(&var_18, &var_28)
            int16_t* rdx_3
            
            if (rax_4[1].d == 0)
                rdx_3 = &data_142d40450
            else
                rdx_3 = *rax_4
            
            *(arg1 + 0x138) = *sub_140b58260(&arg_8, rdx_3, 1)
            int64_t rcx_6 = var_18
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int64_t rcx_7 = var_28
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            *(arg1 + 0xba) |= 2
        
        rdi = *(arg1 + 0x138)
    else
        rdi = *(*(arg1 + 0x58) + (rax_2 << 3))
bool rax_9 = *(arg1 + 0xba)

if ((rax_9 & 4) != 0)
    return *(arg1 + 0x140) == rdi

void* rcx_9 = *(arg1 + 0x128)

if (rcx_9 == 0)
    arg_8 = 0
    int64_t rcx_11 = arg_8
    *(arg1 + 0xba) = rax_9 | 4
    *(arg1 + 0x140) = rcx_11
    return rcx_11 == rdi

int64_t rcx_10 = *(sub_140d21d80(rcx_9) + 0x18)
bool rax_8 = *(arg1 + 0xba) | 4
*(arg1 + 0x140) = rcx_10
*(arg1 + 0xba) = rax_8
return rcx_10 == rdi
