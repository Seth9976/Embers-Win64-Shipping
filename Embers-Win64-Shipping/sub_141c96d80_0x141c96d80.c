// 函数: sub_141c96d80
// 地址: 0x141c96d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg1
uint64_t rdi = 0
bool z

if (0 == *(r9 + 0x88))
    *(r9 + 0x88) = 0
    z = true
else
    *(r9 + 0x88)
    z = false

if (not(z))
    uint64_t rax
    rax.b = 0
    return rax

int32_t rcx = 0
int32_t r15 = 0
int32_t var_bc = 0
int64_t var_c8 = 0
int32_t var_c0 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_c8, rbx_1.d + 1)
        rcx = var_bc
        r15 = var_c0
    
    int32_t rax_1 = rbx_1.d + 1 + r15
    var_c0 = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_c8)
    
    rcx = UnDecorator::getReferenceType(var_c8, arg2, (rbx_1.d + 1) * 2)
    r15 = var_c0

int32_t* rax_8

if ((*(arg3 + 0x20) & 1) == 0)
    if (sub_140a236f0(&var_c8, &data_143e1a410, 1).b != 0)
        rax_8.b = 1
    else
        rax_8 = sub_140a236f0(&var_c8, &data_143e1a420, 1)
        
        if (rax_8.b != 0)
            rax_8.b = 1
    
    if (rax_8.b != 0)
        uint64_t var_a8 = 0
        int32_t var_a0_1 = 0
        rax_8 = sub_140bbcf00(&var_c8, &var_a8, nullptr)
        uint64_t r9_2 = var_a8
        uint32_t i
        
        if (rax_8.b != 0)
            uint64_t r14_2 = &data_142d40450
            int64_t rdx_18 = 0
            
            if (var_a0_1 != 0)
                r14_2 = r9_2
            
            i = zx.d(*r14_2)
            uint64_t rax_13 = zx.q(i) & 0xffffffc0
            
            if (rax_13.d == 0x40)
                rdx_18 = 0x5000000010000001
            
            if (not(test_bit(rdx_18 | (sbb.q(rax_13, rax_13, i u< 0x40) & 0xd40054cf00002601), 
                    zx.q((i & 0x3f).b))))
                uint64_t rax_18
                int64_t rdx_20
                
                do
                    i = zx.d(*(r14_2 + 2))
                    r14_2 += 2
                    rdx_20 = 0
                    rax_18 = zx.q(i) & 0xffffffc0
                    
                    if (rax_18.d == 0x40)
                        rdx_20 = 0x5000000010000001
                while (not(test_bit(
                    rdx_20 | (sbb.q(rax_18, rax_18, i u< 0x40) & 0xd40054cf00002601), 
                    zx.q((i & 0x3f).b))))
        
        if (rax_8.b == 0 || i.w != 0)
            rax_8.b = 0
        else
            rax_8.b = 1
        
        if (rax_8.b != 0)
            int64_t* rcx_22 = arg1[4]
            uint64_t rax_22
            
            if (*(*rcx_22 + 0x40) != 0)
                rax_22.b = 0
            else
                int64_t* rdx_22 = rcx_22[1]
                
                if (rdx_22[1].d s<= 1)
                    rax_22.b = 0
                else if (sub_140a32a50(&var_c8, rdx_22, 1).b == 0)
                    rax_22.b = 0
                else
                    rax_22.b = 1
            
            int64_t rbx_6 = var_c8
            int32_t r12_2
            int64_t* r15_3
            
            if (rax_22.b == 0)
                uint64_t var_78 = 0
                
                if (var_c0 != 0)
                    sub_1405a4c70(&var_78, var_c0, 0)
                    rdi = var_78
                    memcpy(rdi, rbx_6, var_c0 * 2)
                    int32_t var_6c
                    r12_2 = var_6c
                else
                    r12_2 = 0
                
                r15_3 = arg1[6]
            else
                uint64_t var_88 = 0
                
                if (var_c0 != 0)
                    sub_1405a4c70(&var_88, var_c0, 0)
                    rdi = var_88
                    memcpy(rdi, rbx_6, var_c0 * 2)
                    int32_t var_7c
                    r12_2 = var_7c
                    r15_3 = arg1[5]
                else
                    r15_3 = arg1[5]
                    r12_2 = 0
            
            int64_t rbx_7 = *(arg3 + 0x10)
            int64_t r13_1 = sx.q(r15_3[1].d)
            int32_t rax_23 = (r13_1 + 1).d
            r15_3[1].d = rax_23
            
            if (rax_23 s> *(r15_3 + 0xc))
                sub_1405a4df0(r15_3)
            
            int64_t rax_24 = *r15_3
            int64_t rcx_30 = r13_1 * 3
            *(rax_24 + (rcx_30 << 3)) = rdi
            *(rax_24 + (rcx_30 << 3) + 8) = var_c0
            *(rax_24 + (rcx_30 << 3) + 0xc) = r12_2
            *(rax_24 + (rcx_30 << 3) + 0x10) = rbx_7
            int64_t var_50
            int64_t* rax_25 = sub_140baa480(&var_50, &var_a8)
            void var_68
            sub_140a5cad0(arg1[3], &var_68, rax_25, nullptr)
            int64_t rcx_33 = var_50
            
            if (rcx_33 != 0)
                sub_140a74f90(rcx_33)
            
            int32_t* rax_26 = arg1[7]
            *rax_26 += 1
            
            if ((*arg1)[0x10].b == 0 && arg1[6][2] + *(arg1[5] + 8) s>= 0x9c4)
                sub_141c97280(arg1[8])
            
            r9_2 = var_a8
        
        if (r9_2 != 0)
            sub_140a74f90(r9_2)
else
    int64_t rbx_3 = var_c8
    int64_t var_b8 = 0
    sub_1405a4c70(&var_b8, sbb.d(rcx, rcx, r15 != 0) + 2 + r15, 0)
    memcpy(var_b8, rbx_3, r15 * 2)
    int16_t* const r14_1 = &data_142d40450
    sub_140a2cf70(&var_b8, &data_142d40450, 0)
    int64_t* rbx_4 = arg1[1]
    int64_t r15_1 = sx.q(rbx_4[1].d)
    int32_t rax_4 = (r15_1 + 1).d
    rbx_4[1].d = rax_4
    
    if (rax_4 s> *(rbx_4 + 0xc))
        sub_1405a4f90(rbx_4)
    
    int64_t* rdx_9 = (r15_1 << 4) + *rbx_4
    *rdx_9 = 0
    *rdx_9 = var_b8
    var_b8 = 0
    rdx_9[1].d = r15
    int32_t var_ac
    *(rdx_9 + 0xc) = var_ac
    int64_t rcx_9 = var_b8
    int32_t var_b0_1
    var_b0_1.q = 0
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    uint64_t var_98 = 0
    int32_t var_90_1 = 0
    void arg_8
    
    if (sub_140bbcf00(&var_c8, &var_98, nullptr).b != 0
            && *sub_140960120(arg1[2], &arg_8, &var_98) == 0xffffffff)
        int64_t* r15_2 = arg1[3]
        int32_t var_60
        sub_140598750(r15_2, &var_60)
        int16_t** var_58
        *var_58 = nullptr
        uint64_t r12_1 = var_98
        var_58[1].d = var_90_1
        
        if (var_90_1 != 0)
            sub_1405a4c70(var_58, var_90_1, 0)
            memcpy(*var_58, r12_1, var_90_1 * 2)
        else
            *(var_58 + 0xc) = 0
        
        var_58[2].d = 0xffffffff
        int32_t rax_9 = var_58[1].d
        
        if (rax_9 != 0)
            r14_1 = *var_58
        
        int32_t rcx_15 = rax_9 - 1
        
        if (rax_9 == 0)
            rcx_15 = 0
        
        void arg_20
        sub_14059a6d0(r15_2, &arg_20, sub_1405969c0(rcx_15, r14_1), var_58, var_60, nullptr)
    
    uint64_t rcx_36 = var_98
    
    if (rcx_36 != 0)
        sub_140a74f90(rcx_36)

int64_t rcx_37 = var_c8

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

rax_8.b = 1
return rax_8
