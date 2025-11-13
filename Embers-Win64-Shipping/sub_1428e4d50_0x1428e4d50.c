// 函数: sub_1428e4d50
// 地址: 0x1428e4d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* result

if (arg2 != 0)
    result = arg2
    arg2[1] = arg3
else
    result = sub_1428f2e90(arg3)

int32_t rax_2
int32_t r8

if (result != 0)
    if (sub_142890280(arg1) != 0 && sub_142890300(arg1) == 0)
        result[1] |= 0x102
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(sub_142890560(arg1) + 7)
    int32_t rbp_2 = ((temp0_1 & 7) + temp1_1) s>> 3
    
    if (rbp_2 == 0)
        rbp_2 = 1
    
    if (sub_1428f2d50(result, 0, rbp_2) != 0)
        int32_t rax_9 = sub_142890300(arg1)
        char* rdx_2 = *(result + 8)
        
        if (rax_9 == 0)
            rbp_2 = sub_14288fba0(arg1, rdx_2)
        else
            *rdx_2 = 0
        
        *result = rbp_2
        return result
    
    rax_2 = 0x1dc
    r8 = 0x41
else
    rax_2 = 0x1cf
    r8 = (result + 0x3a).d

sub_1428a5670(0xd, 0xe5, r8, "crypto\asn1\a_int.c", rax_2)

if (result != arg2)
    sub_1428c3460(result)

return nullptr
