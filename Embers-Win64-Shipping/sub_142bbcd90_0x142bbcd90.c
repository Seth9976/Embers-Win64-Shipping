// 函数: sub_142bbcd90
// 地址: 0x142bbcd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x38)

if (rbp != 0)
    void* rbx_1 = *(rbp + 0x170)
    
    if (rbx_1 != 0)
        int32_t r14 = *(rbx_1 + 0x268)
        
        if (*(rbx_1 + 0x238) != 0 && *(rbx_1 + 0x248) == *(rbp + 0x168) && *(rbx_1 + 0x24c) == r14)
            if (r14 == 0)
                goto label_142bbce34
            
            if (memcmp(*(rbx_1 + 0x270), *(rbx_1 + 0x250), zx.q(r14) << 2) == 0)
                goto label_142bbce34
            
            goto label_142bbce20
        
    label_142bbce20:
        int32_t result = sub_142bbd420(rbx_1 + 0x238, *(rbp + 0x168), r14, *(rbx_1 + 0x270))
        
        if (result == 0)
        label_142bbce34:
            int32_t rax_3 = sub_142bc0d40(arg1, *(arg1 + 0x28) - 8)
            
            if (rax_3 u> *(arg1 + 0x30))
                return 3
            
            result = sub_142bbeb00(rbx_1, arg1, rax_3)
            *(rbx_1 + 0x239) = 1
        
        return result

return 3
