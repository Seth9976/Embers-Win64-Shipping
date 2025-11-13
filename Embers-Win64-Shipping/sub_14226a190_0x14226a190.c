// 函数: sub_14226a190
// 地址: 0x14226a190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
sub_140b33630("Physics")
void* rbx = *(*(arg1 + 0x28) + 0x1f8)

if (rbx != 0)
    int64_t* rbx_1 = *(rbx + 0x98)
    int64_t rax_3
    
    if (rbx_1 != 0)
        rbx_1[9].d += 1
        rax_3 = 0
        
        if (0 == rbx_1[1])
            rbx_1[1] = 0
        else
            rax_3 = rbx_1[1]
    
    if (rbx_1 == 0 || ((rax_3 u>> 0x1a).b & 1) != 0)
        void* rdx_6 = *(arg1 + 0x28)
        void* rcx_12 = *(rdx_6 + 0x1f8)
        
        if (rcx_12 != 0)
            *(rdx_6 + 0x40)
            sub_142268c30(rcx_12)
    else
        int32_t var_88_1 = 0
        *(*arg2 + 0x4c) = 2
        void* rsi_1 = *(arg1 + 0x28)
        void* (* var_90_1)(void* arg1) = sub_14226ad60
        void*** rax_6 = sub_140a84c80(0, 0x30, 0)
        void*** var_a0 = rax_6
        
        if (rax_6 != 0)
            *rax_6 = &data_142e33ea8
            sub_140d3a3a0(&rax_6[1], rsi_1)
            *(rax_6 + 0x10) = var_90_1.o
            rax_6[5] = sub_140a387b0()
            *rax_6 = &data_142e33f00
        
        void** var_48_1 = nullptr
        int32_t var_3c_1 = 4
        int32_t i_2 = 1
        int64_t* var_68 = rbx_1
        rbx_1[9].d += 1
        void var_80
        int64_t* rax_8 = sub_140958da0(&var_80, &var_68, 0xff)
        void*** rsi_2 = var_a0
        int64_t* rdi_3 = *rax_8 + 0x10
        *rdi_3 = 0
        rdi_3[1].d = 0
        
        if (&var_a0 != rdi_3 && rsi_2 != 0)
            void** r8_1 = *rsi_2
            r8_1[8](rsi_2, rdi_3, r8_1)
        
        rdi_3[2].d = 2
        void* rcx_3 = *rax_8
        int64_t* rbp_1 = *(rcx_3 + 0x30)
        
        if (rbp_1 != 0)
            rbp_1[9].d += 1
            rsi_2 = var_a0
        
        sub_140978a40(rcx_3, rax_8[1], rax_8[2].d, 1)
        void** rcx_4 = var_48_1
        void** rdi_4 = &var_68
        int32_t i_1 = i_2
        
        if (rcx_4 != 0)
            rdi_4 = rcx_4
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t* rcx_5 = *rdi_4
                
                if (rcx_5 != 0)
                    rcx_5[9].d -= 1
                    
                    if (rcx_5[9].d == 1)
                        sub_140a2f6e0(rcx_5)
                
                rdi_4 = &rdi_4[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rsi_2 = var_a0
            rcx_4 = var_48_1
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        void* rdi_6 = *arg2 + 0x18
        int64_t r15_2 = sx.q(*(rdi_6 + 0x28))
        int32_t rax_10 = (r15_2 + 1).d
        *(rdi_6 + 0x28) = rax_10
        
        if (rax_10 s> *(rdi_6 + 0x2c))
            sub_14083a490(rdi_6, r15_2.d)
        
        void* rax_11 = *(rdi_6 + 0x20)
        
        if (rax_11 != 0)
            rdi_6 = rax_11
        
        int64_t** rcx_7 = rdi_6 + (r15_2 << 3)
        
        if (rcx_7 == 0)
            goto label_14226a3db
        
        *rcx_7 = rbp_1
        
        if (rbp_1 != 0)
            rbp_1[9].d += 1
            rsi_2 = var_a0
        label_14226a3db:
            
            if (rbp_1 != 0)
                rbp_1[9].d -= 1
                
                if (rbp_1[9].d == 1)
                    sub_140a2f6e0(rbp_1)
                
                rsi_2 = var_a0
        
        if (rsi_2 != 0)
            (*rsi_2)[7](rsi_2, 0)
            void*** rax_14 = sub_140a84c80(rsi_2, 0, 0)
            var_a0 = rax_14
            
            if (rax_14 != 0)
                sub_140a74f90(rax_14)
    
    if (rbx_1 != 0)
        rbx_1[9].d -= 1
        
        if (rbx_1[9].d == 1)
            sub_140a2f6e0(rbx_1)

int64_t result = sub_140b37f60("Physics")
__security_check_cookie(rax_1 ^ &var_c8)
return result
