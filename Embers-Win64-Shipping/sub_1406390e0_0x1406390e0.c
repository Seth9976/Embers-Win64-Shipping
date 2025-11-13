// 函数: sub_1406390e0
// 地址: 0x1406390e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
uint64_t result_18 = 0
int64_t* var_e8 = nullptr
int64_t var_e0 = 0
char r12 = arg4
sub_1405947f0(&var_e8, 5)
int32_t rsi = var_e0:4.d
int32_t rdi = var_e0.d + 5
var_e0.d = rdi

if (rdi s> rsi)
    sub_140594770(&var_e8)
    rsi = var_e0:4.d
    rdi = var_e0.d

int64_t* rbx = var_e8
sub_1405a7220(rbx, 5, "None", 5, 0x3f)

if (arg1 != &var_e8)
    int64_t rcx_3 = *arg1
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *arg1 = rbx
    arg1[1].d = rdi
    *(arg1 + 0xc) = rsi
else if (rbx != 0)
    sub_140a74f90(rbx)

uint64_t result = zx.q(arg2[1].d)
int32_t rcx_5 = (result - 1).d

if (result.d == 0)
    rcx_5 = 0

int64_t rcx_46
int64_t rcx_6

if (rcx_5 s> 0)
    sub_140b214e0(arg3)
    uint64_t result_2
    
    if (sub_14063cdd0(sub_140596d10(&result_2, arg3)).b != 0)
        int16_t* var_88
        sub_140b11a30(&var_88, sub_140b27630(&result_2))
        uint64_t result_13 = result_2
        
        if (result_13 != 0)
            sub_140a74f90(result_13)
        
        uint64_t result_19 = 0
        int32_t i_10 = 0
        int64_t var_98 = 0
        int64_t var_90_1 = 0
        char var_118 = 0
        uint64_t result_9
        sub_140a35790(sub_140a300d0(&var_98, &var_e8, &data_142d404c4, &data_142d40450, 1), 
            &result_9)
        int64_t* rcx_15 = var_e8
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        result_2 = 0
        void** const var_78 = &data_142d6bbd8
        uint64_t* var_70_1 = &result_9
        uint64_t* var_68_1 = &result_2
        char* var_60_1 = &var_118
        int64_t* var_58_1 = &result_19
        uint64_t result_10 = 0
        int32_t var_80
        
        if (var_118 == 0)
            int64_t* rax_4 = __crt_deferred_errno_cache::get(&data_143db7b00)
            int16_t* rdx_6 = &data_142d40450
            
            if (var_80 != 0)
                rdx_6 = var_88
            
            int64_t r9_1 = *rax_4
            result = (*(r9_1 + 0x100))(rax_4, rdx_6, &var_78, r9_1)
        else
            int64_t* rax_3 = __crt_deferred_errno_cache::get(&data_143db7b00)
            int16_t* const rdx_5 = &data_142d40450
            
            if (var_80 != 0)
                rdx_5 = var_88
            
            int64_t r9 = *rax_3
            result = (*(r9 + 0x148))(rax_3, rdx_5, &var_78, r9)
        
        var_78 = &data_142d6ad38
        uint64_t result_14 = result_2
        
        if (result_14 != 0)
            sub_140a74f90(result_14)
        
        uint64_t result_23 = result_9
        
        if (result_23 != 0)
            sub_140a74f90(result_23)
        
        int64_t rcx_18 = var_98
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        uint64_t result_15 = result_19
        
        if (result.b != 0)
            int64_t i_13 = sx.q(i_10)
            int64_t* rsi_2 = nullptr
            var_e8 = nullptr
            int32_t i_8 = 0
            int64_t result_3 = (i_13 << 4) + result_15
            int32_t i_9 = 0
            var_e0:4.d = 0
            uint64_t result_1 = result_3
            int16_t* result_11
            int64_t var_c0
            int16_t* result_12
            
            if (result_15 != result_3)
                do
                    int32_t rax_7 = *(result_15 + 8)
                    int16_t* result_26 = nullptr
                    int32_t rdi_1
                    
                    if (r12 == 0)
                        result_12 = nullptr
                        int32_t var_a0_1 = 0
                        int16_t* result_31
                        int16_t* r12_2
                        int32_t r15_4
                        
                        if (rax_7 == 0)
                            r12_2 = &data_142d40450
                            rdi_1 = rax_7 - 1
                            
                            if (rax_7 == 0)
                                rdi_1 = 0
                            
                            if (rdi_1 s> 4)
                                rdi_1 = 4
                            
                            r15_4 = rdi_1
                            
                            if (*r12_2 != 0 && rdi_1 s> 0)
                                goto label_14063954a
                            
                            result_31 = &data_142d40450
                        else
                            r12_2 = *result_15
                            rdi_1 = rax_7 - 1
                            
                            if (rax_7 == 0)
                                rdi_1 = 0
                            
                            if (rdi_1 s> 4)
                                rdi_1 = 4
                            
                            r15_4 = rdi_1
                            
                            if (r12_2 == 0 || *r12_2 == 0 || rdi_1 s<= 0)
                                result_31 = &data_142d40450
                            else
                            label_14063954a:
                                sub_1405947f0(&result_12, rdi_1 + 1)
                                int32_t r15_6 = r15_4 + 1 + var_a0_1
                                
                                if (r15_6 s> 0)
                                    sub_140594770(&result_12)
                                
                                result_26 = result_12
                                UnDecorator::getReferenceType(result_26, r12_2, rdi_1 * 2)
                                result_31 = result_26
                                result_26[sx.q(r15_6) - 1] = 0
                                
                                if (r15_6 == 0)
                                    result_31 = &data_142d40450
                        rdi_1.b = sub_140a54570(result_31, "High") == 0
                    else
                        result_11 = nullptr
                        var_c0 = 0
                        int16_t* const result_30
                        int16_t* r12_1
                        int32_t r15_1
                        
                        if (rax_7 == 0)
                            r12_1 = &data_142d40450
                            rdi_1 = rax_7 - 1
                            
                            if (rax_7 == 0)
                                rdi_1 = 0
                            
                            if (rdi_1 s> 4)
                                rdi_1 = 4
                            
                            r15_1 = rdi_1
                            
                            if (*r12_1 != 0 && rdi_1 s> 0)
                                goto label_140639443
                            
                            result_30 = &data_142d40450
                        else
                            r12_1 = *result_15
                            rdi_1 = rax_7 - 1
                            
                            if (rax_7 == 0)
                                rdi_1 = 0
                            
                            if (rdi_1 s> 4)
                                rdi_1 = 4
                            
                            r15_1 = rdi_1
                            
                            if (r12_1 == 0 || *r12_1 == 0 || rdi_1 s<= 0)
                                result_30 = &data_142d40450
                            else
                            label_140639443:
                                sub_1405947f0(&result_11, rdi_1 + 1)
                                int32_t r15_3 = r15_1 + 1 + var_c0.d
                                var_c0.d = r15_3
                                
                                if (r15_3 s> 0)
                                    sub_140594770(&result_11)
                                    r15_3 = var_c0.d
                                
                                result_26 = result_11
                                UnDecorator::getReferenceType(result_26, r12_1, rdi_1 * 2)
                                result_30 = result_26
                                result_26[sx.q(r15_3) - 1] = 0
                                
                                if (r15_3 == 0)
                                    result_30 = &data_142d40450
                        rdi_1.b = sub_140a54570(result_30, "High") != 0
                    
                    if (result_26 != 0)
                        sub_140a74f90(result_26)
                    
                    if (rdi_1.b == 0)
                        rsi_2 = var_e8
                    else
                        int64_t i_11 = sx.q(i_8)
                        i_8 = (i_11 + 1).d
                        var_e0.d = i_8
                        
                        if (i_8 s> var_e0:4.d)
                            sub_1405a4f90(&var_e8)
                            i_8 = var_e0.d
                        
                        rsi_2 = var_e8
                        sub_140596d10(&rsi_2[i_11 * 2], result_15)
                    
                    r12 = arg4
                    result_15 += 0x10
                while (result_15 != result_1)
                
                i_13 = zx.q(i_10)
                result_15 = result_19
                i_9 = i_8
            
            int64_t* r12_3 = rsi_2
            result = &rsi_2[sx.q(i_8) * 2]
            result_1 = result
            
            if (rsi_2 != result)
                do
                    int32_t i = 0
                    
                    if (i_13.d s> 0)
                        int64_t rsi_3 = 0
                        
                        do
                            int16_t* rdx_15
                            
                            if (r12_3[1].d == 0)
                                rdx_15 = &data_142d40450
                            else
                                rdx_15 = *r12_3
                            
                            int16_t* const rcx_33
                            
                            if (*(rsi_3 + result_15 + 8) == 0)
                                rcx_33 = &data_142d40450
                            else
                                rcx_33 = *(rsi_3 + result_15)
                            
                            if (sub_140a54510(rcx_33, rdx_15) == 0)
                                uint64_t result_33 = result_19
                                int64_t rbx_3 = sx.q(i) * 2
                                int64_t rcx_34 = *(result_33 + (rbx_3 << 3))
                                
                                if (rcx_34 != 0)
                                    sub_140a74f90(rcx_34)
                                    result_33 = result_19
                                
                                int32_t i_12 = i_10
                                int32_t rax_17 = i_12 - i - 1
                                
                                if (rax_17 s>= 1)
                                    rax_17 = 1
                                
                                if (rax_17 != 0)
                                    memcpy(result_33 + (rbx_3 << 3), 
                                        (sx.q(i_12 - rax_17) << 4) + result_33, rax_17 << 4)
                                    i_12 = i_10
                                
                                i_10 = i_12 - 1
                                sub_140638bc0(&result_19)
                                i -= 1
                                rsi_3 -= 0x10
                            
                            i_13 = zx.q(i_10)
                            i += 1
                            result_15 = result_19
                            rsi_3 += 0x10
                        while (i s< i_13.d)
                        
                        result = result_1
                        result_18 = 0
                    
                    r12_3 = &r12_3[2]
                while (r12_3 != result)
                
                i_8 = i_9
                rsi_2 = var_e8
            
            if (i_13.d s< 1)
                int64_t* rdi_2 = rsi_2
                
                if (i_8 != 0)
                    int32_t i_1
                    
                    do
                        int64_t rcx_39 = *rdi_2
                        
                        if (rcx_39 != 0)
                            sub_140a74f90(rcx_39)
                        
                        rdi_2 = &rdi_2[2]
                        i_1 = i_8
                        i_8 -= 1
                    while (i_1 != 1)
                    i_13 = zx.q(i_10)
                    result_15 = result_19
                
                if (rsi_2 != 0)
                    sub_140a74f90(rsi_2)
                    i_13 = zx.q(i_10)
                    result_15 = result_19
                
                if (i_13.d != 0)
                    int32_t i_2
                    
                    do
                        int64_t rcx_41 = *result_15
                        
                        if (rcx_41 != 0)
                            sub_140a74f90(rcx_41)
                        
                        result_15 += 0x10
                        i_2 = i_13.d
                        i_13 = zx.q(i_13.d - 1)
                    while (i_2 != 1)
                    result_15 = result_19
                
                if (result_15 != 0)
                    sub_140a74f90(result_15)
                
                int16_t* rcx_43 = var_88
                
                if (rcx_43 != 0)
                    sub_140a74f90(rcx_43)
                
                rcx_6 = *arg2
                goto label_140639770
            
            int64_t rsi_4 = 0
            int32_t rdi_3 = 0
            int64_t r15_9 = (sx.q(i_13.d) << 4) + result_15
            var_98 = 0
            var_90_1:4.d = 0
            int32_t r12_4 = 0
            
            if (result_15 != r15_9)
                do
                    int64_t* rax_18 = __crt_deferred_errno_cache::get(&data_143db7b00)
                    int16_t* const r8_8
                    
                    if (*(result_15 + 8) == 0)
                        r8_8 = &data_142d40450
                    else
                        r8_8 = *result_15
                    
                    (*(*rax_18 + 0xa0))(rax_18, &result_1, r8_8)
                    uint64_t result_4 = result_1
                    int64_t rsi_5 = sx.q(rdi_3)
                    result_2 = result_15
                    result_10 = result_4
                    rdi_3 = (rsi_5 + 1).d
                    var_90_1.d = rdi_3
                    
                    if (rdi_3 s> r12_4)
                        sub_140610660(&var_98)
                        r12_4 = var_90_1:4.d
                        rdi_3 = var_90_1.d
                    
                    result_15 += 0x10
                    rsi_4 = var_98
                    *(rsi_4 + rsi_5 * 0x10) = result_2.o
                while (result_15 != r15_9)
                
                result_18 = 0
            
            sub_1406263a0(rsi_4, rdi_3, arg2.b)
            sub_140597df0(arg_8, *(rsi_4 + sx.q(rdi_3 - 1) * 0x10))
            result_9 = 0
            int64_t var_108_1 = 0
            sub_1405947f0(&result_9, 5)
            int32_t rbx_4 = var_108_1.d + 5
            int32_t var_100_1 = rbx_4
            var_108_1.d = rbx_4
            
            if (rbx_4 s> 0)
                sub_140594770(&result_9)
                var_100_1 = var_108_1.d
            
            uint64_t result_7 = result_9
            sub_1405a7220(result_7, 5, ".png", 5, 0x3f)
            result_1 = 0
            int64_t var_f0_1 = 0
            sub_1405947f0(&result_1, 2)
            int32_t rsi_6 = var_f0_1:4.d
            int32_t rdi_4 = var_f0_1.d + 2
            var_f0_1.d = rdi_4
            
            if (rdi_4 s> rsi_6)
                sub_140594770(&result_1)
                rsi_6 = var_f0_1:4.d
                rdi_4 = var_f0_1.d
            
            int16_t* result_8 = result_1
            result_11 = result_8
            sub_1405a7220(result_8, 2, &data_142d63b88, 2, 0x3f)
            int32_t rcx_57 = arg3[1].d
            result_12.d = rcx_57
            uint64_t result_5
            
            if (rcx_57 s> 1)
                int32_t rax_24
                int32_t rdi_5
                
                if (rdi_4 == 0)
                    rdi_5 = 0
                    rax_24 = 0
                else
                    rdi_5 = rdi_4 - 1
                    rax_24 = rdi_5
                
                int64_t rbx_5 = *arg3
                var_f0_1.d = rcx_57
                result_1 = 0
                sub_1405a4c70(&result_1, rcx_57 + rax_24, 0)
                memcpy(result_1, rbx_5, result_12.d * 2)
                sub_140a20ba0(&result_1, result_8, rdi_5)
                result_5 = result_1
                rdi_4 = var_f0_1.d
                rsi_6 = var_f0_1:4.d
                result_1 = 0
                int64_t var_f0_2 = 0
            else
                result_5 = result_8
                result_11 = nullptr
            
            int64_t* rcx_64 = arg2
            result_12 = result_5
            int32_t rbx_6 = rcx_64[1].d
            int32_t rax_25
            uint64_t result_24
            uint64_t result_17
            
            if (rdi_4 s> 1)
                result_9 = result_5
                int32_t r15_10 = rbx_6 - 1
                result_12 = nullptr
                
                if (rbx_6 == 0)
                    r15_10 = 0
                
                var_108_1.d = rdi_4
                var_108_1:4.d = rsi_6
                int32_t rdx_33 = r15_10 + rdi_4
                
                if (rdx_33 s> rsi_6)
                    sub_1405947f0(&result_9, rdx_33)
                    rcx_64 = arg2
                
                sub_140a20ba0(&result_9, *rcx_64, r15_10)
                rax_25 = var_108_1:4.d
                result_17 = result_9
                rbx_6 = var_108_1.d
                int64_t var_108_2 = 0
                result_9 = 0
                result_24 = result_17
            else
                int64_t rsi_7 = *rcx_64
                result_17 = 0
                result_2 = 0
                result_10.d = rbx_6
                
                if (rbx_6 != 0)
                    sub_1405a4c70(&result_2, rbx_6, 0)
                    result_17 = result_2
                    memcpy(result_17, rsi_7, rbx_6 * 2)
                    rax_25 = result_10:4.d
                    rbx_6 = result_10.d
                    result_24 = result_17
                else
                    rax_25 = 0
                    result_24 = 0
            
            if (rbx_6 s> 1)
                int32_t rsi_8 = var_100_1 - 1
                
                if (var_100_1 == 0)
                    rsi_8 = 0
                
                int32_t rcx_67
                
                if (rbx_6 == 0)
                    rcx_67 = rbx_6 + 1
                
                if (rbx_6 != 0 || rsi_8 == 0)
                    rcx_67 = 0
                
                result_2 = result_17
                int32_t rdx_36 = rsi_8 + rbx_6 + rcx_67
                result_10.d = rbx_6
                result_10:4.d = rax_25
                
                if (rdx_36 s> rax_25)
                    sub_1405947f0(&result_2, rdx_36)
                
                sub_140a20ba0(&result_2, result_7, rsi_8)
                result_1 = result_2
                var_100_1 = result_10.d
            else
                result_1 = result_7
                result_7 = 0
                
                if (result_24 != 0)
                    sub_140a74f90(result_24)
            
            int16_t* result_20 = result_12
            
            if (result_20 != 0)
                sub_140a74f90(result_20)
            
            int16_t* result_21 = result_11
            
            if (result_21 != 0)
                sub_140a74f90(result_21)
            
            if (result_7 != 0)
                sub_140a74f90(result_7)
            
            result_9 = 0
            int64_t var_108_3 = 0
            sub_1405947f0(&result_9, 2)
            int32_t rsi_9 = var_108_3:4.d
            int32_t rbx_7 = var_108_3.d + 2
            var_108_3.d = rbx_7
            
            if (rbx_7 s> rsi_9)
                sub_140594770(&result_9)
                rsi_9 = var_108_3:4.d
                rbx_7 = var_108_3.d
            
            uint64_t result_29 = result_9
            sub_1405a7220(result_29, 2, &data_142d63b88, 2, 0x3f)
            uint64_t result_28
            
            if (var_80 s> 1)
                int32_t rbx_8
                
                if (rbx_7 == 0)
                    rbx_8 = 0
                else
                    rbx_8 = rbx_7 - 1
                
                int32_t rax_28
                
                if (var_80 == 0)
                    rax_28 = var_80 + 1
                
                if (var_80 != 0 || rbx_8 == 0)
                    rax_28 = 0
                
                int16_t* rsi_10 = var_88
                int32_t rax_29 = rax_28 + rbx_8
                result_11 = nullptr
                var_c0.d = var_80
                
                if (var_80 != 0 || rax_29 != 0)
                    sub_1405a4c70(&result_11, var_80 + rax_29, 0)
                    memcpy(result_11, rsi_10, var_80 * 2)
                else
                    var_c0:4.d = 0
                
                sub_140a20ba0(&result_11, result_29, rbx_8)
                result_28 = result_11
                rbx_7 = var_c0.d
                rsi_9 = var_c0:4.d
                result_11 = nullptr
                int64_t var_c0_1 = 0
            else
                result_28 = result_29
                result_29 = 0
            
            int64_t* rax_30 = arg_8
            int32_t rdi_7 = rax_30[1].d
            
            if (rbx_7 s> 1)
                result_9 = result_28
                int32_t rax_31 = rdi_7 - 1
                var_108_3.d = rbx_7
                
                if (rdi_7 == 0)
                    rax_31 = 0
                
                var_108_3:4.d = rsi_9
                result_12.d = rax_31
                result_28 = 0
                int32_t rdx_44 = rax_31 + rbx_7
                
                if (rdx_44 s> rsi_9)
                    sub_1405947f0(&result_9, rdx_44)
                    rax_31 = result_12.d
                
                sub_140a20ba0(&result_9, *arg_8, rax_31)
                uint64_t result_22 = result_9
                rdi_7 = var_108_3.d
                result_9 = 0
                result_18 = result_22
                int64_t var_108_4 = 0
            else
                int64_t rbx_9 = *rax_30
                result_2 = 0
                result_10.d = rdi_7
                
                if (rdi_7 != 0)
                    sub_1405a4c70(&result_2, rdi_7, 0)
                    result_18 = result_2
                    memcpy(result_18, rbx_9, rdi_7 * 2)
                    rdi_7 = result_10.d
            
            int64_t* rax_33 = sub_140b21590(&arg_8)
            int64_t* rax_34 = __crt_deferred_errno_cache::get(&data_143db7b00)
            uint64_t result_16 = &data_142d40450
            uint64_t result_25 = &data_142d40450
            int64_t r9_2 = *rax_34
            
            if (rdi_7 != 0)
                result_25 = result_18
            
            (*(r9_2 + 0xa8))(rax_34, result_25, *rax_33, r9_2)
            int64_t* rax_35 = __crt_deferred_errno_cache::get(&data_143db7b00)
            uint64_t result_6 = result_1
            uint64_t result_27 = &data_142d40450
            
            if (rdi_7 != 0)
                result_27 = result_18
            
            int64_t r9_3 = *rax_35
            
            if (var_100_1 != 0)
                result_16 = result_6
            
            char rax_36 = (*(r9_3 + 0x90))(rax_35, result_16, result_27, r9_3)
            
            if (result_18 != 0)
                sub_140a74f90(result_18)
            
            if (result_28 != 0)
                sub_140a74f90(result_28)
            
            if (result_29 != 0)
                sub_140a74f90(result_29)
            
            if (result_6 != 0)
                sub_140a74f90(result_6)
            
            int64_t rcx_90 = var_98
            
            if (rcx_90 != 0)
                sub_140a74f90(rcx_90)
            
            int64_t* rdi_8 = var_e8
            int64_t* rbx_11 = rdi_8
            
            if (i_8 != 0)
                int32_t i_3
                
                do
                    int64_t rcx_91 = *rbx_11
                    
                    if (rcx_91 != 0)
                        sub_140a74f90(rcx_91)
                    
                    rbx_11 = &rbx_11[2]
                    i_3 = i_8
                    i_8 -= 1
                while (i_3 != 1)
            
            if (rdi_8 != 0)
                sub_140a74f90(rdi_8)
            
            int32_t i_7 = i_10
            uint64_t result_32 = result_19
            
            if (i_7 != 0)
                int32_t i_4
                
                do
                    int64_t rcx_93 = *result_32
                    
                    if (rcx_93 != 0)
                        sub_140a74f90(rcx_93)
                    
                    result_32 += 0x10
                    i_4 = i_7
                    i_7 -= 1
                while (i_4 != 1)
                result_32 = result_19
            
            if (result_32 != 0)
                sub_140a74f90(result_32)
            
            int16_t* rcx_95 = var_88
            
            if (rcx_95 != 0)
                sub_140a74f90(rcx_95)
            
            int64_t rcx_97 = *arg2
            
            if (rcx_97 != 0)
                sub_140a74f90(rcx_97)
            
            int64_t rcx_99 = *arg3
            
            if (rcx_99 != 0)
                sub_140a74f90(rcx_99)
            
            return zx.q(rax_36)
        
        int32_t i_6 = i_10
        
        if (i_6 != 0)
            int32_t i_5
            
            do
                int64_t rcx_19 = *result_15
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                result_15 += 0x10
                i_5 = i_6
                i_6 -= 1
            while (i_5 != 1)
            result_15 = result_19
        
        if (result_15 != 0)
            sub_140a74f90(result_15)
        
        int16_t* rcx_21 = var_88
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
    
    int64_t rcx_10 = *arg2
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    rcx_46 = *arg3
else
    rcx_6 = *arg2
label_140639770:
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    rcx_46 = *arg3

if (rcx_46 != 0)
    sub_140a74f90(rcx_46)

result.b = 0
return result
