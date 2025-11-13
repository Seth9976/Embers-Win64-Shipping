// 函数: sub_14062d9b0
// 地址: 0x14062d9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t* r10_1 = *(arg2 + 0x78)
int32_t r9 = *(arg2 + 0x80)
int32_t var_94_1 = r9
int64_t* var_68_1 = r10_1
int32_t r11_1 = *(r10_1 + 0x3c)
uint64_t rdx = &arg1[1]
int32_t var_90_1 = r11_1
uint64_t var_88_1 = rdx

if ((not.b(r9.b) & 1) != 0)
    var_88_1 = rdx

int32_t r8 = *rdx
int32_t var_98_1 = r8

if (r10_1 == 0)
    return 

int32_t arg_8
uint64_t rax

if (((zx.q(*(r10_1[1] + 0x10)) u>> 0x10).b & 1) != 0)
    int32_t rcx_2 = 0
    int32_t var_60_1 = 0
    
    if (r8 s> 0)
        do
            rax = zx.q(r8 - rcx_2 - 1)
            
            if (rax.d s> 0)
                int64_t r12_1 = sx.q(r11_1)
                char rdi_1 = not.b(r9.b) & 1
                uint64_t i_2 = zx.q(rax.d)
                arg_8.b = rdi_1
                void* r15_1 = nullptr
                uint64_t i
                
                do
                    void* rdx_1
                    
                    if (*rdx != 0)
                        void* rax_4 = *arg1
                        
                        if (rdi_1 == 0 && (rax_4.b & 1) != 0)
                            rax_4 = (rax_4 s>> 1) + arg1
                        
                        rdx_1 = r15_1 + rax_4
                    else
                        rdx_1 = nullptr
                    
                    void* rax_7 = (*(*r10_1 + 0x140))(r10_1, rdx_1)
                    void* rdx_2
                    
                    if (*var_88_1 != 0)
                        void* rax_9 = *arg1
                        
                        if (rdi_1 == 0 && (rax_9.b & 1) != 0)
                            rax_9 = (rax_9 s>> 1) + arg1
                        
                        rdx_2 = r15_1 + rax_9 + r12_1
                    else
                        rdx_2 = nullptr
                    
                    uint64_t r13_1 = (*(*var_68_1 + 0x140))(var_68_1, rdx_2)
                    void* rcx_7 = *(rax_7 + 0x10)
                    
                    if (arg4 != 0)
                        void* var_80 = rcx_7
                        int64_t* var_78_1
                        
                        if (rcx_7 == 0)
                            var_78_1 = nullptr
                        else
                            var_78_1 = *(rcx_7 + 0x50)
                        
                        int32_t var_70_1 = 0xffffffff
                        int16_t var_6c_1 = 0x101
                        char var_6a_1 = 0
                        sub_1406328d0(&var_80)
                        int64_t* rdi_2 = var_78_1
                        
                        if (rdi_2 == 0)
                        label_14062db79:
                            rdi_2 = nullptr
                        else
                            while (true)
                                int64_t rax_12 = rdi_2[5]
                                int64_t var_5c_1 = rax_12
                                
                                if (rax_12 == arg4)
                                    break
                                
                                int64_t* rax_13 = rdi_2[4]
                                sub_1406328d0(&var_80)
                                rdi_2 = rax_13
                                
                                if (rdi_2 == 0)
                                    goto label_14062db79
                        
                        void* rax_14 = *(r13_1 + 0x10)
                        var_80 = rax_14
                        int64_t* var_78_3
                        
                        if (rax_14 == 0)
                            var_78_3 = nullptr
                        else
                            var_78_3 = *(rax_14 + 0x50)
                        
                        int32_t var_70_2 = 0xffffffff
                        int16_t var_6c_2 = 0x101
                        char var_6a_2 = 0
                        sub_1406328d0(&var_80)
                        int64_t* r8_1 = var_78_3
                        
                        if (r8_1 == 0)
                        label_14062dbe1:
                            r8_1 = nullptr
                        else
                            while (true)
                                rax = r8_1[5]
                                uint64_t var_54_1 = rax
                                
                                if (rax == arg4)
                                    break
                                
                                int64_t* rax_16 = r8_1[4]
                                sub_1406328d0(&var_80)
                                r8_1 = rax_16
                                
                                if (r8_1 == 0)
                                    goto label_14062dbe1
                        
                        if (rdi_2 == 0 || r8_1 == 0)
                            rdi_1 = arg_8.b
                        else
                            rax, arg5 = sub_14062ddf0(rdi_2, sx.q(*(rdi_2 + 0x4c)) + rax_7, r8_1, 
                                sx.q(*(r8_1 + 0x4c)) + r13_1, arg5)
                            rdi_1 = arg_8.b
                            
                            if (rax.b != arg3)
                                void* rax_17 = *arg1
                                
                                if (rdi_1 == 0 && (rax_17.b & 1) != 0)
                                    rax_17 = (rax_17 s>> 1) + arg1
                                
                                sub_140635010(rax_17 + r15_1, rax_17 + r15_1 + r12_1, r12_1)
                    
                    r10_1 = var_68_1
                    r15_1 += r12_1
                    i = i_2
                    i_2 -= 1
                    rdx = var_88_1
                while (i != 1)
                rcx_2 = var_60_1
                r8 = var_98_1
                r9 = var_94_1
                r11_1 = var_90_1
            
            rcx_2 += 1
            var_60_1 = rcx_2
        while (rcx_2 s< r8)
else if (r10_1 != 0)
    if (((zx.q(*(r10_1[1] + 0x10)) u>> 0x14).b & 1) != 0)
        rax = sub_140625b00(r10_1[0xf], arg4)
        rdx = var_88_1
        r10_1 = rax
        r8 = var_98_1
        r9 = var_94_1
        r11_1 = var_90_1
        var_68_1 = rax
    
    if (r10_1 != 0)
        int32_t rcx_18 = 0
        arg_8 = 0
        
        if (r8 s> 0)
            do
                rax = zx.q(r8 - rcx_18 - 1)
                
                if (rax.d s> 0)
                    int64_t r15_2 = sx.q(r11_1)
                    uint64_t i_3 = zx.q(rax.d)
                    char r12_2 = not.b(r9.b) & 1
                    void* rbx_2 = nullptr
                    uint64_t i_1
                    
                    do
                        void* rax_21
                        int64_t rcx_19
                        int32_t* rdx_9
                        void* rdi_3
                        
                        if (*rdx != 0)
                            void* rax_22 = *arg1
                            
                            if (r12_2 == 0 && (rax_22.b & 1) != 0)
                                rax_22 = (rax_22 s>> 1) + arg1
                            
                            rcx_19 = sx.q(*(r10_1 + 0x4c))
                            void* rax_24 = *arg1
                            rdx_9 = rbx_2 + rax_22 + rcx_19
                            
                            if (r12_2 == 0 && (rax_24.b & 1) != 0)
                                rax_24 = (rax_24 s>> 1) + arg1
                            
                            rdi_3 = rbx_2 + r15_2
                            rax_21 = rax_24 + rdi_3
                        else
                            rcx_19 = sx.q(*(r10_1 + 0x4c))
                            rdi_3 = rbx_2 + r15_2
                            rdx_9 = rcx_19
                            rax_21 = nullptr
                        
                        rax, arg5 = sub_14062ddf0(r10_1, rdx_9, r10_1, rcx_19 + rax_21, arg5)
                        
                        if (rax.b != arg3)
                            void* rax_26 = *arg1
                            void* rcx_21
                            void* rdx_12
                            
                            if (r12_2 != 0)
                                rdx_12 = rax_26 + rdi_3
                                rcx_21 = rax_26 + rbx_2
                            else
                                if ((rax_26.b & 1) != 0)
                                    rax_26 = (rax_26 s>> 1) + arg1
                                
                                rdx_12 = rbx_2 + rax_26 + r15_2
                                rcx_21 = rbx_2 + rax_26
                            
                            sub_140635010(rcx_21, rdx_12, r15_2)
                        
                        r10_1 = var_68_1
                        rbx_2 = rdi_3
                        rdx = var_88_1
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                    rcx_18 = arg_8
                    r8 = var_98_1
                
                rdx = var_88_1
                rcx_18 += 1
                r9 = var_94_1
                r11_1 = var_90_1
                arg_8 = rcx_18
            while (rcx_18 s< r8)
