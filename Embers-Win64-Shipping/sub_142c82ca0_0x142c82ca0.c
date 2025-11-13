// 函数: sub_142c82ca0
// 地址: 0x142c82ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg1
int64_t r12 = arg1[0x47]
char* string = nullptr
char* string_1 = nullptr
char* string_2 = *(rbp + 0x4e38)
*arg2 = 1
int64_t r8_1
int512_t zmm2

if (sub_142c704d0(string_2, "/MATCH:", 7) != 0)
label_142c82eae:
    char* rax_13
    int64_t r8_3
    rax_13, r8_3 = strchr(string_2, 0x3a)
    char* string_4
    
    if (rax_13 != 0)
        string_4 = &rax_13[1]
        char* string_7
        string_7, r8_3 = strchr(string_4, 0x3a)
        string = string_7
        
        if (string_7 != 0)
            string = &string[1]
            *string_7 = 0
            char* string_8
            string_8, r8_3 = strchr(string, 0x3a)
            string_1 = string_8
            
            if (string_8 != 0)
                string_1 = &string_1[1]
                *string_8 = 0
                char* rax_14
                rax_14, r8_3 = strchr(string_1, 0x3a)
                
                if (rax_14 != 0)
                    *rax_14 = 0
    
    if (rax_13 == 0 || string_4 == 0 || *string_4 == 0)
        arg3 = sub_142c64850(rbp, "lookup word is missing\n", r8_3, arg3)
        string_4 = "default"
    
    if (string == 0 || *string == 0)
        string = &data_1436b8d58
    
    if (string_1 == 0 || *string_1 == 0)
        string_1 = &data_143640e4c
    
    char* rax_15 = sub_142c82ff0(rbp, string_4)
    
    if (rax_15 == 0)
        return 0x1b
    
    char* string_5 = string_1
    int32_t rax_16
    rax_16, zmm2 = sub_142c64c40(r12, arg1, 
        "CLIENT libcurl 7.55.1-DEV\r\nMATCH %s %s %s\r\nQUIT\r\n", string, arg3)
    r8_1 = data_143ccb8a0(rax_15)
    
    if (rax_16 != 0)
        sub_142c64760(rbp, "Failed sending DICT request", r8_1, zmm2)
        return zx.q(rax_16)
    
    int64_t var_28_2 = 0
    sub_142c68d40(arg1, 0, -1, 0, zmm2, rbp + 0xf8, 0xffffffff, nullptr)
else
    if (sub_142c704d0(string_2, "/M:", 3) != 0)
        goto label_142c82eae
    
    if (sub_142c704d0(string_2, "/FIND:", 6) != 0)
        goto label_142c82eae
    
    int32_t rbx
    bool cond:0_1
    
    if (sub_142c704d0(string_2, "/DEFINE:", 8) != 0)
    label_142c82dd8:
        char* rax_8
        int64_t r8_2
        rax_8, r8_2 = strchr(string_2, 0x3a)
        void* string_3
        
        if (rax_8 != 0)
            string_3 = &rax_8[1]
            char* string_6
            string_6, r8_2 = strchr(string_3, 0x3a)
            string = string_6
            
            if (string_6 != 0)
                string = &string[1]
                *string_6 = 0
                char* rax_9
                rax_9, r8_2 = strchr(string, 0x3a)
                
                if (rax_9 != 0)
                    *rax_9 = 0
        
        if (rax_8 == 0 || string_3 == 0 || *string_3 == 0)
            arg3 = sub_142c64850(rbp, "lookup word is missing\n", r8_2, arg3)
            string_3 = "default"
        
        if (string == 0 || *string == 0)
            string = &data_1436b8d58
        
        char* rax_10 = sub_142c82ff0(rbp, string_3)
        
        if (rax_10 == 0)
            return 0x1b
        
        char* var_38_1 = rax_10
        int32_t rax_11
        rax_11, zmm2 = sub_142c64c40(r12, arg1, 
            "CLIENT libcurl 7.55.1-DEV\r\nDEFINE %s %s\r\nQUIT\r\n", string, arg3)
        rbx = rax_11
        r8_1 = data_143ccb8a0(rax_10)
        cond:0_1 = rbx == 0
    label_142c82e8a:
        
        if (not(cond:0_1))
            sub_142c64760(rbp, "Failed sending DICT request", r8_1, zmm2)
            return zx.q(rbx)
        
        int64_t var_28_1 = 0
        sub_142c68d40(arg1, 0, -1, 0, zmm2, rbp + 0xf8, 0xffffffff, nullptr)
    else
        if (sub_142c704d0(string_2, "/D:", 3) != 0)
            goto label_142c82dd8
        
        if (sub_142c704d0(string_2, "/LOOKUP:", 8) != 0)
            goto label_142c82dd8
        
        char* rax_6 = strchr(string_2, 0x2f)
        
        if (rax_6 != 0)
            if (rax_6[1] != 0)
                void* rdx = &rax_6[1]
                
                do
                    if (*rdx == 0x3a)
                        *rdx = 0x20
                    
                    rdx += 1
                while (*rdx != 0)
            
            int32_t rax_7
            rax_7, r8_1, zmm2 = sub_142c64c40(r12, arg1, 
                "CLIENT libcurl 7.55.1-DEV\r\n%s\r\nQUIT\r\n", &rax_6[1], arg3)
            rbx = rax_7
            cond:0_1 = rax_7 == 0
            goto label_142c82e8a
return 0
