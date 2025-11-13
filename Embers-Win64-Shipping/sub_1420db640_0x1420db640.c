// 函数: sub_1420db640
// 地址: 0x1420db640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = data_143f48438
int64_t* rbx = *(result + (sx.q(arg2) << 3))

if (rbx != 0)
    if ((rbx[0x11].b & 1) != 0)
        int64_t rdx = 0x30
        result = sub_140d23dc0(rbx, 0x30)
        
        if (result.b == 0)
            int32_t rax = *(rbx + 0xc)
            void* const rax_7
            
            if (rax s>= data_143e1d9b4)
                rax_7 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax)
                uint32_t rdx_2 = zx.d(temp0_1)
                int32_t rax_2 = temp1_1 + rdx_2
                rdx = sx.q(zx.d(rax_2.w) - rdx_2) * 3
                rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + (rdx << 3)
            
            result = zx.q(*(rax_7 + 8) u>> 0x1d)
            
            if ((result.b & 1) == 0)
                result = sub_141ee03d0(rbx, rdx)
    
    *(rbx + 0x8b) &= 0xcf
    rbx[0x10].d = 0xffffffff

return result
