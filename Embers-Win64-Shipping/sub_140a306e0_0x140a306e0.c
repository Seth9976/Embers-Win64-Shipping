// 函数: sub_140a306e0
// 地址: 0x140a306e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* wcs2 = arg2
int32_t arg_8 = 0
int32_t r10 = arg1[1].d
int32_t rax = r10 - 1

if (r10 == 0)
    rax = 0

if (rax s> 0 && arg2 != 0 && *arg2 != 0 && arg3 != 0)
    uint32_t i
    uint32_t rdx
    
    if (arg4 != 1)
        int16_t* rax_1 = arg2
        
        do
            rdx = zx.d(*rax_1)
            i = zx.d(*(rax_1 + arg3 - arg2))
            
            if (rdx != i)
                break
            
            rax_1 = &rax_1[1]
        while (i != 0)
    
    if (arg4 == 1 || rdx - i != 0)
        int64_t rsi_1 = -1
        int64_t rbp_1 = -1
        
        do
            rbp_1 += 1
        while (wcs2[rbp_1] != 0)
        
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (*(arg3 + (rbx_1 << 1)) != 0)
        
        if (rbx_1.d != rbp_1.d)
            int16_t* const r12_1 = &data_142d40450
            int16_t* wcs1_2
            
            if (r10 == 0)
                wcs1_2 = &data_142d40450
            else
                wcs1_2 = *arg1
            
            void* rax_7
            
            if (arg4 != 1)
                rax_7 = wcsstr(wcs1_2, wcs2)
            else
                rax_7 = sub_140a32c90(wcs1_2, wcs2)
            
            if (rax_7 != 0)
                int32_t rdi_2 = arg1[1].d
                
                if (rdi_2 != 0)
                    r12_1 = *arg1
                
                if (((rax_7 - r12_1) s>> 1).d != 0xffffffff)
                    int64_t rbx_2 = *arg1
                    uint64_t wcs1_6 = 0
                    void* wcs1_5 = nullptr
                    int32_t var_40_1 = rdi_2
                    void* wcs1_4
                    
                    if (rdi_2 != 0)
                        sub_1405a4c70(&wcs1_6, rdi_2, 0)
                        wcs1_5 = wcs1_6
                        memcpy(wcs1_5, rbx_2, rdi_2 * 2)
                        rdi_2 = arg1[1].d
                        wcs1_4 = wcs1_5
                    else
                        wcs1_4 = nullptr
                    
                    arg1[1].d = 0
                    int32_t rdx_8 = rdi_2 - 1
                    
                    if (rdi_2 == 0)
                        rdx_8 = 0
                    
                    if (*(arg1 + 0xc) != rdx_8)
                        sub_1405947f0(arg1, rdx_8)
                    
                    void* i_6
                    
                    if (arg4 != 1)
                        i_6 = wcsstr(wcs1_4, wcs2)
                    else
                        i_6 = sub_140a32c90(wcs1_4, wcs2)
                    
                    void* i_3 = i_6
                    
                    if (i_6 != 0)
                        int32_t r12_2 = 0
                        void* i_1
                        
                        do
                            r12_2 += 1
                            int64_t r8_5 = -1
                            *i_3 = 0
                            
                            do
                                r8_5 += 1
                            while (*(wcs1_4 + (r8_5 << 1)) != 0)
                            
                            sub_140a20ba0(arg1, wcs1_4, r8_5.d)
                            int64_t r8_6 = -1
                            
                            do
                                r8_6 += 1
                            while (*(arg3 + (r8_6 << 1)) != 0)
                            
                            sub_140a20ba0(arg1, arg3, r8_6.d)
                            wcs1_4 = i_3 + sx.q(rbp_1.d) * 2
                            *i_3 = *wcs2
                            int16_t* wcs1_3 = wcs1_4
                            
                            if (arg4 != 1)
                                i_1 = wcsstr(wcs1_3, wcs2)
                            else
                                i_1 = sub_140a32c90(wcs1_3, wcs2)
                            
                            i_3 = i_1
                        while (i_1 != 0)
                        arg_8 = r12_2
                        wcs1_5 = wcs1_6
                    
                    do
                        rsi_1 += 1
                    while (*(wcs1_4 + (rsi_1 << 1)) != 0)
                    
                    sub_140a20ba0(arg1, wcs1_4, rsi_1.d)
                    
                    if (wcs1_5 != 0)
                        sub_140a74f90(wcs1_5)
        else
            int16_t* wcs1 = *arg1
            void* i_5
            
            if (arg4 != 1)
                i_5 = wcsstr(wcs1, wcs2)
            else
                i_5 = sub_140a32c90(wcs1, wcs2)
            
            int64_t j_2 = sx.q(rbx_1.d)
            void* i_4 = i_5
            
            if (i_5 != 0)
                int64_t rdi_1 = sx.q(rbp_1.d) * 2
                void* i_2
                
                do
                    arg_8 += 1
                    
                    if (j_2 s> 0)
                        void* i_7 = i_4
                        int64_t j_1 = j_2
                        int64_t j
                        
                        do
                            *i_7 = *(arg3 - i_4 + i_7)
                            i_7 += 2
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                    
                    int32_t rax_4 = arg1[1].d
                    int32_t rax_5
                    int16_t* const rdx_3
                    
                    if (rax_4 == 0)
                        rdx_3 = &data_142d40450
                        rax_5 = 0
                    else
                        rdx_3 = *arg1
                        rax_5 = rax_4 - 1
                    
                    if ((rdi_1 - rdx_3 + i_4) s>> 1 s>= sx.q(rax_5))
                        break
                    
                    void* wcs1_1 = rdi_1 + i_4
                    
                    if (arg4 != 1)
                        i_2 = wcsstr(wcs1_1, wcs2)
                    else
                        i_2 = sub_140a32c90(wcs1_1, wcs2)
                    
                    i_4 = i_2
                while (i_2 != 0)

return zx.q(arg_8)
