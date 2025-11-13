// 函数: sub_141c59ee0
// 地址: 0x141c59ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xd3] == 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    int64_t arg_8 = 0
    void* rax_2 = sub_140d2dfc0(sub_142470a10(), arg1, 0, 0, 0, 0, 0, 0, 0)
    arg1[0xd3] = rax_2
    int32_t var_20_1 = 0
    void*** rax_3 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_3 != 0)
        *rax_3 = &data_14320b120
        sub_140d3a3a0(&rax_3[1], arg1)
        *(rax_3 + 0x10) = sub_141c65480.o
        rax_3[5] = sub_140a387b0()
        *rax_3 = &data_14320b178
    
    if (rax_3 != 0)
        sub_140599630(rax_2 + 0x6d0, 1)
        (*rax_3)[6](rax_3, &arg_8)
        int64_t rbp_1 = sx.q(*(rax_2 + 0x6d8))
        int32_t rax_6 = (rbp_1 + 1).d
        *(rax_2 + 0x6d8) = rax_6
        
        if (rax_6 s> *(rax_2 + 0x6dc))
            sub_1405a4f90(rax_2 + 0x6d0)
        
        void** rax_9 = (rbp_1 << 4) + *(rax_2 + 0x6d0)
        *rax_9 = rax_3
        rax_9[1].d = 3
    
    void* rcx_5 = arg1[0xd3]
    
    if (*(rcx_5 + 0xc0) == 0 && sub_141f40c90(rcx_5, arg1) == 0)
        int64_t* rcx_6 = arg1[0x14]
        int64_t rax_12
        
        if (rcx_6 != 0)
            rax_12 = (*(*rcx_6 + 0x150))(rcx_6)
        
        if (rcx_6 == 0 || rax_12 == 0)
            void* rax_13 = arg1[0x15]
            
            if (rax_13 == 0)
                rax_13 = sub_141ee69e0(arg1)
            
            int64_t* rcx_10 = arg1[0xd3]
            
            if (rax_13 == 0)
                arg_8 = 0
                sub_141f4a650(rcx_10, arg1, 0)
            else
                sub_141ef14c0(rcx_10, rax_13, 0)
                int64_t* rcx_11 = arg1[0xd3]
                arg_8 = 0
                sub_141f32b40(rcx_11, arg1, &data_143f3f280, 0)
        else
            int64_t* rcx_7 = arg1[0xd3]
            arg_8 = 0
            sub_141f32b40(rcx_7, arg1, &data_143f3f280, 0)
            sub_141ef1390(arg1[0xd3])

uint64_t result = arg1[0xd3]

if (result != 0)
    *(result + 0x89) &= 0x7f
    void* rax_14 = arg1[0xd3]
    *(rax_14 + 0x210) |= 2
    void* rax_15 = arg1[0xd3]
    *(rax_15 + 0x210) |= 4
    *(arg1[0xd3] + 0x14f) = 2
    int64_t* rdi_3 = arg1[0xd3] + 0x710
    
    if (rdi_3 != &arg1[0xc6])
        int64_t rsi_2 = sx.q(arg1[0xc7].d)
        int64_t rbp_2 = arg1[0xc6]
        int32_t r8_1 = *(rdi_3 + 0xc)
        rdi_3[1].d = rsi_2.d
        
        if (rsi_2.d != 0 || r8_1 != 0)
            sub_1405c4a00(rdi_3, rsi_2.d, r8_1)
            memcpy(*rdi_3, rbp_2, (rsi_2 << 3).d)
        else
            *(rdi_3 + 0xc) = 0
    
    *(arg1[0xd3] + 0x234) = *(arg1 + 0x654)
    *(arg1[0xd3] + 0x238) = arg1[0xcb].d
    void* rcx_16 = arg1[0xd3]
    result.b = arg1[0xca].b << 2
    result.b ^= *(rcx_16 + 0x211)
    result.b &= 0x10
    *(rcx_16 + 0x211) ^= result.b

return result
