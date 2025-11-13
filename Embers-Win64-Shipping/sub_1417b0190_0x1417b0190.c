// 函数: sub_1417b0190
// 地址: 0x1417b0190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 3) == 0)
    return 0

int32_t rbx = *arg1
sub_1417b02f0()

if (rbx u>= 0x1000000)
    int32_t rcx_1 = rbx & 0xffffff
    
    if (rcx_1 s< data_143ef8340)
        void* r8_1 = &data_143ef8328
        void* rax_1 = data_143ef8338
        
        if (rax_1 != 0)
            r8_1 = rax_1
        
        if (test_bit(*(r8_1 + (zx.q(rcx_1) u>> 5 << 2)), rcx_1 & 0x1f)
                && zx.d(*(data_143ef8318 + ((zx.q(rbx) & 0xffffff) << 2) + 3)) == rbx u>> 0x18)
            return (zx.q(rbx) & 0xffffff) * 0x30 + data_143ef8348

return 0
