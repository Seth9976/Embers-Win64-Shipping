// 函数: sub_140be3930
// 地址: 0x140be3930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb4) != 0)
    return 

int64_t* rcx = *(arg1 + 0xb8)
uint64_t rbx
uint64_t arg_10 = rbx

if (rcx != 0)
    goto label_140be3a71

rbx = *(arg1 + 0x18)
uint64_t arg_8 = rbx
sub_140bdd9e0()

if (data_1439a9be8 == data_1439a9c14)
labelid_50:
    rcx = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* r8_1 = &data_1439a9c18
    void* rcx_3 = data_1439a9c20
    
    if (rcx_3 != 0)
        r8_1 = rcx_3
    
    int32_t rax_4 = *(r8_1 + (((sx.q(data_1439a9c28) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    labelid_50:
        rcx = nullptr
    else
        int64_t r8_2 = data_1439a9be0
        int64_t rdx_4
        
        while (true)
            rdx_4 = sx.q(rax_4)
            int64_t rcx_4 = rdx_4 * 3
            
            if (*(r8_2 + (rcx_4 << 3)) == rbx)
                break
            
            rax_4 = *(r8_2 + (rcx_4 << 3) + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_140be39cb_1
        
        if (rax_4 == 0xffffffff)
        label_140be39cb:
            rcx = nullptr
        else
            void* rcx_7 = r8_2 + rdx_4 * 0x18
            
            if (rcx_7 == 0)
            label_140be39cb_1:
                rcx = nullptr
            else
                rcx = *(rcx_7 + 8)

int32_t rax = *(arg1 + 0xb0)
*(arg1 + 0xb8) = rcx

if (rcx != 0)
    *(arg1 + 0xb0) = rax | 1
label_140be3a71:
    char rax_9 = (*(*rcx + 0x30))(rcx)
    char rax_11
    
    if (rax_9 == 0)
        int64_t* rcx_8 = *(arg1 + 0xb8)
        rax_11 = (*(*rcx_8 + 0x38))(rcx_8)
    
    if (rax_9 != 0 || rax_11 != 0)
        *(arg1 + 0xb0) |= 0x800
    
    int64_t* rcx_9 = *(arg1 + 0xb8)
    
    if ((*(*rcx_9 + 0x50))(rcx_9) != 0)
        *(arg1 + 0xb0) |= 0x40000
    
    int64_t* rcx_10 = *(arg1 + 0xb8)
    
    if ((*(*rcx_10 + 0x88))(rcx_10) != 0)
        *(arg1 + 0xb0) |= 0x200000
    
    int64_t* rcx_11 = *(arg1 + 0xb8)
    
    if ((*(*rcx_11 + 0x60))(rcx_11) != 0)
        int64_t* rcx_12 = *(arg1 + 0xb8)
        *(arg1 + 0xb0) |= 0x400
        
        if ((*(*rcx_12 + 0x68))(rcx_12) != 0)
            *(arg1 + 0xb0) |= 0x400000
    
    int64_t* rcx_13 = *(arg1 + 0xb8)
    
    if ((*(*rcx_13 + 0x78))(rcx_13) != 0)
        *(arg1 + 0xb0) |= 0x100000
    
    int64_t* rcx_14 = *(arg1 + 0xb8)
    
    if ((*(*rcx_14 + 0x98))(rcx_14) == 0)
        int64_t* rcx_15 = *(arg1 + 0xb8)
        
        if ((*(*rcx_15 + 0xa0))(rcx_15) != 0)
            *(arg1 + 0xb0) |= 0x1000
        
        int64_t* rcx_16 = *(arg1 + 0xb8)
        
        if ((*(*rcx_16 + 0x20))(rcx_16) == 0)
            *(arg1 + 0xb0) |= 0x4000
    else
        *(arg1 + 0xb0) |= 0x6000
    
    int64_t* rcx_17 = *(arg1 + 0xb8)
    
    if ((*(*rcx_17 + 0x10))(rcx_17) != 0)
        *(arg1 + 0xb0) |= 0x8000
    
    int64_t* rcx_18 = *(arg1 + 0xb8)
    
    if ((*(*rcx_18 + 0x98))(rcx_18) != 0)
        int64_t* rcx_19 = *(arg1 + 0xb8)
        
        if ((*(*rcx_19 + 0x10))(rcx_19) == 0)
            int64_t count = sx.q(*(*(arg1 + 0xb8) + 8))
            int64_t rax_35 = sub_140a82f30(count, 0)
            memset(rax_35, 0, count)
            int64_t* rcx_22 = *(arg1 + 0xb8)
            int64_t r8_4 = *rcx_22
            (*(r8_4 + 0x18))(rcx_22, rax_35, r8_4)
            int64_t* rcx_23 = *(arg1 + 0xb8)
            int64_t r8_5 = *rcx_23
            (*(r8_5 + 0x18))(rcx_23, rax_35, r8_5)
            rbx.b = 1
            
            if (count s> 0)
                void* r8_6 = nullptr
                
                while (rbx.b != 0)
                    char rdx_8 = 0
                    char* rcx_24 = r8_6 + rax_35
                    r8_6 += 1
                    
                    if (*rcx_24 == 0)
                        rdx_8 = rbx.b
                    
                    rbx = zx.q(rdx_8)
                    
                    if (r8_6 s>= count)
                        break
            
            sub_140a74f90(rax_35)
            
            if (rbx.b != 0)
                *(arg1 + 0xb0) |= 0x8000
    
    int64_t* rcx_26 = *(arg1 + 0xb8)
    
    if ((*(*rcx_26 + 0xb0))(rcx_26) != 0)
        *(arg1 + 0xb0) |= 2
    
    int64_t* rcx_27 = *(arg1 + 0xb8)
    
    if ((*(*rcx_27 + 0xe0))(rcx_27) != 0)
        *(arg1 + 0xb0) |= 0x40
    
    int64_t* rcx_28 = *(arg1 + 0xb8)
    
    if ((*(*rcx_28 + 0xc0))(rcx_28) != 0)
        *(arg1 + 0xb0) |= 0x10000
    
    int64_t* rcx_29 = *(arg1 + 0xb8)
    
    if ((*(*rcx_29 + 0xd0))(rcx_29) != 0)
        *(arg1 + 0xb0) |= 0x20000
    
    int64_t* rcx_30 = *(arg1 + 0xb8)
    
    if ((*(*rcx_30 + 0xf0))(rcx_30).b != 0)
        *(arg1 + 0xb0) |= 0x80000
    else
        int64_t* rcx_31 = *(arg1 + 0xb8)
        
        if ((*(*rcx_31 + 0xf8))(rcx_31).b != 0)
            *(arg1 + 0xb0) |= 0x80000
else if ((rax.b & 1) != 0)
    arg_8 = *(arg1 + 0x18)
    int16_t* var_18
    sub_140b63b70(&arg_8, &var_18)
    int16_t* const r9_1 = &data_142d40450
    int32_t var_10
    
    if (var_10 != 0)
        r9_1 = var_18
    
    sub_140af98a0("Unknown", 0x9d6, 
        Couldn't bind to native struct %s. Headers need to be rebuilt, or a noexport class is missing a "
    "IMPLEMENT_STRUCT.", r9_1)
    int16_t* rcx_6 = var_18
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    sub_140afbb40()

*(arg1 + 0xb4) = 1
