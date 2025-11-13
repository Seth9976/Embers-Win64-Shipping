// 函数: sub_14096eed0
// 地址: 0x14096eed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
sub_140975480(arg1)
int64_t r12
r12.b = 0
int32_t rcx = 0
int32_t var_c8 = 0
int64_t var_c0
void* rax_2

if (arg2 != 0)
    rax_2 = *(arg1 + 0x60)
    
    if (rax_2 != 0)
        int32_t i = 0
        
        if (*(rax_2 + 0x28) s> 0)
            void* rdi_1 = nullptr
            
            do
                int64_t rsi_1 = *(rax_2 + 0x20)
                int64_t rbx_1 = *(arg1 + 0x74)
                var_c0 = rbx_1
                void* const rcx_4
                
                if (*(rsi_1 + rdi_1 + 0x30) == *(rsi_1 + rdi_1 + 0x5c))
                label_14096efc0:
                    rcx_4 = nullptr
                else
                    int32_t rax_5 = sub_140b5ead0(rbx_1.d) + var_c0:4.d
                    void* r8_2 = rdi_1 + 0x60 + rsi_1
                    void* rcx_2 = *(r8_2 + 8)
                    
                    if (rcx_2 != 0)
                        r8_2 = rcx_2
                    
                    int32_t rax_7 =
                        *(r8_2 + (((sx.q(*(rsi_1 + rdi_1 + 0x70)) - 1) & sx.q(rax_5)) << 2))
                    
                    if (rax_7 == 0xffffffff)
                    label_14096efc0_1:
                        rcx_4 = nullptr
                    else
                        int64_t r8_3 = *(rsi_1 + rdi_1 + 0x28)
                        
                        while (true)
                            int64_t rdx_3 = sx.q(rax_7) * 5
                            rcx_4 = r8_3 + (rdx_3 << 3)
                            
                            if (*(r8_3 + (rdx_3 << 3)) == rbx_1)
                                break
                            
                            rax_7 = *(rcx_4 + 0x20)
                            
                            if (rax_7 == 0xffffffff)
                                goto label_14096efc0_2
                        
                        if (rax_7 == 0xffffffff)
                        label_14096efc0_2:
                            rcx_4 = nullptr
                
                void* rax_8 = rcx_4 + 8
                
                if (rcx_4 == 0)
                    rax_8 = nullptr
                
                if (rax_8 != 0)
                    r12.b = 1
                    sub_1409401f0(rax_8, &var_c8)
                
                rax_2 = *(arg1 + 0x60)
                i += 1
                rdi_1 += 0x78
            while (i s< *(rax_2 + 0x28))
            
            rcx = var_c8

if (r12.b == 0)
    *(arg1 + 0x88) = 0
    rax_2.b = 0
else
    *(arg1 + 0x88) = rcx
    rax_2.b = 1

*(arg1 + 0x84) = rax_2.b
void* rax_9 = sub_140d3c6e0(arg1 + 0x7c)

if (rax_9 != 0)
    void* rcx_7 = *(rax_9 + 0x188)
    void* rdi_2
    
    if (rcx_7 == 0)
        rdi_2 = *(rax_9 + 0x300)
    else
        rdi_2 = *(rcx_7 + 0xc0)
    
    void*** rax_10 = sub_140a84c80(0, 0x30, 0)
    void*** var_b0_1 = rax_10
    
    if (rax_10 != 0)
        *rax_10 = &data_142d57800
        sub_140d3a3a0(&rax_10[1], arg1)
        rax_10[2] = sub_14096f1f0
        rax_10[4] = sub_140a387b0()
        *rax_10 = &data_142d57858
    
    int64_t var_98 = 0
    int32_t var_90_1 = 0
    
    if (rax_10 != 0)
        (*rax_10)[8](rax_10, &var_98)
    
    void var_88
    sub_140d3a3a0(&var_88, nullptr)
    int64_t var_80_1 = 0
    int64_t var_78_1 = 0
    void* var_68_1 = nullptr
    sub_1423e6200(rdi_2, arg1 + 0x90, &var_98, 0x3a83126f, 0, 0xbf800000)
    
    if (var_78_1 != 0)
        void var_58
        void* rcx_12 = &var_58
        
        if (var_68_1 != 0)
            rcx_12 = var_68_1
        
        (*(*rcx_12 + 0x10))(rcx_12)
    
    sub_140745b20(&var_98)
    
    if (rax_10 != 0)
        (*rax_10)[7](rax_10, 0)
        int64_t rax_16 = sub_140a84c80(rax_10, 0, 0)
        int64_t var_b0_2 = rax_16
        
        if (rax_16 != 0)
            sub_140a74f90(rax_16)

int64_t* var_b8 = nullptr
int32_t result = &var_c0

if (arg1 + 0x60 != &var_c0)
    *(arg1 + 0x60) = 0
    var_c0 = 0
    result = sub_1405aeff0(arg1 + 0x68, &var_b8)
    int64_t* rcx_19 = var_b8
    
    if (rcx_19 != 0)
        result = rcx_19[1].d
        rcx_19[1].d -= 1
        
        if (result == 1)
            int64_t* rbx_3 = var_b8
            result = (**rbx_3)(rbx_3)
            int32_t rdi_3 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rdi_3 == 1)
                int64_t* rcx_21 = var_b8
                result = (*(*rcx_21 + 8))(rcx_21, zx.q(rdi_3))

__security_check_cookie(rax_1 ^ &var_f8)
return result
