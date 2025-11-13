// 函数: sub_141a43a80
// 地址: 0x141a43a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int32_t rbp = *arg3
int128_t var_48 = *arg2
void* rdx_3

if (arg1[4].d == *(arg1 + 0x4c))
label_141a43be4:
    rdx_3 = nullptr
else
    int32_t rax_1 = sub_140a6b260(&var_48, 0x10)
    void* rdx = arg1[0xb]
    void* r8 = &arg1[0xa]
    int32_t r10_3 = (rax_1 - rbp) ^ rbp u>> 0xd
    int32_t r9_2 = (0x9e3779b9 - r10_3 - rbp) ^ r10_3 << 8
    int32_t rbp_3 = (rbp - r9_2 - r10_3) ^ r9_2 u>> 0xd
    int32_t r10_6 = (r10_3 - r9_2 - rbp_3) ^ rbp_3 u>> 0xc
    int32_t r9_5 = (r9_2 - r10_6 - rbp_3) ^ r10_6 << 0x10
    int32_t rbp_6 = (rbp_3 - r9_5 - r10_6) ^ r9_5 u>> 5
    int32_t r10_9 = (r10_6 - r9_5 - rbp_6) ^ rbp_6 u>> 3
    int32_t r9_8 = (r9_5 - r10_9 - rbp_6) ^ r10_9 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_18 =
        *(r8 + (((sx.q(rbp_6 - r9_8 - r10_9) ^ zx.q(r9_8) u>> 0xf) & (sx.q(arg1[0xc].d) - 1)) << 2))
    
    if (rax_18 == 0xffffffff)
    label_141a43be4_1:
        rdx_3 = nullptr
    else
        while (true)
            rdx_3 = sx.q(rax_18) * 0x38 + arg1[3]
            
            if (((*(rdx_3 + 4) ^ var_48:4.d) | (*(rdx_3 + 8) ^ var_48:8.d)
                    | (*(rdx_3 + 0xc) ^ var_48:0xc.d) | (var_48.d ^ *rdx_3)) == 0
                    && *(rdx_3 + 0x10) == rbp)
                break
            
            rax_18 = *(rdx_3 + 0x30)
            
            if (rax_18 == 0xffffffff)
                goto label_141a43be4_2
        
        if (rax_18 == 0xffffffff)
        label_141a43be4_2:
            rdx_3 = nullptr

void* rcx_9 = rdx_3 + 0x14

if (rdx_3 == 0)
    rcx_9 = nullptr

if (rcx_9 != 0)
    int64_t rax_19 = sub_140d3c6e0(rcx_9 + 0x10)
    rbx = rax_19
    
    if (rax_19 != 0)
        (*(*arg1 + 0x18))(arg1, rax_19, arg2, arg3)
        int64_t r8_8 = *arg1
        (*(r8_8 + 0x10))(arg1, rbx, r8_8)

sub_141a61130(&arg1[3], &var_48)
sub_141a56940(arg4 + 8, arg2, arg3)
void* result
result.b = rbx != 0
return result
