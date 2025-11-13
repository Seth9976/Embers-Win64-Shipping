// 函数: sub_140820fc0
// 地址: 0x140820fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int32_t (* result)[0x2] = __security_cookie ^ &var_118
int32_t (* result_2)[0x2] = result
uint64_t rdx = zx.q(arg2[8].d)

if (rdx.d != 0)
    void* rax_1 = arg2[4]
    int64_t rsi
    rsi.b = 0
    uint64_t r13
    r13.b = 0
    char var_e8_1 = 0
    
    if (rdx.d != 0)
        char* rcx = rax_1 + 0xd9
        uint64_t i_7 = zx.q(rdx.d)
        uint64_t i
        
        do
            if (rsi.b != 0 || *(*(rcx - 0x19) + 0x250) != rsi.b)
                rsi.b = 1
            
            if (r13.b != 0 || *rcx != r13.b || rcx[-1] != r13.b)
                r13.b = 1
            
            rcx = &rcx[0x110]
            i = i_7
            i_7 -= 1
        while (i != 1)
        var_e8_1 = r13.b
    
    int32_t var_80[0x2]
    int32_t (* rax_3)[0x2] = &var_80
    int64_t i_6 = 5
    int64_t i_1
    
    do
        *rax_3 = 0
        rax_3 = &rax_3[1]
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)
    int32_t i_2 = 0
    int32_t var_68[0x2]
    
    if (rdx.d != 0)
        do
            void* var_90
            sub_140886510(*(*(zx.q(i_2) * 0x110 + rax_1 + 0xc0) + 0x18), &var_90)
            int64_t j = 0
            void* rcx_5 = var_90 + 0x154
            
            do
                bool cond:0_1 = *(rcx_5 - 4) != 0xffff
                rcx_5 += 2
                int32_t rax_5
                rax_5.b = cond:0_1
                var_80[j] += rax_5
                int32_t rax_6
                rax_6.b = *(rcx_5 - 2) != 0xffff
                int32_t var_78[0x2]
                var_78[j] += rax_6
                int32_t rax_7
                rax_7.b = *(rcx_5 + 2) != 0xffff
                int32_t var_70[0x2]
                var_70[j] += rax_7
                int32_t rax_8
                rax_8.b = *(rcx_5 + 6) != 0xffff
                var_68[j] += rax_8
                int32_t rax_9
                rax_9.b = *(rcx_5 + 0xa) != 0xffff
                int32_t var_60[0x2]
                var_60[j] += rax_9
                j += 1
            while (j s< zx.q(rsi.b) + 1)
            
            rdx = zx.q(arg2[8].d)
            i_2 += 1
        while (i_2 u< rdx.d)
        
        r13 = zx.q(var_e8_1)
    
    int32_t i_8 = arg2[1].d
    int64_t* rsi_1 = *arg2
    int32_t r15_2 = ((rdx << 1) + 3).d * (zx.d(rsi.b) + 1)
    
    if (i_8 != 0)
        int32_t i_3
        
        do
            int64_t* rbx_1 = *rsi_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    char rax_11
                    
                    if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                        rax_11 = sub_1405949a0()
                    
                    if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_11 != 0))
                        (**rbx_1)(rbx_1, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rbx_1 + 0xc))
                            *(rbx_1 + 0xc) = 1
                            z_1 = true
                        else
                            *(rbx_1 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            sub_1405dcc10(&data_143f02390, rbx_1)
            
            rsi_1 = &rsi_1[1]
            i_3 = i_8
            i_8 -= 1
        while (i_3 != 1)
        r13 = zx.q(var_e8_1)
    
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != r15_2)
        sub_1405c5570(arg2, r15_2)
    
    uint64_t i_5 = zx.q(zx.d(rsi.b) + 1)
    int64_t var_58 = arg1 + 0x120
    int64_t var_50_1 = arg1 + 0x158
    int64_t var_48_1 = arg1 + 0x190
    int32_t rcx_9 = 0
    result = &var_68
    int32_t var_e4_1 = 0
    int32_t (* result_1)[0x2] = &var_68
    uint64_t i_4
    
    do
        int32_t j_1 = 0
        int64_t* r12_3 = &var_58
        void* r15_3 = &result[-3]
        
        do
            int32_t rax_17 = *r15_3
            int64_t* rbx_2 = nullptr
            int64_t* var_d8_1 = nullptr
            
            if (rax_17 != 0)
                if (rax_17 s> 1 || r13.b != 0)
                    rbx_2 = 1
                
                int64_t rax_18 = sub_1408523a0(arg2, j_1, nullptr, rcx_9 == 0)
                int64_t* rcx_11 = data_143f0f180
                int64_t* var_c0
                (*(*rcx_11 + 0xf8))(rcx_11, &var_c0, rax_18, *r12_3, rbx_2.d, 1, var_e8_1)
                rbx_2 = var_c0
                var_d8_1 = rbx_2
                var_c0 = nullptr
            
            int64_t rsi_2 = sx.q(arg2[1].d)
            int32_t rax_19 = (rsi_2 + 1).d
            arg2[1].d = rax_19
            
            if (rax_19 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rsi_2 << 3)) = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    if (var_d8_1[2].b != 0)
                        (**var_d8_1)(var_d8_1, 1)
                    else
                        char rax_22
                        
                        if (data_143f0f1d0 == 0)
                            rax_22 = sub_1405949a0()
                        
                        if (data_143f0f1d0 == 0 && rax_22 != 0)
                            (**var_d8_1)(var_d8_1, 1)
                        else
                            bool z_2
                            
                            if (0 == *(var_d8_1 + 0xc))
                                *(var_d8_1 + 0xc) = 1
                                z_2 = true
                            else
                                *(var_d8_1 + 0xc)
                                z_2 = false
                            
                            if (z_2)
                                sub_1405dcc10(&data_143f02390, var_d8_1)
            
            rcx_9 = var_e4_1
            j_1 += 1
            r15_3 += 8
            r12_3 = &r12_3[1]
        while (j_1 s< 3)
        
        int32_t (* result_3)[0x2] = result_1
        int32_t j_2 = 3
        int32_t (* result_4)[0x2] = result_3
        
        do
            int32_t k = 0
            
            if (arg2[8].d u> 0)
                int32_t r15_4 = *result_3
                
                do
                    int64_t* rbx_7 = nullptr
                    int64_t* var_d0_1 = nullptr
                    void* r8_3 = zx.q(k) * 0x110 + rax_1
                    
                    if (r15_4 != 0)
                        int32_t rsi_3
                        
                        if (r15_4 s> 1 || var_e8_1 != 0)
                            rsi_3 = 1
                        else
                            rsi_3 = 0
                        
                        int64_t rbx_5
                        
                        if (j_2 != 3)
                            rbx_5 = *(r8_3 + 0xc0) + 0x20
                        else
                            rbx_5 = arg1 + 0x1c8
                        
                        int64_t rax_26 = sub_1408523a0(arg2, j_2, r8_3, var_e4_1 == 0)
                        int64_t* rcx_15 = data_143f0f180
                        int64_t* var_a8
                        (*(*rcx_15 + 0xf8))(rcx_15, &var_a8, rax_26, rbx_5, rsi_3, 1, var_e8_1)
                        rbx_7 = var_a8
                        var_d0_1 = rbx_7
                        var_a8 = nullptr
                    
                    int64_t rsi_4 = sx.q(arg2[1].d)
                    int32_t rax_27 = (rsi_4 + 1).d
                    arg2[1].d = rax_27
                    
                    if (rax_27 s> *(arg2 + 0xc))
                        sub_1405a4d70(arg2)
                    
                    *(*arg2 + (rsi_4 << 3)) = rbx_7
                    
                    if (rbx_7 != 0)
                        rbx_7[1].d += 1
                        rbx_7[1].d -= 1
                        
                        if (rbx_7[1].d == 1)
                            if (var_d0_1[2].b != 0)
                                (**var_d0_1)(var_d0_1, 1)
                            else
                                char rax_30
                                
                                if (data_143f0f1d0 == 0)
                                    rax_30 = sub_1405949a0()
                                
                                if (data_143f0f1d0 == 0 && rax_30 != 0)
                                    (**var_d0_1)(var_d0_1, 1)
                                else
                                    bool z_3
                                    
                                    if (0 == *(var_d0_1 + 0xc))
                                        *(var_d0_1 + 0xc) = 1
                                        z_3 = true
                                    else
                                        *(var_d0_1 + 0xc)
                                        z_3 = false
                                    
                                    if (z_3)
                                        sub_1405dcc10(&data_143f02390, var_d0_1)
                    
                    k += 1
                while (k u< arg2[8].d)
                
                result_3 = result_4
            
            result_3 = &result_3[1]
            j_2 += 1
            result_4 = result_3
        while (j_2 s< 5)
        
        rcx_9 = var_e4_1 + 1
        r13 = zx.q(var_e8_1)
        result = &(*result_1)[1]
        i_4 = i_5
        i_5 -= 1
        var_e4_1 = rcx_9
        result_1 = result
    while (i_4 != 1)

__security_check_cookie(result_2 ^ &var_118)
return result
