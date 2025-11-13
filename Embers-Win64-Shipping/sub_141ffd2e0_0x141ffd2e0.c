// 函数: sub_141ffd2e0
// 地址: 0x141ffd2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[4].d
int64_t r14 = arg2[3]
uint64_t var_58 = 0
int32_t var_50 = rbx
int32_t var_4c
int32_t r8

if (rbx != 0)
    sub_1405a4c70(&var_58, rbx, 0)
    memcpy(var_58, r14, rbx * 2)
    r8 = var_4c
else
    r8 = 0
    var_4c = 0

if (var_50 s> 1)
label_141ffd630:
    int64_t* rax = *arg2
    
    if (rax != 0)
        void* rbx_6 = rax[0x53]
        
        if (rbx_6 != 0)
            void* rax_11 = sub_142531230()
            void* rdx_12 = *(rbx_6 + 0x10)
            void* r8_9 = rax_11 + 0x30
            rax = sx.q(*(rax_11 + 0x38))
            
            if (rax.d s<= *(rdx_12 + 0x38) && (*(rdx_12 + 0x30))[rax] == r8_9)
                void* const rbx_7 = (*arg2)[0x53]
                
                if (rbx_7 == 0)
                    rbx_7 = nullptr
                else
                    void* rax_12 = sub_142531230()
                    void* rdx_13 = *(rbx_7 + 0x10)
                    r8_9 = rax_12 + 0x30
                    rax = sx.q(*(rax_12 + 0x38))
                    
                    if (rax.d s> *(rdx_13 + 0x38))
                        rbx_7 = nullptr
                    else if ((*(rdx_13 + 0x30))[rax] != r8_9)
                        rbx_7 = nullptr
                
                if (*(rbx_7 + 0x70) != 0)
                    void* const rbx_8 = *(*arg2 + 0x298)
                    int64_t rax_15
                    void* rdx_14
                    
                    if (rbx_8 != 0)
                        void* rax_14 = sub_142531230()
                        rdx_14 = *(rbx_8 + 0x10)
                        r8_9 = rax_14 + 0x30
                        rax_15 = sx.q(*(rax_14 + 0x38))
                    
                    if (rbx_8 == 0 || rax_15.d s> *(rdx_14 + 0x38)
                            || *(*(rdx_14 + 0x30) + (rax_15 << 3)) != r8_9)
                        rbx_8 = nullptr
                    
                    if ((*(rbx_8 + 0x70))[8] != 0)
                        void* const rbx_9 = *(*arg2 + 0x298)
                        int64_t rax_19
                        void* rdx_15
                        
                        if (rbx_9 != 0)
                            void* rax_18 = sub_142531230()
                            rdx_15 = *(rbx_9 + 0x10)
                            r8_9 = rax_18 + 0x30
                            rax_19 = sx.q(*(rax_18 + 0x38))
                        
                        if (rbx_9 == 0 || rax_19.d s> *(rdx_15 + 0x38)
                                || *(*(rdx_15 + 0x30) + (rax_19 << 3)) != r8_9)
                            rbx_9 = nullptr
                        
                        int64_t* rcx_32 = *(*(rbx_9 + 0x70) + 0x40)
                        (*(*rcx_32 + 0x280))(rcx_32, &var_58, r8_9)
else
    int32_t rcx_2 = arg2[2].d
    uint64_t var_48
    int64_t var_28
    int64_t rcx_18
    
    if (rcx_2 == 1)
        int64_t* rcx_24 = arg2[5]
        
        if (rcx_24 != 0)
            int16_t* const rbx_5 = &data_142d40450
            
            if (*(arg1 + 0x50) != 0)
                *(arg1 + 0x48)
            
            int64_t* rax_8 = sub_1422a12b0(rcx_24, &var_28)
            
            if (rax_8[1].d != 0)
                rbx_5 = *rax_8
            
            sub_140a2e390(&var_48, u"%s%s", rbx_5)
            uint64_t rcx_27 = var_58
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            rcx_18 = var_28
            goto label_141ffd604
        
        sub_140597df0(&var_58, arg1 + 0x88)
    else
        int32_t var_40
        int32_t var_3c
        int64_t var_38
        
        if (rcx_2 == 2)
            int64_t* rcx_19 = arg2[5]
            
            if (rcx_19 != 0)
                int64_t* rax_3 = sub_1422a12b0(rcx_19, &var_28)
                int16_t* const rbx_4 = &data_142d40450
                int16_t* const r14_1
                
                if (rax_3[1].d == 0)
                    r14_1 = &data_142d40450
                else
                    r14_1 = *rax_3
                
                if (*(arg1 + 0x70) != 0)
                    *(arg1 + 0x68)
                
                int64_t* rcx_20 = arg2[5]
                int16_t** rax_5 = (*(*rcx_20 + 0x688))(rcx_20, &var_38)
                
                if (rax_5[1].d != 0)
                    rbx_4 = *rax_5
                
                int16_t* const var_68_1 = r14_1
                sub_140a2e390(&var_48, u"%s %s %s", rbx_4)
                uint64_t rcx_22 = var_58
                
                if (rcx_22 != 0)
                    sub_140a74f90(rcx_22)
                
                int64_t rcx_23 = var_38
                var_58 = var_48
                var_50 = var_40
                int32_t var_4c_2 = var_3c
                var_40.q = 0
                var_48 = 0
                
                if (rcx_23 != 0)
                    sub_140a74f90(rcx_23)
                
                rcx_18 = var_28
                goto label_141ffd61c
            
        label_141ffd44f:
            
            if (var_58 != &data_142d40450)
                var_50 = 0
                
                if (r8 != 0)
                    sub_1405947f0(&var_58, 0)
                    r8 = var_4c
                
                if (var_50 s> r8)
                    sub_140594770(&var_58)
        else if (rcx_2 == 4)
            int64_t* rcx_13 = arg2[5]
            int16_t* const rbx_3 = &data_142d40450
            
            if (rcx_13 == 0)
                goto label_141ffd44f
            
            if (*(arg1 + 0x60) != 0)
                *(arg1 + 0x58)
            
            int16_t** rax_2 = sub_1422a12b0(rcx_13, &var_38)
            
            if (rax_2[1].d != 0)
                rbx_3 = *rax_2
            
            sub_140a2e390(&var_48, u"%s%s", rbx_3)
            uint64_t rcx_17 = var_58
            
            if (rcx_17 == 0)
                rcx_18 = var_38
                goto label_141ffd604
            
            sub_140a74f90(rcx_17)
            rcx_18 = var_38
        label_141ffd604:
            var_58 = var_48
            var_50 = var_40
            int32_t var_4c_3 = var_3c
            var_40.q = 0
            var_48 = 0
        label_141ffd61c:
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
        else if (rcx_2 == 7)
            if (&var_58 != arg1 + 0x38)
                int32_t rbx_2 = *(arg1 + 0x40)
                int64_t rdi_3 = *(arg1 + 0x38)
                var_50 = rbx_2
                
                if (rbx_2 != 0 || r8 != 0)
                    sub_1405a4c70(&var_58, rbx_2, r8)
                    memcpy(var_58, rdi_3, rbx_2 * 2)
                else
                    int32_t var_4c_1 = 0
        else if (rcx_2 == 0x10)
            int64_t* rcx_7 = arg2[5]
            
            if (rcx_7 != 0)
                int16_t* const rbx_1 = &data_142d40450
                
                if (*(arg1 + 0x80) != 0)
                    *(arg1 + 0x78)
                
                int64_t* rax_1 = sub_1422a12b0(rcx_7, &var_38)
                
                if (rax_1[1].d != 0)
                    rbx_1 = *rax_1
                
                sub_140a2e390(&var_48, u"%s%s", rbx_1)
                uint64_t rcx_10 = var_58
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                rcx_18 = var_38
                goto label_141ffd604
            
            sub_140597df0(&var_58, arg1 + 0x98)
    
    if (var_50 s> 1)
        goto label_141ffd630

uint64_t rcx_33 = var_58

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)
