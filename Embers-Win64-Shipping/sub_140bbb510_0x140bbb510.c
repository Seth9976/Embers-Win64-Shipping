// 函数: sub_140bbb510
// 地址: 0x140bbb510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = &arg1[0x9c]
uint64_t result
int32_t* var_78

if (*(*(arg1 + 0x50) + 0x295) == 0)
    int32_t var_88 = 0xffffffff
    
    while (true)
        sub_140bab6f0(r15, &var_88, 0)
        int64_t r14_3 = sx.q(var_88)
        int64_t rcx_5 = r14_3 << 7
        int64_t r10_1 = *(*(arg1 + 0x50) + 0x18)
        void* rax_5 = *(rcx_5 + r10_1 + 0x40)
        int64_t rdx_3
        int64_t r8_1
        
        if (rax_5 != 0 && ((*(rax_5 + 8) u>> 0xa).b & 1) != 0)
            r8_1 = *(rcx_5 + r10_1 + 0x28)
            rdx_3 = *(arg1 + 0x340)
        
        int32_t var_80
        int32_t var_70
        
        if (rax_5 == 0 || ((*(rax_5 + 8) u>> 0xa).b & 1) == 0
                || (r8_1 s>= rdx_3 && *(rcx_5 + r10_1 + 0x20) + r8_1 s<= rdx_3 + *(arg1 + 0x348)))
            int64_t* rcx_25 = *(arg1 + 0x1d8) + 0x340
            var_78 = arg1
            var_70 = (r14_3 + 1).d
            int32_t var_6c_2 = 2
            result = sub_140bb6ac0(rcx_25, &var_78)
        label_140bbb8a9:
            
            if (arg1[0x9e] == 0)
                break
            
            continue
        else if (arg1[0xbe] != arg1[0xc9])
            void* rax_9 = *(arg1 + 0x330)
            void* rdx_5 = &arg1[0xca]
            
            if (rax_9 != 0)
                rdx_5 = rax_9
            
            int32_t rax_10 = *(rdx_5 + (((sx.q(arg1[0xce]) - 1) & r14_3) << 2))
            
            if (rax_10 != 0xffffffff)
                int64_t r8_2 = *(arg1 + 0x2f0)
                int64_t rdx_6
                
                while (true)
                    rdx_6 = sx.q(rax_10)
                    int64_t rcx_11 = rdx_6 * 3
                    
                    if (*(r8_2 + (rcx_11 << 3)) == r14_3.d)
                        break
                    
                    rax_10 = *(r8_2 + (rcx_11 << 3) + 0x10)
                    
                    if (rax_10 == 0xffffffff)
                        goto label_140bbb6a0
                
                if (rax_10 != 0xffffffff)
                    void* r8_8 = r8_2 + rdx_6 * 0x18
                    
                    if (r8_8 != 0)
                        int64_t r8_9 = *(r8_8 + 8)
                        
                        if (r8_9 != 0)
                            sub_140ba6bd0(&arg1[0xa8], &var_80, r8_9)
                            int64_t rax_20 = sx.q(var_80)
                            void* const rax_22
                            
                            if (rax_20.d == 0xffffffff)
                                rax_22 = nullptr
                            else
                                rax_22 = rax_20 * 0x38 + *(arg1 + 0x2a0)
                            
                            uint64_t* rbx_5 = rax_22 + 0x20
                            
                            if (rax_22 == 0)
                                rbx_5 = 0x18
                            
                            int64_t rsi_3 = sx.q(rbx_5[1].d)
                            int32_t rax_23 = (rsi_3 + 1).d
                            rbx_5[1].d = rax_23
                            
                            if (rax_23 s> *(rbx_5 + 0xc))
                                sub_1405a4cf0(rbx_5)
                            
                            result = *rbx_5
                            *(result + (rsi_3 << 2)) = r14_3.d
                            goto label_140bbb8a9
        
    label_140bbb6a0:
        int64_t var_58_1 = -1
        int64_t rcx_13 = r14_3 << 7
        int32_t* result_1 = nullptr
        int64_t var_48_1 = 1
        int64_t var_68 = *(rcx_13 + r10_1 + 0x28)
        int64_t rax_12 = *(rcx_13 + r10_1 + 0x20)
        sub_1405a4cf0(&result_1)
        int32_t* result_2 = result_1
        int32_t r13_1 = r14_3.d
        var_88 = r14_3.d
        *result_2 = r14_3.d
        int64_t rcx_27
        int64_t rsi_2
        
        if (data_143e1a350 != 0 || arg1[0x9e] == 0)
            rsi_2 = rax_12
        label_140bbb978:
            rcx_27 = var_68
        else
            rsi_2 = rax_12
            
            do
                if (rsi_2 s>= 0x100000)
                    goto label_140bbb978
                
                if (r13_1 - r14_3.d s> 0x14)
                    goto label_140bbb978
                
                int64_t rcx_15 = *(arg1 + 0x340)
                int64_t r15_1 = sx.q(**r15)
                void* rbx_4 = (r15_1 << 7) + *(*(arg1 + 0x50) + 0x18)
                int64_t r8_3 = *(rbx_4 + 0x28)
                
                if (r8_3 s>= rcx_15 && *(rbx_4 + 0x20) + r8_3 s<= *(arg1 + 0x348) + rcx_15)
                    sub_140bab6f0(&arg1[0x9c], &var_80, 0)
                    int64_t* rcx_31 = *(arg1 + 0x1d8) + 0x340
                    var_78 = arg1
                    var_70 = (r15_1 + 1).d
                    int32_t var_6c_3 = 2
                    sub_140bb6ac0(rcx_31, &var_78)
                    goto label_140bbb978
                
                rcx_27 = var_68
                
                if (r8_3 - rsi_2 - rcx_27 s> 0xc000)
                    break
                
                if (*(rbx_4 + 0x20) + rsi_2 s> 0x100000)
                    goto label_140bbb978
                
                for (int32_t i = r13_1 + 1; i s<= r15_1.d; i += 1)
                    if (arg1[0xbe] - arg1[0xc9] != 0)
                        void* r8_6 = &arg1[0xca]
                        void* rcx_20 = *(r8_6 + 8)
                        
                        if (rcx_20 != 0)
                            r8_6 = rcx_20
                        
                        int32_t rax_18 = *(r8_6 + (((sx.q(arg1[0xce]) - 1) & sx.q(i)) << 2))
                        
                        if (rax_18 != 0xffffffff)
                            int64_t r8_7 = *(arg1 + 0x2f0)
                            
                            while (true)
                                int64_t rdx_13 = sx.q(rax_18) * 3
                                
                                if (*(r8_7 + (rdx_13 << 3)) == i)
                                    break
                                
                                rax_18 = *(r8_7 + (rdx_13 << 3) + 0x10)
                                
                                if (rax_18 == 0xffffffff)
                                    goto label_140bbb8c4
                            
                            if (rax_18 != 0xffffffff)
                                goto label_140bbb978
                    
                label_140bbb8c4:
                
                r15 = &arg1[0x9c]
                sub_140bab6f0(r15, &var_88, 0)
                rcx_27 = var_68
                rsi_2 = *(rbx_4 + 0x20) - rcx_27 + *(rbx_4 + 0x28)
                int64_t rbx_6 = sx.q(var_48_1.d)
                int32_t rax_25 = (rbx_6 + 1).d
                var_48_1.d = rax_25
                
                if (rax_25 s> var_48_1:4.d)
                    sub_1405a4cf0(&result_1)
                    rcx_27 = var_68
                
                r13_1 = var_88
                result_1[rbx_6] = r13_1
            while (arg1[0x9e] != 0)
        
        void* rax_27 = *(arg1 + 0x50)
        void* const r10_4
        
        if (*(rax_27 + 0x2a2) == 0)
            r10_4 = nullptr
        else
            r10_4 = *(rax_27 + 0x2d8)
        
        int64_t var_40 = sub_140baeee0(r10_4, rcx_27, rsi_2, *(*(arg1 + 0x1d8) + 0x3a0))
        var_58_1.d = r14_3.d
        var_58_1:4.d = r13_1
        var_88 = r14_3.d
        
        if (r14_3.d s<= r13_1)
            var_78 = &var_88
            var_70.q = &var_40
            int32_t rax_31
            
            do
                sub_140b91f20(&arg1[0xbc], &var_80, &var_78, nullptr)
                rax_31 = var_88 + 1
                var_88 = rax_31
            while (rax_31 s<= r13_1)
        
        var_88.q = &var_40
        sub_140b91af0(&arg1[0xa8], &var_80, &var_88, nullptr)
        int128_t* rdx_26 = *(arg1 + 0x2a0) + sx.q(var_80) * 0x38 + 8
        
        if (rdx_26 != &var_68)
            int128_t zmm4_1 = rdx_26[1]
            *rdx_26 = var_68.o
            rdx_26[1] = var_58_1.o
            rdx_26[2].q = var_48_1
            var_58_1.o = zmm4_1
        
        int64_t* rcx_38 = *(*(arg1 + 0x1d8) + 0x3a0) + 0x98
        var_88.q = var_40
        var_78 = *(arg1 + 0x14)
        int32_t var_70_2 = arg1[0x8f]
        int32_t* var_38 = &var_88
        void** var_30_1 = &var_78
        sub_140b92160(rcx_38, &var_80, &var_38, nullptr)
        result = result_1
        
        if (result != 0)
            return sub_140a74f90(result)
        
        break
else
    int32_t* rbx_1 = *r15
    int64_t rsi_1 = 0
    result = &rbx_1[sx.q(*(r15 + 8))]
    uint64_t r14_2 = sx.q(*(r15 + 8)) << 2 u>> 2
    
    if (rbx_1 u> result)
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            int64_t* rcx_1 = *(arg1 + 0x1d8) + 0x340
            int32_t var_70_1 = *rbx_1 + 1
            var_78 = arg1
            int32_t var_6c_1 = 2
            result = sub_140bb6ac0(rcx_1, &var_78)
            rsi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rsi_1 != r14_2)
    
    *(r15 + 8) = 0
    
    if (*(r15 + 0xc) != 0)
        return sub_1405dadb0(r15, 0)
return result
