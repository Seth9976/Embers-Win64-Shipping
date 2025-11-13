// 函数: sub_14204d0a0
// 地址: 0x14204d0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xbc].b &= 0xfe
void* rax = arg1[0xc4]
void* rbx = &arg1[0xc0]
int32_t i_3 = arg1[0xc5].d

if (rax != 0)
    rbx = rax

if (i_3 != 0)
    int32_t i
    
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            rcx[9].d -= 1
            
            if (rcx[9].d == 1)
                arg2 = sub_140a2f6e0(rcx)
        
        rbx += 8
        i = i_3
        i_3 -= 1
    while (i != 1)

arg1[0xc5].d = 0

if (*(arg1 + 0x62c) != 0)
    sub_14085a940(&arg1[0xc0], 0)

uint32_t result = zx.d(arg1[0xbc].b)

if ((result.b & 2) == 0)
    result.b &= 0xfb
    arg1[0xbc].b = result.b
    int64_t* rbx_1 = arg4[1]
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        rbx_1[1].d -= 1
        
        if (result == 1)
            result = (**rbx_1)(rbx_1)
            int32_t rsi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))
    
    return result

if ((result.b & 4) == 0)
    result.b &= 0xfd
    arg1[0xbc].b = result.b
    arg1[0xac].d = *(*(*arg4 + 0xb0) + 0x28)
    *(arg1 + 0x564) = *(*(*arg4 + 0xb0) + 0x18)
    int64_t* rax_9 = j_sub_140a82f30(0x10)
    int64_t* r14 = rax_9
    
    if (rax_9 == 0)
        r14 = nullptr
    else
        int64_t* rdx_2 = *(*arg4 + 0xb0)
        *rax_9 = 0
        *rax_9 = *rdx_2
        *rdx_2 = 0
        rax_9[1].d = rdx_2[1].d
        *(rax_9 + 0xc) = *(rdx_2 + 0xc)
        rdx_2[1] = 0
    
    void*** rax_10 = j_sub_140a82f30(0x18)
    void*** rbx_2 = rax_10
    
    if (rax_10 == 0)
        rbx_2 = nullptr
    else
        rax_10[1].d = 1
        *(rax_10 + 0xc) = 1
        *rbx_2 = &data_142ee2130
        rbx_2[2] = r14
    
    int64_t* var_98 = r14
    void*** var_90 = rbx_2
    
    if (&arg1[0xa8] != &var_98)
        arg1[0xa8] = r14
        var_98 = nullptr
        sub_1405aeff0(&arg1[0xa9], &var_90)
        rbx_2 = var_90
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t rsi_2 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rsi_2 == 1)
                (*rbx_2)[1](rbx_2, zx.q(rsi_2))
    
    int64_t* r14_1 = arg1[0xa8]
    int64_t* rbx_4 = *(*arg4 + 0xb0) + 0x20
    
    if (&arg1[0x9a] != rbx_4)
        int64_t rcx_14 = arg1[0x9a]
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        arg1[0x9a] = *rbx_4
        *rbx_4 = 0
        arg1[0x9b].d = rbx_4[1].d
        *(arg1 + 0x4dc) = *(rbx_4 + 0xc)
        rbx_4[1] = 0
    
    int64_t* rbx_6 = *(*arg4 + 0xb0) + 0x10
    
    if (&arg1[0xaa] != rbx_6)
        int64_t rcx_15 = arg1[0xaa]
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        arg1[0xaa] = *rbx_6
        *rbx_6 = 0
        arg1[0xab].d = rbx_6[1].d
        *(arg1 + 0x55c) = *(rbx_6 + 0xc)
        rbx_6[1] = 0
    
    void var_50
    uint128_t* rax_22 = sub_1423633d0(arg1[0x88], &var_50)
    *(arg1 + 0x5bc) = *rax_22
    *(arg1 + 0x5cc) = rax_22[1].q
    *(arg1 + 0x5d4) = *(rax_22 + 0x18)
    void* rax_24 = *arg4
    int64_t* rbx_7 = *(rax_24 + 0xb8)
    *(rax_24 + 0xb8) = 0
    arg1[0xb7].d = *(*(*arg4 + 0xb0) + 0x30)
    uint64_t* rax_29
    
    if (r14_1[1].d s<= 0)
        int32_t rax_30 = data_143dbb200
        uint128_t zmm0_1 = zx.o(data_143dbb1f8.q)
        int32_t var_58_1 = rax_30
        int32_t var_64_1 = rax_30
        uint64_t var_6c
        rax_29 = &var_6c
        uint64_t var_60_1 = zmm0_1.q
        var_6c = zmm0_1.q
        char var_54_1 = 0
    else
        int64_t* rcx_18 = *r14_1
        char var_70_1 = 1
        int32_t var_80_1 = rcx_18[1].d
        int32_t rax_28 = rcx_18[3].d
        uint64_t var_88 = *rcx_18
        int32_t var_74_1 = rax_28
        rax_29 = &var_88
        uint64_t var_7c_1 = rcx_18[2]
    
    int64_t zmm1 = rax_29[2]
    int32_t rax_31 = rax_29[3].d
    *(arg1 + 0x568) = *rax_29
    arg1[0xaf] = zmm1
    arg1[0xb0].d = rax_31
    arg1[0xb2] = data_143dbb1f8.q
    int32_t rax_32 = data_143dbb200
    arg1[0xb3].d = rax_32
    *(arg1 + 0x584) = arg1[0xb2]
    *(arg1 + 0x58c) = rax_32
    *(arg1 + 0x59c) = 0
    arg1[0xb5].d = 0
    
    if (*(arg1 + 0x5ac) != 0)
        sub_1413f6f70(&arg1[0xb4], 0)
    
    sub_1420584f0(arg1)
    *(arg1 + 0x5dc) = arg1[0xac].d
    sub_14209fb70(&arg1[0x9f])
    int64_t* var_a8 = nullptr
    int32_t i_4 = 0
    sub_142085020(arg1, &var_a8)
    int128_t zmm1_1 = sub_142069ab0(arg1, rbx_7)
    void* rcx_24 = arg1[0x9d]
    
    if (rcx_24 == 0)
        sub_142097c30(arg1, 0, rbx_7, 0, zmm1_1)
    else
        sub_1420a9f70(rcx_24, rbx_7, zmm1_1)
    
    sub_14204a240(arg1[0x9d], &var_a8)
    sub_141ee8490(arg1)
    int32_t i_2 = i_4
    int64_t* rdi_1 = var_a8
    
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t* rcx_28 = *rdi_1
            
            if (rcx_28 != 0)
                rcx_28[1].d -= 1
                
                if (rcx_28[1].d == 1)
                    (**rcx_28)(rcx_28, 1)
            
            rdi_1 = &rdi_1[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        rdi_1 = var_a8
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    if (rbx_7 != 0)
        int64_t* rcx_30 = *rbx_7
        
        if (rcx_30 != 0)
            (**rcx_30)(rcx_30, 1)
        
        int64_t* rcx_31 = rbx_7[4]
        
        if (rcx_31 != 0)
            (**rcx_31)(rcx_31, 1)
        
        int64_t* rcx_32 = rbx_7[2]
        
        if (rcx_32 != 0)
            (**rcx_32)(rcx_32, 1)
        
        int64_t* rcx_33 = rbx_7[6]
        
        if (rcx_33 != 0)
            (**rcx_33)(rcx_33, 1)
        
        j_sub_140a74f90(rbx_7)
else
    result.b &= 0xfb
    arg1[0xbc].b = result.b
    sub_142050d80(arg1, arg2)

return sub_1405970a0(arg4)
