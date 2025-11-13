// 函数: sub_141f248b0
// 地址: 0x141f248b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
arg1[0x3e] = arg2
int64_t rax = sub_140d23dc0(arg1, 0x30)
int64_t* arg_8

if (rax.b == 0)
    rax = arg1[0x40]
    
    if (rax != 0)
        int64_t rbx_8 = *(rax + 0x10)
        void* const rdx_9
        
        if (arg1[0x3e] == 0)
            rdx_9 = nullptr
        else
            rax = sub_142452380()
            
            if (rax == 0)
                rdx_9 = nullptr
            else
                rdx_9 = arg1[0x3e]
                int64_t r8_9 = rax + 0x30
                rax = sx.q(*(rax + 0x38))
                
                if (rax.d s> *(rdx_9 + 0x38))
                    rdx_9 = nullptr
                else
                    int64_t rcx_18 = rax
                    rax = *(rdx_9 + 0x30)
                    
                    if (*(rax + (rcx_18 << 3)) != r8_9)
                        rdx_9 = nullptr
        
        if (rbx_8 != rdx_9)
            arg1[0x40] = 0
    
    if ((arg1[0x11].b & 1) != 0)
        arg_8 = nullptr
        arg1[0x41] = 0
        sub_141f0f310(arg1)
        int64_t rbx_9 = arg1[0x40]
        int64_t* rax_17 = &arg_18
        
        if (arg3 == 0)
            rax_17 = &arg1[0x40]
        
        arg1[0x40] = *rax_17
        rax = (*(*arg1 + 0x520))(arg1)
        arg1[0x40] = rbx_9
else
    void* const rdx
    
    if (arg1[0x3e] == 0)
        rdx = nullptr
    else
        rax = sub_142452380()
        
        if (rax == 0)
            rdx = nullptr
        else
            rdx = arg1[0x3e]
            int64_t r8 = rax + 0x30
            rax = sx.q(*(rax + 0x38))
            
            if (rax.d s> *(rdx + 0x38))
                rdx = nullptr
            else
                int64_t rcx = rax
                rax = *(rdx + 0x30)
                
                if (*(rax + (rcx << 3)) != r8)
                    rdx = nullptr
    
    int64_t* rbx_1 = arg1[0x40]
    
    if (rdx != 0)
        void* const rdx_1
        int64_t rbx_2
        
        if (rbx_1 != 0 && arg3 == 0)
            rbx_2 = rbx_1[2]
            
            if (arg1[0x3e] == 0)
                rdx_1 = nullptr
            else
                rax = sub_142452380()
                
                if (rax == 0)
                    rdx_1 = nullptr
                else
                    rdx_1 = arg1[0x3e]
                    int64_t r8_1 = rax + 0x30
                    rax = sx.q(*(rax + 0x38))
                    
                    if (rax.d s> *(rdx_1 + 0x38))
                        rdx_1 = nullptr
                    else
                        int64_t rcx_1 = rax
                        rax = *(rdx_1 + 0x30)
                        
                        if (*(rax + (rcx_1 << 3)) != r8_1)
                            rdx_1 = nullptr
        
        if (rbx_1 == 0 || arg3 != 0 || rbx_2 != rdx_1)
            arg_8 = nullptr
            int64_t* r14_1
            
            if (arg1[0x3e] == 0)
                r14_1 = nullptr
            else
                void* rax_1 = sub_142452380()
                
                if (rax_1 == 0)
                    r14_1 = nullptr
                else
                    r14_1 = arg1[0x3e]
                    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                    
                    if (rax_2.d s> r14_1[7].d || *(r14_1[6] + (rax_2 << 3)) != rax_1 + 0x30)
                        r14_1 = nullptr
            
            void* rax_4 = sub_140cde0b0()
            char rax_5 = sub_140b5b8a0(0, 0)
            int64_t* rbx_3 = arg_8
            uint32_t rcx_4
            rcx_4.b = (rbx_3 u>> 0x20).d == 0
            
            if ((rcx_4.b & rax_5) != 0)
                sub_140d19010(rax_4, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
            
            void* rax_6 = sub_140d2dfc0(r14_1, rax_4, rbx_3, 0x29, 0, arg3, 0, 0, 0)
            int64_t* rbx_4 = arg1[0x40]
            
            if (rbx_4 != 0)
                if (arg3 == 0)
                    arg_8.d = 0x10100
                    arg_8:4.d = 0x1010001
                    sub_1423d5560(rbx_4, rax_6, arg_8)
                    rbx_4 = arg1[0x40]
                
                int64_t rbx_5 = *rbx_4
                int64_t rax_7 = sub_140cde0b0()
                (*(rbx_5 + 0x138))(arg1[0x40], 0, rax_7, 0x10)
            
            arg1[0x40] = rax_6
            void* const rdx_5
            
            if (arg1[0x3e] == 0)
                rdx_5 = nullptr
            else
                void* rax_8 = sub_142452380()
                
                if (rax_8 == 0)
                    rdx_5 = nullptr
                else
                    rdx_5 = arg1[0x3e]
                    int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                    
                    if (rax_9.d s> *(rdx_5 + 0x38)
                            || *(*(rdx_5 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                        rdx_5 = nullptr
            
            arg_8 = *(rdx_5 + 0x18)
            int16_t* var_58
            sub_140b63b70(&arg_8, &var_58)
            int16_t* const rsi_1 = &data_142d40450
            int64_t arg_10 = arg1[3]
            int16_t* var_68
            sub_140b63b70(&arg_10, &var_68)
            int16_t* const r8_6 = &data_142d40450
            int32_t var_60
            
            if (var_60 != 0)
                r8_6 = var_68
            
            int16_t* var_48
            sub_140a2e390(&var_48, u"%s_%s_CAT", r8_6)
            int16_t* rcx_13 = var_68
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            int16_t* rcx_14 = var_58
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            int64_t* rcx_15 = arg1[0x40]
            int32_t var_40
            
            if (var_40 != 0)
                rsi_1 = var_48
            
            rax = (*(*rcx_15 + 0x138))(rcx_15, rsi_1, arg1, 0x15)
            int16_t* rcx_16 = var_48
            
            if (rcx_16 != 0)
                return sub_140a74f90(rcx_16)
    else if (rbx_1 != 0)
        int64_t rbx_7 = *rbx_1
        int64_t rax_15 = sub_140cde0b0()
        int64_t rax_16 = (*(rbx_7 + 0x138))(arg1[0x40], 0, rax_15, 0x10)
        arg1[0x40] = 0
        return rax_16
return rax
