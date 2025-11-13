// 函数: sub_1406f28c0
// 地址: 0x1406f28c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_1

if (*(arg3 + 0x218) != 0)
    rax_1 = *(arg3 + 0x88)
    
    if (rax_1 s<= 1)
        if (rax_1 != 1)
            int64_t rax_4 = sx.q(*(arg3 + 0x68))
            void* rdx_2 = *(arg3 + 0x58)
            void* const rcx_3
            
            if (rax_4.d s< 0 || rax_4.d s>= *(rdx_2 + 0xe0))
                rcx_3 = nullptr
            else
                rcx_3 = rax_4 * 0xb8 + *(rdx_2 + 0xd8)
            
            rax_1.b = *(rcx_3 + 0xb1) u>> 3
        else
            rax_1 = zx.d(*(*(*(arg3 + 0x58) + 0x308) + sx.q(**(arg3 + 0x80)) * 0x30 + 0xc))
        
        rax_1.b &= 1
    else
        float temp0_1 = *(arg3 + 0xb8)
        0f - temp0_1
        rax_1.b = 0f < temp0_1

void*** rdi

if (*(arg3 + 0x218) == 0 || rax_1.b == 0)
    void*** rax_7 = sub_140a84c80(0, 0x20, 0)
    rdi = rax_7
    
    if (rax_7 != 0)
        rdi[1] = arg1
        *rdi = &data_142da3d38
        rdi[3] = sub_140a387b0()
        *rdi = &data_142da3d90
else
    void*** rax_5 = sub_140a84c80(0, 0x20, 0)
    rdi = rax_5
    
    if (rax_5 != 0)
        rdi[1] = arg1
        *rdi = &data_142da3d38
        rdi[3] = sub_140a387b0()
        *rdi = &data_142da3d90

void var_18
void* result = &var_18

if (&var_18 != arg4)
    if (rdi != 0)
        result = (*rdi)[8](rdi, arg4)
    else if (arg4[1].d != 0)
        void* rcx_5 = *arg4
        
        if (rcx_5 != 0)
            result = (*(*rcx_5 + 0x38))(rcx_5, 0)
            void* rcx_6 = *arg4
            
            if (rcx_6 != 0)
                result = sub_140a84c80(rcx_6, 0, 0)
                *arg4 = result
            
            arg4[1].d = 0

if (rdi != 0)
    (*rdi)[7](rdi, 0)
    result = sub_140a84c80(rdi, 0, 0)
    
    if (result != 0)
        return sub_140a74f90(result)

return result
