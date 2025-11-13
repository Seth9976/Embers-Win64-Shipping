// 函数: sub_142295e30
// 地址: 0x142295e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0xa0) == 0)
    return 0

void* rax = sub_1424851f0()
void* rdx = *(*(arg2 + 0xa0) + 0x10)
int64_t rax_1 = sx.q(*(rax + 0x38))
void* rax_3
int64_t rax_4
void* rdx_1

if (rax_1.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_1 << 3)) == rax + 0x30)
    rax_3 = sub_142485400()
    rdx_1 = *(arg2 + 0x10)
    rax_4 = sx.q(*(rax_3 + 0x38))

void*** result
int32_t rdx_2

if (rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30
        || rax_4.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
    void*** result_2 = j_sub_140a82f30(0x38)
    result = result_2
    
    if (result_2 == 0)
        result = nullptr
    else
        rdx_2 = 0
    label_142295ed2:
        int64_t rbx_1 = *(arg2 + 0xa0)
        sub_142077140(result, rdx_2)
        result[6] = -1
        result[5] = arg2
        result[4] = rbx_1
        *result = &data_1433132a8
        
        if (result != 0)
            result[1].d += 1
else
    void*** result_1 = j_sub_140a82f30(0x38)
    result = result_1
    
    if (result_1 != 0)
        rdx_2 = 1
        goto label_142295ed2
    
    result = nullptr
int64_t rbx_2 = sx.q(arg3[1].d)
int32_t rcx_4 = (rbx_2 + 1).d
arg3[1].d = rcx_4

if (rcx_4 s> *(arg3 + 0xc))
    sub_1405a4d70(arg3)

*(*arg3 + (rbx_2 << 3)) = result
return result
