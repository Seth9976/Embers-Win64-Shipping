// 函数: sub_141512660
// 地址: 0x141512660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10 = *(arg2 + 8)
void* rdi = arg1
char rcx = arg4.b
int32_t var_54 = arg3[1] s>> rcx
int32_t var_4c = arg3[3] s>> rcx
int32_t r9_1 = arg3[2] s>> rcx
int32_t r11_1 = *arg3 s>> rcx
int32_t temp0 = divs.dp.d(sx.q(r10 - 1 + r9_1), r10)
uint32_t arg_1c = r10
int64_t rcx_1 = r10.q
uint32_t r8_1 = (rcx_1 u>> 0x20).d
int32_t i_1 = divs.dp.d(sx.q((r9_1.q u>> 0x20).d - 1 + r8_1), r8_1)
int32_t r8_2 = *(arg2 + 0x60)
int64_t var_68 = r11_1.q
int32_t temp0_1 = divs.dp.d(sx.q(r11_1), r10)
int32_t r10_1 = temp0_1
var_68.d = temp0_1
int32_t rcx_4 = r8_2 & 0x55555555
var_68:4.d = divs.dp.d(sx.q(var_68:4.d), (rcx_1 u>> 0x20).d)
int32_t r8_4 = r8_2 u>> 1 & 0x55555555
int32_t rdx_8 = (rcx_4 u>> 1 ^ rcx_4) & 0x33333333
int32_t rax_23 = (rdx_8 u>> 2 ^ rdx_8) & 0xf0f0f0f
int32_t rcx_8 = (rax_23 u>> 4 ^ rax_23) & 0xff00ff
uint32_t r9_3 = (zx.d((rcx_8 u>> 8).w) ^ zx.d(rcx_8.w)) u>> arg4.b
uint32_t arg_20 = r9_3
int32_t rax_30 = (r8_4 u>> 1 ^ r8_4) & 0x33333333
int32_t rcx_13 = (rax_30 u>> 2 ^ rax_30) & 0xf0f0f0f
int32_t rdx_12 = (rcx_13 u>> 4 ^ rcx_13) & 0xff00ff
uint64_t r12_1 = var_68 u>> 0x20
int32_t var_58
var_58.q = r12_1
uint32_t rdx_14 = (zx.d((rdx_12 u>> 8).w) ^ zx.d(rdx_12.w)) u>> arg4.b
int32_t i = (temp0.q u>> 0x20).d
uint32_t arg_18 = rdx_14

if (r12_1.d u< i)
    i = i_1
    
    do
        int32_t rsi_1 = r10_1
        
        if (r10_1 u< temp0)
            do
                int64_t rbp_1 = sx.q(*(rdi + 0x1b0))
                int32_t rbx_7 = ((*(arg2 + 0x58) << 4 | arg4) << 0xc | (r12_1.d + rdx_14)) << 0xc
                    | (rsi_1 + r9_3)
                int32_t rax_36 = (rbp_1 + 1).d
                *(rdi + 0x1b0) = rax_36
                
                if (rax_36 s> *(rdi + 0x1b4))
                    sub_1405a4cf0(rdi + 0x1a8)
                    r9_3 = arg_20
                
                rsi_1 += 1
                *(*(rdi + 0x1a8) + (rbp_1 << 2)) = rbx_7
            while (rsi_1 u< temp0)
            
            r12_1 = var_58.q
            i = i_1
            rdx_14 = arg_18
            r10_1 = var_68.d
            rdi = arg1
        
        r12_1 = zx.q(r12_1.d + 1)
        var_58.q = r12_1
    while (r12_1.d u< i)

return i
