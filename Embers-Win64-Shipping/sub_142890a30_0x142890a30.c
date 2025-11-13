// 函数: sub_142890a30
// 地址: 0x142890a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rbx = arg3
int64_t rdi = 0
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(sub_142890560(arg1) + 7)
int32_t rax_4 = (temp1 + (temp0 & 7)) s>> 3

if (rbx == 0xffffffff)
    rbx = rax_4
else if (rbx s< rax_4)
    uint128_t zmm1 = *arg1
    int32_t zmm0 = (arg1[2]).d
    uint128_t var_38 = zmm1
    int32_t i = _mm_bsrli_si128(zmm1, 8).d
    
    if (i s> 0)
        int64_t r8 = var_38.q + (sx.q(i) << 3)
        
        do
            bool cond:0_1 = *(r8 - 8) != 0
            r8 -= 8
            
            if (cond:0_1)
                break
            
            i -= 1
        while (i s> 0)
        
        var_38:8.d = i
    
    int32_t rcx_3 = zmm0
    
    if (i == 0)
        rcx_3 = 0
    
    int32_t var_28_1 = rcx_3
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(sub_142890560(&var_38) + 7)
    
    if (rbx s< (temp3_1 + (temp2_1 & 7)) s>> 3)
        return 0xffffffff

int32_t rax_6 = *(arg1 + 0xc) << 3
int64_t r10 = sx.q(rbx)

if (rax_6 == 0)
    sub_1428b8960(arg2, r10)
    return zx.q(rbx)

uint8_t* rsi_1 = arg2 + r10
int64_t r11 = 0
int64_t r15 = sx.q(arg1[1].d << 3)

if (rbx != 0)
    do
        rsi_1 = &rsi_1[-1]
        uint8_t rax_18 = ((r11 - r15) u>> 0x3f).b
        r11 += 1
        *rsi_1 = (*(*arg1 + (rdi u>> 3 << 3)) u>> (rdi.b & 7) << 3).b & neg.b(rax_18)
        rdi += (rdi - (sx.q(rax_6) - 1)) u>> 0x3f
    while (r11 u< r10)

return zx.q(rbx)
