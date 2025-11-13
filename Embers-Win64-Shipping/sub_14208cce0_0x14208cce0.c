// 函数: sub_14208cce0
// 地址: 0x14208cce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t* rcx

if ((arg1[0x46].b & 8) != 0)
    rcx = arg1[0x44]

void* result

if ((arg1[0x46].b & 8) == 0 || rcx[0x57] == 0)
    result = arg1[0x53]
    
    if (result == 0)
        void* rcx_14 = *(arg1[0x44] + 0x2b8)
        
        if (rcx_14 != 0)
            void* result_1 = *(rcx_14 + 0xe50)
            
            if (result_1 != 0)
                result = result_1
else
    float var_150
    void var_140
    (*(*rcx + 0x6f8))(rcx, &var_150, &var_140)
    char var_168 = var_168
    void* rax_4 = arg1[0x44]
    int64_t var_160 = 0
    void var_88
    sub_141eb54c0(&var_88, var_160, &var_168, 1, *(*(rax_4 + 0x2b8) + 0xe50))
    void var_118
    memset(&var_118, 0, 0x88)
    int32_t var_110_1 = 0x3f800000
    void var_130
    int32_t* rax_6 = sub_140ae4210(&var_140, &var_130)
    float var_148
    float var_158_1 = var_148 + rax_6[2] f* 100000f
    float var_14c
    var_160:4.d = var_14c + rax_6[1] f* 100000f
    var_160.d = var_150 + *rax_6 * 100000f
    void* var_188_1
    var_188_1.d = 1
    void* result_2
    
    if (sub_141ec6a20((*(*arg1 + 0x150))(arg1), &var_118, &var_150, &var_160, var_188_1.b, &var_88, 
            &data_143f3a660) == 0)
        result_2 = arg1[0x53]
    else
        void var_b0
        void* result_3 = sub_140d3c6e0(&var_b0)
        result_2 = result_3
        
        if (result_3 == 0)
            result_2 = arg1[0x53]
        else if (arg1[0x52] != 0)
            void* rax_10 = sub_142452380()
            
            if (rax_10 != 0)
                void* const rbx_1 = arg1[0x52]
                int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                
                if (rax_11.d s<= *(rbx_1 + 0x38)
                        && *(*(rbx_1 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30 && rbx_1 != 0)
                    void* rax_13 = sub_142452380()
                    int64_t rax_14
                    
                    if (rax_13 != 0)
                        rax_14 = sx.q(*(rax_13 + 0x38))
                    
                    if (rax_13 == 0 || rax_14.d s> *(rbx_1 + 0x38)
                            || *(*(rbx_1 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
                        rbx_1 = nullptr
                    
                    void* rax_16 = *(result_2 + 0x10)
                    int64_t rcx_10 = sx.q(*(rbx_1 + 0x38))
                    
                    if (rcx_10.d s> *(rax_16 + 0x38)
                            || *(*(rax_16 + 0x30) + (rcx_10 << 3)) != rbx_1 + 0x30)
                        result_2 = arg1[0x53]
    
    int64_t var_28
    
    if (var_28 != 0)
        sub_140a74f90(var_28)
    
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    result = result_2

__security_check_cookie(rax_1 ^ &var_1a8)
return result
