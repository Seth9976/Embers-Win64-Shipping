// 函数: ??0?$vector@V?$_Work_stealing_deque@U?$_Sort_work_item_impl@_J@std@@@std@@U?$_Parallelism_allocator@V?$_Work_stealing_deque@U?$_Sort_work_item_impl@_J@std@@@std@@@2@@std@@QEAA@_KAEBU?$_Parallelism_allocator@V?$_Work_stealing_deque@U?$_Sort_work_item_impl@_J@std@@@std@@@1@@Z
// 地址: 0x140d2ada0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    int32_t rdx = 0
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(arg1, rdi_1.d + 1)
        rdx = arg1[1].d
    
    int32_t rax_1 = rdx + rdi_1.d + 1
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, arg2, (rdi_1.d + 1) * 2)

int32_t rax_4 = arg1[1].d
int32_t r10 = rax_4 - 1

if (rax_4 == 0)
    r10 = -1

int32_t rdi_3 = rax_4 - 1

if (rax_4 == 0)
    rdi_3 = -1

if (rax_4 == 0)
    r10 = 0

if (rax_4 == 0)
    rdi_3 = 0

int32_t rdi_4 = rdi_3 - r10

if (rdi_4 s> 0)
    rdi_4 = 0

if (rdi_4 != 0)
    int32_t rcx_3 = rax_4 - rdi_4
    
    if (rcx_3 != r10)
        int64_t r9_1 = *arg1
        memmove(r9_1 + (sx.q(r10) << 1), r9_1 + (sx.q(rdi_4 + r10) << 1), (rcx_3 - r10) * 2)
        rax_4 = arg1[1].d
    
    rax_4 -= rdi_4
    arg1[1].d = rax_4

int32_t rdi_5 = rax_4 - 1

if (rax_4 == 0)
    rdi_5 = 0

if (rdi_5 s> 1)
    rdi_5 = 1

if (rdi_5 != 0)
    if (rax_4 != rdi_5)
        int64_t rcx_7 = *arg1
        memmove(rcx_7, rcx_7 + (sx.q(rdi_5) << 1), (rax_4 - rdi_5) * 2)
        rax_4 = arg1[1].d
    
    arg1[1].d = rax_4 - rdi_5

if (sub_140a32ae0(arg1, u"DEPRECATED_", 1) != 0)
    int32_t rax_8 = arg1[1].d
    int32_t r10_1 = rax_8 - 1
    
    if (rax_8 == 0)
        r10_1 = -1
    
    int32_t rdi_6 = rax_8 - 1
    
    if (rax_8 == 0)
        rdi_6 = -1
    
    if (rax_8 == 0)
        r10_1 = 0
    
    if (rax_8 == 0)
        rdi_6 = 0
    
    int32_t rdi_7 = rdi_6 - r10_1
    
    if (0 s< rdi_7)
        rdi_7 = 0
    
    if (rdi_7 != 0)
        int32_t rcx_10 = rax_8 - rdi_7
        
        if (rcx_10 != r10_1)
            int64_t r9_2 = *arg1
            memmove(r9_2 + (sx.q(r10_1) << 1), r9_2 + (sx.q(rdi_7 + r10_1) << 1), 
                (rcx_10 - r10_1) * 2)
            rax_8 = arg1[1].d
        
        rax_8 -= rdi_7
        arg1[1].d = rax_8
    
    int32_t rdi_8 = rax_8 - 1
    
    if (rax_8 == 0)
        rdi_8 = 0
    
    if (rdi_8 s> 0xb)
        rdi_8 = 0xb
    
    if (rdi_8 != 0)
        if (rax_8 != rdi_8)
            int64_t rcx_14 = *arg1
            memmove(rcx_14, rcx_14 + (sx.q(rdi_8) << 1), (rax_8 - rdi_8) * 2)
            rax_8 = arg1[1].d
        
        arg1[1].d = rax_8 - rdi_8

return arg1
