// 函数: sub_140fdd170
// 地址: 0x140fdd170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* rcx = *(arg1 + 0x168)
int64_t var_60 = 3
int64_t* var_48 = nullptr
int64_t result = (*(*rcx + 0xc0))(rcx, &var_60, &var_48)

if (result.d == 0)
    int64_t* rcx_1 = *(arg1 + 0x168)
    var_60 = 2
    int64_t* var_40 = nullptr
    result = (*(*rcx_1 + 0xc0))(rcx_1, &var_60, &var_40)
    
    if (result.d == 0)
        int64_t* rcx_2 = *(arg1 + 0x168)
        int64_t* var_58 = nullptr
        int64_t var_68 = 0
        int64_t* var_50 = nullptr
        result = (*(*rcx_2 + 0xc0))(rcx_2, &var_68, &var_50)
        
        if (result.d == 0)
            int64_t* rcx_3 = var_58
            int64_t* rdi_1 = *(arg1 + 0x168)
            
            if (rcx_3 != 0)
                (*(*rcx_3 + 0x10))(rcx_3)
            
            result = (*(*rdi_1 + 0xc0))(rdi_1, &var_68, &var_58)
            
            if (result.d == 0)
                int64_t* rbx_1 = *(arg1 + 0x150)
                (*(*rbx_1 + 0xe0))(rbx_1, var_50)
                (*(*rbx_1 + 0x378))(rbx_1)
                var_68.d = 0
                (*(*rbx_1 + 0xe8))(rbx_1, var_50, &var_68, 4, 0)
                
                if (var_68.d == 0)
                    int128_t zmm6 = 0x3a83126f
                    
                    do
                        zmm6 = sub_140b73230(zmm6)
                        var_68.d = 0
                        (*(*rbx_1 + 0xe8))(rbx_1, var_50, &var_68, 4, 0)
                    while (var_68.d == 0)
                
                for (int32_t i = 0; i u< 0xa; i += 1)
                    (*(*rbx_1 + 0xd8))(rbx_1, var_48)
                    (*(*rbx_1 + 0xe0))(rbx_1, var_40)
                    (*(*rbx_1 + 0xe0))(rbx_1, var_48)
                    (*(*rbx_1 + 0xe0))(rbx_1, var_58)
                    (*(*rbx_1 + 0x378))(rbx_1)
                    var_60 = 0
                    int64_t performanceCount
                    
                    do
                        var_68.d = 0
                        QueryPerformanceCounter(&performanceCount)
                        (*(*rbx_1 + 0xe8))(rbx_1, var_58, &var_68, 4, 0)
                    while (var_68.d == 0)
                    
                    int64_t* rdx_12 = var_48
                    int32_t var_78_4 = 0
                    int64_t var_30 = 0
                    int32_t var_28_1 = 0
                    result = (*(*rbx_1 + 0xe8))(rbx_1, rdx_12, &var_30, 0x10, var_78_4)
                    
                    if (result.d == 0 && var_28_1 == 0)
                        result = (*(*rbx_1 + 0xe8))(rbx_1, var_40, &var_60, 8, 0)
                        
                        if (result.d == 0 && var_60 != 0)
                            double zmm0_1 = sub_140a48b40()
                            int64_t performanceCount_1 = performanceCount
                            double zmm3 = 1.8446744073709552e+19
                            int64_t zmm1 = float.d(performanceCount_1)
                            
                            if (performanceCount_1 s< 0)
                                zmm1 = zmm1 f+ zmm3
                            
                            double zmm2 = 9.2233720368547758e+18
                            int64_t rcx_18 = 0
                            zmm0_1 = zmm0_1 f* zmm1
                            zmm1 = 0x412e848000000000
                            zmm0_1 = zmm0_1 f* zmm1
                            
                            if (not(zmm0_1 < zmm2))
                                zmm0_1 = zmm0_1 - zmm2
                                
                                if (not(zmm0_1 >= zmm2))
                                    rcx_18 = -0x8000000000000000
                            
                            data_143f0f178 = int.q(zmm0_1) + rcx_18
                            int64_t rax_21 = data_143f0f168
                            zmm0_1 = float.d(rax_21)
                            
                            if (rax_21 s< 0)
                                zmm0_1 = zmm0_1 + zmm3
                            
                            int64_t rax_22 = var_60
                            zmm1 = zmm1 f/ zmm0_1
                            zmm0_1 = float.d(rax_22)
                            
                            if (rax_22 s< 0)
                                zmm0_1 = zmm0_1 + zmm3
                            
                            zmm1 = zmm1 f* zmm0_1
                            int64_t rcx_19 = 0
                            
                            if (not(zmm1 f< zmm2))
                                zmm1 = zmm1 f- zmm2
                                
                                if (not(zmm1 f>= zmm2))
                                    rcx_19 = -0x8000000000000000
                            
                            result = int.q(zmm1) + rcx_19
                            data_143f0f170 = result
                            break
        
        int64_t* rcx_20 = var_58
        
        if (rcx_20 != 0)
            result = (*(*rcx_20 + 0x10))(rcx_20)
        
        int64_t* rcx_21 = var_50
        
        if (rcx_21 != 0)
            result = (*(*rcx_21 + 0x10))(rcx_21)
    
    int64_t* rcx_22 = var_40
    
    if (rcx_22 != 0)
        result = (*(*rcx_22 + 0x10))(rcx_22)

int64_t* rcx_23 = var_48

if (rcx_23 != 0)
    result = (*(*rcx_23 + 0x10))(rcx_23)

__security_check_cookie(rax_1 ^ &var_98)
return result
