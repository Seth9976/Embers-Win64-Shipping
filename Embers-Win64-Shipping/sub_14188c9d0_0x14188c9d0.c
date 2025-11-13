// 函数: sub_14188c9d0
// 地址: 0x14188c9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg1
bool z

if (0 == *(arg1 + 0x108))
    *(arg1 + 0x108) = 0
    z = true
else
    *(arg1 + 0x108)
    z = false

int32_t rax_2

if (not(z))
    rax_2 = 1

if (z || arg2 == 0)
    rax_2 = 0

*(arg1 + 0x108) = rax_2
int64_t* rcx = *(arg1 + 0x1d8)

if ((*(*rcx + 8))(rcx) != 0)
    *(r13 + 0x108)
    *(r13 + 0x108) = 0

uint64_t result = 0
bool z_1

if (0 == *(r13 + 0x108))
    *(r13 + 0x108) = 0
    z_1 = true
else
    result = zx.q(*(r13 + 0x108))
    z_1 = false

if (not(z_1) && *(r13 + 0xc0) s> 1)
    int64_t var_70 = 0
    int64_t var_68_1 = 0
    void*** var_48
    sub_14093d6b0(&var_48, &var_70, 0)
    void*** rbx_1 = var_48
    sub_140944dc0(rbx_1)
    int64_t var_98 = 0
    int32_t var_90_1 = 0
    sub_1405947f0(&var_98, 0x11)
    int32_t rax_6 = var_90_1 + 0x11
    var_90_1 = rax_6
    
    if (rax_6 s> 0)
        sub_140594770(&var_98)
    
    UnDecorator::getReferenceType(var_98, u"ChunkDbFilePaths", 0x22)
    sub_140939040(rbx_1, &var_98)
    int64_t rcx_7 = var_98
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t rdi_1 = *(r13 + 0x198)
    int64_t rsi_3 = (sx.q(*(r13 + 0x1a0)) << 5) + rdi_1
    
    if (rdi_1 != rsi_3)
        int32_t rcx_8 = rbx_1[4].d
        
        do
            if (((rcx_8 - 2) & 0xfffffff5) != 0 || rcx_8 == 0xa)
                int64_t* rcx_9 = rbx_1[1]
                int16_t arg_18 = 0x2c
                (*(*rcx_9 + 0x150))(rcx_9, &arg_18, 2)
            
            (*rbx_1)[2](rbx_1, rdi_1)
            rdi_1 += 0x20
            rbx_1[4].d = 7
            rcx_8 = 7
        while (rdi_1 != rsi_3)
    
    int64_t* rcx_11 = rbx_1[1]
    *(rbx_1 + 0x24) -= 1
    int16_t arg_20 = 0x5d
    (*(*rcx_11 + 0x150))(rcx_11, &arg_20, 2)
    rbx_1[3].d -= 1
    void* rsi_4 = &rbx_1[2]
    sub_140679af0(rsi_4)
    rbx_1[4].d = 5
    int16_t* const rdi_2 = &data_142d40450
    
    if (*(r13 + 0x38) s> 0)
        int64_t var_88 = 0
        int32_t var_80_1 = 0
        sub_1405947f0(&var_88, 0x12)
        int32_t rax_11 = var_80_1 + 0x12
        var_80_1 = rax_11
        
        if (rax_11 s> 0)
            sub_140594770(&var_88)
        
        UnDecorator::getReferenceType(var_88, u"TagSetLookupTable", 0x24)
        sub_140939040(rbx_1, &var_88)
        int64_t rcx_17 = var_88
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        int64_t* r14_1 = *(r13 + 0x1a8)
        void* rax_14 = &r14_1[sx.q(*(r13 + 0x1b0)) * 2]
        int64_t* var_78_1 = r14_1
        
        if (r14_1 != rax_14)
            int32_t rax_15 = rbx_1[4].d
            
            do
                if (rax_15 u> 0xc || not(test_bit(0x1015, rax_15)))
                    int64_t* rcx_18 = rbx_1[1]
                    int16_t var_c8 = 0x2c
                    (*(*rcx_18 + 0x150))(rcx_18, &var_c8, 2)
                
                int64_t* rcx_19 = rbx_1[1]
                int16_t var_c0 = 0x5b
                (*(*rcx_19 + 0x150))(rcx_19, &var_c0, 2)
                *(rbx_1 + 0x24) += 1
                int64_t rdi_3 = sx.q(*(rsi_4 + 8))
                int32_t rax_18 = (rdi_3 + 1).d
                *(rsi_4 + 8) = rax_18
                
                if (rax_18 s> *(rsi_4 + 0xc))
                    sub_1406105e0(rsi_4)
                
                *(*rsi_4 + (rdi_3 << 2)) = 5
                rbx_1[4].d = 4
                int32_t* rdi_4 = *r14_1
                int64_t r14_2 = 0
                uint64_t r12_2 = sx.q(r14_1[1].d) << 2 u>> 2
                
                if (rdi_4 u> &rdi_4[r14_1[1]])
                    r12_2 = 0
                
                if (r12_2 != 0)
                    int32_t rax_22 = 4
                    
                    do
                        int64_t rsi_5 = sx.q(*rdi_4)
                        
                        if (rax_22 != 4)
                            int64_t* rcx_21 = rbx_1[1]
                            int16_t var_b8 = 0x2c
                            (*(*rcx_21 + 0x150))(rcx_21, &var_b8, 2)
                        
                        int16_t* var_58
                        sub_140a2e390(&var_58, u"%lld", rsi_5)
                        int64_t* r9_1 = rbx_1[1]
                        int32_t var_50
                        int32_t rcx_23
                        int16_t* const rdx_12
                        
                        if (var_50 == 0)
                            rcx_23 = 0
                            rdx_12 = &data_142d40450
                        else
                            rdx_12 = var_58
                            rcx_23 = var_50 - 1
                        
                        (*(*r9_1 + 0x150))(r9_1, rdx_12, sx.q(rcx_23) * 2)
                        int16_t* rcx_25 = var_58
                        
                        if (rcx_25 != 0)
                            sub_140a74f90(rcx_25)
                        
                        rdi_4 = &rdi_4[1]
                        rbx_1[4].d = 8
                        r14_2 += 1
                        rax_22 = 8
                    while (r14_2 != r12_2)
                    
                    rsi_4 = &rbx_1[2]
                
                int64_t* rcx_26 = rbx_1[1]
                *(rbx_1 + 0x24) -= 1
                int16_t var_b0 = 0x5d
                (*(*rcx_26 + 0x150))(rcx_26, &var_b0, 2)
                *(rsi_4 + 8) -= 1
                sub_140679af0(rsi_4)
                rax_15 = 5
                r14_1 = &var_78_1[2]
                rbx_1[4].d = 5
                var_78_1 = r14_1
            while (r14_1 != rax_14)
            
            r13 = arg1
            rdi_2 = &data_142d40450
        
        int64_t* rcx_28 = rbx_1[1]
        *(rbx_1 + 0x24) -= 1
        int16_t var_a8 = 0x5d
        (*(*rcx_28 + 0x150))(rcx_28, &var_a8, 2)
        *(rsi_4 + 8) -= 1
        sub_140679af0(rsi_4)
        rbx_1[4].d = 5
    
    int64_t* rcx_30 = rbx_1[1]
    *(rbx_1 + 0x24) -= 1
    int16_t var_a0 = 0x7d
    (*(*rcx_30 + 0x150))(rcx_30, &var_a0, 2)
    *(rsi_4 + 8) -= 1
    sub_140679af0(rsi_4)
    rbx_1[4].d = 3
    (*rbx_1)[1](rbx_1)
    
    if (*(r13 + 0xc0) != 0)
        rdi_2 = *(r13 + 0xb8)
    
    sub_140a464c0()
    int32_t rcx_34
    rcx_34.b = sub_140b27210(&var_70, rdi_2, 0, &data_14399ea08, 0) != 0
    result = 0
    *(r13 + 0x108)
    *(r13 + 0x108) = rcx_34
    
    if (0 == *(r13 + 0x108))
        *(r13 + 0x108) = 0
    else
        result = zx.q(*(r13 + 0x108))
    
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            result = (**var_40)(var_40)
            int32_t temp2_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp2_1 == 1)
                result = (*(*var_40 + 8))(var_40, 1)
    
    int64_t rcx_38 = var_70
    
    if (rcx_38 != 0)
        result = sub_140a74f90(rcx_38)

*(r13 + 0x104) = 0
return result
