// 函数: sub_142615c20
// 地址: 0x142615c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    char r11_1 = (*(arg1 + 0xa0)).b
    char rbx_1 = (*(arg1 + 0x9c)).b
    int32_t r10_3 = ((1 << rbx_1).d - 1) & (arg2 u>> r11_1).d
    
    if (r10_3 s< *(arg1 + 0x30))
        int32_t* rdi_2 = zx.q(r10_3) * 0xb0 + *(arg1 + 0x90)
        
        if (*rdi_2 == ((arg2 u>> (rbx_1 + r11_1)).d & ((1 << (*(arg1 + 0x98)).b).d - 1)))
            void* rcx_4 = *(rdi_2 + 8)
            void* i_3 = nullptr
            int64_t rdx_3 =
                sx.q(*(rcx_4 + 0xc) * 0xd8163841 - *(rcx_4 + 8) * 0x72594cbd) & sx.q(*(arg1 + 0x38))
            int64_t rax_8 = *(arg1 + 0x80)
            void* i_2 = *(rax_8 + (rdx_3 << 3))
            
            if (i_2 != 0)
                void* i
                
                do
                    i = *(i_2 + 0x68)
                    
                    if (i_2 == rdi_2)
                        if (i_3 == 0)
                            *(rax_8 + (rdx_3 << 3)) = i
                        else
                            *(i_3 + 0x68) = i
                        
                        break
                    
                    i_3 = i_2
                    i_2 = i
                while (i != 0)
            
            void* rbx_2 = *(rdi_2 + 8)
            void* rsi = nullptr
            int32_t var_48 = 0
            void* var_40 = nullptr
            int32_t rax_9 = sub_142610f80(arg1, *(rbx_2 + 8), *(rbx_2 + 0xc))
            int64_t r14 = sx.q(rax_9)
            void var_148
            
            if (r14.d s< 0x20)
                rsi = &var_148
            else if (rax_9 s> 0)
                void* rax_10 = data_143b50290(zx.q((r14 << 3).d), 1)
                rbx_2 = *(rdi_2 + 8)
                rsi = rax_10
                var_40 = rax_10
                var_48 = r14.d
            
            sub_142611090(arg1, *(rbx_2 + 8), *(rbx_2 + 0xc), rsi, r14.d)
            
            if (r14 s> 0)
                int64_t rbx_3 = 0
                
                do
                    void* rdx_6 = *(rsi + (rbx_3 << 3))
                    
                    if (rdx_6 != rdi_2)
                        sub_142617240(arg1, rdx_6, rdi_2)
                    
                    rbx_3 += 1
                while (rbx_3 s< r14)
            
            for (int32_t i_1 = 0; i_1 s< 8; i_1 += 1)
                void* rax_11 = *(rdi_2 + 8)
                int64_t r15_1 = sx.q(sub_14260f910(arg1, *(rax_11 + 8), *(rax_11 + 0xc), i_1))
                void* rsi_1
                
                if (r15_1.d s< 0x20)
                    rsi_1 = &var_148
                else if (var_48 s>= r15_1.d)
                    rsi_1 = var_40
                else
                    if (var_40 != 0)
                        data_143b50298(var_40)
                    
                    void* rax_13 = data_143b50290(zx.q((r15_1 << 3).d), 1)
                    rsi_1 = rax_13
                    var_40 = rax_13
                    var_48 = r15_1.d
                
                void* rax_14 = *(rdi_2 + 8)
                int32_t rdx_8 = *(rax_14 + 8)
                int32_t r8_4 = *(rax_14 + 0xc)
                
                switch (i_1)
                    case 0
                        rdx_8 += 1
                    case 1
                        rdx_8 += 1
                        r8_4 += 1
                    case 2
                        r8_4 += 1
                    case 3
                        rdx_8 -= 1
                        r8_4 += 1
                    case 4
                        rdx_8 -= 1
                    case 5
                        rdx_8 -= 1
                        r8_4 -= 1
                    case 6
                        r8_4 -= 1
                    case 7
                        rdx_8 += 1
                        r8_4 -= 1
                
                sub_142611090(arg1, rdx_8, r8_4, rsi_1, r15_1.d)
                int64_t rbx_4 = 0
                
                if (r15_1 s> 0)
                    do
                        sub_142617240(arg1, *(rsi_1 + (rbx_4 << 3)), rdi_2)
                        rbx_4 += 1
                    while (rbx_4 s< r15_1)
            
            char rax_16
            
            if (arg3 == 0 || arg4 == 0)
                rax_16 = 0
            else
                rax_16 = 1
            
            if ((rdi_2[0x19].b & 1) == 0 || rax_16 != 0)
                if (arg3 != 0)
                    *arg3 = *(rdi_2 + 0x58)
                
                if (arg4 != 0)
                    *arg4 = rdi_2[0x18]
            else
                int64_t rcx_18 = *(rdi_2 + 0x58)
                
                if (rcx_18 != 0)
                    data_143b50298(rcx_18)
                
                *(rdi_2 + 0x58) = 0
                rdi_2[0x18] = 0
                
                if (arg3 != 0)
                    *arg3 = 0
                
                if (arg4 != 0)
                    *arg4 = 0
            
            int32_t rax_20 = *rdi_2 + 1
            rdi_2[0x19] = 0
            __builtin_memset(&rdi_2[1], 0, 0x4c)
            int32_t r12_2 = ((1 << (*(arg1 + 0x98)).b) - 1) & rax_20
            *rdi_2 = r12_2
            
            if (r12_2 == 0)
                *rdi_2 = r12_2 + 1
            
            *(rdi_2 + 0x68) = *(arg1 + 0x88)
            *(arg1 + 0x88) = rdi_2
            
            if (var_40 != 0)
                data_143b50298(var_40)
            
            return 0x40000000

return 0x80000008
