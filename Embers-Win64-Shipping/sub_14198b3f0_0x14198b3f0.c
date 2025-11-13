// 函数: sub_14198b3f0
// 地址: 0x14198b3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
uint64_t result = data_143f02ae0
int32_t rsi = data_14399e5e0

if (*(result + 4) s> 0)
    void* rcx_1 = data_143f02f38
    
    if (rcx_1 != 0)
        int64_t rax_2 = 0
        
        if (0 == *(rcx_1 + 8))
            *(rcx_1 + 8) = 0
        else
            rax_2 = *(rcx_1 + 8)
        
        result = rax_2 u>> 0x1a
        
        if ((result.b & 1) == 0)
        label_14198b47e:
            
            while (data_143f02f38 != 0)
                int64_t* rax_3 = sub_140a242a0()
                int64_t r8_1 = *rax_3
                
                if ((*(r8_1 + 0x20))(rax_3, zx.q(rsi), r8_1) == 0)
                    int64_t* rax_7 = sub_140a242a0()
                    int64_t* rcx_6 = data_143f02f38
                    int64_t** var_50_1 = nullptr
                    int32_t var_44_1 = 4
                    int32_t i_4 = 1
                    int64_t* var_70 = rcx_6
                    
                    if (rcx_6 != 0)
                        rcx_6[9].d += 1
                    
                    int64_t r9_1 = *rax_7
                    result = (*(r9_1 + 0x48))(rax_7, &var_70, zx.q(rsi), r9_1)
                    int64_t** rcx_8 = var_50_1
                    int64_t** rbx_1 = &var_70
                    int32_t i_2 = i_4
                    
                    if (rcx_8 != 0)
                        rbx_1 = rcx_8
                    
                    if (i_2 != 0)
                        int32_t i
                        
                        do
                            int64_t* rcx_9 = *rbx_1
                            
                            if (rcx_9 != 0)
                                result = zx.q(rcx_9[9].d)
                                rcx_9[9].d -= 1
                                
                                if (result.d == 1)
                                    result = sub_140a2f6e0(rcx_9)
                            
                            rbx_1 = &rbx_1[1]
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                        rcx_8 = var_50_1
                    
                    if (rcx_8 != 0)
                        result = sub_140a74f90(rcx_8)
                else
                    void* rcx_4 = data_143f02f38
                    int64_t rax_5 = 0
                    
                    if (0 == *(rcx_4 + 8))
                        *(rcx_4 + 8) = 0
                    else
                        rax_5 = *(rcx_4 + 8)
                    
                    result = rax_5 u>> 0x1a
                    
                    while ((result.b & 1) == 0)
                        sub_140b732d0((zx.o(0)).d)
                        void* rcx_5 = data_143f02f38
                        int64_t rax_6 = 0
                        
                        if (0 == *(rcx_5 + 8))
                            *(rcx_5 + 8) = 0
                        else
                            rax_6 = *(rcx_5 + 8)
                        
                        result = rax_6 u>> 0x1a
                
                void* rcx_10 = data_143f02f38
                
                if (rcx_10 == 0)
                    break
                
                int64_t rax_8 = 0
                
                if (0 == *(rcx_10 + 8))
                    *(rcx_10 + 8) = 0
                else
                    rax_8 = *(rcx_10 + 8)
                
                result = rax_8 u>> 0x1a
                
                if ((result.b & 1) != 0)
                    int64_t* rcx_11 = data_143f02f38
                    data_143f02f38 = 0
                    
                    if (rcx_11 == 0)
                        break
                    
                    result = zx.q(rcx_11[9].d)
                    rcx_11[9].d -= 1
                    
                    if (result.d == 1)
                        result = sub_140a2f6e0(rcx_11)
        else
            int64_t* rcx_2 = data_143f02f38
            data_143f02f38 = 0
            
            if (rcx_2 != 0)
                result = zx.q(rcx_2[9].d)
                rcx_2[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rcx_2)
                
                goto label_14198b47e

void* rcx_12 = data_143f02f28

if (rcx_12 != 0)
    int64_t rax_9 = 0
    
    if (0 == *(rcx_12 + 8))
        *(rcx_12 + 8) = 0
    else
        rax_9 = *(rcx_12 + 8)
    
    result = rax_9 u>> 0x1a
    
    if ((result.b & 1) != 0)
        int64_t* rcx_13 = data_143f02f28
        data_143f02f28 = 0
        
        if (rcx_13 != 0)
            result = zx.q(rcx_13[9].d)
            rcx_13[9].d -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(rcx_13)
        
        int64_t* rcx_14 = data_143f02f30
        data_143f02f30 = 0
        
        if (rcx_14 != 0)
            result = zx.q(rcx_14[9].d)
            rcx_14[9].d -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(rcx_14)
    
    while (data_143f02f28 != 0)
        int64_t* rax_10 = sub_140a242a0()
        int64_t r8_3 = *rax_10
        
        if ((*(r8_3 + 0x20))(rax_10, zx.q(rsi), r8_3) == 0)
            int64_t* rax_14 = sub_140a242a0()
            int64_t* rcx_18 = data_143f02f28
            int64_t** var_20_1 = nullptr
            int32_t var_14_1 = 4
            int32_t i_5 = 1
            int64_t* var_40 = rcx_18
            
            if (rcx_18 != 0)
                rcx_18[9].d += 1
            
            int64_t r9_2 = *rax_14
            result = (*(r9_2 + 0x48))(rax_14, &var_40, zx.q(rsi), r9_2)
            int64_t** rcx_20 = var_20_1
            int64_t** rbx_2 = &var_40
            int32_t i_3 = i_5
            
            if (rcx_20 != 0)
                rbx_2 = rcx_20
            
            if (i_3 != 0)
                int32_t i_1
                
                do
                    int64_t* rcx_21 = *rbx_2
                    
                    if (rcx_21 != 0)
                        result = zx.q(rcx_21[9].d)
                        rcx_21[9].d -= 1
                        
                        if (result.d == 1)
                            result = sub_140a2f6e0(rcx_21)
                    
                    rbx_2 = &rbx_2[1]
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                rcx_20 = var_20_1
            
            if (rcx_20 != 0)
                result = sub_140a74f90(rcx_20)
        else
            void* rcx_16 = data_143f02f28
            int64_t rax_12 = 0
            
            if (0 == *(rcx_16 + 8))
                *(rcx_16 + 8) = 0
            else
                rax_12 = *(rcx_16 + 8)
            
            result = rax_12 u>> 0x1a
            
            while ((result.b & 1) == 0)
                sub_140b732d0((zx.o(0)).d)
                void* rcx_17 = data_143f02f28
                int64_t rax_13 = 0
                
                if (0 == *(rcx_17 + 8))
                    *(rcx_17 + 8) = 0
                else
                    rax_13 = *(rcx_17 + 8)
                
                result = rax_13 u>> 0x1a
        
        void* rcx_22 = data_143f02f28
        
        if (rcx_22 == 0)
            break
        
        int64_t rax_15 = 0
        
        if (0 == *(rcx_22 + 8))
            *(rcx_22 + 8) = 0
        else
            rax_15 = *(rcx_22 + 8)
        
        result = rax_15 u>> 0x1a
        
        if ((result.b & 1) != 0)
            int64_t* rcx_23 = data_143f02f28
            data_143f02f28 = 0
            
            if (rcx_23 != 0)
                result = zx.q(rcx_23[9].d)
                rcx_23[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rcx_23)
            
            int64_t* rcx_24 = data_143f02f30
            data_143f02f30 = 0
            
            if (rcx_24 != 0)
                result = zx.q(rcx_24[9].d)
                rcx_24[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rcx_24)

__security_check_cookie(rax_1 ^ &var_98)
return result
