// 函数: sub_1421e00b0
// 地址: 0x1421e00b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 1
void* rbx = 1
char rax = sub_1421bc710(arg1)
int32_t* result

if (rax != 0)
    void* rax_1 = sub_14249f4b0()
    void* rdx = *(*(arg1 + 0x70) + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        sub_1421d93c0(arg2 + 0xc8, arg1 + 0x30)
        int32_t var_18 = 0x3f800000
        int32_t var_14_1 = 0x3f800000
        r14.b = 0
        int32_t var_10_1 = 0x3f800000
        sub_141fe97b0(arg2 + 0x88, &var_18)
    
    void* rax_4 = sub_14249ec80()
    void* rdx_3 = *(*(arg1 + 0xa0) + 0x10)
    result = sx.q(*(rax_4 + 0x38))
    
    if (result.d s<= *(rdx_3 + 0x38))
        int32_t* result_1 = result
        result = *(rdx_3 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_4 + 0x30)
            sub_141fd8460(arg2 + 0x110, arg1 + 0x78)
            *(arg2 + 0x130) = *(arg1 + 0x98)
            *(arg2 + 0x134) = *(arg1 + 0x9c)
            rbx.b = 0
            *(arg2 + 0x138) = *(arg1 + 0xa0)
            result = sub_141fe9790(arg2 + 0xa8, 0x3f800000)

if (rax == 0 || r14.b != 0)
    result = sub_141fe76e0(arg2 + 0x88, *(arg1 + 0x70))

if (rbx.b == 0)
    return result

return sub_141fe7630(arg2 + 0xa8, *(arg1 + 0xa0))
