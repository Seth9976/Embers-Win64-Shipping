// 函数: sub_141b933f0
// 地址: 0x141b933f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
int128_t var_48_1
int64_t var_38_1
char var_18_1
void* rcx
int64_t rdi_1

if (arg3 != arg4)
    int64_t rax_6
    
    if (arg3 == 0)
    label_141b93491:
        int64_t var_30_3 = 0
        rax_6 = *(arg3 + 0x18)
    label_141b9349d:
        rdi_1 = sx.q(*(arg1 + 0x358))
        var_38_1 = rax_6
        var_18_1 = 0
        var_48_1 = *arg2
        int32_t rax_7 = (rdi_1 + 1).d
        bool cond:0_1 = rax_7 s<= *(arg1 + 0x35c)
        *(arg1 + 0x358) = rax_7
        
        if (cond:0_1)
            goto label_141b934e7
        
        rcx = arg1 + 0x350
        goto label_141b934cd
    
    void* rax_3 = sub_141c06160()
    void* rdx = *(arg3 + 0x10)
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s> *(rdx + 0x38))
        goto label_141b93491
    
    result = *(rdx + 0x30)
    
    if (*(result + (rax_4 << 3)) != rax_3 + 0x30)
        goto label_141b93491
    
    void* rcx_2 = *(arg3 + 0x30)
    
    if (rcx_2 != 0)
        int64_t var_30_2 = *(arg3 + 0x18)
        rax_6 = *(rcx_2 + 0x18)
        goto label_141b9349d
else
    rdi_1 = sx.q(*(arg1 + 0x358))
    int64_t var_30_1 = 0
    var_38_1 = *(arg3 + 0x18)
    int32_t rax_2 = (rdi_1 + 1).d
    var_48_1 = *arg2
    var_18_1 = 1
    *(arg1 + 0x358) = rax_2
    
    if (rax_2 s<= *(arg1 + 0x35c))
        goto label_141b934e7
    
    rcx = arg1 + 0x350
label_141b934cd:
    sub_140adefe0(rcx)
label_141b934e7:
    int128_t* rdx_2 = *(arg1 + 0x350) + rdi_1 * 0x24
    result = zx.q(var_18_1.d)
    *rdx_2 = var_38_1.o
    rdx_2[1] = var_48_1
    rdx_2[2].d = result.d
return result
