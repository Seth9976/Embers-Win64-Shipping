// 函数: sub_140d01fa0
// 地址: 0x140d01fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg3
int32_t arg_10 = 0
int32_t r14 = 0

if (arg3 != 0)
    int64_t var_48 = 0
    int32_t rbx_1 = arg5[1].d
    int64_t rdi_1 = *arg5
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_48, rbx_1, 0)
        memcpy(var_48, rdi_1, rbx_1 * 2)
    else
        int32_t var_3c_1 = 0
    
    int16_t* const r8_2 = &data_142d40450
    uint64_t rdi_2 = -1
    int16_t* var_58
    int32_t var_50
    int32_t var_4c
    int16_t* rbx_4
    int16_t* r12_1
    int16_t* r15_2
    
    if (rbx_1 == 0)
        r12_1 = var_58
    label_140d02206:
        int32_t rcx_14 = arg4[1].d
        int32_t rax_13 = rcx_14 - 1
        
        if (rcx_14 == 0)
            rax_13 = -1
        
        int32_t rdx_5 = rcx_14 - 1
        
        if (rcx_14 == 0)
            rax_13 = 0
        
        if (rcx_14 == 0)
            rdx_5 = -1
        
        if (rax_13 == 0)
            goto label_140d02137
        
        r14 |= 2
        
        if (rcx_14 == 0)
            rdx_5 = 0
        
        if (rcx_14 != 0)
            r8_2 = *arg4
        
        int32_t rax_14 = rdx_5
        
        if (rdx_5 s> 1)
            rax_14 = 1
        
        rbx_4 = nullptr
        int32_t rdx_6 = 0
        var_58 = nullptr
        int32_t rax_16 = 0
        var_50.q = 0
        void* r15_3 = &r8_2[sx.q(rdx_5) - sx.q(rax_14)]
        int32_t r13_1
        
        if (r15_3 != 0 && *r15_3 != 0)
            do
                rdi_2 += 1
            while (*(r15_3 + (rdi_2 << 1)) != 0)
            
            rdi_2 = zx.q(rdi_2.d + 1)
            
            if (rdi_2.d s> 0)
                sub_1405947f0(&var_58, rdi_2.d)
                rax_16 = var_4c
                rdx_6 = var_50
                rbx_4 = var_58
            
            r13_1 = rdi_2.d + rdx_6
            var_50 = r13_1
            
            if (r13_1 s> rax_16)
                sub_140594770(&var_58)
                r13_1 = var_50
                rbx_4 = var_58
            
            UnDecorator::getReferenceType(rbx_4, r15_3, rdi_2.d * 2)
        
        int16_t* const rcx_20
        
        if (r15_3 == 0 || *r15_3 == 0 || r13_1 == 0)
            r15_2 = &data_142d40450
            rcx_20 = &data_142d40450
        else
            rcx_20 = rbx_4
            r15_2 = &data_142d40450
        
        r13 = arg3
        
        if (sub_140a54510(rcx_20, &data_142e5cee4) != 0)
            rdi_2.b = 0
        else
            rdi_2.b = 1
    else if (rbx_1 == 1)
        r12_1 = var_58
    label_140d02126:
        
        if (rbx_1 == 0 || rbx_1 == 1)
            goto label_140d02206
        
    label_140d02137:
        rbx_4 = var_58
        r15_2 = &data_142d40450
        rdi_2.b = 0
    else
        var_58 = nullptr
        int32_t rax_3 = rbx_1 - 1
        int32_t rdx_2 = 0
        
        if (rbx_1 - 1 s> 1)
            rax_3 = 1
        
        r12_1 = nullptr
        var_50 = 0
        int16_t* r14_1 = var_48 + ((sx.q(rbx_1 - 1) - sx.q(rax_3)) << 1)
        int32_t rax_6 = 0
        var_4c = 0
        int32_t r15_1
        
        if (r14_1 != 0 && *r14_1 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (r14_1[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_58, rbx_2.d + 1)
                rax_6 = var_4c
                rdx_2 = var_50
                r12_1 = var_58
            
            r15_1 = rbx_2.d + 1 + rdx_2
            var_50 = r15_1
            
            if (r15_1 s> rax_6)
                sub_140594770(&var_58)
                r15_1 = var_50
                r12_1 = var_58
            
            UnDecorator::getReferenceType(r12_1, r14_1, (rbx_2.d + 1) * 2)
        
        int16_t* rcx_8
        
        if (r14_1 == 0 || *r14_1 == 0 || r15_1 == 0)
            rcx_8 = &data_142d40450
        else
            rcx_8 = r12_1
        
        r14 = 1
        
        if (sub_140a54510(rcx_8, &data_142e5cee4) != 0)
            r8_2 = &data_142d40450
            goto label_140d02126
        
        rbx_4 = var_58
        r15_2 = &data_142d40450
        rdi_2 = 1
    
    if ((r14.b & 2) != 0)
        r14 &= 0xfffffffd
        
        if (rbx_4 != 0)
            sub_140a74f90(rbx_4)
    
    if ((r14.b & 1) != 0 && r12_1 != 0)
        sub_140a74f90(r12_1)
    
    if (rdi_2.b != 0)
        sub_140a20ba0(&var_48, &data_142d404d4, 1)
    
    if (arg4[1].d != 0)
        r15_2 = *arg4
    
    sub_140a2e390(&var_58, u"<%s%s>", r15_2)
    
    if (r13 == &var_58)
        int16_t* rcx_21 = var_58
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
    else
        int64_t rcx_13 = *r13
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        *r13 = var_58
        r13[1].d = var_50
        *(r13 + 0xc) = var_4c
    
    int64_t rcx_22 = var_48
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 5)
int32_t rax_18 = arg2[1].d + 5
arg2[1].d = rax_18

if (rax_18 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"TSet", 0xa)
return arg2
