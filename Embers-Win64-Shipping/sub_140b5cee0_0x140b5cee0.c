// 函数: sub_140b5cee0
// 地址: 0x140b5cee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18 = nullptr
int32_t var_10 = 0
sub_140a755d0()
void* result = sub_140a75840(&data_143db7b50, &var_18)
void* rcx = var_18
int64_t rdi = sx.q(var_10)
void* rsi_1 = rdi * 0x348 + rcx

if (rcx != rsi_1)
    void* rbx_1 = rcx + 0x10
    
    do
        void* rcx_1 = *(rbx_1 + 0x328)
        int16_t* const r8_1
        
        if (*rbx_1 == 0)
            r8_1 = &data_142d40450
        else
            r8_1 = *(rbx_1 - 8)
        
        void* r9_1 = rbx_1 + 8
        
        if (rcx_1 != 0)
            r9_1 = rcx_1
        
        (*(*arg1 + 0x20))(arg1, zx.q(*(rbx_1 - 0x10)), r8_1, r9_1, *(rbx_1 + 0x330))
        rbx_1 += 0x348
        result = rbx_1 - 0x10
    while (result != rsi_1)
    
    rdi = zx.q(var_10)
    rcx = var_18

if (rdi.d != 0)
    void* rbx_2 = rcx + 8
    int32_t i
    
    do
        int64_t rcx_3 = *(rbx_2 + 0x330)
        
        if (rcx_3 != 0)
            result = sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *rbx_2
        
        if (rcx_4 != 0)
            result = sub_140a74f90(rcx_4)
        
        rbx_2 += 0x348
        i = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i != 1)
    rcx = var_18

if (rcx == 0)
    return result

return sub_140a74f90(rcx)
