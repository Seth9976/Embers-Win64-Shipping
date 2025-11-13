// 函数: sub_140edc9d0
// 地址: 0x140edc9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_508
int64_t rax_1 = __security_cookie ^ &var_508
int64_t* rbx = *(arg4 + 0x48)

if (rbx != 0)
    rbx[1].d += 1

int64_t rdi
rdi.b = *(arg4 + 0x38) == data_143e1e020

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rdi.b == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    char* r15_1 = *(arg4 + 0x10)
    void var_460
    int64_t* var_320
    int64_t* var_318
    char* rbx_3
    int32_t r12_2
    int32_t r15_2
    
    if (r15_1 == 0)
        void var_1a8
        rbx_3 = sub_140d947e0(&var_1a8)
        r15_2 = 0
        r12_2 = 2
    else
        void* rbx_1 = &r15_1[8]
        char var_468 = *r15_1
        void* var_340_1 = nullptr
        int32_t i_2 = *(rbx_1 + 0x128)
        void* r12_1 = *(rbx_1 + 0x120)
        int32_t i_4 = i_2
        
        if (i_2 != 0)
            sub_140dbc410(&var_460, i_2, 0)
            void* rcx_3 = &var_460
            
            if (r12_1 != 0)
                rbx_1 = r12_1
            
            if (var_340_1 != 0)
                rcx_3 = var_340_1
            
            int32_t i
            
            do
                *rcx_3 = *rbx_1
                *(rcx_3 + 0x10) = *(rbx_1 + 0x10)
                *(rcx_3 + 0x20) = *(rbx_1 + 0x20)
                *(rcx_3 + 0x30) = *(rbx_1 + 0x30)
                *(rcx_3 + 0x38) = *(rbx_1 + 0x38)
                void* rax_8 = *(rbx_1 + 0x40)
                *(rcx_3 + 0x40) = rax_8
                
                if (rax_8 != 0)
                    *(rax_8 + 8) += 1
                
                rcx_3 += 0x48
                rbx_1 += 0x48
                i = i_2
                i_2 -= 1
            while (i != 1)
        else
            int32_t var_334_1 = 4
        
        char var_330_1 = r15_1[0x138]
        int64_t var_328_1 = *(r15_1 + 0x140)
        int64_t* rax_11 = *(r15_1 + 0x148)
        var_320 = rax_11
        
        if (rax_11 != 0)
            rax_11[1].d += 1
        
        var_318 = nullptr
        int32_t i_3 = *(r15_1 + 0x158)
        int64_t* rbx_2 = *(r15_1 + 0x150)
        int32_t i_5 = i_3
        
        if (i_3 != 0)
            sub_1405a4be0(&var_318, i_3, 0)
            int64_t* rcx_5 = var_318
            int32_t i_1
            
            do
                *rcx_5 = *rbx_2
                void* rax_13 = rbx_2[1]
                rcx_5[1] = rax_13
                
                if (rax_13 != 0)
                    *(rax_13 + 8) += 1
                
                rcx_5 = &rcx_5[2]
                rbx_2 = &rbx_2[2]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            rbx_3 = &var_468
            r12_2 = 0
            r15_2 = i_3 + 1
        else
            int32_t var_30c_1 = 0
            rbx_3 = &var_468
            r15_2 = i_3 + 1
            r12_2 = 0
    
    int64_t rcx_7 = 0
    char var_308 = *rbx_3
    int64_t var_1e0_1 = 0
    void var_300
    
    if (*(rbx_3 + 0x128) == 0)
        memmove(&var_300, &rbx_3[8], 0x120)
        rcx_7 = var_1e0_1
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t var_1e0_2 = *(rbx_3 + 0x128)
    *(rbx_3 + 0x128) = 0
    int32_t var_1d8_1 = *(rbx_3 + 0x130)
    int32_t var_1d4_1 = *(rbx_3 + 0x134)
    *(rbx_3 + 0x130) = 0
    *(rbx_3 + 0x134) = 4
    char var_1d0_1 = rbx_3[0x138]
    int64_t var_1c8_1 = *(rbx_3 + 0x140)
    int64_t* rax_21 = *(rbx_3 + 0x148)
    __builtin_memset(&rbx_3[0x140], 0, 0x20)
    int64_t var_1b8 = 0
    var_1b8 = *(rbx_3 + 0x150)
    int32_t var_1b0_1 = *(rbx_3 + 0x158)
    int32_t var_1ac_1 = *(rbx_3 + 0x15c)
    
    if (r12_2 != 0)
        void var_58
        sub_140596d80(&var_58)
        int64_t* var_60
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t temp5_1 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_60 + 8))(var_60, 1)
        
        void var_1a0
        sub_140d94d20(&var_1a0)
    
    if (r15_2 != 0)
        sub_140596d80(&var_318)
        
        if (var_320 != 0)
            var_320[1].d -= 1
            
            if (var_320[1].d == 1)
                (**var_320)(var_320)
                int32_t temp8_1 = *(var_320 + 0xc)
                *(var_320 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_320 + 8))(var_320, 1)
        
        sub_140d94d20(&var_460)
    
    int64_t* rcx_17 = *(arg1 + 0x10)
    void* rdx_3 = nullptr
    int64_t* r14_1 = data_143e29f28
    int32_t var_4a4 = 5
    int64_t* r8 = r14_1
    char var_4a7_1 = 0
    
    if (rcx_17 != 0)
        int32_t rax_29 = rcx_17[1].d
        
        if (rax_29 != 0)
            rcx_17[1].d = rax_29 + 1
            rax_29.b = 1
            r14_1 = data_143e29f28
        
        if (rax_29.b == 0)
            rcx_17 = nullptr
        
        if (rcx_17 != 0)
            rdx_3 = *(arg1 + 8)
    
    void* var_4a0 = rdx_3
    void var_490
    int128_t* rax_31 = (*(*r8 + 0x58))(r8, &var_490)
    void* var_478
    void** rax_32
    uint128_t zmm0_2
    rax_32, zmm0_2 = sub_140ec2d20(arg1, &var_478)
    void var_4a8
    void* var_488
    sub_140e80850(r14_1, &var_488, &var_4a0, &var_308, zmm0_2, rax_32, rax_31, &var_4a4, 1, 
        &data_143dbb1f0, &var_4a8, 1)
    int64_t* var_480
    
    if (var_480 != 0)
        var_480[1].d -= 1
        
        if (var_480[1].d == 1)
            (**var_480)(var_480)
            int32_t temp10_1 = *(var_480 + 0xc)
            *(var_480 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_480 + 8))(var_480, 1)
    
    if (rcx_17 != 0)
        rcx_17[1].d -= 1
        
        if (rcx_17[1].d == 1)
            (**rcx_17)(rcx_17)
            int32_t temp12_1 = *(rcx_17 + 0xc)
            *(rcx_17 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*rcx_17 + 8))(rcx_17, 1)
    
    int64_t* var_470
    
    if (var_470 != 0)
        var_470[1].d -= 1
        
        if (var_470[1].d == 1)
            (**var_470)(var_470)
            int32_t temp14_1 = *(var_470 + 0xc)
            *(var_470 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*var_470 + 8))(var_470, 1)
    
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    sub_140596d80(&var_1b8)
    
    if (rax_21 != 0)
        rax_21[1].d -= 1
        
        if (rax_21[1].d == 1)
            (**rax_21)(rax_21)
            int32_t temp15_1 = *(rax_21 + 0xc)
            *(rax_21 + 0xc) -= 1
            
            if (temp15_1 == 1)
                int64_t r8_3 = *rax_21
                (*(r8_3 + 8))(rax_21, 1, r8_3)
    
    sub_140d94d20(&var_300)

__security_check_cookie(rax_1 ^ &var_508)
return arg2
