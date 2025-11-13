// 函数: sub_141f5c9d0
// 地址: 0x141f5c9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x468) s<= 0)
    return 

int64_t r14_1 = 0

do
    sub_140b1f700(arg2, u"%sCustomProperties ", &data_142e738de - sx.q(arg3) * 2)
    void* rbx_2 = *(arg1 + 0x460) + r14_1
    int32_t rax_3 = *(rbx_2 + 0x28)
    
    if (rax_3 s> 0 || *(rbx_2 + 0x30) != 0)
        sub_140b1f700(arg2, u"CustomLODData LOD=%d ", zx.q(i))
        rax_3 = *(rbx_2 + 0x28)
    
    if (rax_3 s> 0)
        int64_t var_38 = 0
        int64_t var_30_1 = 0
        sub_141f5cb20(rbx_2, &var_38)
        sub_140b1f5f0(arg2, &var_38)
        int64_t rcx_4 = var_38
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
    
    void* rcx_5 = *(rbx_2 + 0x30)
    
    if (rcx_5 != 0 && *(rcx_5 + 0x34) u> 0)
        int64_t var_28 = 0
        int64_t var_20_1 = 0
        sub_14229dcc0(rcx_5, &var_28)
        sub_140b1f5f0(arg2, &var_28)
        int64_t rcx_7 = var_28
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
    
    sub_140b1f640(arg2, &data_142d6acb4)
    i += 1
    r14_1 += 0x90
while (i s< *(arg1 + 0x468))
