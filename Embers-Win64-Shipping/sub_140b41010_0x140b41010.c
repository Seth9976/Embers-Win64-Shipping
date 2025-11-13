// 函数: sub_140b41010
// 地址: 0x140b41010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_888
int64_t rax_1 = __security_cookie ^ &var_888
void* result = sub_140b3a4e0(&data_1439a90f0, arg1)

if (result != 0 && *(result + 0x28) == 0)
    sub_140a464c0()
    char const (* r8_1)[0x4] = data_14399ea08
    result = (*(r8_1 + 0x108))(&data_14399ea08, arg1, r8_1)
    
    if (result s>= 0)
        int32_t rax_2 = 0
        int32_t rsi_1 = 0
        int16_t* const r14_1 = &data_142d40450
        int16_t* r15_1 = nullptr
        int16_t* var_838 = nullptr
        int64_t rdi_1 = -1
        int64_t var_830 = 0
        
        if (arg1 != 0 && *arg1 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (arg1[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_838, rbx_1.d + 1)
                rax_2 = var_830:4.d
                rsi_1 = var_830.d
                r15_1 = var_838
            
            rsi_1 += rbx_1.d + 1
            var_830.d = rsi_1
            
            if (rsi_1 s> rax_2)
                sub_140594770(&var_838)
                rsi_1 = var_830.d
                r15_1 = var_838
            
            UnDecorator::getReferenceType(r15_1, arg1, (rbx_1.d + 1) * 2)
        
        int16_t* rbx_3
        
        if (arg1 == 0 || *arg1 == 0 || rsi_1 == 0)
            rbx_3 = &data_142d40450
        label_140b4113d:
            
            do
                rdi_1 += 1
            while ((*u".ini")[rdi_1] != 0)
            
            int16_t i = *rbx_3
            void* rbx_4 = &rbx_3[1]
            
            while (i != 0)
                int32_t rax_4
                rax_4.w = sbb.w(i - 0x61, i - 0x61, zx.d(i) - 0x61 u< 0x1a)
                rax_4.w &= 0x20
                
                if (i - rax_4.w == 0x2e && sub_140a546e0(rbx_4, &(*.ini")[1], sx.q(rdi_1.d - 1))
                        == 0)
                    if (rbx_4 != 2)
                        int32_t r9_1
                        
                        if (rsi_1 == 0)
                            r9_1 = 0
                        else
                            r9_1 = rsi_1 - 1
                        
                        if (r9_1 - 4 s< 0)
                            r9_1 = 0
                        else if (r9_1 - 4 s< r9_1)
                            r9_1 -= 4
                        
                        int32_t rax_8
                        
                        if (rsi_1 == 0)
                            rax_8 = 0
                        else
                            rax_8 = rsi_1 - 1
                        
                        int32_t rax_9 = rax_8 - r9_1
                        
                        if (rax_9 s> 4)
                            rax_9 = 4
                        
                        if (rax_9 != 0)
                            rsi_1 -= rax_9
                            
                            if (rsi_1 != r9_1)
                                memmove(&r15_1[sx.q(r9_1)], &r15_1[sx.q(rax_9 + r9_1)], 
                                    (rsi_1 - r9_1) * 2)
                    
                    break
                
                i = *rbx_4
                rbx_4 += 2
        else
            rbx_3 = r15_1
            
            if (r15_1 != 0)
                goto label_140b4113d
        void var_828
        void* rcx_8 = &var_828
        
        if (rsi_1 != 0)
            r14_1 = r15_1
        
        int16_t i_1
        
        do
            i_1 = *(r14_1 - &var_828 + rcx_8)
            *rcx_8 = i_1
            rcx_8 += 2
        while (i_1 != 0)
        void* rcx_9 = &var_830:6
        bool cond:1_1
        
        do
            cond:1_1 = *(rcx_9 + 2) != 0
            rcx_9 += 2
        while (cond:1_1)
        __builtin_wcscpy(rcx_9, u"_Local.ini")
        sub_140a464c0()
        int64_t r9_2
        r9_2.b = 1
        result = (*(data_14399ea08 + 0x38))(&data_14399ea08, &var_828, arg1, r9_2, 0, 0, 0, 0, 0)
        
        if (r15_1 != 0)
            result = sub_140a74f90(r15_1)

__security_check_cookie(rax_1 ^ &var_888)
return result
