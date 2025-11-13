// 函数: sub_14084f100
// 地址: 0x14084f100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg2 != 0)
    data_143ce42c0 += 1
    
    if (data_14396ff18 != 0)
        void* r11_1 = *arg1
        int64_t rsi_1
        
        if (*(r11_1 + 0x3f0) s<= 0)
            rsi_1 = 0
        else
            rsi_1 = *(r11_1 + 0x3e8)
        
        void* rax = arg1[0x58]
        void* r10_2 = arg3 + 0x70
        void* r8_1 = *(arg3 + 0x60)
        void* rcx = &arg1[0x20]
        int32_t var_30_1 = arg2
        void* r9_2 = arg3
        
        if (rax != 0)
            rcx = rax
        
        int32_t var_20_1 = arg1[0x59].d
        void* rax_2 = *(r10_2 + 0x30)
        int64_t rcx_1 = *(r11_1 + 0x3d8)
        
        if (rax_2 != 0)
            r10_2 = rax_2
        
        int64_t var_38_1 = arg1[3]
        
        if (r8_1 != 0)
            r9_2 = r8_1
        
        int32_t r8_2 = *(r11_1 + 0x3f8)
        int64_t var_40_1 = arg1[1]
        int128_t var_18
        int128_t* var_48_1 = &var_18
        void* var_50_1 = r10_2
        int32_t r9_3 = *(arg3 + 0x68)
        var_18 = rcx.o
        sub_142763a20(rcx_1, rsi_1, r8_2, r9_3, r9_2)
    
    result = zx.q(arg1[0x6b].d)
    int32_t i = 0
    
    if (result.d s> 0)
        int64_t r11_2 = 0
        int64_t r10_3 = 0
        
        do
            void* rax_5 = arg1[0x6a]
            void* r8_3 = &arg1[0x5a]
            
            if (rax_5 != 0)
                r8_3 = rax_5
            
            if (*(r8_3 + r10_3 + 0x1c) != 0)
                void* rax_6 = arg1[0x58]
                void* rcx_2 = &arg1[0x20]
                
                if (rax_6 != 0)
                    rcx_2 = rax_6
                
                *(*(r8_3 + r10_3 + 0x10) + 0xb0) =
                    *(r8_3 + r10_3 + 0x18) + 1 + *(rcx_2 + r11_2 + 0x10)
            
            result = zx.q(arg1[0x6b].d)
            i += 1
            r10_3 += 0x20
            r11_2 += 0x70
        while (i s< result.d)
    
    int32_t i_1 = 0
    
    if (result.d s> 0)
        int64_t r9_4 = 0
        int64_t rdx_4 = 0
        
        do
            void* rax_8 = arg1[0x6a]
            void* rcx_4 = &arg1[0x5a]
            
            if (rax_8 != 0)
                rcx_4 = rax_8
            
            void* rcx_5 = rcx_4 + rdx_4
            void* rax_9 = *(rcx_5 + 8)
            
            if (rax_9 != 0)
                *(rax_9 + 8) -= 1
            
            __builtin_memset(rcx_5, 0, 0x18)
            *(rcx_5 + 0x18) = 0xffffffff
            *(rcx_5 + 0x1c) = 0
            void* result_2 = &arg1[0x20]
            result = arg1[0x58]
            
            if (result != 0)
                result_2 = result
            
            i_1 += 1
            void* rcx_6 = result_2 + r9_4
            rdx_4 += 0x20
            r9_4 += 0x70
            *rcx_6 = 0
            *(rcx_6 + 8) = 0
            *(rcx_6 + 0x10) = -1
            __builtin_memset(rcx_6 + 0x18, 0, 0x28)
            *(rcx_6 + 0x40) = 0xffffffff
        while (i_1 s< arg1[0x6b].d)
else
    int32_t r9_1 = *(arg1 + 0x35c)
    void* result_1 = &arg1[0x5a]
    void* result_3 = *(result_1 + 0x80)
    void* r10_1 = result_1 + 0x88
    int32_t i_4 = *r10_1
    
    if (r9_1 s< 0)
        result = result_1
        
        if (result_3 != 0)
            result = result_3
        
        if (i_4 != 0)
            int32_t i_2
            
            do
                void* r8 = *(result + 8)
                
                if (r8 != 0)
                    *(r8 + 8) -= 1
                
                __builtin_memset(result, 0, 0x18)
                *(result + 0x18) = 0xffffffff
                *(result + 0x1c) = 0
                result += 0x20
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
            r9_1 = *(result_1 + 0x8c)
        
        *r10_1 = 0
        
        if (r9_1 != 0)
            sub_14085aa40(result_1, 0)
    else
        if (result_3 != 0)
            result_1 = result_3
        
        if (i_4 != 0)
            int32_t i_3
            
            do
                result = *(result_1 + 8)
                
                if (result != 0)
                    *(result + 8) -= 1
                
                __builtin_memset(result_1, 0, 0x18)
                *(result_1 + 0x18) = 0xffffffff
                *(result_1 + 0x1c) = 0
                result_1 += 0x20
                i_3 = i_4
                i_4 -= 1
            while (i_3 != 1)
        
        *r10_1 = 0

result.b = 1
return result
