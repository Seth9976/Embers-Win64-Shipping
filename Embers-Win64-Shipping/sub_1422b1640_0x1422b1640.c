// 函数: sub_1422b1640
// 地址: 0x1422b1640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *arg1
int64_t r8 = sx.q(arg1[1].d)
int64_t* result = *r9

if (*(&result[r8 * 4] + 0x1c) == 0)
    int32_t r8_1 = r8.d + 1
    arg1[1].d = r8_1
    result = *r9
    
    if (*(&result[r8 * 4] + 0x3c) != 1)
        int64_t rax_3
        
        do
            int64_t rdx_3 = sx.q(r8_1) << 5
            int64_t rcx_2 = **arg1
            *(rdx_3 + rcx_2 + 0x10) = *(rdx_3 + rcx_2 + 0xc)
            sub_1422b1640(arg1, (sx.q(arg1[1].d) << 5) + **arg1 + 0x10)
            rax_3 = sx.q(arg1[1].d)
            r8_1 = (rax_3 + 1).d
            arg1[1].d = r8_1
            result = *arg1
        while (*((rax_3 << 5) + *result + 0x3c) != 1)

return result
