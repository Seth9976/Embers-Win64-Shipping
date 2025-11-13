// 函数: ?ProcessModInMiniPDB@PDBCopy@@AEAAHPEAUMod@@0@Z
// 地址: 0x140ea7db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_578
int64_t rax_1 = __security_cookie ^ &var_578
int64_t* rsi = arg1[0x76]
void* rdi = arg1[0x75]

if (rsi != 0)
    rsi[1].d += 1
    
    if (rsi != 0)
        rsi[1].d += 1
        
        if (rsi != 0)
            rsi[1].d -= 1
            
            if (rsi[1].d == 1)
                (**rsi)(rsi)
                int32_t temp1_1 = *(rsi + 0xc)
                *(rsi + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rsi + 8))(rsi, 1)

if (*(arg1[0x75] + 0x94) != 0)
    sub_1405d9400()
    int64_t var_508 = data_143cd6fd8
    void* rcx_3 = data_143cd6fe0
    void* var_500_1 = rcx_3
    
    if (rcx_3 != 0)
        *(rcx_3 + 8) += 1
    
    int32_t var_4f8_1 = data_143cd6fe8
    void var_4b0
    int64_t* rax_7 = (*(*arg1 + 8))(arg1, &var_4b0)
    int64_t var_528 = *rax_7
    void* rcx_6 = rax_7[1]
    void* var_520_1 = rcx_6
    
    if (rcx_6 != 0)
        *(rcx_6 + 8) += 1
    
    int64_t* rbx_1 = arg1[0x74]
    void* rcx_7 = nullptr
    
    if (rbx_1 != 0)
        int32_t rax_8 = rbx_1[1].d
        
        if (rax_8 != 0)
            rbx_1[1].d = rax_8 + 1
            rax_8.b = 1
        
        if (rax_8.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rcx_7 = arg1[0x73]
    
    sub_140ea2410(rcx_7, &var_528, &var_508)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* var_4a8
    
    if (var_4a8 != 0)
        var_4a8[1].d -= 1
        
        if (var_4a8[1].d == 1)
            (**var_4a8)(var_4a8)
            int32_t temp8_1 = *(var_4a8 + 0xc)
            *(var_4a8 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*var_4a8 + 8))(var_4a8, 1)

void var_490
int64_t* rax_13 = sub_14068d9d0(&var_490)
sub_14065da90(&rax_13[0x34], rdi + 0x98)
rax_13[0x37].b = *(rdi + 0xb0)
sub_140692f90(&rax_13[0x38], rdi + 0xb8)
void var_4c8
int64_t r8_1 = *sub_140e1ad30(&var_4c8, *arg3, ".Heading")
int64_t var_4c0 = r8_1
int64_t var_4b8 = r8_1
int64_t rax_16 = (*(*arg2 + 0x88))(arg2, data_143e243e0)

if (rax_16 == 0)
    rax_16 = sub_140e13900()

rax_13[0x3a] = rax_16
void*** rax_17 = j_sub_140a82f30(0x7a8)
void*** rdi_1 = rax_17

if (rax_17 == 0)
    rdi_1 = nullptr
else
    rax_17[1].d = 1
    *(rax_17 + 0xc) = 1
    *rdi_1 = &data_142d8b060
    
    if (rdi_1 != -0x10)
        sub_140f66da0(&rdi_1[2])

void* var_540 = &rdi_1[2]
sub_14065fa30(&var_540, &rdi_1[2])
int64_t var_558 = 0x798
void var_548
void* var_530 = &var_548
void* var_4a0
void** rax_18 = sub_140697520(&var_540, &var_4a0, rax_13, sub_140e23ed0(&rdi_1[2], "STextBlock"))
int64_t* rbx_4 = rax_18[1]
void* var_518 = *rax_18
int64_t* var_510 = rbx_4

if (rbx_4 != 0)
    rbx_4[1].d += 1

int128_t var_4f0
__builtin_memcpy(&var_4f0, "\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x01", 
    0x11)
int64_t var_4d8 = 0
__builtin_memcpy(&arg1[0x5d], 
    "\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x01", 0x11)
int32_t var_4d0 = 0
sub_1407473e0(&arg1[0x60], &var_4d8)
sub_140745b20(&var_4d8)
sub_140de1b90(&arg1[0x58], &var_518)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp7_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* var_498

if (var_498 != 0)
    var_498[1].d -= 1
    
    if (var_498[1].d == 1)
        (**var_498)(var_498)
        int32_t temp10_1 = *(var_498 + 0xc)
        *(var_498 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*var_498 + 8))(var_498, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp12_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*rdi_1)[1](rdi_1, 1)

int64_t result = sub_1406913d0(&var_490)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        result = (**rsi)(rsi)
        int32_t temp13_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp13_1 == 1)
            result = (*(*rsi + 8))(rsi, 1)

__security_check_cookie(rax_1 ^ &var_578)
return result
