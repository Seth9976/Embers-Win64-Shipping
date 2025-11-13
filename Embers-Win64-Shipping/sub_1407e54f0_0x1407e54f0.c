// 函数: sub_1407e54f0
// 地址: 0x1407e54f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(*arg1 + 0xec) = *(arg1 + 0x2c)
*(*arg1 + 0xed) = *(arg1 + 0x2d)
*(*arg1 + 0xee) = *(arg1 + 0x2e)
void* rdx_3 = *arg1
*(rdx_3 + 0xc8) = arg1[1]
*(rdx_3 + 0xd0) = arg1[2].d
void* rcx = *arg1
*(rcx + 0xd4) = *(arg1 + 0x14)
*(rcx + 0xdc) = *(arg1 + 0x1c)
void* rcx_1 = *arg1
*(rcx_1 + 0xe0) = arg1[4]
*(rcx_1 + 0xe8) = arg1[5].d
uint64_t result = sub_1424127f0(&arg1[6])
void* rcx_3 = *arg1
int64_t* rbx_1 = *(rcx_3 + 0xf0)
*(rcx_3 + 0xf0) = result

if (result != 0)
    *(result + 8) += 1

if (rbx_1 != 0)
    result = zx.q(rbx_1[1].d)
    rbx_1[1].d -= 1
    
    if (result.d == 1)
        if (rbx_1[2].b != 0)
            jump(**rbx_1)
        
        if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
            jump(**rbx_1)
        
        result = 0
        bool z_1
        
        if (0 == *(rbx_1 + 0xc))
            *(rbx_1 + 0xc) = 1
            z_1 = true
        else
            result = zx.q(*(rbx_1 + 0xc))
            z_1 = false
        
        if (z_1)
            int32_t rax_7 = sub_140a20af0()
            uint64_t rdx_4 = zx.q(rax_7)
            void* const rax_8
            
            if (rax_7 != 0)
                rax_8 = *(&data_143cf0bf8 + (rdx_4 u>> 0xe << 3)) + (zx.q(rdx_4.d) & 0x3fff) * 0x18
            else
                rax_8 = nullptr
            
            *(rax_8 + 8) = rbx_1
            return sub_1405a42f0(&data_143f02390, rdx_4.d) __tailcall

return result
