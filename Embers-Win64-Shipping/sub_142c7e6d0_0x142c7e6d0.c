// 函数: sub_142c7e6d0
// 地址: 0x142c7e6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *arg1
int64_t r14 = -1
int64_t rsi = 0
char* _MaxCount_2 = *(r13 + 0x250)
char* string = *(r13 + 0x4e38)
*(arg1 + 0x729) = 0
arg1[0xe6].b = 0
int32_t rdx = *(r13 + 0x5c0)
char* _MaxCount_1 = _MaxCount_2
int32_t rdi_1
int64_t entry_r8
void* r15_1

if (rdx == 2)
    if (*string == 0)
        goto label_142c7e8e8
    
    int64_t rax_18 = -1
    bool cond:0_1
    
    do
        cond:0_1 = string[rax_18 + 1] != 0
        rax_18 += 1
    while (cond:0_1)
    
    if (string[rax_18 - 1] == 0x2f || string == 0 || *string == 0)
        goto label_142c7e8e8
    
label_142c7ea0d:
    r15_1 = &arg1[0xe4]
    int32_t rax_19
    rax_19, entry_r8 = sub_142c51e30(*arg1, string, 0, r15_1, nullptr, 1)
    rdi_1 = rax_19
    
    if (rax_19 == 0)
        goto label_142c7e910
    
label_142c7ea39:
    sub_142c7e3d0(&arg1[0xd3])
    return zx.q(rdi_1)

int512_t entry_zmm2

if (rdx == 3)
    if (*string == 0)
        arg1[0xe3].d = 0
    label_142c7e8e8:
        r15_1 = &arg1[0xe4]
        *r15_1 = 0
    label_142c7e910:
        
        if (*(r13 + 0x5e9) != 0 && *r15_1 == 0 && *(_MaxCount_1 + 0x18) == 0)
            sub_142c64760(r13, "Uploading to a URL without a file name!", entry_r8, entry_zmm2)
            return 3
        
        *(arg1 + 0x72a) = 0
        
        if (arg1[0xe7] == 0)
            return 0
        
        char* _Str1
        int32_t rax_20 = sub_142c51e30(*arg1, *(r13 + 0x4e38), 0, &_Str1, &_MaxCount_1, 0)
        rdi_1 = rax_20
        
        if (rax_20 != 0)
            goto label_142c7ea39
        
        char* rax_21 = *r15_1
        
        if (rax_21 != 0)
            rsi = -1
            
            do
                rsi += 1
            while (rax_21[rsi] != 0)
        
        char* _Str2 = arg1[0xe7]
        void* _MaxCount = _MaxCount_1 - rsi
        _MaxCount_1 = _MaxCount
        
        do
            r14 += 1
        while (_Str2[r14] != 0)
        
        if (_MaxCount == r14)
            int32_t rax_22
            int64_t r8_6
            rax_22, r8_6 = strncmp(_Str1, _Str2, _MaxCount)
            
            if (rax_22 == 0)
                sub_142c64850(r13, "Request has same path as previous transfer\n", r8_6, entry_zmm2)
                *(arg1 + 0x72a) = 1
        
        data_143ccb8a0(_Str1)
        return 0
    
    char* rax_14
    rax_14, entry_r8 = strrchr(string, 0x2f)
    
    if (rax_14 == 0 && *string != 0)
    label_142c7e9f7:
        
        if (string == 0 || *string == 0)
            goto label_142c7e8e8
        
        goto label_142c7ea0d
    
    void* r15_3 = rax_14 - string
    int64_t* rax_15 = data_143ccb8b8(1, 8)
    arg1[0xe2] = rax_15
    
    if (rax_15 != 0)
        char* string_1 = &data_14363dfe8
        void* rax_16 = 1
        
        if (r15_3 != 0)
            rax_16 = r15_3
        
        void* r8_4 = 1
        
        if (rax_14 != 0)
            r8_4 = rax_16
        
        if (rax_14 != 0)
            string_1 = string
        
        int32_t rax_17
        rax_17, entry_r8 = sub_142c51e30(*arg1, string_1, r8_4, rax_15, nullptr, 0)
        
        if (rax_17 != 0)
            sub_142c7e3d0(&arg1[0xd3])
            return zx.q(rax_17)
        
        arg1[0xe3].d = 1
        
        if (rax_14 != 0)
            string = &rax_14[1]
        
        goto label_142c7e9f7
else
    arg1[0xe3].d = 0
    *(arg1 + 0x71c) = 5
    int64_t rax = data_143ccb8b8(5, 8)
    arg1[0xe2] = rax
    
    if (rax != 0)
        if (*string != 0x2f || string[1] != 0)
            char* i_2
            i_2, entry_r8 = strchr(string, 0x2f)
            char* i_1 = i_2
            
            if (i_2 != 0)
                char* i
                
                do
                    int64_t rdx_2
                    
                    if (string - *(r13 + 0x4e38) s> 0)
                        rdx_2 = 1
                    
                    if (string - *(r13 + 0x4e38) s<= 0 || arg1[0xe3].d != 0)
                        rdx_2 = 0
                    
                    if (i_1 == string)
                        string = &i_1[1]
                        
                        if (arg1[0xe3].d == 0)
                            *(arg1[0xe2] + (sx.q(arg1[0xe3].d) << 3)) =
                                data_143ccb8b0(&data_14363dfe8)
                            int64_t r8_3 = sx.q(arg1[0xe3].d)
                            arg1[0xe3].d = (r8_3 + 1).d
                            
                            if (*(arg1[0xe2] + (r8_3 << 3)) == 0)
                                sub_142c64760(r13, "no memory", r8_3, entry_zmm2)
                                sub_142c7e3d0(&arg1[0xd3])
                                return 0x1b
                    else
                        int32_t rax_5 = sub_142c51e30(*arg1, string - rdx_2, rdx_2 - string + i_1, 
                            arg1[0xe2] + (sx.q(arg1[0xe3].d) << 3), nullptr, 1)
                        rdi_1 = rax_5
                        
                        if (rax_5 != 0)
                            goto label_142c7ea39
                        
                        arg1[0xe3].d += 1
                        string = &i_1[1]
                        int32_t rax_6 = *(arg1 + 0x71c)
                        
                        if (arg1[0xe3].d s>= rax_6)
                            int64_t rcx_6 = arg1[0xe2]
                            int32_t rax_7 = rax_6 * 2
                            *(arg1 + 0x71c) = rax_7
                            int64_t rax_8 = data_143ccb8a8(rcx_6, sx.q(rax_7) << 3)
                            
                            if (rax_8 == 0)
                                sub_142c7e3d0(&arg1[0xd3])
                                return 0x1b
                            
                            arg1[0xe2] = rax_8
                    
                    i, entry_r8 = strchr(string, 0x2f)
                    i_1 = i
                while (i != 0)
        else
            string = &string[1]
            int64_t rax_3
            rax_3, entry_r8 = data_143ccb8b0(&data_14363dfe8)
            *arg1[0xe2] = rax_3
            arg1[0xe3].d += 1
        
        goto label_142c7e9f7
return 0x1b
