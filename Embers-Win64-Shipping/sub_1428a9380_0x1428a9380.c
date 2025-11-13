// 函数: sub_1428a9380
// 地址: 0x1428a9380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
char* rdi = arg1
int64_t* rcx = data_143fecad8

if (rcx != 0)
    int32_t var_48 = 2
    void var_38
    void* var_40_1 = &var_38
    int64_t* rax_1 = sub_1428a8d10(rcx, &var_48)
    
    if (rax_1 != 0)
        return zx.q(*(rax_1[1] + 0x10))
    
    rdi = arg1

int32_t r9 = 0
int32_t r10 = 0x4a2
uint64_t rax_7
int32_t rax_9
uint64_t rsi_1

do
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 + r9)
    rax_7 = zx.q((temp1_1 - temp0_1) s>> 1)
    int32_t r11_1 = rax_7.d
    char* rcx_2 = rdi
    rsi_1 = zx.q(*(sx.q((rax_7 << 2).d) + &data_1434fa240))
    
    while (true)
        uint32_t rax_8 = zx.d(*rcx_2)
        char temp2_1 = *(rcx_2 + (&data_1434ed4f8)[rsi_1 * 5] - rdi)
        
        if (rax_8.b != temp2_1)
            rax_9 = sbb.d(rax_8, rax_8, rax_8.b u< temp2_1) | 1
            break
        
        rcx_2 = &rcx_2[1]
        
        if (rax_8.b == 0)
            rax_9 = 0
            break
    
    if (rax_9 s>= 0)
        if (rax_9 s<= 0)
            break
        
        r9 = r11_1 + 1
    else
        r10 = r11_1
while (r9 s< r10)

if (rax_9 == 0 && sx.q((rax_7 << 2).d) != -0xfffffffebcb05dc0)
    return zx.q(*(rsi_1 * 0x28 + 0x1434ed500))

return 0
