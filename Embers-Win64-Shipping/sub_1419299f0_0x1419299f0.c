// 函数: sub_1419299f0
// 地址: 0x1419299f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1
*arg1 = &data_142d3ff08
void* rbp = nullptr
arg1[1].d = 0
*arg1 = &data_142ff72f8
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
sub_141960d80(&arg1[3], arg3, arg4, arg5, arg7, arg8, arg6, result, 1)
__builtin_memset(&result[0x10], 0, 0x30)
int64_t* rdi = result[0x10]
result[0x10] = arg3

if (arg3 != 0)
    *(arg3 + 8) += 1

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        char rax_3
        
        if (rdi[2].b == 0 && data_143f0f1d0 == 0)
            rax_3 = sub_1405949a0()
        
        if (rdi[2].b != 0 || (data_143f0f1d0 == 0 && rax_3 != 0))
            (**rdi)(rdi, 1)
        else
            bool z_1
            
            if (0 == *(rdi + 0xc))
                *(rdi + 0xc) = 1
                z_1 = true
            else
                *(rdi + 0xc)
                z_1 = false
            
            if (z_1)
                int32_t rax_5 = sub_140a20af0()
                uint64_t rdx_1 = zx.q(rax_5)
                void* const rax_6
                
                if (rax_5 != 0)
                    rax_6 =
                        *((rdx_1 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rdx_1.d) & 0x3fff) * 0x18
                else
                    rax_6 = nullptr
                
                *(rax_6 + 8) = rdi
                sub_1405a42f0(&data_143f02390, rdx_1.d)

int64_t* rdi_1 = result[0x11]
result[0x11] = arg4

if (arg4 != 0)
    *(arg4 + 8) += 1

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        char rax_12
        
        if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
            rax_12 = sub_1405949a0()
        
        if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_12 != 0))
            (**rdi_1)(rdi_1, 1)
        else
            bool z_2
            
            if (0 == *(rdi_1 + 0xc))
                *(rdi_1 + 0xc) = 1
                z_2 = true
            else
                *(rdi_1 + 0xc)
                z_2 = false
            
            if (z_2)
                int32_t rax_14 = sub_140a20af0()
                uint64_t rdx_2 = zx.q(rax_14)
                void* const rax_15
                
                if (rax_14 != 0)
                    rax_15 =
                        *((rdx_2 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rdx_2.d) & 0x3fff) * 0x18
                else
                    rax_15 = nullptr
                
                *(rax_15 + 8) = rdi_1
                sub_1405a42f0(&data_143f02390, rdx_2.d)

int64_t* rdi_2 = result[0x12]
result[0x12] = arg5

if (arg5 != 0)
    *(arg5 + 8) += 1

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        char rax_21
        
        if (rdi_2[2].b == 0 && data_143f0f1d0 == 0)
            rax_21 = sub_1405949a0()
        
        if (rdi_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_21 != 0))
            (**rdi_2)(rdi_2, 1)
        else
            bool z_3
            
            if (0 == *(rdi_2 + 0xc))
                *(rdi_2 + 0xc) = 1
                z_3 = true
            else
                *(rdi_2 + 0xc)
                z_3 = false
            
            if (z_3)
                int32_t rax_23 = sub_140a20af0()
                uint64_t rdx_3 = zx.q(rax_23)
                void* const rax_24
                
                if (rax_23 != 0)
                    rax_24 =
                        *((rdx_3 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rdx_3.d) & 0x3fff) * 0x18
                else
                    rax_24 = nullptr
                
                *(rax_24 + 8) = rdi_2
                sub_1405a42f0(&data_143f02390, rdx_3.d)

int64_t* rdi_3 = result[0x13]
result[0x13] = arg6

if (arg6 != 0)
    *(arg6 + 8) += 1

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        char rax_30
        
        if (rdi_3[2].b == 0 && data_143f0f1d0 == 0)
            rax_30 = sub_1405949a0()
        
        if (rdi_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_30 != 0))
            (**rdi_3)(rdi_3, 1)
        else
            bool z_4
            
            if (0 == *(rdi_3 + 0xc))
                *(rdi_3 + 0xc) = 1
                z_4 = true
            else
                *(rdi_3 + 0xc)
                z_4 = false
            
            if (z_4)
                int32_t rax_32 = sub_140a20af0()
                uint64_t rdx_4 = zx.q(rax_32)
                void* const rax_33
                
                if (rax_32 != 0)
                    rax_33 =
                        *((rdx_4 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rdx_4.d) & 0x3fff) * 0x18
                else
                    rax_33 = nullptr
                
                *(rax_33 + 8) = rdi_3
                sub_1405a42f0(&data_143f02390, rdx_4.d)

int64_t* rdi_4 = result[0x14]
result[0x14] = arg7

if (arg7 != 0)
    *(arg7 + 8) += 1

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        char rax_40
        
        if (rdi_4[2].b == 0 && data_143f0f1d0 == 0)
            rax_40 = sub_1405949a0()
        
        if (rdi_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_40 != 0))
            (**rdi_4)(rdi_4, 1)
        else
            bool z_5
            
            if (0 == *(rdi_4 + 0xc))
                *(rdi_4 + 0xc) = 1
                z_5 = true
            else
                *(rdi_4 + 0xc)
                z_5 = false
            
            if (z_5)
                int32_t rax_42 = sub_140a20af0()
                uint64_t rdx_5 = zx.q(rax_42)
                void* const rax_43
                
                if (rax_42 != 0)
                    rax_43 =
                        *((rdx_5 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rdx_5.d) & 0x3fff) * 0x18
                else
                    rax_43 = nullptr
                
                *(rax_43 + 8) = rdi_4
                sub_1405a42f0(&data_143f02390, rdx_5.d)

int64_t* rdi_5 = result[0x15]
result[0x15] = arg8

if (arg8 != 0)
    *(arg8 + 8) += 1

if (rdi_5 != 0)
    rdi_5[1].d -= 1
    
    if (rdi_5[1].d == 1)
        char rax_49
        
        if (rdi_5[2].b == 0 && data_143f0f1d0 == 0)
            rax_49 = sub_1405949a0()
        
        if (rdi_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_49 != 0))
            (**rdi_5)(rdi_5, 1)
        else
            bool z_6
            
            if (0 == *(rdi_5 + 0xc))
                *(rdi_5 + 0xc) = 1
                z_6 = true
            else
                *(rdi_5 + 0xc)
                z_6 = false
            
            if (z_6)
                int32_t rax_51 = sub_140a20af0()
                
                if (rax_51 != 0)
                    rbp = *((zx.q(rax_51) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rax_51) & 0x3fff) * 0x18
                
                *(rbp + 8) = rdi_5
                sub_1405a42f0(&data_143f02390, rax_51)

result[0xf] = arg2

if (arg3 == 0)
    __builtin_memset(&result[0xb], 0, 0x20)
else
    *(result + 0x58) = *(arg3 + 0x1e0)
    *(result + 0x68) = *(arg3 + 0x1f0)

return result
