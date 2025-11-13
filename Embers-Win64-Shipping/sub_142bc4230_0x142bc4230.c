// 函数: sub_142bc4230
// 地址: 0x142bc4230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14_1 = &arg3[zx.q(arg4)]
arg2[3].d = 0
char* _Str1 = arg3
arg2[2] = r14_1
*arg2 = _Str1

while (true)
label_142bc4273:
    *arg2 = _Str1
    arg2[7](arg2)
    void* rdi_1 = *arg2
    void* rdi_2
    
    if (rdi_1 u< r14_1)
        rdi_2 = rdi_1 - 0x11
    else
        rdi_2 = r14_1 - 0x12
    
    for (; _Str1 u< rdi_2; _Str1 = &_Str1[1])
        if (*_Str1 == 0x25)
            int32_t rax_1 = strncmp(_Str1, "%ADOBeginFontDict", 0x11)
            
            if (rax_1 == 0 && *(arg1 + 0x1b0) s> rax_1)
                arg2[0x17].d += 1
    
    char* rbx = *arg2
    
    if (rbx u< r14_1)
        arg2[8](arg2)
    
    if (rbx u>= r14_1 || *arg2 u>= r14_1 || arg2[3].d != 0)
        if (*(arg1 + 0x1b0) != 0)
            return arg2[3].d
        
        return 3
    
    if (*rbx == 0x2f && &rbx[2] u< r14_1)
        int32_t r9_1 = *arg2 - (&rbx[1]).d
        
        if (r9_1 - 1 u<= 0x14)
            char const* const r8 = "CIDFontName"
            void* r10_1 = &data_143686880
            
            while (true)
                if (rbx[1] == *r8)
                    int64_t rcx_3 = -1
                    
                    do
                        rcx_3 += 1
                    while (r8[rcx_3] != 0)
                    
                    if (zx.q(r9_1) == rcx_3)
                        break
                
            label_142bc4383:
                r8 = *(r10_1 + 0x30)
                r10_1 += 0x30
                
                if (r8 == 0)
                    _Str1 = *arg2
                    goto label_142bc4273
            
            int32_t rdx = 1
            
            if (r9_1 u> 1)
                void* rax_5 = &rbx[2]
                
                do
                    if (*rax_5 != *(r8 - &rbx[1] + rax_5))
                        goto label_142bc4383
                    
                    rdx += 1
                    rax_5 += 1
                while (rdx u< r9_1)
            
            int32_t result = sub_142bc4160(arg1, arg2, r10_1)
            arg2[3].d = result
            
            if (result != 0)
                return result
    
    _Str1 = *arg2
