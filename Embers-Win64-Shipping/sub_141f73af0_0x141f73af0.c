// 函数: sub_141f73af0
// 地址: 0x141f73af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg3 + 8)
void*** rdi = nullptr
void* r14 = nullptr
int64_t r15 = sx.q(arg2)
int32_t rsi = 0
void* var_48 = nullptr
int32_t var_40 = 0

if (rax s> 0)
    sub_1406105e0(&var_48)
    int32_t i = 0
    r14 = var_48
    
    if (*(arg3 + 8) s> 0)
        void* rsi_1 = r14
        
        do
            void arg_8
            char* rax_1 = sub_140ae16d0((sx.q(i) << 4) + *arg3, &arg_8, 0)
            i += 1
            rsi_1 += 4
            *(rsi_1 - 4) = *rax_1
        while (i s< *(arg3 + 8))
    
    rsi = rax

uint64_t result = sub_141f6b830(arg1)
void* rbx_1 = arg1[0xb6]
int64_t* rbx_2

if (rbx_1 == 0)
    void* rbx_3 = arg1[0x86]
    
    if (rbx_3 != 0)
        rbx_2 = *(rbx_3 + 0x58)
        goto label_141f73bad
else
    rbx_2 = *(rbx_1 + 0x40)
label_141f73bad:
    
    if (rbx_2 != 0 && r15.d s>= 0 && r15.d s< arg1[0xaf].d && r15.d s< rbx_2[1].d)
        int64_t rax_2 = arg1[0xae]
        int64_t rcx_6 = r15 * 5
        void* r12_1 = rax_2 + (rcx_6 << 3)
        int64_t* rcx_7 = *(rax_2 + (rcx_6 << 3) + 0x10)
        
        if (rcx_7 != 0)
            sub_141997f50(rcx_7)
            sub_1419a21e0(0)
            int64_t* rcx_8 = *(r12_1 + 0x10)
            
            if (rcx_8 != 0)
                (**rcx_8)(rcx_8, 1)
                *(r12_1 + 0x10) = 0
        
        int64_t rax_4 = *rbx_2
        void* rbp_1 = nullptr
        void* var_38 = nullptr
        int64_t var_30_1 = 0
        int32_t rbx_4 = *(*(rax_4 + (r15 << 3)) + 0xec)
        void** rbx_5
        
        if (rsi != rbx_4)
            var_30_1.d = rbx_4
            
            if (rbx_4 s> 0)
                sub_1406105e0(&var_38)
                rbp_1 = var_38
            
            int32_t rdx_3 = 0
            
            if (rbx_4 s> 0)
                void* rcx_11 = rbp_1
                
                do
                    int32_t rax_5
                    
                    if (rdx_3 s>= rsi)
                        rax_5 = data_14399f630
                    else
                        rax_5 = *(r14 - rbp_1 + rcx_11)
                    
                    *rcx_11 = rax_5
                    rdx_3 += 1
                    rcx_11 += 4
                while (rdx_3 s< rbx_4)
            
            rbx_5 = &var_38
        else
            rbx_5 = &var_48
        
        void*** rax_6 = j_sub_140a82f30(0x40)
        
        if (rax_6 != 0)
            rdi = sub_1422877b0(rax_6)
        
        int32_t r8_2 = rbx_5[1].d
        void* rdx_4 = *rbx_5
        *(r12_1 + 0x10) = rdi
        sub_1422a3d10(rdi, rdx_4, r8_2, 4, 1)
        sub_141997e80(*(r12_1 + 0x10))
        result = sub_141ee8490(arg1)
        
        if (rbp_1 != 0)
            result = sub_140a74f90(rbp_1)

if (r14 == 0)
    return result

return sub_140a74f90(r14) __tailcall
