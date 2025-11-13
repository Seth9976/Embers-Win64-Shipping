// 函数: sub_1418ec7c0
// 地址: 0x1418ec7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_94 = 1
int32_t var_88 = 0xffffffff
int32_t rbx = *(arg1 + 0x30)
void* var_90 = arg1 + 0x18
int32_t rcx = 0
int32_t var_98 = 0
int32_t r8 = 0
int64_t var_84 = 0

if (rbx != 0)
    void* rax_1 = *(arg1 + 0x28)
    void* r9_1 = arg1 + 0x18
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_1418ec868:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1418ec868
        
        var_84.d = rbx

int32_t rdx_5 = *(arg1 + 0x30)
int128_t var_38 = 0xffffffff
int32_t rsi = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = rsi
var_84.d = rdx_5
int128_t var_78 = (arg1 + 8).o
int96_t var_68 = var_48:8.12

if (rdx_5 != rbx)
    void* rax_11 = *(arg1 + 0x28)
    void* r10_1 = arg1 + 0x18
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi
    
    if (rdx_9 != 0)
    label_1418ec932:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_1418ec932
        
        var_84.d = rbx

while (true)
    int32_t result_1
    int64_t result = sx.q(result_1)
    int64_t* rdx_10 = var_78.q
    
    if (result.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x18 && rdx_10 == arg1 + 8)
        return result
    
    void* rsi_1 = *(*rdx_10 + result * 0x18 + 8)
    int64_t* i = *(rsi_1 + 0x18)
    
    if (i != 0)
        do
            int64_t* rdi_1 = *i
            int64_t rdx_11 = rdi_1[4]
            
            if (rdx_11 != 0)
                int32_t rax_22 = data_143efb8d0(*(*rdi_1 + 8), rdx_11, 0)
                
                if (rax_22 != 0)
                    sub_141903f80(rax_22, 
                        "VulkanRHI::vkResetDescriptorPool(Device->GetInstanceHandle(), DescriptorPool, 0)", 
                        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanPendingState."
                    "cpp")
            
            *(rdi_1 + 0xc) = 0
            i = i[1]
        while (i != 0)
        
        i = *(rsi_1 + 0x18)
    
    int32_t rax_24 = not.d(var_78:0xc.d)
    *(rsi_1 + 0x20) = i
    var_68:8.d &= rax_24
    sub_14059bdd0(&var_78:8)
