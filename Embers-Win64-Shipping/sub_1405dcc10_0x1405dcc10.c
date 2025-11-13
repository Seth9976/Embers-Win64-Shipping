// 函数: sub_1405dcc10
// 地址: 0x1405dcc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140a20af0()
uint64_t r14 = zx.q(rax)
void* rax_1

if (rax != 0)
    rax_1 = *((r14 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(r14.d) & 0x3fff) * 0x18
else
    rax_1 = nullptr

*(rax_1 + 8) = arg2
int64_t result
bool z_1

do
    int64_t result_1 = 0
    
    if (0 == *(arg1 + 0x40))
        *(arg1 + 0x40) = 0
    else
        result_1 = *(arg1 + 0x40)
    
    if ((((result_1 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
            u< (result_1 & 0xfffffffffc000000))
        sub_140a2c900()
    
    void* rcx_3
    
    if (r14.d != 0)
        rcx_3 = *((r14 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(r14.d) & 0x3fff) * 0x18
    else
        rcx_3 = nullptr
    
    *(rcx_3 + 0x10) = result_1.d & 0x3ffffff
    result = result_1
    
    if (result == *(arg1 + 0x40))
        *(arg1 + 0x40) = ((result_1 & 0xfffffffffc000000) + 0x4000000) | r14
        z_1 = true
    else
        result = *(arg1 + 0x40)
        z_1 = false
while (not(z_1))
return result
