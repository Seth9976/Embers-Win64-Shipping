// 函数: sub_140ebb230
// 地址: 0x140ebb230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_408
int64_t rax_1 = __security_cookie ^ &var_408
int64_t* rcx = data_143e29f28
int64_t var_3e8
(*(*rcx + 0x88))(rcx, &var_3e8)
int64_t* var_3e0

if (var_3e8 == 0)
label_140ebb604:
    *arg1 = 0
    *(arg1 + 8) = 0
    *(arg1 + 0x10) = 0
    arg1[0x20] = 0
    __builtin_memset(&arg1[0x28], 0, 0x88)
    *(arg1 + 0xb4) &= 0xffffff00
    *(arg1 + 0xb0) = 0x20702
    
    if (var_3e0 != 0)
        var_3e0[1].d -= 1
        
        if (var_3e0[1].d == 1)
            (**var_3e0)(var_3e0)
            int32_t temp1_1 = *(var_3e0 + 0xc)
            *(var_3e0 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_3e0 + 8))(var_3e0, 1)
else
    void var_188
    sub_140d947e0(&var_188)
    
    if (var_3e0 != 0)
        var_3e0[1].d += 1
    
    int64_t var_3d8 = var_3e8
    int64_t* var_3d0_1 = var_3e0
    
    if (var_3e0 != 0)
        var_3e0[1].d += 1
    
    sub_140e649d0(data_143e29f28, &var_3d8, &var_188, data_1439ae51c, arg3)
    
    if (var_3e0 != 0)
        var_3e0[1].d -= 1
        
        if (var_3e0[1].d == 1)
            (**var_3e0)(var_3e0)
            int32_t temp3_1 = *(var_3e0 + 0xc)
            *(var_3e0 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_3e0 + 8))(var_3e0, 1)
    
    void var_180
    int64_t* var_40
    void var_38
    
    if (sub_140db3500(&var_188) == 0)
    label_140ebb5be:
        sub_140596d80(&var_38)
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp5_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
        
        sub_140d94d20(&var_180)
        goto label_140ebb604
    
    void* var_3c8
    sub_140d94220(&var_3c8, &var_188)
    void var_2e8
    sub_140dbe230(&var_3c8, &var_2e8, arg2)
    int32_t i_4
    int64_t* var_3b0
    void var_2e0
    int32_t var_1b8
    int64_t* var_1a0
    void var_198
    
    if (var_1b8 s<= 0)
        sub_140596d80(&var_198)
        
        if (var_1a0 != 0)
            var_1a0[1].d -= 1
            
            if (var_1a0[1].d == 1)
                (**var_1a0)(var_1a0)
                int32_t temp8_1 = *(var_1a0 + 0xc)
                *(var_1a0 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_1a0 + 8))(var_1a0, 1)
        
        sub_140d94d20(&var_2e0)
        
        if (var_3b0 != 0)
            int32_t temp7_1 = *(var_3b0 + 0xc)
            *(var_3b0 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_3b0 + 8))(var_3b0, 1)
        
        int32_t i_3 = i_4
        
        if (i_3 != 0)
            void* rdi_9 = var_3c8 + 8
            int32_t i
            
            do
                int64_t* rcx_31 = *rdi_9
                
                if (rcx_31 != 0)
                    int32_t temp13_1 = *(rcx_31 + 0xc)
                    *(rcx_31 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*rcx_31 + 8))(rcx_31, 1)
                
                rdi_9 += 0x10
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        void* rcx_32 = var_3c8
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        goto label_140ebb5be
    
    void* rdx_4 = &var_2e0
    void* var_1c0
    
    if (var_1c0 != 0)
        rdx_4 = var_1c0
    
    int64_t rcx_9 = sx.q(var_1b8) * 9
    var_3d8 = *(rdx_4 + (rcx_9 << 3) - 0x10)
    void* rax_10 = *(rdx_4 + (rcx_9 << 3) - 8)
    void* var_3d0_2 = rax_10
    
    if (rax_10 != 0)
        *(rax_10 + 8) += 1
    
    int32_t var_2f4
    int32_t var_2f4_1 = var_2f4 & 0xffffff00
    char var_3a8 = 1
    int64_t var_3a0_1 = 0
    int64_t var_398_1 = 0
    char var_388_1 = 0
    int64_t var_380
    __builtin_memset(&var_380, 0, 0x88)
    int32_t var_2f8_1 = 0x20702
    sub_140596b00(arg1, sub_140dbdce0(&var_3a8, &var_3d8, 1, 0))
    sub_140597700(&var_3a8)
    sub_140596d80(&var_198)
    
    if (var_1a0 != 0)
        var_1a0[1].d -= 1
        
        if (var_1a0[1].d == 1)
            (**var_1a0)(var_1a0)
            int32_t temp11_1 = *(var_1a0 + 0xc)
            *(var_1a0 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*var_1a0 + 8))(var_1a0, 1)
    
    sub_140d94d20(&var_2e0)
    
    if (var_3b0 != 0)
        int32_t temp10_1 = *(var_3b0 + 0xc)
        *(var_3b0 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*var_3b0 + 8))(var_3b0, 1)
    
    int32_t i_2 = i_4
    
    if (i_2 != 0)
        int64_t* rdi_4 = var_3c8 + 8
        int32_t i_1
        
        do
            int64_t* rcx_18 = *rdi_4
            
            if (rcx_18 != 0)
                int32_t temp16_1 = *(rcx_18 + 0xc)
                *(rcx_18 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*rcx_18 + 8))(rcx_18, 1)
            
            rdi_4 = &rdi_4[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    void* rcx_19 = var_3c8
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    sub_140596d80(&var_38)
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp18_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*(*var_40 + 8))(var_40, 1)
    
    sub_140d94d20(&var_180)
    
    if (var_3e0 != 0)
        var_3e0[1].d -= 1
        
        if (var_3e0[1].d == 1)
            (**var_3e0)(var_3e0)
            int32_t temp19_1 = *(var_3e0 + 0xc)
            *(var_3e0 + 0xc) -= 1
            
            if (temp19_1 == 1)
                int64_t r8_5 = *var_3e0
                (*(r8_5 + 8))(var_3e0, 1, r8_5)
__security_check_cookie(rax_1 ^ &var_408)
return arg1
