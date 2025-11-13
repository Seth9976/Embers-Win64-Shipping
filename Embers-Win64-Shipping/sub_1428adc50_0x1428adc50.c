// 函数: sub_1428adc50
// 地址: 0x1428adc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* result = nullptr
int32_t var_38_1

if (arg3 - 1 u> 0xfffe)
    var_38_1 = 0x4c
label_1428adf0f:
    sub_1428a5670(0x32, 0x6e, 0x68, "crypto\ct\ct_oct.c", var_38_1)
    sub_1428ad420(result)
    return nullptr

int32_t* result_1 = sub_1428ad530()
result = result_1

if (result_1 == 0)
    sub_1428ad420(result)
    return nullptr

char* rbx_1 = *arg2
uint32_t r8 = zx.d(*rbx_1)
*result_1 = r8
void* rcx_15

if (r8 != 0)
    int64_t rax_23 = sub_1428a6af0(rbx_1, arg3, "crypto\ct\ct_oct.c", 0x87)
    *(result + 8) = rax_23
    
    if (rax_23 == 0)
        sub_1428ad420(result)
        return nullptr
    
    *(result + 0x10) = arg3
    rcx_15 = &rbx_1[arg3]
else
    if (arg3 u< 0x2b)
        var_38_1 = 0x63
        goto label_1428adf0f
    
    int64_t rax_1 = sub_1428a6af0(&rbx_1[1], 0x20, "crypto\ct\ct_oct.c", 0x68)
    *(result + 0x18) = rax_1
    
    if (rax_1 == 0)
        sub_1428ad420(result)
        return nullptr
    
    *(result + 0x20) = 0x20
    uint64_t rax_3 = zx.q(rbx_1[0x21]) << 0x38
    *(result + 0x28) = rax_3
    uint64_t rcx_3 = zx.q(rbx_1[0x22]) << 0x30 | rax_3
    *(result + 0x28) = rcx_3
    uint64_t rax_6 = zx.q(rbx_1[0x23]) << 0x28 | rcx_3
    *(result + 0x28) = rax_6
    uint64_t rcx_6 = zx.q(rbx_1[0x24]) << 0x20 | rax_6
    *(result + 0x28) = rcx_6
    uint64_t rax_9 = zx.q(rbx_1[0x25]) << 0x18 | rcx_6
    *(result + 0x28) = rax_9
    uint64_t rdx_2 = zx.q(rbx_1[0x26]) << 0x10 | rax_9
    *(result + 0x28) = rdx_2
    uint64_t rcx_9 = zx.q(rbx_1[0x27]) << 8 | rdx_2
    *(result + 0x28) = rcx_9
    *(result + 0x28) = zx.q(rbx_1[0x28]) | rcx_9
    uint64_t rbp_3 = zx.q(rbx_1[0x29]) << 8 | zx.q(rbx_1[0x2a])
    
    if (arg3 - 0x2b u< rbp_3)
        var_38_1 = 0x72
        goto label_1428adf0f
    
    int64_t rax_13
    
    if (rbp_3 != 0)
        rax_13 = sub_1428a6af0(&rbx_1[0x2b], rbp_3, "crypto\ct\ct_oct.c", 0x76)
        *(result + 0x30) = rax_13
    
    if (rbp_3 != 0 && rax_13 == 0)
        sub_1428ad420(result)
        return nullptr
    
    void* rbx_3 = &rbx_1[0x2b + rbp_3]
    *(result + 0x38) = rbp_3
    int64_t rsi_2 = arg3 - 0x2b - rbp_3
    
    if (*result != 0)
        sub_1428a5670(0x32, 0x70, 0x67, "crypto\ct\ct_oct.c", 0x1f)
        var_38_1 = 0x80
        goto label_1428adf0f
    
    int32_t var_38_2
    
    if (rsi_2 u<= 4)
        var_38_2 = 0x2a
    label_1428ade18:
        sub_1428a5670(0x32, 0x70, 0x6b, "crypto\ct\ct_oct.c", var_38_2)
        var_38_1 = 0x80
        goto label_1428adf0f
    
    result[0x10].b = *rbx_3
    *(result + 0x41) = *(rbx_3 + 1)
    
    if (sub_1428ad4b0(result) == 0)
        var_38_2 = 0x33
        goto label_1428ade18
    
    void* rbx_5 = 0 - 4 + rsi_2
    uint64_t r15_3 = zx.q(*(rbx_3 + 2)) << 8 | zx.q(*(rbx_3 + 3))
    
    if (r15_3 u> rbx_5)
        var_38_2 = 0x3a
        goto label_1428ade18
    
    if (sub_1428ad590(result, rbx_3 + 4, r15_3) != 1)
        var_38_1 = 0x80
        goto label_1428adf0f
    
    int32_t rax_21 = rsi_2.d - rbx_5.d + r15_3.d
    
    if (rax_21 s<= 0)
        var_38_1 = 0x80
        goto label_1428adf0f
    
    rcx_15 = r15_3 + rbx_3 + 4 - sx.q(rax_21) + rsi_2

*arg2 = rcx_15

if (arg1 != 0)
    sub_1428ad420(*arg1)
    *arg1 = result

return result
