// 函数: sub_141ba2e90
// 地址: 0x141ba2e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int64_t* rbx = *(arg2 + 0x48)

if (rbx != 0)
    rbx[1].d += 1

int64_t rdi

if (*(arg2 + 0x38) == *arg4 || *(arg2 + 0x5c) != 0)
    rdi.b = 1
else
    rdi.b = 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

char var_1c8
int32_t var_114

if (rdi.b == 0)
    sub_141b7b0e0(arg1, 0)
    int32_t var_114_3 = var_114 & 0xffffff00
    var_1c8 = 0
    int64_t var_1c0_2 = 0
    int64_t var_1b8_2 = 0
    char var_1a8_2 = 0
    int64_t var_1a0_2
    __builtin_memset(&var_1a0_2, 0, 0x88)
    int32_t var_118_2 = 0x20702
    sub_1405979f0(arg1, &var_1c8)
    sub_140597700(&var_1c8)
    int64_t* rbx_3 = arg4[2]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
else
    int32_t var_114_1 = var_114 & 0xffffff00
    int64_t var_1c0 = 0
    int64_t var_1b8 = 0
    char var_1a8 = 0
    int64_t var_1a0
    __builtin_memset(&var_1a0, 0, 0x88)
    var_1c8 = 0
    int32_t var_118 = 0x20702
    void var_108
    sub_140e51550(&var_108, &var_1c8)
    sub_140597700(&var_1c8)
    int32_t var_114_2 = var_114_1 & 0xffffff00
    var_1c8 = 1
    int64_t var_1c0_1 = 0
    int64_t var_1b8_1 = 0
    char var_1a8_1 = 0
    int64_t var_1a0_1
    __builtin_memset(&var_1a0_1, 0, 0x88)
    int32_t var_118_1 = 0x20702
    sub_1405979f0(&var_108, &var_1c8)
    sub_140597700(&var_1c8)
    int64_t* rdi_1 = arg4[2]
    int64_t r12_1 = *arg4
    int64_t r13_1 = arg4[1]
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    if (arg3 != 0)
        int64_t var_1f8
        sub_141bab3c0(arg3, &var_1f8)
        int64_t* var_1f0
        
        if (var_1f8 == 0)
        label_141ba30ab:
            
            if (var_1f0 != 0)
                var_1f0[1].d -= 1
                
                if (var_1f0[1].d == 1)
                    (**var_1f0)(var_1f0)
                    int32_t temp9_1 = *(var_1f0 + 0xc)
                    *(var_1f0 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*var_1f0 + 8))(var_1f0, 1)
        else
            int64_t var_1e8 = r12_1
            int64_t var_1e0_1 = r13_1
            int64_t* var_1d8_1 = rdi_1
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            var_1f8.o = var_1f8.o
            
            if (var_1f0 != 0)
                var_1f0[1].d += 1
            
            sub_140e54f20(&var_108, sub_140e0dfe0(&var_108, &var_1f8, &var_1e8, zx.o(0)))
            
            if (var_1f0 != 0)
                var_1f0[1].d -= 1
                
                if (var_1f0[1].d == 1)
                    (**var_1f0)(var_1f0)
                    int32_t temp11_1 = *(var_1f0 + 0xc)
                    *(var_1f0 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*var_1f0 + 8))(var_1f0, 1)
                
                goto label_141ba30ab
    
    sub_140596b00(arg1, &var_108)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    sub_140597700(&var_108)
    int64_t* rbx_2 = arg4[2]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp8_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp8_1 == 1)
                int64_t r8_2 = *rbx_2
                (*(r8_2 + 8))(rbx_2, 1, r8_2)
__security_check_cookie(rax_1 ^ &var_218)
return arg1
