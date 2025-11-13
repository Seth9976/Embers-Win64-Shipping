// 函数: sub_1407fed40
// 地址: 0x1407fed40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t rdx_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t var_48 = rdx_1
int32_t r9
r9.b = rdx_1 != 0x7fff
int32_t var_44 = r9
int32_t* rdx_3
void var_40

if (rdx_1 == 0x7fff)
    rdx_3 = &var_40
else
    rdx_3 = zx.q(rdx_1 * *(arg2 + 0x80)) + *(arg2 + 0x70)
void* var_38 = rdx_3
int32_t r8_1 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_30 = r8_1
int64_t result
result.b = r8_1 != 0x7fff
int32_t result_1 = result.d
void* var_20

if (r8_1 == 0x7fff)
    void var_28
    result = &var_28
    var_20 = &var_28
else
    var_20 = zx.q(*(arg2 + 0x80) * r8_1) + *(arg2 + 0x70)

int64_t* rcx_3 = *(arg1 + 0x30)

if (rcx_3 != 0)
    (*(*rcx_3 + 0x338))(rcx_3)
    int64_t* rcx_6 = *(arg1 + 0x30)
    result = (*(*rcx_6 + 0x340))(rcx_6)
    
    if (*(arg2 + 0x40) s> 0)
        do
            int32_t* rdx_5 = var_38
            i += 1
            var_38 = &rdx_5[sx.q(var_44)]
            *rdx_5 = arg3.d
            void* rdx_6 = var_20
            result = sx.q(result_1)
            var_20 = rdx_6 + (result << 2)
            *rdx_6 = arg3.d
        while (i s< *(arg2 + 0x40))
else
    int32_t r8_2 = 0
    
    if (*(arg2 + 0x40) s> 0)
        while (true)
            r8_2 += 1
            int32_t* var_38_1 = &rdx_3[sx.q(r9)]
            *rdx_3 = 0
            int32_t* rdx_4 = var_20
            result = sx.q(result_1)
            var_20 = &rdx_4[result]
            *rdx_4 = 0
            
            if (r8_2 s>= *(arg2 + 0x40))
                break
            
            rdx_3 = var_38_1
            r9 = var_44

return result
