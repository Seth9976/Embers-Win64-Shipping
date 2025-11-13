// 函数: sub_1423f0030
// 地址: 0x1423f0030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result_6
uint128_t result_9 = result_6
uint128_t result_11 = *(arg1 + 0xc)
*(arg1 + 0xc) = arg2.d
uint64_t rax = sub_140d3c6e0(&arg1[0x70])
int32_t i_3 = 0
uint64_t r15 = rax
int32_t i = 0
int64_t result_7
uint64_t result_8
int32_t var_b0
uint64_t result_1
uint128_t result_15

if (*(arg1 + 0x28) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* r14_1 = *(arg1 + 0x20)
        
        if (*(rsi_1 + r14_1) != 0)
            void* r15_2 = r14_1 + 8 + rsi_1
            int32_t rcx_1
            rcx_1.b = sub_140b5b8a0(*(r15_2 + 8), 0) == 0
            
            if ((*(r15_2 + 0xc) != 0 | rcx_1.b) != 0)
                void* rax_2 = sub_140d3c6e0(r15_2)
                
                if (rax_2 == 0)
                    goto label_1423f00fc
                
                if (sub_140d1fd20(rax_2, *(r15_2 + 8)) != 0)
                    goto label_1423f0140
                
                goto label_1423f00fc
            
        label_1423f00fc:
            int32_t rcx_4
            rcx_4.b = sub_140b5b8a0(*(rsi_1 + r14_1 + 0x20), 0) == 0
            
            if ((*(rsi_1 + r14_1 + 0x24) != 0 | rcx_4.b) != 0)
            label_1423f0140:
                result_15, result_11 = sub_141f8c030(*(rsi_1 + r14_1), &result_7, *(arg1 + 0xc))
                result_6 = zx.o(result_7)
                int32_t rcx_7
                rcx_7.b = sub_140b5b8a0(*(r15_2 + 8), 0) == 0
                int32_t var_c0
                
                if ((*(r15_2 + 0xc) != 0 | rcx_7.b) != 0)
                    void* rax_8 = sub_140d3c6e0(r15_2)
                    
                    if (rax_8 != 0 && sub_140d1fd20(rax_8, *(r15_2 + 8)) != 0)
                        result_8 = result_6.q
                        var_b0 = var_c0
                        int64_t* rax_10 = sub_140d3c6e0(r15_2)
                        int64_t rax_11 = sub_140d1fd30(rax_10, *(r15_2 + 8))
                        int64_t r9 = *rax_10
                        (*(r9 + 0x210))(rax_10, rax_11, &result_8, r9)
                
                r15 = rax
                
                if (r15 != 0)
                    void* rax_12 = *(rsi_1 + r14_1 + 0x28)
                    
                    if (rax_12 != 0)
                    label_1423f01e4:
                        int64_t rcx_14 = sx.q(*(rax_12 + 0x4c))
                        *(rcx_14 + r15) = result_7
                        *(rcx_14 + r15 + 8) = var_c0
                    else
                        rax_12 = sub_1420af720(*(r15 + 0x10), *(rsi_1 + r14_1 + 0x20))
                        *(rsi_1 + r14_1 + 0x28) = rax_12
                        
                        if (rax_12 != 0)
                            goto label_1423f01e4
                
                result_6 = zx.o(result_7)
                
                if (*(rsi_1 + r14_1 + 0x38) != 0)
                    int64_t* rcx_15 = *(rsi_1 + r14_1 + 0x30)
                    
                    if (rcx_15 != 0 && (*(*rcx_15 + 0x28))(rcx_15) != 0)
                        result_1 = result_6.q
                        int64_t var_90
                        var_90.d = var_c0
                        
                        if (*(rsi_1 + r14_1 + 0x38) == 0)
                            (*(*nullptr + 0x50))(0, &result_1)
                        else
                            int64_t* rcx_16 = *(rsi_1 + r14_1 + 0x30)
                            (*(*rcx_16 + 0x50))(rcx_16, &result_1)
            else if (*(rsi_1 + r14_1 + 0x38) == 0)
                r15 = rax
            else
                int64_t* rcx_5 = *(rsi_1 + r14_1 + 0x30)
                
                if (rcx_5 == 0)
                    r15 = rax
                else
                    if ((*(*rcx_5 + 0x28))(rcx_5) != 0)
                        goto label_1423f0140
                    
                    r15 = rax
        
        i += 1
        rsi_1 = &rsi_1[8]
    while (i s< *(arg1 + 0x28))

int32_t i_1 = 0
uint128_t result_10

if (*(arg1 + 0x38) s> 0)
    int64_t* rsi_2 = nullptr
    
    do
        void* r14_2 = *(arg1 + 0x30)
        
        if (*(rsi_2 + r14_2) != 0)
            void* r15_4 = r14_2 + 8 + rsi_2
            int32_t rcx_17
            rcx_17.b = sub_140b5b8a0(*(r15_4 + 8), 0) == 0
            
            if ((*(r15_4 + 0xc) != 0 | rcx_17.b) != 0)
                void* rax_19 = sub_140d3c6e0(r15_4)
                
                if (rax_19 == 0)
                    goto label_1423f02ce
                
                if (sub_140d1fd20(rax_19, *(r15_4 + 8)) != 0)
                    goto label_1423f030e
                
                goto label_1423f02ce
            
        label_1423f02ce:
            int32_t rcx_20
            rcx_20.b = sub_140b5b8a0(*(rsi_2 + r14_2 + 0x20), 0) == 0
            
            if ((*(rsi_2 + r14_2 + 0x24) != 0 | rcx_20.b) != 0)
            label_1423f030e:
                result_10, result_15, result_11 = sub_141f89240(*(rsi_2 + r14_2), *(arg1 + 0xc))
                result_6 = result_10
                int32_t rcx_23
                rcx_23.b = sub_140b5b8a0(*(r15_4 + 8), 0) == 0
                
                if ((*(r15_4 + 0xc) != 0 | rcx_23.b) != 0)
                    void* rax_25 = sub_140d3c6e0(r15_4)
                    
                    if (rax_25 != 0 && sub_140d1fd20(rax_25, *(r15_4 + 8)) != 0)
                        int32_t arg_10 = result_6.d
                        int64_t* rax_27 = sub_140d3c6e0(r15_4)
                        int64_t rax_28
                        rax_28, result_6 = sub_140d1fd30(rax_27, *(r15_4 + 8))
                        int64_t r9_1 = *rax_27
                        (*(r9_1 + 0x210))(rax_27, rax_28, &arg_10, r9_1)
                
                r15 = rax
                
                if (r15 != 0)
                    void* const rax_29 = *(rsi_2 + r14_2 + 0x28)
                    
                    if (rax_29 != 0)
                        *(sx.q(*(rax_29 + 0x4c)) + r15) = result_6.d
                    else
                        int64_t rbx_5 = *(rsi_2 + r14_2 + 0x20)
                        uint64_t result_3 = *(r15 + 0x10)
                        
                        if (rbx_5 != 0)
                            result_1 = result_3
                            void* rcx_29
                            
                            if (result_3 == 0)
                                rcx_29 = nullptr
                            else
                                rcx_29 = *(result_3 + 0x50)
                            
                            int32_t var_88_1 = 0xffffffff
                            int16_t var_84_1 = 0x101
                            char var_82_1 = 0
                            sub_1420c8b70(&result_1)
                            rax_29 = rcx_29
                        
                        if (rbx_5 == 0 || rax_29 == 0)
                        label_1423f0404:
                            rax_29 = nullptr
                        else
                            while (true)
                                int64_t result_13 = *(rax_29 + 0x28)
                                result_7 = result_13
                                
                                if (result_13 == rbx_5)
                                    break
                                
                                void* rax_30 = *(rax_29 + 0x20)
                                sub_1420c8b70(&result_1)
                                rax_29 = rax_30
                                
                                if (rax_29 == 0)
                                    goto label_1423f0404
                        
                        *(rsi_2 + r14_2 + 0x28) = rax_29
                        
                        if (rax_29 != 0)
                            *(sx.q(*(rax_29 + 0x4c)) + r15) = result_6.d
                
                if (*(rsi_2 + r14_2 + 0x38) != 0)
                    int64_t* rcx_32 = *(rsi_2 + r14_2 + 0x30)
                    
                    if (rcx_32 != 0 && (*(*rcx_32 + 0x28))(rcx_32) != 0)
                        if (*(rsi_2 + r14_2 + 0x38) == 0)
                            (*(*nullptr + 0x50))(0, result_6)
                        else
                            int64_t* rcx_33 = *(rsi_2 + r14_2 + 0x30)
                            (*(*rcx_33 + 0x50))(rcx_33, result_6)
            else if (*(rsi_2 + r14_2 + 0x38) == 0)
                r15 = rax
            else
                int64_t* rcx_21 = *(rsi_2 + r14_2 + 0x30)
                
                if (rcx_21 == 0)
                    r15 = rax
                else
                    if ((*(*rcx_21 + 0x28))(rcx_21) != 0)
                        goto label_1423f030e
                    
                    r15 = rax
        
        i_1 += 1
        rsi_2 = &rsi_2[8]
    while (i_1 s< *(arg1 + 0x38))

int32_t i_2 = 0

if (*(arg1 + 0x48) s> 0)
    int64_t* rsi_3 = nullptr
    
    do
        void* r14_3 = *(arg1 + 0x40)
        
        if (*(rsi_3 + r14_3) != 0)
            int32_t* r15_6 = r14_3 + 8 + rsi_3
            int32_t rcx_34
            rcx_34.b = sub_140b5b8a0(r15_6[2], 0) == 0
            
            if ((r15_6[3] != 0 | rcx_34.b) != 0)
                void* rax_37 = sub_140d3c6e0(r15_6)
                
                if (rax_37 == 0)
                    goto label_1423f04dc
                
                if (sub_140d1fd20(rax_37, *(r15_6 + 8)) != 0)
                    goto label_1423f0520
                
                goto label_1423f04dc
            
        label_1423f04dc:
            int32_t rcx_37
            rcx_37.b = sub_140b5b8a0(*(rsi_3 + r14_3 + 0x20), 0) == 0
            
            if ((*(rsi_3 + r14_3 + 0x24) != 0 | rcx_37.b) != 0)
            label_1423f0520:
                int64_t* rcx_40 = *(rsi_3 + r14_3) + 0x28
                (*(*rcx_40 + 0x50))(rcx_40, &result_1, *(arg1 + 0xc))
                result_6 = result_1.o
                int32_t rcx_41
                rcx_41.b = sub_140b5b8a0(r15_6[2], 0) == 0
                
                if ((r15_6[3] != 0 | rcx_41.b) != 0)
                    void* rax_44 = sub_140d3c6e0(r15_6)
                    
                    if (rax_44 != 0 && sub_140d1fd20(rax_44, *(r15_6 + 8)) != 0)
                        result_8.o = result_6
                        int64_t* rax_46 = sub_140d3c6e0(r15_6)
                        int64_t rax_47 = sub_140d1fd30(rax_46, *(r15_6 + 8))
                        int64_t r9_2 = *rax_46
                        (*(r9_2 + 0x210))(rax_46, rax_47, &result_8, r9_2)
                
                r15 = rax
                
                if (r15 != 0)
                    void* const rax_48 = *(rsi_3 + r14_3 + 0x28)
                    
                    if (rax_48 != 0)
                        *(sx.q(*(rax_48 + 0x4c)) + r15) = result_1.o
                    else
                        int64_t rbx_7 = *(rsi_3 + r14_3 + 0x20)
                        uint64_t result_12 = *(r15 + 0x10)
                        
                        if (rbx_7 != 0)
                            result_8 = result_12
                            int64_t rcx_47
                            
                            if (result_12 == 0)
                                rcx_47 = 0
                            else
                                rcx_47 = *(result_12 + 0x50)
                            
                            var_b0.q = rcx_47
                            int32_t var_a8_1 = 0xffffffff
                            int16_t var_a4_1 = 0x101
                            char var_a2_1 = 0
                            sub_140be1ff0(&result_8)
                            rax_48 = var_b0.q
                        
                        if (rbx_7 == 0 || rax_48 == 0)
                        label_1423f061b:
                            rax_48 = nullptr
                        else
                            while (true)
                                int64_t result_14 = *(rax_48 + 0x28)
                                result_7 = result_14
                                
                                if (result_14 == rbx_7)
                                    break
                                
                                var_b0.q = *(rax_48 + 0x20)
                                sub_140be1ff0(&result_8)
                                rax_48 = var_b0.q
                                
                                if (rax_48 == 0)
                                    goto label_1423f061b
                        
                        *(rsi_3 + r14_3 + 0x28) = rax_48
                        
                        if (rax_48 != 0)
                            *(sx.q(*(rax_48 + 0x4c)) + r15) = result_1.o
                
                result_6 = result_1.o
                
                if (*(rsi_3 + r14_3 + 0x38) != 0)
                    int64_t* rcx_50 = *(rsi_3 + r14_3 + 0x30)
                    
                    if (rcx_50 != 0 && (*(*rcx_50 + 0x28))(rcx_50) != 0)
                        result_8.o = result_6
                        
                        if (*(rsi_3 + r14_3 + 0x38) == 0)
                            (*(*nullptr + 0x50))(0, &result_8)
                        else
                            int64_t* rcx_51 = *(rsi_3 + r14_3 + 0x30)
                            (*(*rcx_51 + 0x50))(rcx_51, &result_8)
            else if (*(rsi_3 + r14_3 + 0x38) == 0)
                r15 = rax
            else
                int64_t* rcx_38 = *(rsi_3 + r14_3 + 0x30)
                
                if (rcx_38 == 0)
                    r15 = rax
                else
                    if ((*(*rcx_38 + 0x28))(rcx_38) != 0)
                        goto label_1423f0520
                    
                    r15 = rax
        
        i_2 += 1
        rsi_3 = &rsi_3[8]
    while (i_2 s< *(arg1 + 0x48))

int32_t rcx_52
rcx_52.b = sub_140b5b8a0(*(arg1 + 0x78), 0).b == 0
uint64_t result
result.b = *(arg1 + 0x7c) != 0
result.b |= rcx_52.b

if (result.b != 0 && r15 != 0)
    void* const r10_1 = *(arg1 + 0x90)
    
    if (r10_1 != 0)
    label_1423f07d6:
        result.b = arg1[1] u>> 1
        result.b &= 1
        
        if ((*(*(r10_1 + 8) + 0x10) u>> 6 & 1) == 0)
            int64_t* rcx_61 = *(r10_1 + 0x78)
            int64_t r9_3 = *rcx_61
            result = (*(r9_3 + 0x148))(rcx_61, sx.q(*(r10_1 + 0x4c)) + r15, zx.q(result.b), r9_3)
        else
            *(sx.q(*(r10_1 + 0x4c)) + r15) = result.b
    else
        int64_t rbx_8 = *(arg1 + 0x78)
        uint64_t result_4 = *(r15 + 0x10)
        
        if (rbx_8 != 0)
            result_1 = result_4
            void* rcx_53
            
            if (result_4 == 0)
                rcx_53 = nullptr
            else
                rcx_53 = *(result_4 + 0x50)
            
            int32_t var_88_2 = 0xffffffff
            int16_t var_84_2 = 0x101
            char var_82_2 = 0
            sub_1420c87b0(&result_1)
            r10_1 = rcx_53
        
        uint64_t result_2
        
        if (rbx_8 == 0 || r10_1 == 0)
        label_1423f0742:
            r10_1 = nullptr
        else
            while (true)
                uint64_t result_5 = *(r10_1 + 0x28)
                result_2 = result_5
                
                if (result_5 == rbx_8)
                    break
                
                void* rax_55 = *(r10_1 + 0x20)
                sub_1420c87b0(&result_1)
                r10_1 = rax_55
                
                if (r10_1 == 0)
                    goto label_1423f0742
        
        *(arg1 + 0x90) = r10_1
        
        if (r10_1 != 0)
            goto label_1423f07d6
        
        int64_t rbx_9 = *(arg1 + 0x78)
        result = *(r15 + 0x10)
        
        if (rbx_9 != 0)
            result_1 = result
            void* rcx_56
            
            if (result == 0)
                rcx_56 = nullptr
            else
                rcx_56 = *(result + 0x50)
            
            int32_t var_88_3 = 0xffffffff
            int16_t var_84_3 = 0x101
            char var_82_3 = 0
            result = sub_1420c8990(&result_1)
            r10_1 = rcx_56
        
        if (rbx_9 == 0 || r10_1 == 0)
        label_1423f07be:
            r10_1 = nullptr
        else
            while (true)
                result = *(r10_1 + 0x28)
                result_2 = result
                
                if (result == rbx_9)
                    break
                
                void* rax_56 = *(r10_1 + 0x20)
                result = sub_1420c8990(&result_1)
                r10_1 = rax_56
                
                if (r10_1 == 0)
                    goto label_1423f07be
        
        *(arg1 + 0x90) = r10_1
        
        if (r10_1 != 0)
            goto label_1423f07d6

if (arg3 != 0)
    uint128_t result_16 = result_15
    
    if ((arg1[1] & 2) != 0)
        result_15 = *(arg1 + 0xc)
        result_6 = result_11
        
        if (not(result_15.d f!= zx.o(0).d))
            result_15.d = result_15.d f+ -9.99999975e-05f
    else
        result_15 = result_11
        result_10, result, result_6 = sub_1423de1d0(arg1)
        
        if (not(result_6.d f!= result_10.d))
            result_6.d = result_6.d f+ 9.99999975e-05f
    
    if (*(arg1 + 0x18) s> 0)
        int64_t r14_4 = 0
        
        do
            result = *(arg1 + 0x10)
            result_10 = *(r14_4 + result)
            
            if ((arg1[1] & 2) != 0)
                if (not(result_10.d f<= result_15.d) && not(result_10.d f> result_6.d))
                label_1423f089c:
                    void* rsi_4 = r14_4 + result
                    int32_t rcx_63
                    rcx_63.b = sub_140b5b8a0(*(r14_4 + result + 0xc), 0).b == 0
                    result.b = *(rsi_4 + 0x10) != 0
                    result.b |= rcx_63.b
                    
                    if (result.b != 0)
                        result = sub_140d3c6e0(rsi_4 + 4)
                        
                        if (result != 0)
                            result = sub_140d1fd20(result, *(rsi_4 + 0xc))
                            
                            if (result != 0)
                                int64_t* rax_57 = sub_140d3c6e0(rsi_4 + 4)
                                int64_t rax_58
                                rax_58, result_6 = sub_140d1fd30(rax_57, *(rsi_4 + 0xc))
                                int64_t r9_4 = *rax_57
                                result = (*(r9_4 + 0x210))(rax_57, rax_58, 0, r9_4)
            else if (not(result_10.d f< result_15.d) && not(result_10.d f>= result_6.d))
                goto label_1423f089c
            
            i_3 += 1
            r14_4 += 0x14
        while (i_3 s< *(arg1 + 0x18))

if (arg4 == 0)
    return result

return sub_1423dc330(&arg1[0x50])
