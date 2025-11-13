// 函数: sub_142bbaed0
// 地址: 0x142bbaed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg2 + 0x38)
int64_t r12 = *(arg2 + 0x30)
int64_t r8 = *(arg2 + 0x40)
int32_t result_1 = 0
int32_t result

if (r9 + 0x65 u> r8)
label_142bbaf0f:
    result_1 = 2
label_142bbb0ef:
    sub_142b99980(r12, *(arg3 + 0x30))
    result = result_1
    *(arg3 + 0x30) = 0
    *(arg3 + 0x38) = 0
    return result

void* rdx_3 = (zx.q(*(r9 + 0x64)) << 8 | zx.q(*(r9 + 0x63))) + r9

if (rdx_3 + 0x87 u<= r8 && (zx.w(*(rdx_3 + 0x76)) << 8 | zx.w(*(rdx_3 + 0x75))) u>= 0x12)
    void* rcx_8 = (
        ((zx.q(*(rdx_3 + 0x86)) << 8 | zx.q(*(rdx_3 + 0x85))) << 8 | zx.q(*(rdx_3 + 0x84))) << 8
        | zx.q(*(rdx_3 + 0x83))) + r9
    
    if (rcx_8 != r9)
        void* rbx_1 = rcx_8 + 2
        
        if (rbx_1 u> r8)
            goto label_142bbaf0f
        
        uint64_t r9_3 = zx.q(zx.d(*(rcx_8 + 1)) << 8) | zx.q(*rcx_8)
        *(arg3 + 0x38) = r9_3.d
        
        if (zx.q((r9_3 << 2).d) + rbx_1 u> r8)
            goto label_142bbaf0f
        
        if (r9_3.d != 0)
            int32_t* rax_8 = sub_142b99a90(r12, 0x10, 0, r9_3.d, 0, &result_1)
            int32_t result_4 = result_1
            int32_t* rdi_1 = rax_8
            *(arg3 + 0x30) = rax_8
            
            if (result_4 != 0)
                goto label_142bbb0ef
            
            int64_t rcx_12 = sx.q(*(arg1 + 0x38))
            int64_t* r15_1 = *(arg1 + 0x88)
            void* r14_3 = zx.q(*(arg3 + 0x38) << 2) + rbx_1
            
            if (rcx_12.d s> 0)
                int64_t** rax_9 = *(arg1 + 0x40)
                int64_t rcx_13 = 0
                
                do
                    int64_t* rdx_4 = *rax_9
                    
                    if (*(rdx_4 + 0xc) == 7)
                        int32_t result_2 = sub_142b96390(arg1, rdx_4)
                        result_1 = result_2
                        result_4 = result_2
                        
                        if (result_2 != 0)
                            goto label_142bbb0ef
                        
                        goto label_142bbb05f
                    
                    rcx_13 += 1
                    rax_9 = &rax_9[1]
                while (rcx_13 s< rcx_12)
            
        label_142bbb05f:
            
            if (rbx_1 u< r14_3)
                do
                    *rbx_1
                    *rdi_1 = sub_142b91fc0(arg1)
                    *(rbx_1 + 1)
                    rdi_1[1] = sub_142b91fc0(arg1)
                    rdi_1 = &rdi_1[4]
                    int32_t rcx_17 = sx.d(zx.w(*(rbx_1 + 3)) << 8)
                    uint32_t rax_13 = zx.d(*(rbx_1 + 2))
                    rbx_1 += 4
                    rdi_1[-1] = 0
                    rdi_1[-2] = rcx_17 | rax_13
                while (rbx_1 u< r14_3)
                
                result_4 = result_1
            
            if (r15_1 != 0)
                int32_t result_3 = sub_142b96390(arg1, r15_1)
                result_4 = result_3
                result_1 = result_3
            
            if (result_4 != 0)
                goto label_142bbb0ef
            
            qsort(*(arg3 + 0x30), zx.q(*(arg3 + 0x38)), 0x10, sub_142bbb210)
            result = result_1
            
            if (result == 0)
                return result
            
            goto label_142bbb0ef

return 0
