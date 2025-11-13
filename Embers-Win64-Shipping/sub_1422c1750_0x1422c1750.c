// 函数: sub_1422c1750
// 地址: 0x1422c1750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r12 = 0
int32_t* r14 = nullptr
int32_t arg_20 = 0

if ((arg4 & 1) == 0)
    void* rax_1 = *(arg1 + 0x58)
    
    if (rax_1 != 0 && *(rax_1 + 0x20) != 0)
        int32_t* rax_2 = j_sub_140a82f30(0x18)
        r14 = rax_2
        
        if (rax_2 == 0)
            r14 = nullptr
        else
            uint32_t i_1 = zx.d(*(*(arg1 + 0x58) + 0x20))
            *rax_2 = 0
            *(rax_2 + 8) = 0
            *(rax_2 + 0x10) = 0
            
            if (i_1 != 0)
                rax_2[4] = i_1
                
                if (i_1 s> 0)
                    sub_1422cf7f0(&rax_2[2])
                
                if (i_1 != 0)
                    void* r8_1 = *(r14 + 8) + 0x1628
                    uint32_t i
                    
                    do
                        int64_t j_1 = 0x40
                        int64_t* rax_3 = r8_1 - 0x1608
                        int64_t j
                        
                        do
                            rax_3[-4] = 0
                            void* rdx_1 = &rax_3[-2]
                            rax_3[-3] = 0
                            *rax_3 = 0
                            rax_3[1].d = 0
                            *(rax_3 + 0xc) = 0x80
                            void* rcx_2 = *rax_3
                            rax_3 = &rax_3[0xb]
                            
                            if (rcx_2 != 0)
                                rdx_1 = rcx_2
                            
                            *rdx_1 = 0
                            *(rdx_1 + 8) = 0
                            rax_3[-9].d = 0xffffffff
                            *(rax_3 - 0x44) = 0
                            rax_3[-7] = 0
                            rax_3[-6].d = 0
                            rax_3[-5].b = 0
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        *(r8_1 - 0x28) = 0xffffffff
                        void* rcx_3 = r8_1 - 0x10
                        *(r8_1 - 0x20) = 0
                        *(r8_1 - 0x18) = 0
                        *r8_1 = 0
                        *(r8_1 + 8) = 0
                        *(r8_1 + 0xc) = 0x80
                        void* rax_4 = *r8_1
                        
                        if (rax_4 != 0)
                            rcx_3 = rax_4
                        
                        *rcx_3 = 0
                        *(rcx_3 + 8) = 0
                        *(r8_1 + 0x10) = 0xffffffff
                        *(r8_1 + 0x14) = 0
                        *(r8_1 + 0x20) = 0
                        *(r8_1 + 0x28) = 0
                        *(r8_1 + 0x30) = 0
                        r8_1 += 0x1660
                        i = i_1
                        i_1 -= 1
                    while (i != 1)

void* rax_5 = sub_140d209c0(arg3)
void* rbp = rax_5

if (rax_5 == 0)
    rbp = arg3

int64_t* rax_6 = j_sub_140a82f30(0x860)
int64_t* rdi_1 = rax_6
int64_t* rbx

if (rax_6 == 0)
    int64_t* var_30
    rbx = var_30
    rdi_1 = nullptr
else
    rbx = *(arg1 + 0x18)
    int64_t rcx_5 = 0
    
    if (rbx != 0)
        int32_t rax_7 = rbx[1].d
        
        if (rax_7 != 0)
            rbx[1].d = rax_7 + 1
            rax_7.b = 1
        
        if (rax_7.b == 0)
            rbx = nullptr
        
        if (rbx != 0)
            rcx_5 = *(arg1 + 0x10)
    
    int64_t var_38 = rcx_5
    *rdi_1 = 0
    int64_t* var_30_1 = rbx
    int32_t* var_48_1 = r14
    sub_1422b4240(&rdi_1[1], &var_38, rbp, arg3)
    r12 = 1

void*** rax_8 = j_sub_140a82f30(0x18)

if (rax_8 != 0)
    rax_8[1].d = 1
    *rax_8 = &data_143318868
    *(rax_8 + 0xc) = 1
    rax_8[2] = rdi_1

*arg2 = rdi_1
arg2[1] = rax_8

if ((r12 & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
