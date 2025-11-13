// 函数: sub_141a52000
// 地址: 0x141a52000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int32_t arg_8 = arg1
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t var_188 = 0
char r10 = 0
int32_t* rdx_3

if (arg5[1].d == *(arg5 + 0x34))
label_141a520a3:
    rdx_3 = nullptr
else
    void* rdx = arg5[8]
    void* r9 = &arg5[7]
    
    if (rdx != 0)
        r9 = rdx
    
    int32_t rax_4 = *(r9 + (((sx.q(arg5[9].d) - 1) & sx.q(arg1)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141a520a3_1:
        rdx_3 = nullptr
    else
        while (true)
            rdx_3 = sx.q(rax_4) * 0xf8 + *arg5
            
            if (*rdx_3 == arg1)
                break
            
            rax_4 = rdx_3[0x3c]
            
            if (rax_4 == 0xffffffff)
                goto label_141a520a3_2
        
        if (rax_4 == 0xffffffff)
        label_141a520a3_2:
            rdx_3 = nullptr

void* result_2 = &rdx_3[2]

if (rdx_3 == 0)
    result_2 = nullptr

int32_t* var_180
int32_t* var_168
int64_t var_158
int64_t r14

if (result_2 != 0)
    int32_t rcx_4 = (*(arg3 + 0x34) ^ *(result_2 + 0xc4)) | (arg3[6].d ^ *(result_2 + 0xc0))
        | (*(arg3 + 0x2c) ^ *(result_2 + 0xbc)) | (arg3[5].d ^ *(result_2 + 0xb8))
    
    if (rcx_4 != 0)
        r14.b = 1
    else
        int32_t* rax_11 = sub_141a5a760(arg3, &var_168)
        
        if ((*(result_2 + 0xc8)).d f!= *rax_11)
            r10 = 1
            r14.b = 1
        else
            int64_t rcx_6 = *(result_2 + 0xcc)
            int32_t* rax_12 = *(rax_11 + 4)
            var_188.q = rcx_6
            var_180 = rax_12
            int32_t var_184
            
            if (rax_12.d != rcx_6.d || var_180:4.d.d f!= var_184)
                r10 = 1
                r14.b = 1
            else if (sub_141a34b90(&rax_11[4], result_2 + 0xd8) == 0)
                r10 = 1
                r14.b = 1
            else
                r14.b = 0
                r10 = 1
    
    if ((r10 & 1) != 0 && var_158 != 0)
        sub_140a74f90(var_158)

void* result

if (result_2 == 0 || r14.b != 0)
    int32_t var_160_1 = 1
    var_168 = &arg_8
    var_168.o = var_168.o
    sub_141a61630(arg5, &var_168)
    int128_t zmm0_1 = *arg4
    int32_t var_148 = arg_8
    int128_t var_144_1 = zmm0_1
    int32_t var_134_1 = arg2
    void var_130
    (*(*arg3 + 0x2f8))(arg3, &var_130, &var_148)
    int64_t var_108
    
    if (arg2 != data_143f29fb0)
        void* rax_16 = sub_141a4c440(arg5, &arg_10)
        
        if (rax_16 != 0)
            int64_t var_118
            int32_t var_100
            
            if (var_100 s<= 0)
                sub_141a35b10(&var_180, rax_16 + 0x44, &var_118)
                int32_t* rcx_13 = var_180
                char var_178
                char r8_6 = var_178
                int32_t r9_2 = var_180.d
                int32_t var_174
                char var_ec
                int32_t* rax_18
                
                if (rcx_13.b == 2 || r8_6 == 2
                        || (r9_2 s<= var_174 && (r9_2 != var_174 || (rcx_13.b != 0 && r8_6 != 0))))
                    char var_e4
                    char r11_1 = var_e4
                    int32_t var_e8
                    int32_t var_e0
                    
                    if (var_ec == 2 || r11_1 == 2 || (var_e8 s<= var_e0
                            && (var_e8 != var_e0 || (var_ec != 0 && r11_1 != 0))))
                        int32_t** rdx_11
                        
                        if (r8_6 == 2)
                            rdx_11 = &var_e4
                        else if (r11_1 == 2)
                            rdx_11 = &var_178
                        else if (var_174 s< var_e0)
                            rdx_11 = &var_178
                        else if (var_174 s<= var_e0)
                            rdx_11 = &var_178
                            
                            if (r8_6 != 0)
                                rdx_11 = &var_e4
                        else
                            rdx_11 = &var_e4
                        
                        if (rcx_13.b == 2)
                            rcx_13 = var_ec.q
                        else if (var_ec != 2 && r9_2 s<= var_e8)
                            if (r9_2 s>= var_e8)
                                int32_t* rax_21 = var_ec.q
                                
                                if (rcx_13.b == 0)
                                    rax_21 = rcx_13
                                
                                rcx_13 = rax_21
                            else
                                rcx_13 = var_ec.q
                        
                        rax_18 = *rdx_11
                        var_168 = rcx_13
                    else
                        var_180.b = 0
                        var_180:4.d = 0
                        var_168 = var_180
                        var_188.b = 0
                        int32_t var_184_2 = 0
                        rax_18 = var_188.q
                else
                    var_188.b = 0
                    int32_t var_184_1 = 0
                    var_168 = var_188.q
                    var_180.b = 0
                    var_180:4.d = 0
                    rax_18 = var_180
                
                var_160_1.q = rax_18
                var_ec.o = var_168.o
            
            int64_t* rax_22 = sub_141a35680(&var_168, &var_118, rax_16 + 0x18)
            var_118 = *rax_22
            int32_t var_110_1 = rax_22[1].d
            
            if (&var_108 != &rax_22[2])
                int64_t rcx_16 = var_108
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
                
                var_108 = rax_22[2]
                rax_22[2] = 0
                int32_t var_100_1 = rax_22[3].d
                int32_t var_fc_1 = *(rax_22 + 0x1c)
                rax_22[3] = 0
            
            if (var_158 != 0)
                sub_140a74f90(var_158)
            
            int32_t var_9c
            int32_t var_9c_1 = var_9c + *(rax_16 + 0x94)
    
    sub_141a373d0(arg5, &var_130, &arg_8, &arg_10)
    *(arg5 + 0x34)
    int32_t* rdx_17
    
    if (arg5[1].d == *(arg5 + 0x34))
    label_141a52433:
        rdx_17 = nullptr
    else
        void* rdx_14 = arg5[8]
        void* r9_4 = &arg5[7]
        int64_t rcx_19 = sx.q(arg_8)
        
        if (rdx_14 != 0)
            r9_4 = rdx_14
        
        int32_t rax_29 = *(r9_4 + (((sx.q(arg5[9].d) - 1) & rcx_19) << 2))
        
        if (rax_29 == 0xffffffff)
        label_141a52433_1:
            rdx_17 = nullptr
        else
            while (true)
                rdx_17 = sx.q(rax_29) * 0xf8 + *arg5
                
                if (*rdx_17 == rcx_19.d)
                    break
                
                rax_29 = rdx_17[0x3c]
                
                if (rax_29 == 0xffffffff)
                    goto label_141a52433_2
            
            if (rax_29 == 0xffffffff)
            label_141a52433_2:
                rdx_17 = nullptr
    
    void* result_1 = &rdx_17[2]
    
    if (rdx_17 == 0)
        result_1 = nullptr
    
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    char var_88
    
    if ((var_88 & 1) != 0)
        int64_t* var_98
        int64_t* rcx_21 = &var_98
        
        if ((var_88 & 2) == 0)
            rcx_21 = var_98
        
        (**rcx_21)(rcx_21, 0)
        
        if ((var_88 & 2) == 0)
            sub_140a74f90(var_98)
    
    int64_t rcx_23 = var_108
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    int64_t var_128
    
    if (var_128 != 0)
        sub_140a74f90(var_128)
    
    result = result_1
else
    result = result_2

__security_check_cookie(rax_1 ^ &var_1a8)
return result
