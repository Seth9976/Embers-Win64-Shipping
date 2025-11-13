// 函数: sub_141f3fb10
// 地址: 0x141f3fb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int64_t r14
r14.b = 0
int64_t result

if ((arg1[0x11].b & 1) != 0)
    int32_t rdi_1 = 0
    int64_t arg_8
    
    if (sub_141f42cb0(arg1) == 0)
        void* rax_5 = arg1[0x86]
        
        if (rax_5 != 0 && *(rax_5 + 0x60) != 0 && *(arg1 + 0x717) == 1)
            int64_t* rsi_1 = nullptr
            
            if (arg2 == 0)
                rsi_1 = arg1[0xca]
                void* rax_6
                int64_t rax_7
                void* rdx_2
                
                if (rsi_1 != 0)
                    rax_6 = sub_142469550()
                    rdx_2 = rsi_1[2]
                    rax_7 = sx.q(*(rax_6 + 0x38))
                
                if (rsi_1 == 0 || rax_7.d s> *(rdx_2 + 0x38)
                        || *(*(rdx_2 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                    rsi_1 = nullptr
            
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            arg_8 = 0
            void* rax_10 = sub_140d2dfc0(sub_142469550(), arg1, 0, 0, 0, 0, 0, 0, 0)
            arg1[0xca] = rax_10
            
            if (rax_10 != 0)
                sub_141e05a00(rax_10, arg3)
                r15.b = 1
            
            void* rcx_11
            int64_t* rsi_2
            
            if (rsi_1 == 0 || arg1[0xca] == 0)
                rsi_2 = arg1[0xca]
                void* rax_14
                int64_t rax_15
                void* rdx_7
                
                if (rsi_2 != 0)
                    rax_14 = sub_142469550()
                    rdx_7 = rsi_2[2]
                    rax_15 = sx.q(*(rax_14 + 0x38))
                
                if (rsi_2 == 0 || rax_15.d s> *(rdx_7 + 0x38)
                        || *(*(rdx_7 + 0x30) + (rax_15 << 3)) != rax_14 + 0x30)
                    rsi_2 = nullptr
                
                rcx_11 = &arg1[0xcc]
            else
                int32_t var_50
                int32_t var_50_1 = var_50 | 3
                int32_t var_48_1 = 0x3f800000
                int32_t var_4c_1 = (zx.o(0)).d
                int64_t var_58 = 0
                sub_142319a70(&var_58, rsi_1)
                rsi_2 = arg1[0xca]
                void* rax_11
                int64_t rax_12
                void* rdx_6
                
                if (rsi_2 != 0)
                    rax_11 = sub_142469550()
                    rdx_6 = rsi_2[2]
                    rax_12 = sx.q(*(rax_11 + 0x38))
                
                if (rsi_2 == 0 || rax_12.d s> *(rdx_6 + 0x38)
                        || *(*(rdx_6 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
                    rsi_2 = nullptr
                
                rcx_11 = &var_58
            
            sub_142318230(rcx_11, rsi_2)
            int64_t* rcx_12 = arg1[0xca]
            
            if (rcx_12 != 0)
                sub_140d18150(rcx_12, arg1, 0)
    else
        int64_t* rdx
        
        if (arg1[0xc9] == 0)
            rdx = nullptr
        else
            void* rax_1 = sub_14245f6d0()
            
            if (rax_1 == 0)
                rdx = nullptr
            else
                rdx = arg1[0xc9]
                int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                
                if (rax_2.d s> rdx[7].d || *(rdx[6] + (rax_2 << 3)) != rax_1 + 0x30)
                    rdx = nullptr
        
        void* rax_4 = sub_140596910(arg1, rdx, 0, 0, 0, 0, 0)
        arg1[0xca] = rax_4
        
        if (rax_4 != 0)
            sub_141f46370(arg1)
            sub_141e05a00(arg1[0xca], arg3)
            r15.b = 1
    
    void* rsi_3 = arg1[0x86]
    
    if (*(rsi_3 + 0x2f0) == 0)
        arg1[0xcb] = 0
    else
        void* rax_17 = sub_14245f6d0()
        
        if (rax_17 == 0)
            arg1[0xcb] = 0
        else
            void* rsi_4 = *(rsi_3 + 0x2f0)
            int64_t rax_18 = sx.q(*(rax_17 + 0x38))
            
            if (rax_18.d s> *(rsi_4 + 0x38) || *(*(rsi_4 + 0x30) + (rax_18 << 3)) != rax_17 + 0x30
                    || rsi_4 == 0)
                arg1[0xcb] = 0
            else
                void* const rdx_11
                
                if (arg1[0xc9] == 0)
                    rdx_11 = nullptr
                else
                    void* rax_20 = sub_14245f6d0()
                    
                    if (rax_20 == 0)
                        rdx_11 = nullptr
                    else
                        rdx_11 = arg1[0xc9]
                        int64_t rax_21 = sx.q(*(rax_20 + 0x38))
                        
                        if (rax_21.d s> *(rdx_11 + 0x38)
                                || *(*(rdx_11 + 0x30) + (rax_21 << 3)) != rax_20 + 0x30)
                            rdx_11 = nullptr
                
                if (rsi_4 == rdx_11)
                    arg1[0xcb] = 0
    
    int64_t rcx_17
    void* const rdx_13
    void* const rbp_1
    
    if (arg1[0x86] != 0)
        if (arg1[0xc9] == 0)
            rbp_1 = nullptr
        else
            void* rax_23 = sub_14245f6d0()
            
            if (rax_23 == 0)
                rbp_1 = nullptr
            else
                rbp_1 = arg1[0xc9]
                int64_t rax_24 = sx.q(*(rax_23 + 0x38))
                
                if (rax_24.d s> *(rbp_1 + 0x38)
                        || *(*(rbp_1 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30)
                    rbp_1 = nullptr
        
        void* rsi_5 = arg1[0x86]
        
        if (*(rsi_5 + 0x2f0) == 0)
            rdx_13 = nullptr
        else
            void* rax_26 = sub_14245f6d0()
            
            if (rax_26 == 0)
                rdx_13 = nullptr
            else
                rdx_13 = *(rsi_5 + 0x2f0)
                int64_t rax_27 = sx.q(*(rax_26 + 0x38))
                
                if (rax_27.d s> *(rdx_13 + 0x38)
                        || *(*(rdx_13 + 0x30) + (rax_27 << 3)) != rax_26 + 0x30)
                    rdx_13 = nullptr
        
        void* rax_29 = arg1[0xcb]
        
        if (rax_29 == 0)
            rcx_17 = 0
        else
            rcx_17 = *(rax_29 + 0x10)
    
    if (arg1[0x86] == 0 || rdx_13 == 0 || (rdx_13 == rcx_17 && arg2 == 0) || rbp_1 == rdx_13)
        void* rsi_8 = arg1[0x86]
        
        if (*(rsi_8 + 0x2f0) == 0)
            arg1[0xcb] = 0
        else
            void* rax_37 = sub_14245f6d0()
            
            if (rax_37 == 0)
                arg1[0xcb] = 0
            else
                void* rdx_17 = *(rsi_8 + 0x2f0)
                int64_t rax_38 = sx.q(*(rax_37 + 0x38))
                
                if (rax_38.d s> *(rdx_17 + 0x38)
                        || *(*(rdx_17 + 0x30) + (rax_38 << 3)) != rax_37 + 0x30 || rdx_17 == 0)
                    arg1[0xcb] = 0
    else
        void* rsi_6 = arg1[0x86]
        int64_t* rdx_14
        
        if (*(rsi_6 + 0x2f0) == 0)
            rdx_14 = nullptr
        else
            void* rax_30 = sub_14245f6d0()
            
            if (rax_30 == 0)
                rdx_14 = nullptr
            else
                rdx_14 = *(rsi_6 + 0x2f0)
                int64_t rax_31 = sx.q(*(rax_30 + 0x38))
                
                if (rax_31.d s> rdx_14[7].d || *(rdx_14[6] + (rax_31 << 3)) != rax_30 + 0x30)
                    rdx_14 = nullptr
        
        void* rax_33 = sub_140596910(arg1, rdx_14, 0, 0, 0, 0, 0)
        arg1[0xcb] = rax_33
        
        if (rax_33 != 0)
            sub_141e05a00(rax_33, 0)
            arg_8 = 0
            int64_t arg_20 = 0
            void* rax_34 = sub_141e02da0(arg1[0xcb], 0, 0)
            
            if (rax_34 != 0)
                void* rax_35 = sub_141e048f0(arg1[0xcb])
                *(rax_34 + 0x40) = rax_35
                int32_t rbp_2 = *(rax_35 + 8)
                int32_t temp0_1 = *(rax_34 + 0x3c)
                
                if (rbp_2 s> temp0_1)
                    *(rax_34 + 0x38) = 0
                    
                    if (rbp_2 != temp0_1)
                        sub_1405a5220(rax_34 + 0x30, rbp_2)
                        rdi_1 = *(rax_34 + 0x38)
                
                int32_t rax_36 = rdi_1 + rbp_2
                *(rax_34 + 0x38) = rax_36
                
                if (rax_36 s> *(rax_34 + 0x3c))
                    sub_140638970(rax_34 + 0x30)
            
            r14.b = 1
    
    int64_t* rcx_26 = arg1[0xca]
    
    if (rcx_26 != 0 && r15.b == 0 && arg2 != 0)
        sub_141e05a00(rcx_26, arg3)
        r15.b = 1
    
    int64_t* rcx_27 = arg1[0xcb]
    
    if (rcx_27 != 0 && r14.b == 0 && arg2 != 0)
        sub_141e05a00(rcx_27, 0)
        r14.b = 1
    
    (*(*arg1 + 0x958))(arg1)
    
    if (r15.b != 0 || r14.b != 0)
        result.b = 1
        return result

result.b = 0
return result
