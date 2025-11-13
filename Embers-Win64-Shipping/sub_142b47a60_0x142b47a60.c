// 函数: sub_142b47a60
// 地址: 0x142b47a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x30))(arg1, arg3) != 0)
    return 0

int32_t r14 = 0
int32_t rcx_2

if ((arg1[2].w & 0xffe0) != 0)
    r14 = sub_142b46670(arg2, &arg1[1])
    int16_t rax_3 = arg1[2].w
    
    if (rax_3 s< 0)
        rcx_2 = *(arg1 + 0x14)
    else
        rcx_2 = sx.d(rax_3) s>> 5

int32_t result

if ((arg1[2].w & 0xffe0) == 0 || r14 != rcx_2)
    int32_t rax_6 = sub_142b465f0(arg2)
    char rax_7
    
    if (rax_6 != 0xffffffff)
        rax_7 = sub_142a9f280(arg1[9], zx.q(rax_6))
    
    if (rax_6 == 0xffffffff || rax_7 == 0)
        result.b = r14 == sub_142b467c0(arg2)
    else
        int32_t rbx
        rbx.b = rax_6 u> 0xffff
        sub_142b464f0(arg2, rbx + 1)
        (*(*arg1 + 0x38))(arg1, arg2, arg3)
        result.b = 0
else
    int16_t rax_4 = arg1[2].w
    int32_t rdx_3
    
    if (rax_4 s< 0)
        rdx_3 = *(arg1 + 0x14)
    else
        rdx_3 = sx.d(rax_4) s>> 5
    
    sub_142b464f0(arg2, rdx_3)
    (*(*arg1 + 0x38))(arg1, arg2, arg3)
    result.b = 0

return result
