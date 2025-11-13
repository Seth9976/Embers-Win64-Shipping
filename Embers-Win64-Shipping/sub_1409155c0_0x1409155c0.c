// 函数: sub_1409155c0
// 地址: 0x1409155c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg2 + 0xa0)
int64_t var_54 = 0
int64_t var_4c = 0
int64_t rbp = 0
int32_t r14 = 0
int32_t r15 = 0
int64_t var_68
void var_40

if (r8 == 0)
    void* rax_2 = sub_140d226f0(arg2, sub_14247bf70())
    
    if (rax_2 == 0 || *(rax_2 + 0x278) == 0)
    label_1409156dd:
        *arg1 = 2
        *(arg1 + 4) = var_54.o
        *(arg1 + 0x18) = 0
        *(arg1 + 0x20) = 0
    else
        void* r13_1 = *(rax_2 + 0xe0)
        
        if (r13_1 == 0)
            goto label_1409156dd
        
        void* rax_3 = sub_14247bd50()
        void* rdx_2 = *(r13_1 + 0x10)
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
            goto label_1409156dd
        
        void* rax_6 = *(rax_2 + 0x278)
        void** rcx_4 = *(rax_6 + 0x38)
        void* rdx_3 = &rcx_4[sx.q(*(rax_6 + 0x40))]
        
        if (rcx_4 == rdx_3)
            goto label_1409156dd
        
        while (true)
            void* rax_8 = *rcx_4
            
            if (*(rax_8 + 0x30) == arg2)
                int64_t arg_10 = *(rax_8 + 0xd0)
                int64_t* rax_11 = sub_140b63b70(&arg_10, &var_68)
                
                if (&var_40 != rax_11)
                    rbp = *rax_11
                    *rax_11 = 0
                    r14 = rax_11[1].d
                    r15 = *(rax_11 + 0xc)
                    rax_11[1] = 0
                
                int64_t rcx_6 = var_68
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                *arg1 = 2
                *(arg1 + 4) = var_54.o
                *(arg1 + 0x18) = rbp
                *(arg1 + 0x20) = r14
                *(arg1 + 0x24) = r15
                break
            
            rcx_4 = &rcx_4[1]
            
            if (rcx_4 == rdx_3)
                goto label_1409156dd
else
    int64_t* rax = sub_140d21e10(arg2, &var_68, r8)
    
    if (&var_40 != rax)
        rbp = *rax
        *rax = 0
        r14 = rax[1].d
        r15 = *(rax + 0xc)
        rax[1] = 0
    
    int64_t rcx_1 = var_68
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *arg1 = 2
    *(arg1 + 4) = var_54.o
    *(arg1 + 0x18) = rbp
    *(arg1 + 0x20) = r14
    *(arg1 + 0x24) = r15
return arg1
