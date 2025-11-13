// 函数: sub_142c8b390
// 地址: 0x142c8b390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int64_t i_7 = 0
int64_t r15 = -1
int32_t var_278
__builtin_strncpy(&var_278, "auth", 5)
int64_t var_270
__builtin_strncpy(&var_270, "00000001", 9)
int64_t rax_4 = -1
int64_t var_250
__builtin_strncpy(&var_250, "AUTHENTICATE", 0xd)
char* str1 = nullptr
int64_t var_290 = 0

do
    rax_4 += 1
while (arg2[rax_4] != 0)

int32_t result

if (rax_4 == 0 || *arg2 == 0x3d)
    result = 0x3d
else
    result = sub_142c75b70(arg2, &str1, &var_290)
    
    if (result == 0)
        char* str1_1 = str1
        
        if (str1_1 == 0)
            result = 0x3d
        else
            char* rax_5 = strstr(str1_1, "nonce="")
            
            if (rax_5 == 0)
                data_143ccb8a0(str1, rax_5)
                result = 0x3d
            else
                char i = rax_5[7]
                void* rdx_2 = &rax_5[7]
                int64_t rax_6 = 0
                char var_218[0x20]
                
                if (i != 0)
                    while (i != 0x22)
                        if (rax_6 u>= 0x3f)
                            break
                        
                        rdx_2 += 1
                        var_218[rax_6] = i
                        rax_6 += 1
                        i = *rdx_2
                        
                        if (i == 0)
                            break
                
                char* str1_2 = str1
                var_218[rax_6] = 0
                char* rax_7 = strstr(str1_2, "realm="")
                char var_158[0x80]
                
                if (rax_7 == 0)
                    var_158[0] = 0
                else
                    char i_1 = rax_7[7]
                    void* rdx_4 = &rax_7[7]
                    int64_t rax_8 = 0
                    
                    if (i_1 != 0)
                        while (i_1 != 0x22)
                            if (rax_8 u>= 0x7f)
                                break
                            
                            rdx_4 += 1
                            var_158[rax_8] = i_1
                            rax_8 += 1
                            i_1 = *rdx_4
                            
                            if (i_1 == 0)
                                break
                    
                    var_158[rax_8] = 0
                
                char* rax_9 = strstr(str1, "algorithm=")
                
                if (rax_9 == 0)
                    data_143ccb8a0(str1, rax_9)
                    result = 0x3d
                else
                    char i_2 = rax_9[0xa]
                    void* rdx_5 = &rax_9[0xa]
                    int64_t rax_10 = 0
                    char _Str1[0x40]
                    
                    if (i_2 != 0)
                        while (i_2 != 0x2c)
                            if (rax_10 u>= 0x3f)
                                break
                            
                            rdx_5 += 1
                            _Str1[rax_10] = i_2
                            rax_10 += 1
                            i_2 = *rdx_5
                            
                            if (i_2 == 0)
                                break
                    
                    char* str1_3 = str1
                    _Str1[rax_10] = 0
                    char* rax_11 = strstr(str1_3, "qop="")
                    
                    if (rax_11 == 0)
                        data_143ccb8a0(str1, rax_11)
                        result = 0x3d
                    else
                        char i_3 = rax_11[5]
                        void* rdx_6 = &rax_11[5]
                        int64_t rax_12 = 0
                        char var_98[0x40]
                        
                        if (i_3 != 0)
                            while (i_3 != 0x22)
                                if (rax_12 u>= 0x3f)
                                    break
                                
                                rdx_6 += 1
                                var_98[rax_12] = i_3
                                rax_12 += 1
                                i_3 = *rdx_6
                                
                                if (i_3 == 0)
                                    break
                        
                        char* str1_4 = str1
                        var_98[rax_12] = 0
                        data_143ccb8a0(str1_4)
                        
                        if (strcmp(&_Str1, "md5-sess") != 0)
                            result = 0x3d
                        else
                            int32_t rbx_1 = 0
                            str1 = nullptr
                            char* rax_14 = data_143ccb8b0(&var_98)
                            
                            if (rax_14 == 0)
                                result = 0x1b
                            else
                                char* i_9 = sub_142c70cb0(rax_14, U",", &str1)
                                char* i_8 = i_9
                                
                                if (i_9 != 0)
                                    char* i_4
                                    
                                    do
                                        if (sub_142c70460(i_8, "auth") == 0)
                                            if (sub_142c70460(i_8, "auth-int") == 0)
                                                if (sub_142c70460(i_8, "auth-conf") != 0)
                                                    rbx_1 |= 4
                                            else
                                                rbx_1 |= 2
                                        else
                                            rbx_1 |= 1
                                        
                                        i_4 = sub_142c70cb0(nullptr, U",", &str1)
                                        i_8 = i_4
                                    while (i_4 != 0)
                                
                                data_143ccb8a0(rax_14)
                                
                                if ((rbx_1.b & 1) != 0)
                                    char var_240[0x28]
                                    int512_t zmm2_1
                                    result, zmm2_1 = sub_142c91160(arg1, &var_240, 0x21)
                                    
                                    if (result == 0)
                                        void** rax_18 = sub_142c8fef0(&data_1436bb7a8)
                                        
                                        if (rax_18 == 0)
                                            result = 0x1b
                                        else
                                            int64_t rcx_12 = -1
                                            
                                            do
                                                rcx_12 += 1
                                            while (arg3[rcx_12] != 0)
                                            
                                            sub_142c8ff50(rax_18)
                                            sub_142c8ff50(rax_18)
                                            int64_t rcx_15 = -1
                                            
                                            do
                                                rcx_15 += 1
                                            while (var_158[rcx_15] != 0)
                                            
                                            sub_142c8ff50(rax_18)
                                            sub_142c8ff50(rax_18)
                                            int64_t rcx_18 = -1
                                            
                                            do
                                                rcx_18 += 1
                                            while (arg4[rcx_18] != 0)
                                            
                                            sub_142c8ff50(rax_18)
                                            char var_260[0x10]
                                            sub_142c8feb0(rax_18, &var_260)
                                            void** rax_22 = sub_142c8fef0(&data_1436bb7a8)
                                            
                                            if (rax_22 == 0)
                                                result = 0x1b
                                            else
                                                sub_142c8ff50(rax_22)
                                                sub_142c8ff50(rax_22)
                                                int64_t rcx_23 = -1
                                                
                                                do
                                                    rcx_23 += 1
                                                while (var_218[rcx_23] != 0)
                                                
                                                sub_142c8ff50(rax_22)
                                                sub_142c8ff50(rax_22)
                                                int64_t rcx_26 = -1
                                                
                                                do
                                                    rcx_26 += 1
                                                while (var_240[rcx_26] != 0)
                                                
                                                sub_142c8ff50(rax_22)
                                                sub_142c8feb0(rax_22, &var_260)
                                                int64_t i_5 = 0
                                                void var_1d8
                                                void* rdi_2 = &var_1d8
                                                
                                                do
                                                    zmm2_1 = sub_142c564b0(rdi_2, 3, "%02x", 
                                                        zx.q(var_260[i_5]), zmm2_1)
                                                    i_5 += 1
                                                    rdi_2 += 2
                                                while (i_5 u< 0x10)
                                                
                                                char* rax_25
                                                int512_t zmm2_2
                                                rax_25, zmm2_2 =
                                                    sub_142c91210(arg5, &var_158, 0, zmm2_1)
                                                
                                                if (rax_25 == 0)
                                                    result = 0x1b
                                                else
                                                    void** rax_26 = sub_142c8fef0(&data_1436bb7a8)
                                                    void** rax_29
                                                    
                                                    if (rax_26 != 0)
                                                        int64_t rcx_31 = -1
                                                        
                                                        do
                                                            rcx_31 += 1
                                                        while (*(&var_250 + rcx_31) != 0)
                                                        
                                                        sub_142c8ff50(rax_26)
                                                        sub_142c8ff50(rax_26)
                                                        int64_t rcx_34 = -1
                                                        
                                                        do
                                                            rcx_34 += 1
                                                        while (rax_25[rcx_34] != 0)
                                                        
                                                        sub_142c8ff50(rax_26)
                                                        sub_142c8feb0(rax_26, &var_260)
                                                        int64_t i_6 = 0
                                                        void var_1b0
                                                        void* rdi_3 = &var_1b0
                                                        
                                                        do
                                                            zmm2_2 = sub_142c564b0(rdi_3, 3, 
                                                                "%02x", zx.q(var_260[i_6]), zmm2_2)
                                                            i_6 += 1
                                                            rdi_3 += 2
                                                        while (i_6 u< 0x10)
                                                        
                                                        rax_29 = sub_142c8fef0(&data_1436bb7a8)
                                                    
                                                    if (rax_26 != 0 && rax_29 != 0)
                                                        sub_142c8ff50(rax_29)
                                                        sub_142c8ff50(rax_29)
                                                        int64_t rcx_41 = -1
                                                        
                                                        do
                                                            rcx_41 += 1
                                                        while (var_218[rcx_41] != 0)
                                                        
                                                        sub_142c8ff50(rax_29)
                                                        sub_142c8ff50(rax_29)
                                                        int64_t rcx_44 = -1
                                                        
                                                        do
                                                            rcx_44 += 1
                                                        while (*(&var_270 + rcx_44) != 0)
                                                        
                                                        sub_142c8ff50(rax_29)
                                                        sub_142c8ff50(rax_29)
                                                        int64_t rcx_47 = -1
                                                        
                                                        do
                                                            rcx_47 += 1
                                                        while (var_240[rcx_47] != 0)
                                                        
                                                        sub_142c8ff50(rax_29)
                                                        sub_142c8ff50(rax_29)
                                                        
                                                        do
                                                            r15 += 1
                                                        while (*(&var_278 + r15) != 0)
                                                        
                                                        sub_142c8ff50(rax_29)
                                                        sub_142c8ff50(rax_29)
                                                        sub_142c8ff50(rax_29)
                                                        sub_142c8feb0(rax_29, &var_260)
                                                        void var_188
                                                        void* rbx_6 = &var_188
                                                        
                                                        do
                                                            zmm2_2 = sub_142c564b0(rbx_6, 3, 
                                                                "%02x", zx.q(var_260[i_7]), zmm2_2)
                                                            i_7 += 1
                                                            rbx_6 += 2
                                                        while (i_7 u< 0x10)
                                                        
                                                        int32_t* var_2b8_1 = &var_278
                                                        void* var_2c0_1 = &var_188
                                                        char* var_2c8_1 = rax_25
                                                        int64_t* var_2d0_1 = &var_270
                                                        char (* var_2d8_1)[0x28] = &var_240
                                                        char* rax_34
                                                        int512_t zmm2_3
                                                        rax_34, zmm2_3 = sub_142c563e0(
                                                            "username="%s",realm="%s",nonce="%s","
                                                        "cnonce="%s",nc="%s",digest-uri="%s","
                                                        "response=%s,qop=%s", 
                                                            arg3, zmm2_2)
                                                        data_143ccb8a0(rax_25)
                                                        
                                                        if (rax_34 == 0)
                                                            result = 0x1b
                                                        else
                                                            int32_t result_1 = sub_142c75c90(arg1, 
                                                                rax_34, 0, arg6, zmm2_3, arg7)
                                                            data_143ccb8a0(rax_34)
                                                            result = result_1
                                                    else
                                                        data_143ccb8a0(rax_25)
                                                        result = 0x1b
                                else
                                    result = 0x3d

__security_check_cookie(rax_1 ^ &var_2f8)
return result
