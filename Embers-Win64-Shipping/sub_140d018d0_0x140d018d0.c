// 函数: sub_140d018d0
// 地址: 0x140d018d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_78 = 0
int64_t* result = arg2
int32_t rdi = 0

if (arg3 != 0)
    int64_t var_50 = 0
    int32_t rbx_1 = arg5[1].d
    int64_t rsi_1 = *arg5
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_50, rbx_1, 0)
        memcpy(var_50, rsi_1, rbx_1 * 2)
    else
        int32_t var_44_1 = 0
    
    int64_t r15_1 = -1
    int16_t* var_70
    int32_t var_68
    int32_t var_64
    int16_t* rsi_3
    int16_t* r12_1
    
    if (rbx_1 == 0)
        r12_1 = var_70
    label_140d01ad4:
        int32_t rcx_12 = arg4[1].d
        int32_t rax_10 = rcx_12 - 1
        
        if (rcx_12 == 0)
            rax_10 = -1
        
        int32_t rdx_5 = rcx_12 - 1
        
        if (rcx_12 == 0)
            rax_10 = 0
        
        if (rcx_12 == 0)
            rdx_5 = -1
        
        if (rax_10 == 0)
            rsi_3 = var_70
            rbx_1.b = 0
        else
            rdi |= 2
            
            if (rcx_12 == 0)
                rdx_5 = 0
            
            int16_t* r8_5
            
            if (rcx_12 == 0)
                r8_5 = &data_142d40450
            else
                r8_5 = *arg4
            
            int32_t rax_11 = rdx_5
            var_70 = nullptr
            
            if (rdx_5 s> 1)
                rax_11 = 1
            
            int32_t rdx_6 = 0
            rsi_3 = nullptr
            var_68 = 0
            int32_t rax_13 = 0
            var_64 = 0
            void* r14_1 = &r8_5[sx.q(rdx_5) - sx.q(rax_11)]
            int16_t* rcx_18
            int32_t r13
            
            if (r14_1 != 0 && *r14_1 != 0)
                int64_t rbx_4 = -1
                
                do
                    rbx_4 += 1
                while (*(r14_1 + (rbx_4 << 1)) != 0)
                
                if (rbx_4.d + 1 s> 0)
                    sub_1405947f0(&var_70, rbx_4.d + 1)
                    rax_13 = var_64
                    rdx_6 = var_68
                    rsi_3 = var_70
                
                r13 = rbx_4.d + 1 + rdx_6
                var_68 = r13
                
                if (r13 s> rax_13)
                    sub_140594770(&var_70)
                    r13 = var_68
                    rsi_3 = var_70
                
                UnDecorator::getReferenceType(rsi_3, r14_1, (rbx_4.d + 1) * 2)
                rcx_18 = rsi_3
            
            if (r14_1 == 0 || *r14_1 == 0 || r13 == 0)
                rcx_18 = &data_142d40450
            
            result = arg2
            
            if (sub_140a54510(rcx_18, &data_142e5cee4) != 0)
                rbx_1.b = 0
            else
                rbx_1.b = 1
    else if (rbx_1 == 1)
        r12_1 = var_70
    label_140d01a48:
        
        if (rbx_1 == 0 || rbx_1 == 1)
            goto label_140d01ad4
        
        rsi_3 = var_70
        rbx_1.b = 0
    else
        var_70 = nullptr
        int32_t rax_3 = rbx_1 - 1
        int32_t rdx_2 = 0
        
        if (rbx_1 - 1 s> 1)
            rax_3 = 1
        
        r12_1 = nullptr
        var_68 = 0
        int16_t* rdi_1 = var_50 + ((sx.q(rbx_1 - 1) - sx.q(rax_3)) << 1)
        int32_t rax_6 = 0
        var_64 = 0
        int16_t* const rcx_8
        int32_t rsi_2
        
        if (rdi_1 != 0 && *rdi_1 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (rdi_1[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_70, rbx_2.d + 1)
                rax_6 = var_64
                rdx_2 = var_68
                r12_1 = var_70
            
            rsi_2 = rdx_2 + rbx_2.d + 1
            var_68 = rsi_2
            
            if (rsi_2 s> rax_6)
                sub_140594770(&var_70)
                rsi_2 = var_68
                r12_1 = var_70
            
            UnDecorator::getReferenceType(r12_1, rdi_1, (rbx_2.d + 1) * 2)
            rcx_8 = r12_1
        
        if (rdi_1 == 0 || *rdi_1 == 0 || rsi_2 == 0)
            rcx_8 = &data_142d40450
        
        rdi = 1
        
        if (sub_140a54510(rcx_8, &data_142e5cee4) != 0)
            goto label_140d01a48
        
        rsi_3 = var_70
        rbx_1 = 1
    
    if ((rdi.b & 2) != 0)
        rdi &= 0xfffffffd
        
        if (rsi_3 != 0)
            sub_140a74f90(rsi_3)
    
    if ((rdi.b & 1) != 0)
        rdi &= 0xfffffffe
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
    
    if (rbx_1.b != 0)
        sub_140a20ba0(&var_50, &data_142d404d4, 1)
    
    int16_t* var_60 = nullptr
    int32_t rbx_3 = arg7[1].d
    int16_t* rsi_4 = *arg7
    
    if (rbx_3 != 0)
        sub_1405a4c70(&var_60, rbx_3, 0)
        memcpy(var_60, rsi_4, rbx_3 * 2)
    else
        int32_t var_54_1 = 0
    
    int16_t* rbx_7
    int16_t* r12_2
    
    if (rbx_3 == 0)
        r12_2 = var_70
    label_140d01d62:
        int32_t rcx_33 = arg6[1].d
        int32_t rax_23 = rcx_33 - 1
        
        if (rcx_33 == 0)
            rax_23 = -1
        
        int32_t rdx_15 = rcx_33 - 1
        
        if (rcx_33 == 0)
            rax_23 = 0
        
        if (rcx_33 == 0)
            rdx_15 = -1
        
        if (rax_23 == 0)
            rbx_7 = var_70
            rsi_4.b = 0
        else
            rdi |= 8
            
            if (rcx_33 == 0)
                rdx_15 = 0
            
            int16_t* const r8_13
            
            if (rcx_33 == 0)
                r8_13 = &data_142d40450
            else
                r8_13 = *arg6
            
            int32_t rax_24 = rdx_15
            
            if (rdx_15 s> 1)
                rax_24 = 1
            
            rbx_7 = nullptr
            int32_t rdx_16 = 0
            var_70 = nullptr
            int32_t rax_26 = 0
            var_68 = 0
            var_64 = 0
            rsi_4 = &r8_13[sx.q(rdx_15) - sx.q(rax_24)]
            int16_t* rcx_39
            int32_t r14_3
            
            if (rsi_4 != 0 && *rsi_4 != 0)
                do
                    r15_1 += 1
                while (rsi_4[r15_1] != 0)
                
                if (r15_1.d + 1 s> 0)
                    sub_1405947f0(&var_70, r15_1.d + 1)
                    rax_26 = var_64
                    rdx_16 = var_68
                    rbx_7 = var_70
                
                r14_3 = r15_1.d + 1 + rdx_16
                var_68 = r14_3
                
                if (r14_3 s> rax_26)
                    sub_140594770(&var_70)
                    r14_3 = var_68
                    rbx_7 = var_70
                
                UnDecorator::getReferenceType(rbx_7, rsi_4, (r15_1.d + 1) * 2)
                rcx_39 = rbx_7
            
            if (rsi_4 == 0 || *rsi_4 == 0 || r14_3 == 0)
                rcx_39 = &data_142d40450
            
            if (sub_140a54510(rcx_39, &data_142e5cee4) != 0)
                rsi_4.b = 0
            else
                rsi_4.b = 1
    else if (rbx_3 == 1)
        r12_2 = var_70
    label_140d01cbb:
        
        if (rbx_3 == 0 || rbx_3 == 1)
            goto label_140d01d62
        
        rbx_7 = var_70
        rsi_4.b = 0
    else
        int32_t rax_16 = rbx_3 - 1
        var_70 = nullptr
        rdi |= 4
        int32_t rdx_11 = 0
        var_68 = 0
        
        if (rbx_3 - 1 s> 1)
            rax_16 = 1
        
        r12_2 = nullptr
        rsi_4 = &var_60[sx.q(rbx_3 - 1) - sx.q(rax_16)]
        int32_t rax_19 = 0
        var_64 = 0
        int16_t* rcx_27
        int32_t r14_2
        
        if (rsi_4 != 0 && *rsi_4 != 0)
            int64_t rbx_5 = -1
            
            do
                rbx_5 += 1
            while (rsi_4[rbx_5] != 0)
            
            if (rbx_5.d + 1 s> 0)
                sub_1405947f0(&var_70, rbx_5.d + 1)
                rax_19 = var_64
                rdx_11 = var_68
                r12_2 = var_70
            
            r14_2 = rbx_5.d + 1 + rdx_11
            var_68 = r14_2
            
            if (r14_2 s> rax_19)
                sub_140594770(&var_70)
                r14_2 = var_68
                r12_2 = var_70
            
            UnDecorator::getReferenceType(r12_2, rsi_4, (rbx_5.d + 1) * 2)
            rcx_27 = r12_2
        
        if (rsi_4 == 0 || *rsi_4 == 0 || r14_2 == 0)
            rcx_27 = &data_142d40450
        
        if (sub_140a54510(rcx_27, &data_142e5cee4) != 0)
            goto label_140d01cbb
        
        rbx_7 = var_70
        rsi_4.b = 1
    
    if ((rdi.b & 8) != 0)
        rdi &= 0xfffffff7
        
        if (rbx_7 != 0)
            sub_140a74f90(rbx_7)
    
    if ((rdi.b & 4) != 0 && r12_2 != 0)
        sub_140a74f90(r12_2)
    
    if (rsi_4.b != 0)
        sub_140a20ba0(&var_60, &data_142d404d4, 1)
    
    int16_t* const rdx_14 = &data_142d40450
    int16_t* const rax_22 = &data_142d40450
    
    if (rbx_3 != 0)
        rax_22 = var_60
    
    int16_t* const rcx_32
    
    if (arg6[1].d == 0)
        rcx_32 = &data_142d40450
    else
        rcx_32 = *arg6
    
    if (arg4[1].d != 0)
        rdx_14 = *arg4
    
    int16_t* const var_80_1 = rax_22
    int16_t* const var_88_1 = rcx_32
    sub_140a2e390(&var_70, u"<%s%s,%s%s>", rdx_14)
    
    if (arg3 == &var_70)
        int16_t* rcx_42 = var_70
        
        if (rcx_42 != 0)
            sub_140a74f90(rcx_42)
    else
        int16_t* rcx_41 = *arg3
        
        if (rcx_41 != 0)
            sub_140a74f90(rcx_41)
        
        *arg3 = var_70
        arg3[1].d = var_68
        *(arg3 + 0xc) = var_64
    
    int16_t* rcx_43 = var_60
    
    if (rcx_43 != 0)
        sub_140a74f90(rcx_43)
    
    int64_t rcx_44 = var_50
    
    if (rcx_44 != 0)
        sub_140a74f90(rcx_44)

*result = 0
result[1] = 0
sub_1405947f0(result, 5)
int32_t rax_31 = result[1].d + 5
result[1].d = rax_31

if (rax_31 s> *(result + 0xc))
    sub_140594770(result)

UnDecorator::getReferenceType(*result, u"TMap", 0xa)
return result
